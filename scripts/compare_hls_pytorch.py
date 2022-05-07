import os
import sys
import subprocess
import argparse
import re
import numpy as np

from os import fdopen, remove
from tempfile import mkstemp
from shutil import move, copymode
from time import time
from typing import Dict

def run_vivado_hls(hls_dir_path, build_tcl_path, quiet=True):
  hls_command = 'vivado_hls -f ' + build_tcl_path
  FNULL = open(os.devnull, 'w')
  stdout = FNULL if quiet else subprocess.PIPE
  print('Running Vivado HLS, this might take a while...')

  start_time = time()
  result = subprocess.run(hls_command, shell=True, cwd=hls_dir_path)
  # subprocess.call(hls_command, shell=True, stdout=stdout, stderr=subprocess.STDOUT, cwd=hls_dir_path)
  end_time = time()

  if result.returncode != 0:
    raise RuntimeError(f'{hls_command} returned {result.returncode}')

  print(f'Running Vivado HLS took {(end_time - start_time) / 3600:.3f} h')


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


def compare_results(hls_results, pytorch_results, quiet=True):
  total_MSE = 0.
  elements_count = 0
  correct_predictions = 0
  predictions_count = 0

  assert len(hls_results) == len(pytorch_results), f'{hls_results=}, {pytorch_results=}'

  if not quiet:
    print('Results:')
    print('HLS \t\t\t\t\t\t\t Pytorch')

  for hls_result, pytorch_result in zip(hls_results, pytorch_results):
    assert len(hls_result) == len(pytorch_result)
    if not quiet:
      print(hls_result, pytorch_result)

    for hls_val, pytorch_val in zip(hls_result, pytorch_result):
      # print(hls_val, pytorch_val)
      diff = hls_val - pytorch_val
      total_MSE += diff * diff
      elements_count += 1

    correct_predictions += (np.argmax(hls_result) == np.argmax(pytorch_result))
    predictions_count += 1

  return (total_MSE / float(elements_count), correct_predictions / predictions_count)


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


def parse():
  parser = argparse.ArgumentParser(description='Run Vivado HLS and compare againt Pytorch')

  parser.add_argument('--csim', action='store_true')
  parser.add_argument('--synth', action='store_true')
  parser.add_argument('--cosim', action='store_true')
  parser.add_argument('--reset', action='store_true')

  parser.add_argument('--pytorch', action='store_true')

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


if __name__ == '__main__':
  hls_dir_path = 'hls/'

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

  if args.pytorch:
    # pytorch_results = run_pytorch(script_path=pytorch_script_path, update_path=update_weights_script_path)
    run_pytorch(script_path=pytorch_script_path, update_path=update_weights_script_path)
    pytorch_results = get_pytorch_results(path='hls/tb_data/tb_output_predictions.dat')
  else:
    # pytorch_results = get_pytorch_results(path=pytorch_results_log_path)
    pytorch_results = get_pytorch_results(path='hls/tb_data/tb_output_predictions.dat')

  # set_hls_output_predictions(path=hls_output_predictions_path, results=pytorch_results)
  
  if run_hls:
    # Set relevant flags in build_prj.tcl
    set_build_options(path=build_tcl_path_full, options=vars(args))

    clean_file(path=hls_layers_log_path)
    run_vivado_hls(hls_dir_path=hls_dir_path, build_tcl_path=build_tcl_path, quiet=False)
    
    # Set all flags in build_prj.tcl to 0
    set_build_options(path=build_tcl_path_full, options=vars(args), disable_all=True)

  if args.csim:
    print('\nCSimulation:')

    csim_results = get_hls_results(path=csim_results_log_path)
    average_MSE, accuracy = compare_results(hls_results=csim_results, pytorch_results=pytorch_results, quiet=True)

    print(f'\nAverage MSE: {average_MSE:.5f}, accuracy: {accuracy*100:.2f}%')

  if args.cosim:
    print('\nRTL Co-simulation ')

    cosim_results = get_hls_results(path=rtl_cosim_results_log_path)
    pytorch_results = get_pytorch_results(path=pytorch_results_log_path)
    average_MSE, accuracy = compare_results(hls_results=cosim_results, pytorch_results=pytorch_results, quiet=True)

    print(f'\nAverage MSE: {average_MSE:.5f}, accuracy: {accuracy*100:.2f}%')

