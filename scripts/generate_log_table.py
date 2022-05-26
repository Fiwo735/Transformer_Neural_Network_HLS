import argparse
import numpy as np
from math import log

def parse():
  parser = argparse.ArgumentParser(description='Run Vivado HLS and compare againt Pytorch')

  parser.add_argument('--table_size', action='store', type=int)
  parser.add_argument('--max_value', action='store', type=int)
  parser.add_argument('--path', action='store', type=str)
  parser.add_argument('--var_name', action='store', type=str, default='log_table')
  parser.add_argument('--var_type', action='store', type=str, default='top_log_softmax_log_t')
  parser.add_argument('--quiet', action='store_true')

  return parser.parse_args()


def isPower2(x) -> bool:
  return (x & (x-1) == 0) and x != 0


def generateTable(size: int, func, max_val: int, quiet: bool = True) -> np.array:
  assert isPower2(size), 'Table size is not a power of 2'

  table = np.empty(shape=(size))
  for i, x in enumerate(np.linspace(0, max_val, size, endpoint=False)):
    try:
      table[i] = func(x)
    except:
      table[i] = func(x + 0.001)

    if not quiet:
      print(f'{i=}, {x=}')
  return table


if __name__ == '__main__':
  args = parse()

  table = generateTable(size=args.table_size, func=log, max_val=args.max_value, quiet=args.quiet)

  name = args.var_name
  guard = name.upper() + '_H_'
  var_type = args.var_type
  
  table_values = ', '.join(['\n' * (n % 7 == 6) + f'{el:.16f}' for n, el in enumerate(table)])
  
  content = []
  content.append(f'#ifndef {guard}')
  content.append(f'#define {guard}')
  content.append('')
  # content.append('#ifndef __SYNTHESIS__')
  # content.append(f'{var_type} {name}[{table_size}];')
  # content.append('#else')
  content.append(f'{var_type} {name}[{args.table_size}] = {{{table_values}}};')
  # content.append('')
  # content.append('#endif')
  content.append('')
  content.append('#endif')

  content = '\n'.join(content)
  
  with open(args.path, 'w') as f:
    f.write(content)

  print(f'Log table (size: {args.table_size}, max value: {args.max_value}) was saved as {args.path}')