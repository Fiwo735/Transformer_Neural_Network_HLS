import os
import sys
import subprocess
import argparse
import re
import pickle
import numpy as np
import matplotlib.pyplot as plt

from os import fdopen, remove
from tempfile import mkstemp
from shutil import move, copymode
from time import time
from datetime import datetime
from typing import Dict
from itertools import product
from colorama import Fore, Style

def run_vivado_hls(hls_dir_path, build_tcl_path, quiet=True):
  hls_command = 'vivado_hls -f ' + build_tcl_path

  if quiet:
    result = subprocess.run(hls_command, shell=True, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT, cwd=hls_dir_path)

  else:
    print('Running Vivado HLS, this might take a while...')

    start_time = time()
    result = subprocess.run(hls_command, shell=True, cwd=hls_dir_path)
    end_time = time()

    print(f'Running Vivado HLS took {(end_time - start_time) / 3600:.3f} h')

  if result.returncode != 0:
    raise RuntimeError(f'{hls_command} returned {result.returncode}')


def run_pytorch(script_path, update_path):
  # script_command = f'python3 {script_path} --only_predictions | tail -n 1'
  script_command = f'python3 {script_path} --generate_hls_tb --use_cpu --particles 1'

  start_time = time()
  # result = subprocess.run(script_command, shell=True, stdout=subprocess.PIPE)
  result = subprocess.run(script_command, shell=True)
  end_time = time()

  if result.returncode != 0:
    raise RuntimeError(f'{script_command} returned {result.returncode}')

  print(f'Running Pytorch took {end_time - start_time:.2f} s')
  
  # pytorch_results = [float(el) for el in result.stdout.decode('UTF-8').split(' ')]
  # For now, put results inside another list as in the future this might become list of results for different inputs
  # pytorch_results = [pytorch_results]

  update_command = f'python3 {update_path}'
  # subprocess.run(update_command, shell=True)
  subprocess.run(update_command, shell=True, stdout=subprocess.PIPE)
  if result.returncode != 0:
    raise RuntimeError(f'{update_command} returned {result.returncode}')

  # return pytorch_results



def get_hls_results(path):
  
  results = []

  with open(path, 'r') as f:
    for line in f:
      results.append([float(el) for el in line.split(' ') if el != '\n'])

  return results


def get_pytorch_results(path):
  results = []

  with open(path, 'r') as f:
    for line in f:
      results.append([float(el) for el in line.split(' ') if el != '\n'])

  return results


def compare_results(hls_results, pytorch_results, labels, quiet=True):
  total_MSE = 0.
  elements_count = 0
  correct_predictions_pytorch = 0
  correct_predictions_hls = 0
  predictions_count = 0

  assert len(hls_results) == len(pytorch_results), f'{hls_results=}, {pytorch_results=}'

  if not quiet:
    print('Results:')
    print('HLS \t\t\t\t\t\t\t Pytorch')

  for hls_result, pytorch_result, label in zip(hls_results, pytorch_results, labels):
    assert len(hls_result) == len(pytorch_result)
    if not quiet:
      print(hls_result, pytorch_result)

    for hls_val, pytorch_val in zip(hls_result, pytorch_result):
      # print(hls_val, pytorch_val)
      diff = hls_val - pytorch_val
      total_MSE += diff * diff
      elements_count += 1

    label = int(label[0])
    correct_predictions_pytorch += int(np.argmax(pytorch_result) == label)
    correct_predictions_hls += int(np.argmax(hls_result) == label)
    # if int(np.argmax(hls_result)) != int(np.argmax(pytorch_result)) != label:
    #   print(f'hls: {int(np.argmax(hls_result))}, pytorch: {int(np.argmax(pytorch_result))}, label: {label}')
    predictions_count += 1

  return (total_MSE / float(elements_count), correct_predictions_pytorch / predictions_count, correct_predictions_hls / predictions_count)


def clean_file(path):
  open(path, 'w').close() 


def set_build_options(
  path: str,
  options: Dict[str, bool],
  disable_all: bool = False,
) -> None:

  modified_lines = 0
  lines_to_modify = len(options)

  fh, abs_path = mkstemp()

  # Check if lines look like '<name> <0/1>' and change them accordingly to options
  with fdopen(fh,'w') as new_file:
    with open(path) as old_file:
      for line in old_file:
        if modified_lines < lines_to_modify:
          for key, value in options.items():
            if key in line.split(' '):
              value = '0' if disable_all else str(int(value))
              line = re.sub(fr'(.*)({key})( *) (\d)', fr'\1\2\3 {value}', line)
              modified_lines += 1

          new_file.write(line)

        else:
          new_file.write(line)
              
  # Copy the file permissions from the old file to the new file
  copymode(path, abs_path)

  # Remove original file
  remove(path)

  # Move new file
  move(abs_path, path)

