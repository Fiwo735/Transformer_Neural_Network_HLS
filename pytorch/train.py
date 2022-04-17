import os
import sys
import contextlib
import numpy as np
import torch
import torch.nn as nn
import torch.nn.functional as F

import gc

from typing import Tuple, Optional
from torch.utils.data import TensorDataset, DataLoader
from sklearn.datasets import fetch_openml
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder, StandardScaler
from tqdm import tqdm
from time import time

from model.net import ConstituentNet

DEVICE = torch.device('cuda' if torch.cuda.is_available() else 'cpu')


def set_seed(seed=0):
  np.random.seed(seed)
  torch.manual_seed(seed)


def fetch_dataset(multiple_of: int = 128):
  X, y = fetch_openml('hls4ml_lhc_jets_hlf', cache=True, return_X_y=True)

  length = len(X)
  assert length == len(y)

  # truncate to multiples of given number, as otherwise issue with ConstituentNet
  # truncated_length = (-1 ^ (multiple_of - 1)) & length
  # X, y = X[:truncated_length], y[:truncated_length]
  # print(f'{length=}, {truncated_length=}, {(length % multiple_of)=}, {(truncated_length % multiple_of)=}')

  print(X.shape, y.shape)
  print(X[:5])
  print(y[:5])

  le = LabelEncoder()
  y = le.fit_transform(y)
  y = torch.from_numpy(y)
  # y = F.one_hot(y, num_classes=5)
  X_train_val, X_test, y_train_val, y_test = train_test_split(X, y, test_size=0.2, random_state=42)
  print(y[:5])

  scaler = StandardScaler()
  X_train_val = scaler.fit_transform(X_train_val)
  X_test = scaler.transform(X_test)

  np.save('X_train_val.npy', X_train_val)
  np.save('X_test.npy', X_test)
  np.save('y_train_val.npy', y_train_val)
  np.save('y_test.npy', y_test)
  np.save('classes.npy', le.classes_)


def load_dataset() -> Tuple[DataLoader, DataLoader, DataLoader]:
  X_train_val = np.load('X_train_val.npy')
  X_test = np.ascontiguousarray(np.load('X_test.npy'))
  y_train_val = np.load('y_train_val.npy')
  y_test = np.load('y_test.npy', allow_pickle=True)
  classes = np.load('classes.npy', allow_pickle=True)

  tensor_X_train_val = torch.Tensor(X_train_val)
  tensor_X_test = torch.Tensor(X_test)
  tensor_y_train_val = torch.Tensor(y_train_val)
  tensor_y_test = torch.Tensor(y_test)

  tensor_y_train_val = tensor_y_train_val.type(torch.LongTensor)
  tensor_y_test = tensor_y_test.type(torch.LongTensor)

  batch_size = 128

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

  return train_loader, test_loader, tiny_loader


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
) -> None:

  if is_train:
    model.train()
  else:
    model.eval()
    num_epochs = 1

  correct_predictions = 0
  loader_length = len(loader)
  batch_size = loader.batch_size

  for epoch in range(num_epochs):
    with tqdm(loader, unit='batch') as tepoch:
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
          predicted = torch.squeeze(torch.argmax(predicted, dim=1, keepdim=True), dim=1)
          correct_predictions += (predicted == labels).sum().item()

        if idx % 32 == 0:
          prefix = 'Training' if is_train else 'Testing'
          tepoch.set_description(f'{prefix} epoch {epoch+1}/{num_epochs}, {get_GPU_memory_usage()}')
          tepoch.set_postfix(loss=loss.detach().item() / batch_size)

        if idx == loader_length - 2: # issue with ConsitutentNet mean/var summation with last batch
          break

  return correct_predictions / loader_length / batch_size


def save_model(model: nn.Module, script_path: str, state_path: str) -> None:
  model.eval()
  model_script = torch.jit.script(model)
  model_script.save(script_path)

  torch.save(
    {'state_dict': model.state_dict()},
    state_path,
  )


def evaluate(
  test_loader: DataLoader,
  model: nn.Module,
  criterion: nn.Module,
  filepath: Optional[str] = None,
) -> float:

  with torch.no_grad():
    if filepath is None:
      accuracy = accuracy = train_test_loop(
        loader=test_loader,
        model=model,
        criterion=criterion,
        is_train=False,
        num_particles=1,
      )
    
    else:
      with open(filepath, 'w') as f:
        with contextlib.redirect_stdout(f):
          # Write input data in HLS format
          f.write(' '.join([str(el) for el in next(iter(test_loader))[0][0].tolist()]) + '\n')

          accuracy = accuracy = train_test_loop(
            loader=test_loader,
            model=model,
            criterion=criterion,
            is_train=False,
            num_particles=1,
          )

  return accuracy


def time_evaluate(
  test_loader: DataLoader,
  model: nn.Module,
  criterion: nn.Module,
  num_epochs: int = 5
) -> float:

  # Evaluate once to warm-up
  print(f'Timing evaluation, warming up...')
  _ = evaluate(test_loader=test_loader, model=model, criterion=criterion)
  torch.cuda.synchronize() # Wait for warm-up to finish

  times = []
  print(f'Evaluating {num_epochs} times')
  for _ in range(num_epochs):
    start_time = time()
    _ = evaluate(test_loader=test_loader, model=model, criterion=criterion)
    times.append(time() - start_time)

  return sum(times) / num_epochs


def main(
  do_train: bool = True,
  script_path: Optional[str] = None,
  state_path: Optional[str] = None,
  is_debug: bool = False,
  is_timing: bool = False,
) -> None:
 
  # fetch_dataset()
  train_loader, test_loader, tiny_loader = load_dataset()

  criterion = torch.nn.NLLLoss()
  num_epochs = 1
  num_transformers = 1

  if do_train:
    # Instantiate model
    model = ConstituentNet(
      in_dim=16,
      embbed_dim=128,
      num_heads=2,
      num_classes=5,
      num_transformers=num_transformers,
      dropout=0.0,
      is_debug=is_debug,
    ).to(DEVICE)

    optimizer = torch.optim.Adam(model.parameters(), lr=1e-3)

    # Train model
    start_time = time()
    _ = train_test_loop(
      loader=train_loader,
      model=model,
      criterion=criterion,
      optimizer=optimizer,
      is_train=True,
      num_particles=1,
      num_epochs=num_epochs,
    )
    print(f'Training took {time() - start_time:.2f} s')

    save_model(model=model, script_path=script_path, state_path=state_path)
  
  else:
    model = torch.jit.load(script_path, map_location='cuda')

  print(f'Model parameters: {sum(p.numel() for p in model.parameters() if p.requires_grad)}')
  
  # Test model
  filepath = 'layers_output.txt' if is_debug else None
  accuracy = evaluate(test_loader=tiny_loader, model=model, criterion=criterion, filepath=filepath)
  print(f'Test accuracy: {accuracy*100:.2f}%')

  # Time evaluation of model
  if is_timing:
    assert not is_debug, 'Timing debug model is not accurate as printing greatly slows evaluation'
    average_time = time_evaluate(test_loader=test_loader, model=model, criterion=criterion, num_epochs=5)
    print(f'Average evaluation time: {average_time:.2f} s')


if __name__ == "__main__":
  print(f'{DEVICE=}')
  set_seed()

  main(
    do_train=False,
    script_path='best.script.pth',
    state_path='best.pth.tar',
    is_debug=True,
    is_timing=False
  )