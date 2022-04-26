import os
import sys
import contextlib
import numpy as np
import torch
import torch.nn as nn
import torch.nn.functional as F
import argparse

from tracemalloc import start
from pathlib import Path
from typing import Tuple, Optional, List
from torch.utils.data import TensorDataset, DataLoader
from sklearn.datasets import fetch_openml
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder, StandardScaler
from tqdm import tqdm
from time import time

from model.net import ConstituentNet

DEVICE = torch.device('cuda' if torch.cuda.is_available() else 'cpu')

DIR_NAME = os.path.dirname(__file__)
DATA_DIR = os.path.join(DIR_NAME, 'data/1/')
X_TRAIN_VAL_FILENAME = os.path.join(DATA_DIR, 'X_train_val.npy')
Y_TRAIN_VAL_FILENAME = os.path.join(DATA_DIR, 'y_train_val.npy')
X_TEST_FILENAME = os.path.join(DATA_DIR, 'X_test.npy')
Y_TEST_FILENAME = os.path.join(DATA_DIR, 'y_test.npy')
CLASSES_FILENAME = os.path.join(DATA_DIR, 'classes.npy')

def set_seed(seed=0):
  np.random.seed(seed)
  torch.manual_seed(seed)


def fetch_dataset():
  X, y = fetch_openml('hls4ml_lhc_jets_hlf', cache=True, return_X_y=True)

  length = len(X)
  assert length == len(y)

  le = LabelEncoder()
  y = le.fit_transform(y)
  y = torch.from_numpy(y)
  X_train_val, X_test, y_train_val, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

  scaler = StandardScaler()
  X_train_val = scaler.fit_transform(X_train_val)
  X_test = scaler.transform(X_test)

  np.save(X_TRAIN_VAL_FILENAME, X_train_val)
  np.save(X_TEST_FILENAME, X_test)
  np.save(Y_TRAIN_VAL_FILENAME, y_train_val)
  np.save(Y_TEST_FILENAME, y_test)
  np.save(CLASSES_FILENAME, le.classes_)

  print('Fetched 1-particle dataset')


def load_dataset(
  batch_size: int = 128
) -> Tuple[DataLoader, DataLoader, DataLoader, List[str]]:

  X_train_val = np.load(X_TRAIN_VAL_FILENAME)
  X_test = np.ascontiguousarray(np.load(X_TEST_FILENAME))
  y_train_val = np.load(Y_TRAIN_VAL_FILENAME)
  y_test = np.load(Y_TEST_FILENAME, allow_pickle=True)
  classes = np.load(CLASSES_FILENAME, allow_pickle=True)

  tensor_X_train_val = torch.Tensor(X_train_val)
  tensor_X_test = torch.Tensor(X_test)
  tensor_y_train_val = torch.Tensor(y_train_val)
  tensor_y_test = torch.Tensor(y_test)

  tensor_y_train_val = tensor_y_train_val.type(torch.LongTensor)
  tensor_y_test = tensor_y_test.type(torch.LongTensor)

  train_loader = DataLoader(
    TensorDataset(tensor_X_train_val, tensor_y_train_val),
    batch_size=batch_size
  )

  test_loader = DataLoader(
    TensorDataset(tensor_X_test, tensor_y_test),
    batch_size=batch_size
  )

  # Dataloader for printing layer-by-layer evaluation of (1, 1, 16)
  tiny_loader = DataLoader(
    TensorDataset(tensor_X_test[:1], tensor_y_test[:1]),
    batch_size=1
  )

  return train_loader, test_loader, tiny_loader, classes


def get_GPU_memory_usage(is_brief: bool = True) -> str:
  t = torch.cuda.get_device_properties(0).total_memory / (1024 ** 3)
  r = torch.cuda.memory_reserved(0) / (1024 ** 2)
  a = torch.cuda.memory_allocated(0)  / (1024 ** 2)
  full_info = f'Memory: total={t:.2f} GiB, reserved={r:.2f} MiB, allocated={a:.2f} MiB, free={r-a:.2f} Mib'
  brief_info = f'Memory (Mib): res={r:.2f}, all={a:.2f}, free={r-a:.2f}'
  return brief_info if is_brief else full_info


