import argparse
import os
import random
import shutil
from pathlib import Path

import numpy as np
from tqdm import tqdm


BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

parser = argparse.ArgumentParser()
parser.add_argument('--data_dir', default=os.path.join(BASE_DIR, 'data'), help="Directory with the Jet-tagging dataset")
parser.add_argument('--output_dir', default=os.path.join(BASE_DIR, 'data/processed'), help="Where to write the new data")

if __name__ == '__main__':
    args = parser.parse_args()

    assert os.path.isdir(args.data_dir), "Couldn't find the dataset at {}".format(args.data_dir)

    # Define the source data directory
    # example data directory:
    # data/
    # | - 100/
    # | - - train/
    # | - - val/

    data_dir = Path(args.data_dir)

    # Get all h5 files in all sub directories (train & val)
    file_paths = list(data_dir.glob('**/*.h5'))

    # Optional: split the into 80% train and 20% val
    # Make sure to always shuffle with a fixed seed so that the split is reproducible
    # random.seed(230)
    # file_paths.sort()
    # random.shuffle(file_paths)

    split = int(1.0 * len(file_paths))
    test_filenames = list(data_dir.glob('**/jetImage_7_100p_20000_30000.h5'))
    train_filenames = [file for file in file_paths[:split] if file not in test_filenames]
    val_filenames = [file for file in file_paths[split:] if file not in test_filenames]

    filenames = {
        'train-val': train_filenames,
        'test': test_filenames
    }

    if not os.path.exists(args.output_dir):
        os.mkdir(args.output_dir)
    else:
        print("Warning: output dir {} already exists".format(args.output_dir))

    # Preprocess train-val and test
    for split in ['train-val', 'test']:
        output_dir_split = os.path.join(args.output_dir, split)
        if not os.path.exists(output_dir_split):
            os.mkdir(output_dir_split)
        else:
            print("Warning: dir {} already exists".format(output_dir_split))

        print(f"Processing {split} data, saving preprocessed data to {output_dir_split}")
        for filename in tqdm(filenames[split]):
            shutil.copy2(filename, output_dir_split)
            

    print("Done building dataset")