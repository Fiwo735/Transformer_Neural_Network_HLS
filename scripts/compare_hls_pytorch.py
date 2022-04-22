import os
import sys
import subprocess
# from itertools import izip

def run_vivado_hls(hls_dir_path, build_tcl_path, quiet=True):
  hls_command = 'vivado_hls -f ' + build_tcl_path
  FNULL = open(os.devnull, 'w')
  stdout = FNULL if quiet else subprocess.PIPE
  print('Running Vivado HLS CSimulation, this might take a few minutes')
  subprocess.call(hls_command, shell=True, cwd=hls_dir_path)
  # subprocess.call(hls_command, shell=True, stdout=stdout, stderr=subprocess.STDOUT, cwd=hls_dir_path)


def get_csim_results(path):
  
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

  assert len(hls_results) == len(pytorch_results)

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

  return total_MSE / float(elements_count)


def clean_file(path):
  open(path, 'w').close() 


def main(run_hls=False):
  hls_dir_path = 'hls/'
  build_tcl_path = 'build_prj.tcl'
  hls_results_log_path = 'tb_data/csim_results.log'
  pytorch_results_log_path = 'logs/pytorch_results.log'
  hls_layers_log_path = 'tb_data/csim_layers.log'

  if run_hls:
    clean_file(path=hls_dir_path+hls_layers_log_path)
    run_vivado_hls(hls_dir_path=hls_dir_path, build_tcl_path=build_tcl_path, quiet=False)

  hls_results = get_csim_results(path=hls_dir_path+hls_results_log_path)
  pytorch_results = get_pytorch_results(path=pytorch_results_log_path)
  total_MSE = compare_results(hls_results=hls_results, pytorch_results=pytorch_results, quiet=False)

  print('\nMSE:', total_MSE)


if __name__ == '__main__':
  run_hls = False
  if len(sys.argv) == 2:
    run_hls = True if sys.argv[1] == '--run_hls' else False

  main(run_hls=run_hls)