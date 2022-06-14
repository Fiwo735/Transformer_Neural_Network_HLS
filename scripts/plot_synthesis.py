from matplotlib.pyplot import subplots, axes
from argparse import ArgumentParser
from numpy import linspace
from tabulate import tabulate
from typing import Dict, List, Tuple
from adjustText import adjust_text

import matplotlib.pyplot as plt


def main(path: str, data: List[Dict], resources_limit: Dict):
  def get_stat(name: str):
    if name == 'cycles':
      results = [el[name] for el in get_stat.data]
    else:
      results = [el[name] / get_stat.resources_limit[name] * 100 for el in get_stat.data]
    return results

  get_stat.data = data
  get_stat.resources_limit = resources_limit

  fig, axes = subplots(nrows=2, ncols=1, figsize=(8, 6))

  x_range = range(1, len(data)+1)
  x_label = 'Optimization step'

  cycles = get_stat('cycles')
  axes[0].plot(x_range, cycles, label='Cycles', linestyle=':', marker='s', markersize=7)
  
  hardware_names = ['BRAM_18K', 'DSP48E', 'FF', 'LUT']
  hardware_results = {}
  hardware_averages = [0.] * len(data)

  for name in hardware_names:
    hardware_results[name] = get_stat(name)
    axes[1].plot(x_range, hardware_results[name], label=name, linestyle='--', marker='o', markersize=7)

    for index, value in enumerate(hardware_results[name]):

      hardware_averages[index] += value / len(hardware_names)

  # Hand-tuned y-axis range
  axes[0].set_yticks(ticks=linspace(0, 2330000, 7, endpoint=True))
  axes[0].set_yscale('log')
  axes[1].set_yticks(ticks=linspace(0.0, 100.0, 11, endpoint=True))

  axes[0].set_xticks(ticks=x_range)
  axes[1].set_xticks(ticks=x_range)

  # axes[0].legend()
  axes[1].legend()

  axes[0].grid(True)
  axes[1].grid(True)

  axes[0].set(xlabel=x_label, ylabel='Latency (cycles)')
  axes[1].set(xlabel=x_label, ylabel='Resource utilization (%)')

  axes[0].set_title('Latency throughout optimization process')
  axes[1].set_title('Hardware resource utilization throughout optimization process')

  fig.suptitle('Results of the optimization process for the ultra-low latency model', fontsize=14)
  fig.tight_layout()
  fig_path = f'{path}.png'
  fig.savefig(fig_path, format='png', dpi=200)

  print(f'Saved figure to {fig_path}')

  plot_pareto(path=path, cycles=cycles, hardware_averages=hardware_averages)


