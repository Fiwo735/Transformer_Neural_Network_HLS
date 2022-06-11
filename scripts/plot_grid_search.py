from matplotlib.pyplot import subplots
from argparse import ArgumentParser
from numpy import linspace
from tabulate import tabulate
from re import findall
from adjustText import adjust_text
from math import log


def main(path: str, data_2_heads, data_4_heads):
  transform = lambda x: log(x, 2) - 3
  transform_inverse = lambda x: 2**(x + 3)
  size_formula = lambda x: ((x - 59)**2) * 20

  fig, axes = subplots(nrows=1, ncols=2, figsize=(12, 6))

  def sub_plot(ax, data, title):

    x_name = '# of transformers'
    y_name = '# of embedded dimensions'

    texts = []
    for el in data:
      accuracy = el['accuracy']
      accuracy_formatted = f'{accuracy:.2f}'
      x = el[x_name]
      y = transform(el[y_name])
      ax.scatter(x, y, s=size_formula(accuracy), marker='s')
      texts.append(
        ax.annotate(
          accuracy_formatted,
          (x, y),
          xytext=(x, y),
          ha='center',
          va='center',
          bbox=dict(fc='white', color='black')
        )
      )

    # print(f'Iterations to improve annotations: {adjust_text(texts)}')

    ax.set(xlabel=x_name, ylabel=y_name)
    ax.set_yticks(ticks=linspace(1, 3, 3, endpoint=True))
    ax.set_xticks(ticks=linspace(1, 3, 3, endpoint=True))
    ax.set_ylim([0.5, 3.5])
    ax.set_xlim([0.5, 3.5])
    fig.canvas.draw()
    ylabels = [item.get_text() for item in ax.get_yticklabels()]
    ylabels = [transform_inverse(int(el)) for el in ylabels]
    ax.set_yticklabels(ylabels)
    ax.grid()
    ax.set_title(title)

  sub_plot(ax=axes[0], data=data_2_heads, title='Model with 2 attention-heads')
  sub_plot(ax=axes[1], data=data_4_heads, title='Model with 4 attention-heads')

  fig.suptitle('Grid-search results, square area proportional to accuracy', fontsize=14)
  fig.tight_layout()
  fig.savefig(path, format='png', dpi=200)

  print(f'Saved figure to {path}')


def parse():
  parser = ArgumentParser(description='Grid search')

  parser.add_argument('--path', action='store', type=str, default=None)
  parser.add_argument('--quiet', action='store_true')
  parser.add_argument('--tablefmt', action='store', type=str, default='plain')

  return parser.parse_args()


if __name__ == '__main__':
  args = parse()

  data_2_heads = [
    {
      'accuracy': 79.19,
      '# of transformers': 3,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 78.14,
      '# of transformers': 3,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 77.36,
      '# of transformers': 3,
      '# of embedded dimensions': 16,
    },
    {
      'accuracy': 79.07,
      '# of transformers': 2,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 78.54,
      '# of transformers': 2,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 75.82,
      '# of transformers': 2,
      '# of embedded dimensions': 16,
    },
    {
      'accuracy': 74.52,
      '# of transformers': 1,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 73.20,
      '# of transformers': 1,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 70.90,
      '# of transformers': 1,
      '# of embedded dimensions': 16,
    },
  ]

  data_4_heads = [
    {
      'accuracy': 78.31,
      '# of transformers': 3,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 78.48,
      '# of transformers': 3,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 78.44,
      '# of transformers': 3,
      '# of embedded dimensions': 16,
    },
    {
      'accuracy': 78.94,
      '# of transformers': 2,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 77.78,
      '# of transformers': 2,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 77.13,
      '# of transformers': 2,
      '# of embedded dimensions': 16,
    },
    {
      'accuracy': 70.25,
      '# of transformers': 1,
      '# of embedded dimensions': 64,
    },
    {
      'accuracy': 67.50,
      '# of transformers': 1,
      '# of embedded dimensions': 32,
    },
    {
      'accuracy': 68.55,
      '# of transformers': 1,
      '# of embedded dimensions': 16,
    },
  ]

  main(data_2_heads=data_2_heads, data_4_heads=data_4_heads, path=args.path)