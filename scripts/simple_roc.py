import numpy as np

from matplotlib.pyplot import subplots
from sklearn.metrics import roc_curve, auc, roc_auc_score
from argparse import ArgumentParser

def parse():
  parser = ArgumentParser(description='Simple ROC plot')

  parser.add_argument('--path', action='store', type=str, default=None)

  return parser.parse_args()

if __name__ == "__main__":
  args = parse()

  # curr_targets = [0, 0, 0, 0, 1]
  # curr_targets = [0, 0, 0, 1, 0]
  # curr_targets = [1, 0, 0, 0, 0]
  curr_targets = np.array([1, 1, 1, 1, 0])
  curr_predictions = np.array([0.1, 0.6, 0.8, 0.2, 0.9])

  FPRs, TPRs, thresholds = roc_curve(curr_targets, curr_predictions)
  AUCs = auc(FPRs, TPRs)
  print(f'{thresholds=}, {FPRs=}, {TPRs=}, {AUCs=}')

  fig, ax = subplots(nrows=1, ncols=1, figsize=(6, 6))
  ax.plot(FPRs, TPRs, label=f'(AUC={AUCs:.4f})')

  ax.legend()

  fig.suptitle('Simple ROC plot', fontsize=14)
  fig.tight_layout()
  fig.savefig(args.path, format='png', dpi=200)

  print(f'Saved figure to {args.path}')