def modify_defines(
  path: str,
  options: Dict,
  line_type: str,
) -> None:

  def pretty_print(line):
    line_to_print = line.replace('\n', '')
    print(f'{Fore.GREEN}L{key}:{Style.RESET_ALL} {line_to_print}', end=f' {Fore.RED}|{Style.RESET_ALL} ')

  fh, abs_path = mkstemp()

  # Check if lines look like '<name> <0/1>' and change them accordingly to options
  with fdopen(fh,'w') as new_file:
    with open(path) as old_file:
      
      for index, line in enumerate(old_file):

        for key, value in options.items():
          if index == key - 1:
            if line_type == 'ap_fixed':
              assert isinstance(value, tuple)
              # @ hack as otherwise raw string treats value as part of the capture group, i.e. \1 becomes \125
              line = re.sub(fr'([^\d]*)(\d+)(,)(\d+)(.*)', fr'\1@{value[0]}\3@{value[1]}\5', line).replace('@', '')
              pretty_print(line)

            elif line_type == '#define':
              assert isinstance(value, int)
              line = re.sub(fr'(.*) (\d+)', fr'\1 {value}', line)
              pretty_print(line)

        new_file.write(line)

  print()

  # Copy the file permissions from the old file to the new file
  copymode(path, abs_path)

  # Remove original file
  remove(path)

  # Move new file
  move(abs_path, path)


def parse():
  parser = argparse.ArgumentParser(description='Run Vivado HLS and compare againt Pytorch')

  parser.add_argument('--csim', action='store_true')
  parser.add_argument('--synth', action='store_true')
  parser.add_argument('--cosim', action='store_true')
  parser.add_argument('--reset', action='store_true')

  parser.add_argument('--pytorch', action='store_true')

  parser.add_argument('--load', action='store', type=str, default=None)
  parser.add_argument('--quiet', action='store_true')

  args = parser.parse_args()
  run_hls = args.csim or args.synth or args.cosim or args.reset

  return args, run_hls


def set_hls_output_predictions(path, results):
  # print(f'{results=}')
  results_to_write = ''
  for result in results:
    results_to_write += ' '.join([str(el) for el in result]) + '\n'
  # print(f'{results_to_write=}')
  with open(path, 'w') as f:
    f.write(results_to_write)


def custom_plot(data, pickle_path):
  fig = plt.figure()
  plt.scatter([next(iter(p.values()))[0] for p, _, _ in data], [accuracy * 100. for _, _, accuracy in data], marker='D', label='Test accuracy')
  plt.axhline(y=20, color='r', linestyle='--', label='Baseline accuracy')
  plt.xticks(ticks=[next(iter(p.values()))[0] for p, _, _ in data], labels=[f'<{next(iter(p.values()))[0]},{next(iter(p.values()))[1]}>' for p, _, _ in data], rotation=90)
  plt.title('Accuracy against fixed-point precision')
  plt.xlabel('ap_fixed')
  plt.ylabel('Accuracy (%)')
  plt.gca().set_ylim([15, 85])
  fig.tight_layout()
  plt.legend()
  plt.grid()

  image_path = pickle_path.replace('pickle', 'png')
  plt.savefig(image_path, format='png', dpi=200)
  print(f'Plotted results saved to {image_path}')