def plot_pareto(path: str, cycles: List[int], hardware_averages: List[float]):
  assert len(cycles) == len(hardware_averages), 'Number of entries in cycles and hardware_averages must be equal'
  
  pareto = [8, 11]

  fig, ax = subplots(nrows=1, ncols=2, sharey=True, figsize=(6, 6))

  def sub_plot(pareto: List, ax, legend: bool, x_lim: Tuple, y_lim: Tuple):

    size = 64

    x_p = [el for i, el in enumerate(hardware_averages) if i in pareto]
    x = [el for i, el in enumerate(hardware_averages) if i not in pareto]

    y_p = [el for i, el in enumerate(cycles) if i in pareto]
    y = [el for i, el in enumerate(cycles) if i not in pareto]

    ax[0].scatter(x_p, y_p, label='Pareto', s=size, linewidth=1, edgecolor='black')
    ax[0].scatter(x, y, label='Not Pareto', s=size, linewidth=1, edgecolor='black')

    ax[1].scatter(x_p, y_p, label='Pareto', s=size, linewidth=1, edgecolor='black')
    ax[1].scatter(x, y, label='Not Pareto', s=size, linewidth=1, edgecolor='black')

    texts0 = []
    for i, (h, c) in enumerate(zip(hardware_averages, cycles)):
      xytext = (h-0.01, c+500) if i == 4 else (h+0.03, c+5)
      texts0.append(ax[0].annotate(f'{i+1}', xy=(h, c), xytext=xytext))
      texts0.append(ax[1].annotate(f'{i+1}', xy=(h, c), xytext=xytext))

    # print(f'Iterations to improve annotations: {adjust_text(texts0)}')

    # ax[0].set_xticks(ticks=linspace(x_lim[0], x_lim[1], x_lim[2], endpoint=True))
    ax[0].set_xticks(ticks=linspace(13, 13.9, 4, endpoint=True))
    # ax[0].set_xlim([x_lim[0], x_lim[1]])
    ax[0].set_xlim([13, 13.9])
    ax[0].set_yticks(ticks=linspace(y_lim[0], y_lim[1], y_lim[2], endpoint=True))
    ax[0].set_yscale('log')

    # print(f'Iterations to improve annotations: {adjust_text(texts0)}')

    # ax[1].set_xticks(ticks=linspace(x_lim[0], x_lim[1], x_lim[2], endpoint=True))
    ax[1].set_xticks(ticks=linspace(23, 23.9, 4, endpoint=True))
    # ax[1].set_xlim([x_lim[0], x_lim[1]])
    ax[1].set_xlim([23, 23.9])
    ax[1].set_yticks(ticks=linspace(y_lim[0], y_lim[1], y_lim[2], endpoint=True))
    ax[1].set_yscale('log')
    
    ax[0].set(ylabel='Latency (cycles)')
    
    if legend:
      ax[1].legend()

    ax[0].spines['right'].set_visible(False)
    ax[1].spines['left'].set_visible(False)

    ax[0].yaxis.tick_left()
    ax[1].tick_params(labelright='off')
    ax[1].yaxis.tick_right()

    d = .015
    kwargs = dict(transform=ax[0].transAxes, color='k', clip_on=False)
    ax[0].plot((1-d,1+d), (-d,+d), **kwargs)
    ax[0].plot((1-d,1+d),(1-d,1+d), **kwargs)

    kwargs.update(transform=ax[1].transAxes)
    ax[1].plot((-d,+d), (1-d,1+d), **kwargs)
    ax[1].plot((-d,+d), (-d,+d), **kwargs)


  sub_plot(pareto=pareto, ax=ax, legend=True, x_lim=(12.5, 25, 8), y_lim=(0, 2330000, 7))
  # Alligment and x value needed to center between two axes
  plt.xlabel('Resource utilization (%)', horizontalalignment='right', x=0.25)

  # -------------------- Inset --------------------
  # a = axes([0.4, 0.25, 0.35, 0.45], facecolor='linen')
  # sub_plot(pareto=pareto, ax=a, legend=False, x_lim=(13, 14, 3), y_lim=(0, 2330000, 5))
  # a.scatter([el for i, el in enumerate(hardware_averages) if i in pareto], [el for i, el in enumerate(cycles) if i in pareto], label='Pareto', s=24, linewidth=1, edgecolor='black')
  # a.scatter([el for i, el in enumerate(hardware_averages) if i not in pareto], [el for i, el in enumerate(cycles) if i not in pareto], label='Not Pareto', s=24, linewidth=1, edgecolor='black')
  # a.set_xlim([13, 14])
  # -----------------------------------------------

  fig.suptitle('Latency against average resource utilization\nfor the ultra-low latecy model configurations', fontsize=12)
  fig.tight_layout()
  path = f'{path}_pareto.png'
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

  data = [
    {'cycles': 2329667, 'BRAM_18K': 203, 'DSP48E': 4812, 'FF': 114586, 'LUT': 140385},
    {'cycles': 2329185, 'BRAM_18K': 191, 'DSP48E': 4808, 'FF': 101467, 'LUT': 138274},
    {'cycles': 2086,    'BRAM_18K': 37,  'DSP48E': 5040, 'FF': 106724, 'LUT': 175540},
    {'cycles': 2282,    'BRAM_18K': 33,  'DSP48E': 5035, 'FF': 106782, 'LUT': 169920},
    {'cycles': 2324,    'BRAM_18K': 33,  'DSP48E': 5035, 'FF': 105881, 'LUT': 168485},
    {'cycles': 1300,    'BRAM_18K': 15,  'DSP48E': 5035, 'FF': 104856, 'LUT': 164091},
    {'cycles': 179,     'BRAM_18K': 15,  'DSP48E': 5022, 'FF': 103623, 'LUT': 156051},
    {'cycles': 99,      'BRAM_18K': 13,  'DSP48E': 5022, 'FF': 100519, 'LUT': 154458},
    {'cycles': 54,      'BRAM_18K': 9,   'DSP48E': 5022, 'FF': 94722,  'LUT': 149769},
    {'cycles': 22,      'BRAM_18K': 12,  'DSP48E': 9380, 'FF': 148583, 'LUT': 245746},
    {'cycles': 20,      'BRAM_18K': 12,  'DSP48E': 9380, 'FF': 127276, 'LUT': 224908},
    {'cycles': 18,      'BRAM_18K': 12,  'DSP48E': 4351, 'FF': 60260,  'LUT': 298923},
  ]

  resources_limit = {'BRAM_18K': 5376, 'DSP48E': 12288, 'FF': 3456000, 'LUT': 1728000}

  main(path=args.path, data=data, resources_limit=resources_limit)

  # if not args.quiet:
  #   print_latex_table(data, tablefmt=args.tablefmt)