def train_test_loop(
  loader: DataLoader,
  model: nn.Module,
  criterion: nn.Module,
  optimizer: Optional[nn.Module] = None,
  is_train: bool = True,
  num_particles: int = 1,
  num_epochs: int = 5,
  print_predictions: bool = False,
) -> Tuple[Optional[float], float]:

  is_eval = not is_train

  if is_train:
    model.train()
  else:
    model.eval()
    num_epochs = 1

  loader_length = len(loader)
  batch_size = loader.batch_size

  all_labels = []
  all_predicted = []
  accuracy = None

  start_time = time()
  for epoch in range(num_epochs):
    with tqdm(loader, unit='batch', disable=is_eval) as tepoch:
      prefix = 'Training' if is_train else 'Testing'
      tepoch.set_description(f'{prefix} epoch {epoch+1}/{num_epochs}')
      for idx, (data, labels) in enumerate(tepoch):

        if num_particles == 1:
          data = torch.unsqueeze(data, dim=1)

        labels = labels.to(DEVICE)
        data = data.to(DEVICE)

        predicted = model(data)
        loss = criterion(predicted, labels)

        if is_train:
          optimizer.zero_grad()
          loss.backward()
          optimizer.step()
        else:
          all_labels.append(labels.detach().cpu())
          all_predicted.append(predicted.detach().cpu())

        if idx % 128 == 0:
          tepoch.set_postfix(loss=loss.item() / batch_size)

        if idx == loader_length - 2: # issue with ConsitutentNet mean/var summation with last batch
          break

  end_time = time()

  if is_eval:
    all_labels = torch.stack(all_labels) if len(all_labels) == 1 else torch.stack(all_labels[:-1])
    all_predicted = torch.stack(all_predicted) if len(all_predicted) == 1 else torch.stack(all_predicted[:-1])
    if print_predictions:
      all_predicted_list = all_predicted.squeeze().tolist()
      all_predicted_str = ' '.join([str(el) for el in all_predicted_list])
      print(f'Predictions:\n{all_predicted_str}')

    all_predicted = torch.argmax(all_predicted, dim=2)
    correct_predictions = (all_predicted == all_labels).sum()
    accuracy = correct_predictions / torch.numel(all_predicted)


  return (accuracy, end_time - start_time)


def save_model(model: nn.Module, script_path: str, state_path: str) -> None:
  model.eval()
  model_script = torch.jit.script(model)
  model_script.save(script_path)

  torch.save(
    {'state_dict': model.state_dict()},
    state_path,
  )

  print(f'Model saved successfully ({script_path}, {state_path})')


def evaluate(
  test_loader: DataLoader,
  model: nn.Module,
  criterion: nn.Module,
  filepath: Optional[str] = None,
  print_predictions: bool = False,
) -> Tuple[float, float]:

  with torch.inference_mode():
    if filepath is None:
      accuracy, total_time = train_test_loop(
        loader=test_loader,
        model=model,
        criterion=criterion,
        is_train=False,
        num_particles=1,
        print_predictions=print_predictions,
      )
    
    else:
      with open(filepath, 'w') as f:
        with contextlib.redirect_stdout(f):
          # Write input data in HLS format
          f.write(' '.join([str(el) for el in next(iter(test_loader))[0][0].tolist()]) + '\n')

          accuracy, total_time = train_test_loop(
            loader=test_loader,
            model=model,
            criterion=criterion,
            is_train=False,
            num_particles=1,
            print_predictions=print_predictions,
          )

  return (accuracy, total_time)


def time_evaluate(
  test_loader: DataLoader,
  model: nn.Module,
  criterion: nn.Module,
  num_epochs: int = 5
) -> Tuple[float, float]:

  # Evaluate once to warm-up
  print(f'Timing evaluation, warming up...')
  for _ in range(5):
    _, _ = evaluate(test_loader=test_loader, model=model, criterion=criterion)
  
   # If using GPU, wait for warm-up to finish
  if torch.cuda.is_available():
    torch.cuda.synchronize()

  times = []
  print(f'Evaluating {num_epochs} times...')
  for _ in range(num_epochs):
    accuracy, total_time = evaluate(test_loader=test_loader, model=model, criterion=criterion)
    times.append(total_time)

  return (accuracy, sum(times) / num_epochs)


