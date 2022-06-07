from matplotlib.pyplot import subplots
from argparse import ArgumentParser
from numpy import linspace
from tabulate import tabulate
from re import findall
from adjustText import adjust_text
from math import log


def main(path: str, data):
  transform = lambda x: log(x, 2) - 3
  transform_inverse = lambda x: 2**(x + 3)

  fig, ax = subplots(nrows=1, ncols=1, figsize=(6, 6))

  x_name = '# of transformers'
  y_name = '# of embedded dimensions'

  texts = []
  for el in data:
    accuracy = el['accuracy']
    x = el[x_name]
    y = transform(el[y_name])
    ax.scatter(x, y, s=accuracy*3)
    texts.append(ax.annotate(accuracy, (x, y)))

  print(f'Iterations to improve annotations: {adjust_text(texts)}')

  ax.set(xlabel=x_name, ylabel=y_name)
  ax.set_yticks(ticks=linspace(1, 3, 3, endpoint=True))
  ax.set_xticks(ticks=linspace(1, 3, 3, endpoint=True))
  fig.canvas.draw()
  xlabels = [item.get_text() for item in ax.get_yticklabels()]
  xlabels = [transform_inverse(int(el)) for el in xlabels]
  ax.set_xticklabels(xlabels)
  ax.grid()

  fig.suptitle('Results of grid-search', fontsize=12)
  fig.tight_layout()
  fig.savefig(path, format='png', dpi=200)

  print(f'Saved figure to {path}')

def parse():
  parser = ArgumentParser(description='Plot training statistics')

  parser.add_argument('--path', action='store', type=str, default=None)
  parser.add_argument('--quiet', action='store_true')
  parser.add_argument('--tablefmt', action='store', type=str, default='plain')

  return parser.parse_args()


if __name__ == '__main__':
  args = parse()

  data = [
    {
      'accuracy': 78.47,
      '# of transformers': 3,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 20,
      '# of transformers': 3,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 77.50,
      '# of transformers': 3,
      '# of embedded dimensions': 16,
    },
    {
      'accuracy': 78.76,
      '# of transformers': 2,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 50,
      '# of transformers': 2,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 60,
      '# of transformers': 2,
      '# of embedded dimensions': 16,
    },
    {
      'accuracy': 70,
      '# of transformers': 1,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 80,
      '# of transformers': 1,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 90,
      '# of transformers': 1,
      '# of embedded dimensions': 16,
    },
  ]

  main(data=data, path=args.path)