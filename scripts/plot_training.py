from matplotlib.pyplot import subplots
from argparse import ArgumentParser
from numpy import linspace
from tabulate import tabulate
from re import findall


def main(path: str, data):

  # Not pretty, but efficient Python 1:1 mapping implementation
  bits_index_mapping = {64: 0,  32: 1,  16: 2 }
  index_bits_mapping = {0:  64, 1:  32, 2:  16}

  fig, axes = subplots(nrows=3, ncols=2, figsize=(12, 12))

  x_range = range(1, max([len(values[0]) for values in data.values()])+1)

  for name, values in data.items():
    assert len(values[0]) == len(values[1]), 'Length of accuracies and losses must be equal'

    marker = 's' if name[0:5] == 'Fixed' else 'o'
    total_bits = sum([int(el) for el in findall(r'[\d]+', name)])
    figure_index = bits_index_mapping.get(total_bits)

    if figure_index is None:
      raise KeyError(f'Found {total_bits}-bit number in "{name}", which does not belong to {list(bits_index_mapping.keys())}!') 

    axes[figure_index][0].plot(range(1, len(values[0])+1), values[0], label=name, linestyle='--', marker=marker, markersize=7)
    if values[1][0] is not None and name != 'Fixed-point (16 int, 16 frac)': # Avoid unstable results
      axes[figure_index][1].plot(range(1, len(values[1])+1), [el * 1000 for el in values[1]], label=name, linestyle=':', marker=marker, markersize=7)

    # axes[figure_index][0].axhline(y=20, color='r', linestyle='--', label='Baseline accuracy')

  for figure_index in bits_index_mapping.values():

    # Hand-tuned y-axis range
    axes[figure_index][0].set_yticks(ticks=linspace(25, 85, 7, endpoint=True))
    axes[figure_index][1].set_yticks(ticks=linspace(2.50, 15.5, 7, endpoint=True))
    axes[figure_index][1].set_ylim([2.50, 15.5])

    axes[figure_index][0].set_xticks(ticks=x_range)
    axes[figure_index][1].set_xticks(ticks=x_range)

    axes[figure_index][0].legend()#loc='lower right')
    axes[figure_index][1].legend()#loc='upper right')

    axes[figure_index][0].grid(True)
    axes[figure_index][1].grid(True)

    axes[figure_index][0].set(xlabel='Epoch', ylabel='Accuracy (%)')
    axes[figure_index][1].set(xlabel='Epoch', ylabel='Loss [x1000]')

    axes[figure_index][0].set_title(f'Test accuracy ({index_bits_mapping[figure_index]}-bits total width)')
    axes[figure_index][1].set_title(f'Test loss ({index_bits_mapping[figure_index]}-bits total width)')

  fig.suptitle('Performance against epochs for floating-point and fixed-point models', fontsize=14)
  fig.tight_layout()
  fig.savefig(path, format='png', dpi=200)

  print(f'Saved figure to {path}')


def print_latex_table(data, tablefmt: str):
  for name, values in data.items():
    col_acc = values[0]
    col_loss = values[1]
    headers = ['Epoch', 'Accuracy', 'Loss']

    tabulated = tabulate(
      [[index+1] + [a] + [l] for index, (a, l) in enumerate(zip(col_acc, col_loss))],
      headers=headers,
      tablefmt=tablefmt
    )

    print(name)
    print(tabulated, end='\n\n')


def parse():
  parser = ArgumentParser(description='Plot training statistics')

  parser.add_argument('--path', action='store', type=str, default=None)
  parser.add_argument('--quiet', action='store_true')
  parser.add_argument('--tablefmt', action='store', type=str, default='plain')

  return parser.parse_args()


