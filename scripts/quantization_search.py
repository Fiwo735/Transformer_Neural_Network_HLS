import argparse
import re
import signal
import contextlib
import pickle

from time import time
from typing import Dict, List, Tuple, Optional
from datetime import datetime
from collections import deque
from compare_hls_pytorch import compare_results, set_build_options, modify_defines, run_vivado_hls, get_pytorch_results, get_hls_results, lines_in_file

def isPower2(x: int) -> bool:
  return (x & (x-1) == 0) and x != 0

class LineParameter:
  def __init__(
    self,
    line_num: int,
    name: str,
    negative_accuracy_tolerance: float = 0.001,
    positive_accuracy_tolerance: float = 0.002,
  ):
    assert negative_accuracy_tolerance > 0. and positive_accuracy_tolerance > 0.,\
      'Accuracy tolerances must be positive'
    self._line_num = line_num + 1
    self._name = name
    self._accuracy = 0.
    self._negative_accuracy_tolerance = negative_accuracy_tolerance
    self._positive_accuracy_tolerance = positive_accuracy_tolerance

  def get_line_num(self) -> int:
    return self._line_num

  def get_name(self) -> str:
    return self._name

  def get_accuracy(self) -> float:
    return self._accuracy

  def set_accuracy(self, accuracy: float):
    self._accuracy = accuracy

  def check_and_update(self, accuracy: float) -> int:
    if accuracy < self.get_accuracy() - self._negative_accuracy_tolerance:
      return -2
    elif accuracy < self.get_accuracy():
      self.set_accuracy(accuracy)
      return -1
    elif accuracy < self.get_accuracy() + self._positive_accuracy_tolerance:
      self.set_accuracy(accuracy)
      return 1
    else:
      self.set_accuracy(accuracy)
      return 2

  def __str__(self) -> str:
    return f'L{self._line_num}: {self._name} ({self._accuracy * 100}%)'


class TypeParameter(LineParameter):
  def __init__(
    self,
    line_num: int,
    name: str,
    total_width: str,
    int_width: str,
    negative_accuracy_tolerance: float = 0.001,
    positive_accuracy_tolerance: float = 0.002,
  ):
    super(TypeParameter, self).__init__(
      line_num=line_num,
      name=name,
      negative_accuracy_tolerance=negative_accuracy_tolerance,
      positive_accuracy_tolerance=positive_accuracy_tolerance
    )
    self._total_width = int(total_width)
    self._int_width = int(int_width)

  def get_total_width(self) -> int:
    return self._total_width

  def get_int_width(self) -> int:
    return self._int_width

  def get_widths(self) -> Tuple[int, int]:
    return (self._total_width, self._int_width)

  def set_widths(self, widths: Tuple[int, int]):
    self._total_width, self._int_width = widths

  def inc_frac_width(self, val: int = 1):
    self._total_width += val

  def dec_frac_width(self, val: int = 1):
    if self._total_width > self._int_width + 1:
      self._total_width -= val
    else:
      raise ValueError('Fractional bit width cannot be 0')

  def inc_int_width(self, val: int = 1):
    self._int_width += val
    self._total_width += val

  def dec_int_width(self, val: int = 1):
    if self._int_width > 1:
      self._int_width -= val
      self._total_width -= val
    else:
      raise ValueError('Integer bit width cannot be 0')

  def inc_width(self, part: str, val: int = 1):
    if part == 'int':
      self.inc_frac_width(val)
    else:
      self.inc_int_width(val)

  def dec_width(self, part: str, val: int = 1):
    if part == 'int':
      self.dec_frac_width(val)
    else:
      self.dec_int_width(val)

  def __str__(self):
    return super(TypeParameter, self).__str__() + f' <{self.get_total_width()},{self.get_int_width()}>'

  def to_dict(self) -> Dict:
    return {self.get_line_num(): self.get_widths()}

  def get_line_type(self) -> str:
    return 'ap_fixed'
  

