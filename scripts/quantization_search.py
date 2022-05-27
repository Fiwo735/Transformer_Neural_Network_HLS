import argparse
import re

from time import time
from typing import Dict, List, Tuple, Optional
from collections import deque

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
    self._line_num = line_num
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

  def check_and_update_accuracy(self, accuracy: float) -> int:
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
    return f'{self._line_num}: {self._name} ({self._accuracy * 100}%)'


class TypeParameter(LineParameter):
  def __init__(self, line_num: int, name: str, total_width: str, int_width: str):
    super(TypeParameter, self).__init__(line_num=line_num, name=name)
    self._total_width = int(total_width)
    self._int_width = int(int_width)

  def get_total_width(self) -> int:
    return self._total_width

  def get_int_width(self) -> int:
    return self._int_width

  def get_width(self) -> Tuple[int, int]:
    return (self._total_width, self._int_width)

  def inc_total_width(self, val: int = 1):
    self._total_width += val

  def dec_total_width(self, val: int = 1):
    self._total_width -= val

  def inc_int_width(self, val: int = 1):
    self._int_width += val

  def dec_int_width(self, val: int = 1):
    self._int_width -= val

  def __str__(self):
    return super(TypeParameter, self).__str__() + f' <{self.get_total_width()},{self.get_int_width()}>'
  

class TableSizeParameter(LineParameter):
  def __init__(self, line_num: int, name: str, table_size: str):
    super(TableSizeParameter, self).__init__(line_num=line_num, name=name)
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


class TargetIWidthParameter(LineParameter):
  def __init__(self, line_num: int, name: str, target_iwidth: str):
    super(TargetIWidthParameter, self).__init__(line_num=line_num, name=name)
    self._target_iwidth = int(target_iwidth)

  def get_target_iwidth(self) -> int:
    return self._target_iwidth

  def inc_target_iwidth(self, val: int = 1):
    self._target_iwidth += val

  def dec_target_iwidth(self, val: int = 1):
    self._target_iwidth -= val

  def __str__(self):
    return super(TargetIWidthParameter, self).__str__() + f' target = {self.get_target_iwidth()}'


def scan_file(path: str) -> deque:
  all_parameters = deque()

  with open(path, 'r') as f:
    for index, line in enumerate(f):

      type_result = re.search(r'^typedef ap_fixed<([\d]+),([\d]+)> (.*);', line)
      if type_result is not None:
        type_parameter = TypeParameter(
          line_num=index,
          name=type_result.group(3),
          total_width=type_result.group(1),
          int_width=type_result.group(2)
        )

        # print(type_parameter)
        all_parameters.append(type_parameter)

      table_size_result = re.search(r'^#define (.*)_TABLE (.*)$', line)
      if table_size_result is not None:
        table_size_parameter = TableSizeParameter(
          line_num=index,
          name=table_size_result.group(1),
          table_size=table_size_result.group(2),
        )

        # print(table_size_parameter)
        all_parameters.append(table_size_parameter)

      target_iwidth_result = re.search(r'^#define (.*)_IWIDTH (.*)$', line)
      if target_iwidth_result is not None:
        target_iwidth_parameter = TargetIWidthParameter(
          line_num=index,
          name=target_iwidth_result.group(1),
          target_iwidth=target_iwidth_result.group(2),
        )

        # print(target_iwidth_parameter)
        all_parameters.append(target_iwidth_parameter)

  return all_parameters

def quantization_search():
  defines_path = 'hls/firmware/defines.h'
  all_parameters = scan_file(path=defines_path)
  best_parameters = deque()

  per_parameter_decrement_budget = 0.01

  current_accuracy = ...

  while all_parameters:
    current_parameter = all_parameters.popleft()
    current_parameter.set_accuracy(current_accuracy)

    # First try to decrease as long as the accuracy doesn't decrement too much
    try_decrease = True
    accuracy_before_decrease = current_accuracy
    while try_decrease:
      ...

      current_accuracy = ...


      # Successful change
      if current_parameter.check_and_update_accuracy(current_accuracy) >= -1:
        pass

      # Too much total accuracy drop caused by this parameter
      elif accuracy_before_decrease - current_accuracy > per_parameter_decrement_budget:
        ... # revert change
        try_decrease = False

      # Failed change
      else:
        ... # revert change
        try_decrease = False

    # Then try to increase, just in case there is a significant accuracy difference
    try_increase = True
    while try_increase:
      ...

    # Best configuration found, so save it
    best_parameters.append(current_parameter)




def parse():
  parser = argparse.ArgumentParser(description='Perform post-training quantization search')

  parser.add_argument('--quiet', action='store_true')

  return parser.parse_args()

if __name__ == '__main__':
  quantization_search()