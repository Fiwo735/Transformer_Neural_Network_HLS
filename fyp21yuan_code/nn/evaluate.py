import argparse
import logging
import multiprocessing
import os
import typing

import numpy as np
import torch
from tqdm import tqdm
import matplotlib.pyplot as plt

import utils
import model.net as net
import model.data as data
import model.loss as loss


BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

parser = argparse.ArgumentParser()
parser.add_argument('--data_dir', default=os.path.join(BASE_DIR, 'data'),
                    help="Directory containing the dataset")
parser.add_argument('--model_dir', default=os.path.join(BASE_DIR, 'experiments/base_model'),
                    help="Directory containing params.json")
parser.add_argument('--restore_file', default='best',
                    help="Optional, name of the file in --model_dir containing weights to reload before \
                    training")  # 'best' or 'last'


def evaluate(model, criterion, dataloader, metrics, params):
    """Evaluate the model on `num_steps` batches.
    Args:
        model: (torch.nn.Module) the neural network
        criterion: a function that takes batch_output and batch_labels and computes the loss for the batch
        dataloader: (DataLoader) a torch.utils.data.DataLoader object that fetches data
        metrics: (dict) a dictionary of functions that compute a metric using the output and labels of each batch
        params: (Params) hyperparameters
    Returns:
        metrics_mean: (dict) of float-castable validation-metric values (np.float, int, float, etc.)
    """

    # summary for current eval loop
    summ = []
    preds_list : typing.List[np.ndarray] = []
    targs_list : typing.List[np.ndarray] = []
    loss_avg = utils.RunningAverage()
    
    # compute metrics over the dataset
    with tqdm(total=len(dataloader), unit="batch") as t:
        for i, batch in enumerate(dataloader):

            # Unpack batch, move to device
            input_seqs = batch['input_seqs'].to(params.device)  # torch.tensor (n, 100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
            input_1ds = batch['input_1ds'].to(params.device)    # torch.tensor (n, 59-6)
            input_2ds = batch['input_2ds'].to(params.device)    # torch.tensor (n, 100, 100, 3) - merge of three jet images
            targets = batch['targets'].to(params.device)        # torch.tensor (n, )

            # Forward pass
            outputs = model(input_seqs)                         # torch.tensor (n, num_classes)

            # Compute loss
            loss = criterion(outputs, targets)
                
            # Move to cpu
            outputs = outputs.data.cpu()
            targets = targets.data.cpu()

            # Update the average loss
            loss_avg.update(loss.item())

            # Compute all metrics on this batch
            summary = {metric: metrics[metric](outputs, targets) for metric in metrics}
            summary['loss'] = loss.item()
            summ.append(summary)

            # Append model preds and targs
            preds_list.append(outputs.argmax(axis=-1).view(-1).numpy())
            targs_list.append(targets.view(-1).numpy())

            # Update tqdm
            t.set_postfix(loss='{:05.3f}'.format(loss_avg()))
            t.update()

    # compute mean of all metrics in summary
    metrics_mean = {metric: np.mean([x[metric] for x in summ]) for metric in summ[0]}
    metrics_string = " ; ".join("{}: {:05.3f}".format(k, v) for k, v in metrics_mean.items())
    logging.info("- Eval metrics : " + metrics_string)

    # append confusion matrix to metrics
    metrics_mean['confusion_matrix'] = utils.confusion_matrix(np.hstack(preds_list), np.hstack(targs_list), normalize='true')

    return metrics_mean


if __name__ == '__main__':

    # Load the parameters from json file
    args = parser.parse_args()
    json_path = os.path.join(args.model_dir, 'params.json')
    assert os.path.isfile(json_path), "No json configuration file found at {}".format(json_path)
    params = utils.Params(json_path)

    # Use GPU if available
    params.cuda = torch.cuda.is_available()
    params.device = torch.device("cuda" if params.cuda else "cpu")

    # Set default ignore_index
    if "ignore_index" not in params.dict:
        params.ignore_index = -100

    # Train-validation split
    params.train = -1 if "train" not in params.dict else params.train
    params.val = -1 if "val" not in params.dict else params.val

    # Set number of working threads
    # https://jdhao.github.io/2020/07/06/pytorch_set_num_threads/
    # https://github.com/pytorch/pytorch/issues/7087
    torch.set_num_threads(multiprocessing.cpu_count())
    os.environ['OMP_NUM_THREADS'] = str(multiprocessing.cpu_count())
    os.environ['MKL_NUM_THREADS'] = str(multiprocessing.cpu_count())

    # Seed everything
    torch.manual_seed(230)
    if params.cuda:
        torch.cuda.manual_seed(230)

    # Set the logger
    utils.set_logger(os.path.join(args.model_dir, 'evaluate.log'))

    # Create the input data pipeline
    logging.info(f"Loading the datasets from {args.data_dir}...")

    # Creating dataloaders
    # (1) creating dataset
    dataset = data.get_dataset(args.data_dir)
    # dataset = data.get_dataset(args.data_dir, splits=['train', 'val']) #FILIP

    # (2) train-validation split
    dataset_size = len(dataset)
    train_size =  params.train if params.train != -1 else dataset_size - max(params.val, 0)
    val_size = params.val if params.val != -1 else dataset_size - max(params.train, 0)
    
    assert params.train + params.val < dataset_size, f"Dataset of {dataset_size} examples cannot split into (train:{params.train}, val:{params.val})"
    train_set, val_set, _ = torch.utils.data.random_split(dataset, [train_size, val_size, dataset_size-train_size-val_size])
    
    # (3) train-validation dataloaders
    train_loader = data.DataLoader(train_set, batch_size=params.batch_size, shuffle=True, collate_fn=data.get_collate_fn())
    val_loader = data.DataLoader(val_set, batch_size=params.batch_size, collate_fn=data.get_collate_fn())
    
    logging.info("- done.")

    # Load model
    logging.info(f"Building model using params from {os.path.join(args.model_dir, f'{args.restore_file}.script.pth')}")
    model = torch.jit.load(os.path.join(args.model_dir, f'{args.restore_file}.script.pth'))

    # Define loss function and metrics
    criterion =  torch.nn.NLLLoss()
    metrics = net.metrics
    
    # Run model evaluation
    logging.info(f"Starting evaluating {params.val} examples...")
    metrics = evaluate(
        model = model,
        criterion = criterion,
        dataloader = val_loader,
        metrics = metrics,
        params = params
    )

    # Show confusion matrix
    utils.plot_confusion_matrix(metrics['confusion_matrix'])
    plt.show()