class TableSizeParameter(LineParameter):
  def __init__(
    self,
    line_num: int,
    name: str,
    table_size: str,
    negative_accuracy_tolerance: float = 0.001,
    positive_accuracy_tolerance: float = 0.002,
  ):
    super(TableSizeParameter, self).__init__(
      line_num=line_num,
      name=name,
      negative_accuracy_tolerance=negative_accuracy_tolerance,
      positive_accuracy_tolerance=positive_accuracy_tolerance,
    )
    self._table_size = int(table_size)
    assert(isPower2(self._table_size)), f'Found table size {self._table_size} is not a power of 2'

  def get_table_size(self) -> int:
    return self._table_size

  def inc_table_size(self):
    self._table_size *= 2

  def dec_table_size(self):
    self._table_size /= 2

  def __str__(self):
    return super(TableSizeParameter, self).__str__() + f' [{self.get_table_size()}]'

  def to_dict(self) -> Dict:
    return {self.get_line_num(): self.get_table_size()}

  def get_line_type(self) -> str:
    return '#define'


class TargetIWidthParameter(LineParameter):
  def __init__(
    self,
    line_num: int,
    name: str,
    target_iwidth: str,
    negative_accuracy_tolerance: float = 0.001,
    positive_accuracy_tolerance: float = 0.002,
  ):
    super(TargetIWidthParameter, self).__init__(
      line_num=line_num,
      name=name,
      negative_accuracy_tolerance=negative_accuracy_tolerance,
      positive_accuracy_tolerance=positive_accuracy_tolerance,
    )
    self._target_iwidth = int(target_iwidth)

  def get_target_iwidth(self) -> int:
    return self._target_iwidth

  def inc_target_iwidth(self, val: int = 1):
    self._target_iwidth += val

  def dec_target_iwidth(self, val: int = 1):
    self._target_iwidth -= val

  def __str__(self):
    return super(TargetIWidthParameter, self).__str__() + f' target = {self.get_target_iwidth()}'

  def to_dict(self) -> Dict:
    return {self.get_line_num(): self.get_target_iwidth()}

  def get_line_type(self) -> str:
    return '#define'


def scan_file(path: str, negative_accuracy_tolerance: float, positive_accuracy_tolerance: float) -> deque:
  all_parameters = deque()

  with open(path, 'r') as f:
    for index, line in enumerate(f):

      type_result = re.search(r'^typedef ap_fixed<([\d]+),([\d]+)> (.*);', line)
      if type_result is not None:
        type_parameter = TypeParameter(
          line_num=index,
          name=type_result.group(3),
          total_width=type_result.group(1),
          int_width=type_result.group(2),
          negative_accuracy_tolerance=negative_accuracy_tolerance,
          positive_accuracy_tolerance=positive_accuracy_tolerance,
        )

        # print(type_parameter)
        all_parameters.append(type_parameter)

      table_size_result = re.search(r'^#define (.*)_TABLE (.*)$', line)
      if table_size_result is not None:
        table_size_parameter = TableSizeParameter(
          line_num=index,
          name=table_size_result.group(1),
          table_size=table_size_result.group(2),
          negative_accuracy_tolerance=negative_accuracy_tolerance,
          positive_accuracy_tolerance=positive_accuracy_tolerance,
        )

        # print(table_size_parameter)
        all_parameters.append(table_size_parameter)

      target_iwidth_result = re.search(r'^#define (.*)_IWIDTH (.*)$', line)
      if target_iwidth_result is not None:
        target_iwidth_parameter = TargetIWidthParameter(
          line_num=index,
          name=target_iwidth_result.group(1),
          target_iwidth=target_iwidth_result.group(2),
          negative_accuracy_tolerance=negative_accuracy_tolerance,
          positive_accuracy_tolerance=positive_accuracy_tolerance,
        )

        # print(target_iwidth_parameter)
        all_parameters.append(target_iwidth_parameter)

  return all_parameters


