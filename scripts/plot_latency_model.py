from matplotlib.pyplot import subplots, axes, figure
from argparse import ArgumentParser
from numpy import linspace
import numpy as np
from tabulate import tabulate
from re import findall
from mpl_toolkits import mplot3d


def main(path: str):

  fig = figure(figsize=(8, 8))
  ax = axes(projection='3d')

  def f(t, f):
    return (6 + t * (8 + 2 + f * 1))

  x = np.linspace(1, 6, 30)
  y = np.linspace(1, 6, 30)

  X, Y = np.meshgrid(x, y)
  Z = f(X, Y)

  print(f'{X.shape=}, {Y.shape=}, {Z.shape=}')

  # ax.contour3D(X, Y, Z, 50, cmap='binary')
  # ax = plt.axes(projection='3d')
  ax.plot_surface(X, Y, Z, rstride=1, cstride=1,
                cmap='viridis', edgecolor='none')
  ax.set_xlabel('# of transformer layers [T]')
  ax.set_ylabel('# of feed-forward layers [F]')
  ax.set_zlabel('Latency (cycles)')
  ax.view_init(10, 160)


  fig.suptitle('latency (cycles)$ = C_{top} + T \cdot ( C_{SA} + C_{T} + F \cdot C_{FF})$\nfor $C_{top} = 6, C_{SA} = 8, C_{T} = 2, C_{FF} = 1$', fontsize=14, y=0.80)
  fig.tight_layout()
  fig.subplots_adjust(left=-0.09, bottom=-0.11)
  fig.savefig(path, format='png', dpi=200)

  print(f'Saved figure to {path}')


def parse():
  parser = ArgumentParser(description='Plot analytical latency model')

  parser.add_argument('--path', action='store', type=str, default=None)

  return parser.parse_args()


if __name__ == '__main__':
  args = parse()

  assert args.path is not None, 'Path needs to be specified'

  main(path=args.path)