if __name__ == '__main__':
  hls_dir_path = 'hls/'

  defines_path = hls_dir_path + 'firmware/defines.h'
  labels_path = hls_dir_path + 'tb_data/tb_labels.dat'
  hls_output_predictions_path = hls_dir_path + 'tb_data/tb_output_predictions.dat'
  csim_results_log_path = hls_dir_path + 'tb_data/csim_results.log'
  rtl_cosim_results_log_path = hls_dir_path + 'tb_data/rtl_cosim_results.log'
  hls_layers_log_path = hls_dir_path + 'tb_data/csim_layers.log'

  build_tcl_path = 'build_prj.tcl'
  build_tcl_path_full = hls_dir_path + build_tcl_path
  pytorch_script_path = 'pytorch/train_evaluate.py'
  update_weights_script_path = 'scripts/extract_weights_biases.py'
  pytorch_results_log_path = 'logs/pytorch_results.log'

  args, run_hls = parse()
  opt_fmt = lambda d: ' '.join([f'L{k}: ap_fixed<{v[0]},{v[1]}>' if isinstance(v, tuple) else (f'L{k}: EMBEDDED_DIM = {v}' if i == 0 else f'L{k}: SCALE_SHIFT = {v}') for i, (k, v) in enumerate(d.items())])

  if args.load is not None:
    with open(args.load, 'rb') as f:
      loaded_results = pickle.load(f)

    if not args.quiet:
      print(f'Loaded pickled results from {args.load}')
      print(f'Collected results:\n')

      for general_type_option, reduced_type_option, accuracy in loaded_results:
        print('Options:')
        print(f'{opt_fmt(general_type_option)}\n{opt_fmt(reduced_type_option)}')
        print(f'Accuracy: {accuracy * 100:.2f}%\n')

    custom_plot(data=loaded_results, pickle_path=args.load)

    if not args.quiet:
      print('All results displayed, quitting...')

    quit()

  if args.pytorch:
    # pytorch_results = run_pytorch(script_path=pytorch_script_path, update_path=update_weights_script_path)
    run_pytorch(script_path=pytorch_script_path, update_path=update_weights_script_path)
    pytorch_results = get_pytorch_results(path='hls/tb_data/tb_output_predictions.dat')
  else:
    # pytorch_results = get_pytorch_results(path=pytorch_results_log_path)
    pytorch_results = get_pytorch_results(path='hls/tb_data/tb_output_predictions.dat')

  # set_hls_output_predictions(path=hls_output_predictions_path, results=pytorch_results)
  
  general_type_options = [
    # {
    #   54: (30, 15), 55: (30, 15), 56: (30, 15),
    # },
    # {
    #   54: (29, 15), 55: (29, 15), 56: (29, 15),
    # },
    # {
    #   54: (28, 15), 55: (28, 15), 56: (28, 15),
    # },
    {
      54: (27, 15), 55: (27, 15), 56: (27, 15),
    },
    # {
    #   54: (26, 15), 55: (26, 15), 56: (26, 15),
    # },
    # {
    #   54: (25, 15), 55: (25, 15), 56: (25, 15),
    # },
    # {
    #   54: (24, 15), 55: (24, 15), 56: (24, 15),
    # },
    # {
    #   54: (23, 15), 55: (23, 15), 56: (23, 15),
    # },
    # {
    #   54: (22, 15), 55: (22, 15), 56: (22, 15),
    # },
    # {
    #   54: (21, 15), 55: (21, 15), 56: (21, 15),
    # },
    # {
    #   54: (20, 15), 55: (20, 15), 56: (20, 15),
    # },
    # {
    #   54: (19, 15), 55: (19, 15), 56: (19, 15),
    # },
    # {
    #   54: (18, 15), 55: (18, 15), 56: (18, 15),
    # },
    # {
    #   54: (17, 15), 55: (17, 15), 56: (17, 15),
    # },
    # {
    #   54: (16, 15), 55: (16, 15), 56: (16, 15),
    # },
  ]

  reduced_type_options = [
    {
      58: (17, 7), 59: (17, 7), 60: (17, 7),
    },
  ]

  embedded_dims_options = [
    # {
    #   19: 4, 20: 1,
    # },
    {
      19: 16, 20: 2,
    },
    # {
    #   19: 64, 20: 4,
    # },
    # {
    #   19: 256, 20: 8,
    # },
  ]

  all_hls_accuracy = []

  

  for general_type_option, reduced_type_option, embedded_dims in product(general_type_options, reduced_type_options, embedded_dims_options):
    # print(f'\n{opt_fmt(embedded_dims)}\n{opt_fmt(general_type_option)}\n{opt_fmt(reduced_type_option)}')

    if run_hls:
      # Set relevant flags in build_prj.tcl
      set_build_options(path=build_tcl_path_full, options=vars(args))

      # modify_defines(path=defines_path, options=general_type_option, line_type='ap_fixed')
      # modify_defines(path=defines_path, options=reduced_type_option, line_type='ap_fixed')
      # modify_defines(path=defines_path, options=embedded_dims, line_type='#define')

      clean_file(path=hls_layers_log_path)
      run_vivado_hls(hls_dir_path=hls_dir_path, build_tcl_path=build_tcl_path, quiet=args.quiet)
      
      # Set all flags in build_prj.tcl to 0
      set_build_options(path=build_tcl_path_full, options=vars(args), disable_all=True)
    
    if args.csim:
      print('CSimulation:', end=' ')

      csim_results = get_hls_results(path=csim_results_log_path)
      labels = get_hls_results(path=labels_path)
      average_MSE, accuracy_pytorch, accuracy_hls = compare_results(hls_results=csim_results, pytorch_results=pytorch_results, labels=labels, quiet=args.quiet)

      # print(f'\tAverage MSE: {average_MSE:.5f}, accuracy (PyTorch): {accuracy_pytorch*100:.2f}% , accuracy (HLS): {accuracy_hls*100:.2f}%')
      print(f'accuracy (HLS): {accuracy_hls*100:.2f}%')
      all_hls_accuracy.append((general_type_option, reduced_type_option, accuracy_hls))

    if args.cosim:
      print('\nRTL Co-simulation ')

      cosim_results = get_hls_results(path=rtl_cosim_results_log_path)
      pytorch_results = get_pytorch_results(path=pytorch_results_log_path)
      labels = get_hls_results(path=labels_path)
      average_MSE, accuracy_pytorch, accuracy_hls = compare_results(hls_results=cosim_results, pytorch_results=pytorch_results, labels=labels, quiet=args.quiet)

      print(f'\tAverage MSE: {average_MSE:.5f}, accuracy (PyTorch): {accuracy_pytorch*100:.2f}% , accuracy (HLS): {accuracy_hls*100:.2f}%')

  date = datetime.now().strftime('%d-%m_%H-%M')
  with open(f'logs/type_exploration_{date}.pickle', 'wb') as f:
    pickle.dump(all_hls_accuracy, f)