# write about: transformer quadratic complexity, possibly not doing log softmax at the end but just max(),
# batch norm fusing to weights, background post-training quantization (and pre-)
class MetricsHandler:
  def __init__(
    self,
    hls_dir_path: str,
    build_tcl_path: str,
    hls_results_path: str,
    pytorch_results_path: str,
    labels_path: str,
    hls_logs_path: str,
    quiet: bool = False
  ):
    self._hls_dir_path = hls_dir_path
    self._build_tcl_path = build_tcl_path
    self._hls_results_path = hls_results_path
    self._pytorch_results_path = pytorch_results_path
    self._labels_path = labels_path
    self._hls_logs_path = hls_logs_path
    self._quiet = quiet

  def get_metrics(self) -> Tuple[float, float, float, float]:
    with open(self._hls_logs_path, 'a') as f:
      with contextlib.redirect_stdout(f):
        run_vivado_hls(hls_dir_path=self._hls_dir_path, build_tcl_path=self._build_tcl_path, log_path=self._hls_logs_path, quiet=False)

        results = compare_results(
          hls_results=get_hls_results(self._hls_results_path),
          pytorch_results=get_pytorch_results(self._pytorch_results_path),
          labels=get_hls_results(path=self._labels_path),
          quiet=False
        )

    return results

  def __enter__(self):
    set_build_options(path=self._hls_dir_path+self._build_tcl_path, options={'csim': True})
    return self

  def __exit__(self, exc_type, exc_value, traceback):
    set_build_options(path=self._hls_dir_path+self._build_tcl_path, options={'csim': False})

def format_accuracy(a: float) -> str:
  return f'{a*100:.2f}'


def get_total_bits(parameters: deque) -> int:
  total = 0

  for parameter in parameters:
    if parameter.get_line_type() == 'ap_fixed':
      total += parameter.get_total_width()

  return total


