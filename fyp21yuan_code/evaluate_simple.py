import torch
import numpy as np
from tqdm import tqdm
from pathlib import Path
import nn.utils as utils
import nn.model.data as data

def print_like_HLS(arr):
  print(' '.join('\n' * (n % 129 == 128) + str(el) for n, el in enumerate(arr.transpose().flatten().ravel().tolist())))


def direct_evaluate_sample(sample, model, samples_range=None):
  if samples_range is None:
    samples_range = (0, 1)

  example_sample = sample
  example_data = example_sample.input_seq[samples_range[0]:samples_range[1],:] # get [N particles, all 16 dims]
  print('Input data formatted for HLS:')
  print_like_HLS(example_data)
  print('Input data:')
  print(example_data)
  print()

  example_data = np.expand_dims(example_data, axis=0) # expand batch dim
  print("Example data:")
  print(type(example_data))
  print(example_data.shape)
  print(example_data.dtype)
  print(len(example_data))
  print(example_data)

  example_tensor = torch.from_numpy(example_data)
  model = model.double()
  output = model(example_tensor.double())

  return torch.argmax(output).item() == example_sample.target


def direct_evaluate_model(dataset, model, samples_range=None, count=10):
  results = []
  for index, sample in enumerate(dataset):
  # for index, sample in tqdm(enumerate(dataset)):
    if index < count:
      results.append(direct_evaluate_sample(sample, model, samples_range))
    else:
      break
  return results


def direct_evaluate_metrics(dataset, model, samples_range=None, count=None):
  count = len(dataset) if count is None else count
  results = direct_evaluate_model(dataset, model, samples_range, count)

  accuracy = sum(el is True for el in results) / len(results)
  print("Accuracy: " + str(round(accuracy*100, 2)) + "%")


def main():
  # Get test dataset
  test_set = data.get_dataset(splits=['train-val', 'test'])['test']

  # Load model
  MODEL_DIR = Path("fyp21yuan_code/experiments/constituent_base/best.script.pth")
  model = torch.jit.load(MODEL_DIR, map_location='cpu')
  print(f'Number of parameters: {utils.count_parameters(model)}')
  model.eval()

  # Evaluate model on test dataset
  direct_evaluate_metrics(test_set, model, samples_range=(0, 1), count=1)


if __name__ == '__main__':
  torch.manual_seed(230)
  torch.set_printoptions(profile='full', sci_mode=False, threshold=2097152)
  main()
  torch.set_printoptions(profile=None, sci_mode=None, threshold=None)