def main(
  do_train: bool = True,
  script_path: Optional[str] = None,
  state_path: Optional[str] = None,
  debug_path: Optional[str] = None,
  is_debug: bool = False,
  is_timing: bool = False,
  only_predictions: bool = False,
) -> None:
 
  batch_size = 128
  criterion = torch.nn.NLLLoss()
  num_epochs = 3
  num_transformers = 1
  embbed_dim = 16
  num_heads = 2
  dropout = 0.0

  train_loader, test_loader, tiny_loader, classes = load_dataset(batch_size=batch_size)

  if do_train:
    # Instantiate model
    model = ConstituentNet(
      in_dim=next(iter(test_loader))[0].shape[1], # 16
      embbed_dim=embbed_dim,
      num_heads=num_heads,
      num_classes=len(classes), # 5
      num_transformers=num_transformers,
      dropout=dropout,
      is_debug=is_debug,
    ).to(DEVICE)

    optimizer = torch.optim.Adam(model.parameters(), lr=1e-3)

    # Train model
    _, total_time = train_test_loop(
      loader=train_loader,
      model=model,
      criterion=criterion,
      optimizer=optimizer,
      is_train=True,
      num_particles=1,
      num_epochs=num_epochs,
    )
    print(f'Training took {total_time:.2f} s')

    save_model(model=model, script_path=script_path, state_path=state_path)
  
  else:
    model = torch.jit.load(script_path, map_location=DEVICE)

  print(f'Model parameters: {sum(p.numel() for p in model.parameters() if p.requires_grad)}')
  
  # Test model
  if is_debug:
    _, _ = evaluate(test_loader=tiny_loader, model=model, criterion=criterion, filepath=debug_path, print_predictions=True)
    print(f'Debug output saved to {debug_path}')
    if is_timing:
      print(f'WARNING: Skipping timing as debug affects evaluation speed')
  elif is_timing:
    accuracy, average_time = time_evaluate(test_loader=test_loader, model=model, criterion=criterion, num_epochs=50)
    average_time_batch = average_time / (len(test_loader) - 2)
    print(f'Test accuracy: {accuracy*100:.2f}% in {average_time:.2f} s')
    print(f'{average_time_batch * 1000:.2f} ms per batch')
    print(f'{average_time_batch / batch_size * 1000000:.2f} us per sample')
  elif not only_predictions:
    accuracy, total_time = evaluate(test_loader=test_loader, model=model, criterion=criterion)
    print(f'Test accuracy: {accuracy*100:.2f}% in {total_time:.2f} s')
  else:
    _, _ = evaluate(test_loader=tiny_loader, model=model, criterion=criterion, print_predictions=True)


def parse():
  parser = argparse.ArgumentParser(description='Train and/or evaluate Pytorch model')

  parser.add_argument('--train', action='store_true')
  parser.add_argument('--debug', action='store_true')
  parser.add_argument('--timing', action='store_true')
  parser.add_argument('--rng_seed', action='store_true')
  parser.add_argument('--use_cpu', action='store_true')
  parser.add_argument('--only_predictions', action='store_true')

  return parser.parse_args()


if __name__ == "__main__":

  torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

  args = parse()

  if args.use_cpu:
    DEVICE = torch.device('cpu')
  print(f'{DEVICE=}')

  if not args.rng_seed:
    set_seed(123)

  # Fetch data if needed
  Path(DATA_DIR).mkdir(parents=True, exist_ok=True)
  if not Path(X_TRAIN_VAL_FILENAME).is_file():
    fetch_dataset()

  main(
    do_train=args.train,
    script_path=os.path.join(DIR_NAME, 'best.script.pth'),
    state_path=os.path.join(DIR_NAME, 'best.pth.tar'),
    debug_path=os.path.join(DIR_NAME, 'layers_output.txt'),
    is_debug=args.debug,
    is_timing=args.timing,
    only_predictions=args.only_predictions,
  )