def quantization_search(hls_dir_path: str, build_tcl_path: str, quiet: bool = False):
  print(f'Starting post-training quantization search\n')

  # Accuracy percent point difference acceptable for increase/decrease in a parameter
  # If negative is smaller than positive, than the search will prioritise hardware resources over accuracy
  # Remember that the accuracy resolution is limited by the number of input samples (which has to be low to avoid VERY long run time)
  negative_accuracy_tolerance = 0.011 # 1.1%
  positive_accuracy_tolerance = 0.021 # 2.1%

  # Maximum decrement caused by changes to any parameter
  # Avoids a rare situation where accuracy keeps decreasing very slowly each step
  per_parameter_decrement_budget = 0.021 # 2.1%

  defines_path = hls_dir_path + 'firmware/defines.h'
  pytorch_results_path = hls_dir_path + 'tb_data/tb_output_predictions.dat'
  all_parameters = scan_file(
    path=defines_path,
    negative_accuracy_tolerance=negative_accuracy_tolerance,
    positive_accuracy_tolerance=positive_accuracy_tolerance,
  )
  best_parameters = deque()
  previous_widths = None

  search_path = []

  # Estimated time to run betwen each parameter checked 1 and 4 times
  min_time = len(all_parameters) * (lines_in_file(pytorch_results_path) / 4 * 0.01) * 2 # param number x average run time x int and frac run
  print(f'The search is expected to take between {min_time * 1:.3f} h and {min_time * 4:.3f} h')

  with MetricsHandler(
    hls_dir_path=hls_dir_path,
    build_tcl_path=build_tcl_path,
    hls_results_path=hls_dir_path+'tb_data/csim_results.log',
    pytorch_results_path=pytorch_results_path,
    labels_path=hls_dir_path+'tb_data/tb_labels.dat',
    hls_logs_path='logs/vivado_hls_run.log',
    quiet=quiet,
  ) as metrics_handler:

    # Get metrics with starting configuration
    average_L1, average_L2, accuracy_pytorch, accuracy_hls = metrics_handler.get_metrics()
    starting_accuracy = accuracy_hls
    optimal_accuracy = starting_accuracy
    print(f'Starting accuracy: {format_accuracy(starting_accuracy)}')
    starting_total_bits = get_total_bits(all_parameters)
    print(f'Starting number of fixed precision bits: {starting_total_bits}')

    start_time = time()

    while all_parameters:
      try:
        current_parameter = all_parameters.popleft()
        current_parameter.set_accuracy(optimal_accuracy)
        starting_accuracy_per_parameter = optimal_accuracy
        print('-'*100)
        print(f'Current parameter = {current_parameter}')

        # For now only handle ap_fixed typedefs
        if current_parameter.get_line_type() != 'ap_fixed':
          continue

        # Start with the configuration of the previous type
        if previous_widths is not None:
          current_parameter.set_widths(previous_widths)

        for part in ['int', 'frac']:

          # Try to increase, just in case there is a significant accuracy difference
          try_increase = True
          significant_improvement_found = False
          print(f'Starting to increase {part} parameter = {current_parameter}')
          while try_increase:

            try:
              current_parameter.inc_width(part)

              modify_defines(
                path=defines_path,
                options=current_parameter.to_dict(),
                line_type=current_parameter.get_line_type(),
                quiet=quiet,
              )
              _, _, _, accuracy_hls = metrics_handler.get_metrics()
              print(f'Found accuracy: {format_accuracy(accuracy_hls)}')

              if current_parameter.check_and_update(accuracy_hls) >= 2:
                print(f'Significant improvement found when increasing parameter')
                significant_improvement_found = True
                optimal_accuracy = accuracy_hls
                current_parameter.set_accuracy(optimal_accuracy)
              else:
                try_increase = False
                current_parameter.dec_width(part)

                modify_defines(
                  path=defines_path,
                  options=current_parameter.to_dict(),
                  line_type=current_parameter.get_line_type(),
                  quiet=True,
                )
            except ValueError:
              print('Cannot remove any more bits')
              try_increase = False

          if significant_improvement_found:
            print(f'Significant improvement was found when increasing, so skipping decreasing')
          else:
            print(f'No significant improvement was found when increasing, so decreasing now')
            # Try to decrease as long as the accuracy doesn't decrement too much
            try_decrease = True
            accuracy_before_decrease = optimal_accuracy
            print(f'Starting to decrease {part} parameter = {current_parameter}')
            while try_decrease:

              try:
                current_parameter.dec_width(part)
                
                modify_defines(
                  path=defines_path,
                  options=current_parameter.to_dict(),
                  line_type=current_parameter.get_line_type(),
                  quiet=quiet,
                )
                _, _, _, accuracy_hls = metrics_handler.get_metrics()
                print(f'Found accuracy: {format_accuracy(accuracy_hls)}')

                # Too much total accuracy drop caused by this parameter
                if accuracy_before_decrease - accuracy_hls > per_parameter_decrement_budget:
                  try_decrease = False

                  current_parameter.inc_width(part)

                  modify_defines(
                    path=defines_path,
                    options=current_parameter.to_dict(),
                    line_type=current_parameter.get_line_type(),
                    quiet=True,
                  )

                # Successful change
                elif current_parameter.check_and_update(accuracy_hls) >= -1:
                  optimal_accuracy = accuracy_hls
                  current_parameter.set_accuracy(optimal_accuracy)

                # Failed change
                else:
                  try_decrease = False

                  current_parameter.inc_width(part)

                  modify_defines(
                    path=defines_path,
                    options=current_parameter.to_dict(),
                    line_type=current_parameter.get_line_type(),
                    quiet=True,
                  )

              except ValueError:
                print('Cannot remove any more bits')
                try_decrease = False

      except KeyboardInterrupt:
        print('Skipping run since KeyboardInterrupt was raised')
      except:
        print('Skipping run since exception was raised')

      
      # Best configuration found, so save it
      print(f'Best configuration for this parameter found = {current_parameter} (accuracy: {format_accuracy(starting_accuracy_per_parameter)} -> {format_accuracy(optimal_accuracy)})')
      best_parameters.append(current_parameter)
      search_path.append((current_parameter, optimal_accuracy))
      previous_widths = current_parameter.get_widths()

  print(f'Analysis finished in {time() - start_time:.3f} h')

  # Save results
  date = datetime.now().strftime('%d-%m_%H-%M')
  pickle_path = f'logs/quantization_search_{date}.pickle'
  with open(pickle_path, 'wb') as f:
    pickle.dump((search_path, best_parameters), f)

  print(f'All parameters analysed, accuracy: {format_accuracy(starting_accuracy)} -> {format_accuracy(optimal_accuracy)}')
  
  final_total_bits = get_total_bits(best_parameters)
  print(f'Total fixed precision bits went from {starting_total_bits} to {final_total_bits}')

  print(f'Best parameters configuration:')
  for parameter in best_parameters:
    print(parameter)


def parse():
  parser = argparse.ArgumentParser(description='Perform post-training quantization search')

  parser.add_argument('--quiet', action='store_true')

  return parser.parse_args()


if __name__ == '__main__':
  args = parse()

  hls_dir_path = 'hls/'
  build_tcl_path = 'build_prj.tcl'

  quantization_search(hls_dir_path=hls_dir_path, build_tcl_path=build_tcl_path, quiet=args.quiet)