import os
import pickle
import numpy as np
import matplotlib.pyplot as plt

from train_evaluate import DIR_NAME, DATA_DIR, DATA_30_DIR, CLASSES_FILENAMES, CLASSES
from train_evaluate import X_TRAIN_FILENAMES, Y_TRAIN_FILENAMES, X_TEST_FILENAMES, Y_TEST_FILENAMES
from train_evaluate import load_dataset

import pandas as pd
from sklearn.neighbors import KernelDensity

import matplotlib as mpl
import matplotlib.gridspec as grid_spec

FEATURES_PATH = os.path.join(DATA_30_DIR, 'features.npy')

def reject_outliers(data, m = 2.):
    d = np.abs(data - np.median(data))
    mdev = np.median(d)
    s = d/mdev if mdev else 0.
    return data[s<m]


def process_data(feature_names):
  num_particles = 30

  X_train_val = np.load(X_TRAIN_FILENAMES[num_particles])
  X_test = np.ascontiguousarray(np.load(X_TEST_FILENAMES[num_particles]))

  X = np.concatenate((X_train_val, X_test), axis=0)

  # features = {
  #   'zlogz': np.zeros(880000*30),
  #   'c1_b0_mmdt': np.zeros(880000*30),
  #   'c1_b1_mmdt': np.zeros(880000*30),
  #   'c1_b2_mmdt': np.zeros(880000*30),
  #   'c2_b1_mmdt': np.zeros(880000*30),
  #   'c2_b2_mmdt': np.zeros(880000*30),
  #   'd2_b1_mmdt': np.zeros(880000*30),
  #   'd2_b2_mmdt': np.zeros(880000*30),
  #   'd2_a1_b1_mmdt': np.zeros(880000*30),
  #   'd2_a1_b2_mmdt': np.zeros(880000*30),
  #   'm2_b1_mmdt': np.zeros(880000*30),
  #   'm2_b2_mmdt': np.zeros(880000*30),
  #   'n2_b1_mmdt': np.zeros(880000*30),
  #   'n2_b2_mmdt': np.zeros(880000*30),
  #   'mass_mmdt': np.zeros(880000*30),
  #   'multiplicity': np.zeros(880000*30),
  # }
  features = {
    0: np.zeros(880000*30),
    1: np.zeros(880000*30),
    2: np.zeros(880000*30),
    3: np.zeros(880000*30),
    4: np.zeros(880000*30),
    5: np.zeros(880000*30),
    6: np.zeros(880000*30),
    7: np.zeros(880000*30),
    8: np.zeros(880000*30),
    9: np.zeros(880000*30),
    10: np.zeros(880000*30),
    11: np.zeros(880000*30),
    12: np.zeros(880000*30),
    13: np.zeros(880000*30),
    14: np.zeros(880000*30),
    15: np.zeros(880000*30),
  }

  # feature_names_mapping = {
  #   0:  'zlogz',
  #   1:  'c1_b0_mmdt',
  #   2:  'c1_b1_mmdt',
  #   3:  'c1_b2_mmdt',
  #   4:  'c2_b1_mmdt',
  #   5:  'c2_b2_mmdt',
  #   6:  'd2_b1_mmdt',
  #   7:  'd2_b2_mmdt',
  #   8:  'd2_a1_b1_mmdt',
  #   9:  'd2_a1_b2_mmdt',
  #   10: 'm2_b1_mmdt',
  #   11: 'm2_b2_mmdt',
  #   12: 'n2_b1_mmdt',
  #   13: 'n2_b2_mmdt',
  #   14: 'mass_mmdt',
  #   15: 'multiplicity',
  # }

  index = 0
  dummy_jet_count = 0
  for i in range(X.shape[0]):
    for j in range(X.shape[1]):

      jet_features = X[i][j]

      # Check if dummy jet (all 0, added to pad to constant length)
      all_zeros = not np.any(jet_features)
      if all_zeros:
        dummy_jet_count += 1
        break

      index += 1
      if index % (1024*256) == 0:
        print(f'{index:,}/{880000*30:,}')
      for k in range(X.shape[2]):
        features[k][index] = jet_features[k]


  # features = [reject_outliers(f, m=5) for f in features]
  print(f'{dummy_jet_count} dummy jets found')

  processed_features = {}
  for index, feature in features.items():
    print(f'total: {feature.shape=}')
    feature = feature[0:feature.shape[0]-dummy_jet_count]
    print(f'after removing dummy_jets: {feature.shape=}')
    processed_features[index] = reject_outliers(feature, m=5)
    print(f'after rejecting outliers: {processed_features[index].shape=}')
  
  with open(FEATURES_PATH, 'wb') as f:
    pickle.dump(processed_features, f)
  print(f'Saved processed features to {FEATURES_PATH}')


def plot_hist(feature_names):

  with open(FEATURES_PATH, 'rb') as f:
      features = pickle.load(f)

  nrows = 8
  ncols = 2
  fig, axes = plt.subplots(nrows=nrows, ncols=ncols, figsize=(8, 12))

  for index, feature in features.items():
    feature_name = feature_names[index]

    # Remove any leftover 0 values
    feature = feature[feature != 0.]

    i = index % nrows
    j = index // nrows

    # if i > 3:
    #   break

    print(f'({i}, {j})')

    axes[i][j].hist(
      feature,
      bins = 50,
      label=feature_name,
      density=True,
    )

    # axes[i][j].set(xlabel='Value')
    axes[i][j].set(ylabel=feature_name)
    axes[i][j].axes.get_yaxis().set_ticks([])
    # axes[i][j].set(xlabel='Value', ylabel='Density')
    # axes[i][j].set_title(feature_name)

  fig.tight_layout()
  # fig.suptitle('', fontsize=14)
  path = 'logs/constituent_distribution.png'
  plt.savefig(path, format='png', dpi=200)

if __name__ == "__main__":
  feature_names = [
    'zlogz',
    'c1_b0_mmdt',
    'c1_b1_mmdt',
    'c1_b2_mmdt',
    'c2_b1_mmdt',
    'c2_b2_mmdt',
    'd2_b1_mmdt',
    'd2_b2_mmdt',
    'd2_a1_b1_mmdt',
    'd2_a1_b2_mmdt',
    'm2_b1_mmdt',
    'm2_b2_mmdt',
    'n2_b1_mmdt',
    'n2_b2_mmdt',
    'mass_mmdt',
    'multiplicity',
  ]

  # process_data(feature_names)
  plot_hist(feature_names)