if __name__ == '__main__':
  args = parse()

  assert args.path is not None, 'Path needs to be specified'

  data = {
    'Floating-point (1 sign, 11 exp, 52 frac)':
    (
      [
        60.24,
        69.21,
        74.23,
        74.12,
        76.20,
        76.79,
        77.07,
        77.17,
        77.23,
        77.91,
        77.80,
        77.92,
        78.13,
        77.75,
        77.11,
      ],
      [
        0.00531,
        0.00483,
        0.00482,
        0.00463,
        0.00458,
        0.00449,
        0.00435,
        0.00422,
        0.0043,
        0.0043,
        0.00423,
        0.00421,
        0.0043,
        0.00414,
        0.00408,
      ]
    ),
    'Floating-point (1 sign, 8 exp, 23 frac)':
    (
      [
        67.27,
        72.69,
        75.95,
        74.49,
        75.86,
        75.18,
        74.77,
        77.32,
        76.98,
        77.18,
        76.11,
        77.09,
        77.90,
        77.80,
        78.47,
        # 78.84,
        # 79.07,
        # 79.09,
        # 78.87,
        # 79.11,
      ],
      [
        0.00525,
        0.00504,
        0.00491,
        0.00457,
        0.00453,
        0.0045,
        0.00448,
        0.00443,
        0.00435,
        0.00432,
        0.00433,
        0.00428,
        0.00436,
        0.00419,
        0.0041,
        # 0.00398,
        # 0.00394,
        # 0.00388,
        # 0.00379,
        # 0.00384,
      ]
    ),
    'Floating-point (1 sign, 5 exp, 10 frac)': #float16
    (
      [
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
      ],
      [
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
        None,
      ]
    ),
    'Floating-point (1 sign, 8 exp, 7 frac)': #bfloat16
    (
      [
        61.56,
        63.11,
        63.64,
        65.73,
        66.23,
        66.39,
        66.72,
        60.61,
        58.25,
        62.52,
        68.84,
        69.49,
        69.81,
        67.83,
        71.53
      ],
      [
        0.00668,
        0.00616,
        0.00583,
        0.00565,
        0.00555,
        0.00555,
        0.00562,
        0.00568,
        0.00549,
        0.00528,
        0.0054,
        0.00549,
        0.00534,
        0.00528,
        0.00528,
      ]
    ),
    'Fixed-point (32 int, 32 frac)':
    (
      [
        41.37,
        33.97,
        42.86,
        43.42,
        44.78,
        44.58,
        41.36,
        40.78,
        52.49,
        55.82,
        58.81,
        56.72,
        62.91,
        64.31,
        65.09,
      ],
      [
        0.0108,
        0.0118,
        0.0098,
        0.0101,
        0.00982,
        0.00962,
        0.00922,
        0.00896,
        0.00705,
        0.00674,
        0.00657,
        0.00646,
        0.00617,
        0.00624,
        0.00612,
      ]
    ),
    'Fixed-point (24 int, 40 frac)':
    (
      [
        73.70,
        75.10,
        75.25,
        75.68,
        75.82,
        78.84,
        78.19,
        77.52,
        76.78,
        77.16,
        77.16,
        74.11,
        75.48,
        74.53,
        75.64,
      ],
      [
        0.00492,
        0.00464,
        0.00409,
        0.004,
        0.00393,
        0.00404,
        0.00404,
        0.00398,
        0.00398,
        0.00395,
        0.004,
        0.004,
        0.00394,
        0.00391,
        0.00395,
      ]
    ),
    'Fixed-point (16 int, 48 frac)':
    (
      [
        72.86,
        76.60,
        77.09,
        77.23,
        76.20,
        77.21,
        77.53,
        76.78,
        76.17,
        77.38,
        72.78,
        74.68,
        75.52,
        67.65,
        76.37,
      ],
      [
        0.00494,
        0.00462,
        0.00446,
        0.00442,
        0.00444,
        0.00421,
        0.00461,
        0.00455,
        0.00422,
        0.00419,
        0.00401,
        0.00445,
        0.00423,
        0.00411,
        0.00425,
      ]
    ),
    'Fixed-point (24 int, 8 frac)':
    (
      [
        23.41,
        23.04,
        24.58,
        25.72,
        25.82,
        24.89,
        25.61,
        25.15,
        26.56,
        27.31,
        28.08,
        25.86,
        26.84,
        27.31,
        28.71,
      ],
      [
        0.0128,
        0.0128,
        0.0126,
        0.0125,
        0.0124,
        0.0125,
        0.0125,
        0.0124,
        0.0122,
        0.0122,
        0.0122,
        0.0123,
        0.0123,
        0.0122,
        0.0122,
      ]
    ),
    'Fixed-point (16 int, 16 frac)':
    (
      [
        19.85,
        20.23,
        19.41,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.15,
        20.09,
        20.09,
        20.15,
        20.15,
        20.15,
        20.15,
      ],
      [
        132,
        121,
        52,
        0.0126,
        6.38,
        49.3,
        0.149,
        141,
        61,
        0.499,
        9.87,
        0.207,
        0.989,
        0.291,
        1,
      ]
    ),
    'Fixed-point (10 int, 6 frac)':
    (
      [
        18.88,
        18.11,
        19.58,
        19.58,
        19.58,
        19.56,
        19.56,
        19.56,
        19.56,
        19.86,
        19.86,
        19.86,
        19.86,
        19.63,
        19.63,
      ],
      [
        0.0139,
        0.0139,
        0.0135,
        0.0135,
        0.0135,
        0.0137,
        0.0137,
        0.0137,
        0.0137,
        0.0138,
        0.0138,
        0.0138,
        0.0138,
        0.0137,
        0.0137,
      ]
    ),
    'Fixed-point (12 int, 4 frac)':
    (
      [
        18.75,
        18.20,
        19.66,
        16.99,
        18.27,
        15.43,
        17.29,
        22.67,
        24.30,
        20.76,
        20.81,
        24.53,
        20.83,
        21.67,
        21.20,
      ],
      [
        0.0146,
        0.0149,
        0.0142,
        0.0143,
        0.0142,
        0.0131,
        0.0132,
        0.0125,
        0.0126,
        0.0131,
        0.0131,
        0.0127,
        0.0132,
        0.0131,
        0.013,
      ]
    ),
  }

  main(path=args.path, data=data)

  if not args.quiet:
    print_latex_table(data, tablefmt=args.tablefmt)