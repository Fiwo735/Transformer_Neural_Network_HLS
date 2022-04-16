import argparse
import logging
import multiprocessing
import os
import gc
import psutil
from pathlib import Path

import numpy as np
import torch
import torch.optim as optim
import torch.nn.functional as F
from torch.utils.tensorboard import SummaryWriter
from tqdm import tqdm

import utils
import model.net as net
import model.data as data
import model.loss as loss

import h5py

from typing import Callable

BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
MODEL = lambda **args :  net.ConstituentNet(**args)


parser = argparse.ArgumentParser()
group = parser.add_mutually_exclusive_group()
parser.add_argument('--data_dir', default=os.path.join(BASE_DIR, 'data/processed'),
                    help="Directory containing the dataset")
parser.add_argument('--model_dir', default=os.path.join(BASE_DIR, 'experiments/base_model'),
                    help="Directory containing params.json")
group.add_argument('--restore_file', default=None,
                    help="Optional, name of the file in --model_dir containing weights to reload before \
                    training")  # 'best' or 'last'
group.add_argument('--retrain', default=None,
                    help="Optional, name of the file in --model_dir containing previous trained trochscript \
                    model")  # 'best' or 'last'


def train_loop(model, optimizer, scheduler, criterion, metrics, params, model_dir, train_dataloader, writer, train_set, val_dataloader=None):
    
    """Train the model.
    Args:
        model: (torch.nn.Module) the neural network
        train_dataloader: (DataLoader) a torch.utils.data.DataLoader object that fetches training data
        val_dataloader: (DataLoader) optional - a torch.utils.data.DataLoader object that fetches validation data
        optimizer: (torch.optim) optimizer for parameters of model
        criterion: a function that takes batch_output and batch_labels and computes the loss for the batch
        metrics: (dict) a dictionary of functions that compute a metric using the output and labels of each batch
        params: (Params) hyperparameters
        model_dir: (string) directory containing config, weights and log
    """

    best_acc = params.best_acc if args.restore_file else 0.0

    for epoch in range(params.checkpoint['epoch'] if args.restore_file else 0, params.num_epochs):
        # Logging
        logging.info(f"Epoch {epoch + 1}/{params.num_epochs}")

        # Train for one epoch (one full pass over the training set)
        train_metrics = train(model, optimizer, scheduler, criterion, train_dataloader, metrics, writer, params, train_set)
        # print('Train done')

        # Evaluate for one epoch on validation set
        if val_dataloader is not None:
            # print('val_data is not None')
            # validation set metrics
            val_metrics = evaluate(model, criterion, val_dataloader, metrics, params)
            val_acc = val_metrics['accuracy']
            is_best = val_acc >= best_acc

            # write to tensorboard
            writer.add_scalar('Validation loss', val_metrics['loss'], epoch * len(train_dataloader))
            writer.add_scalar('Validation acc', val_metrics['accuracy'], epoch * len(train_dataloader))

        else:
            # print('val_data is None')
            train_acc = train_metrics['accuracy']
            is_best = train_acc >= best_acc
        
        # print('Evaluate done')
        # Save latest val metrics in a json file in the model directory
        metrics_to_save = val_metrics if val_dataloader is not None else train_metrics
        metrics_type = "val" if val_dataloader is not None else "train"

        last_json_path = os.path.join(model_dir, f"metrics_{metrics_type}_last_weights.json")
        utils.save_dict_to_json(metrics_to_save, last_json_path)

        # If best_eval, best_save_path
        if is_best:
            logging.info("- Found new best accuracy")
            best_acc = val_acc if val_dataloader is not None else train_acc

            # Save best val metrics in a json file in the model directory
            best_json_path = os.path.join(model_dir, f"metrics_{metrics_type}_best_weights.json")
            utils.save_dict_to_json(metrics_to_save, best_json_path)

        # Save weights
        if ("save_file" not in params.dict) or params.save_file:
            utils.save_torchscript(
                model=model,
                is_best=is_best,
                model_dir=model_dir
            )
            utils.save_checkpoint({
                'epoch': epoch + 1,
                'state_dict': model.state_dict(),
                'optim_dict': optimizer.state_dict(),
                'scheduler_dict': scheduler.state_dict()},
                is_best=is_best,
                checkpoint=model_dir
            )


def train(model, optimizer, scheduler, criterion, dataloader, metrics, writer, params, train_set):
    """Train the model for one epoch (num_steps in batch model on `num_steps` batches)
    Args:
        model: (torch.nn.Module) the neural network
        optimizer: (torch.optim) optimizer for parameters of model
        scheduler: (torch.optim) scheduler to dynamically update learning rate
        criterion: a function that takes batch_outputs and batch_labels and computes the loss for the batch
        dataloader: (DataLoader) a torch.utils.data.DataLoader object that fetches training data
        metrics: (dict) a dictionary of functions that compute a metric using the output and labels of each batch
        writer: (SummaryWriter) the tensorboard writer 
        params: (Params) hyperparameters
    Returns:
        metrics_mean: (dict) of float-castable training-metric values (np.float, int, float, etc.)
    """

    # Set model to train mode
    model.train()

    # Summary for current training loop and a running average object for loss
    summ = []
    epoch_counter = utils.Counter('epoch', params.checkpoint['epoch'] + 1 if args.restore_file is not None else 1)
    loss_avg = utils.RunningAverage()

    # # Use tqdm for progress bar
    # with tqdm(total=len(dataloader), unit="batch") as t:
    #     for i, batch in enumerate(dataloader):

    #         # Unpack batch, move to device
    #         input_seqs = batch['input_seqs'].to(params.device)  # torch.tensor (n, 100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
    #         input_1ds = batch['input_1ds'].to(params.device)    # torch.tensor (n, 59-6)
    #         input_2ds = batch['input_2ds'].to(params.device)    # torch.tensor (n, 100, 100, 3) - merge of three jet images
    #         targets = batch['targets'].to(params.device)        # torch.tensor (n, )

    #         # Forward pass
    #         # outputs = model(input_seqs)              # torch.tensor (n, num_classes)
    #         outputs = model(input_1ds)               # torch.tensor (n, num_classes)

    #         # Compute loss
    #         loss = criterion(outputs, targets)

    #         # Backward pass
    #         optimizer.zero_grad()
    #         loss.backward()

    #         # Gradient clipping - matain healthy grad 
    #         torch.nn.utils.clip_grad_norm_(model.parameters(), max_norm=params.max_norm)

    #         # Update weights
    #         optimizer.step()

    #         # Scheduler step (step-wise scheduler, e.g., oneCycleLR)
    #         # scheduler.step(loss.item())
    #         scheduler.step()
    #         writer.add_scalar('Learning Rate', optimizer.param_groups[0]['lr'], (epoch_counter()-1) * len(dataloader) + i)

    #         # Evaluate summaries only once in a while
    #         if i % params.save_summary_steps == 0:
    #             # move to cpu, if params.device=="cuda"
    #             outputs = outputs.data.cpu()
    #             targets = targets.data.cpu()

    #             # compute all metrics on this batch
    #             summary = {metric: metrics[metric](outputs, targets) for metric in metrics}
    #             summary['loss'] = loss.item()
    #             summ.append(summary)

    #             # write to tensorboard
    #             writer.add_scalar('Training loss', summary['loss'], (epoch_counter()-1) * len(dataloader) + i)
    #             writer.add_scalar('Training acc', summary['accuracy'], (epoch_counter()-1) * len(dataloader) + i)

    #         # Update the average loss
    #         loss_avg.update(loss.item())

    #         # Update tqdm
    #         t.set_postfix(loss='{:05.3f}'.format(loss_avg()))
    #         t.update()

    # Use tqdm for progress bar
    BATCH_SIZE = 128
    with tqdm(total=len(train_set), unit="sample") as t:
        batch_input_seqs = np.empty((BATCH_SIZE, 30, 16)) # change 2nd dim for number of particles
        batch_input_1ds = np.empty((BATCH_SIZE, 53))
        batch_targets = np.empty((BATCH_SIZE,))
        for i, sample in enumerate(train_set):
            # print(f"i:{i}")
            # if i > 9999:
            #     break

            # Unpack batch, move to device
            input_seqs = sample.input_seq  # torch.tensor (n, 100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
            # input_1ds = sample.input_1d    # torch.tensor (n, 59-6)
            # input_2ds = sample.input_2d    # torch.tensor (n, 100, 100, 3) - merge of three jet images
            targets = sample.target        # torch.tensor (n, )

            # Forward pass
            # outputs = model(input_seqs)              # torch.tensor (n, num_classes)
            # print(f"input_1ds shape: {input_1ds.shape}")
            # input_1ds = np.expand_dims(input_1ds, axis=0)
            # print(f"input_1ds shape: {input_1ds.shape}")
            batch_input_seqs[i % 128] = input_seqs
            # batch_input_1ds[i % 128] = input_1ds
            batch_targets[i % 128] = targets

            # input_1ds = torch.from_numpy(input_1ds)



            if (i + 1) % BATCH_SIZE == 0:

                # print(f"batch_input_seqs shape: {batch_input_seqs.shape}")
                # print(f"batch_input_1ds shape: {batch_input_1ds.shape}")
                # print(f"batch_targets shape: {batch_targets.shape}")
                tensor_input_seqs = (torch.from_numpy(batch_input_seqs)).to(params.device)
                # tensor_input_1ds = (torch.from_numpy(batch_input_1ds)).to(params.device)
                tensor_targets = (torch.from_numpy(batch_targets)).to(params.device)

                # print(tensor_targets.shape)
                # print(tensor_targets)
                tensor_targets = tensor_targets.long()
                # tensor_targets = F.one_hot(tensor_targets).long()
                # print(tensor_targets.shape)
                # print(tensor_targets)

                model = model.float()
                outputs = model(tensor_input_seqs.float())
                # outputs = model(tensor_input_1ds.float())               # torch.tensor (n, num_classes)

                # print(outputs.shape)
                # print(outputs)

                # Compute loss
                loss = criterion(outputs, tensor_targets)
                # print('Loss done')

                # Backward pass
                optimizer.zero_grad()
                loss.backward()

                # Gradient clipping - matain healthy grad 
                torch.nn.utils.clip_grad_norm_(model.parameters(), max_norm=params.max_norm)

                # Update weights
                optimizer.step()
                # print('Optimizer done')

                # Scheduler step (step-wise scheduler, e.g., oneCycleLR)
                # scheduler.step(loss.item())
                scheduler.step()
                # print('Scheduler done')
                writer.add_scalar('Learning Rate', optimizer.param_groups[0]['lr'], (epoch_counter()-1) * len(dataloader) + i)

                # Evaluate summaries only once in a while
                if (i + 1) % (params.save_summary_steps * BATCH_SIZE) == 0:
                    # move to cpu, if params.device=="cuda"
                    outputs = outputs.data.cpu()
                    targets = tensor_targets.data.cpu()

                    # compute all metrics on this batch
                    summary = {metric: metrics[metric](outputs, targets) for metric in metrics}
                    summary['loss'] = loss.item()
                    summ.append(summary)

                    # write to tensorboard
                    writer.add_scalar('Training loss', summary['loss'], (epoch_counter()-1) * len(dataloader) + i)
                    writer.add_scalar('Training acc', summary['accuracy'], (epoch_counter()-1) * len(dataloader) + i)

                # Update the average loss
                loss_avg.update(loss.item())
                # print('Loss updated')

            # Update tqdm
            t.set_postfix(loss='{:05.3f}'.format(loss_avg()))
            t.update()
            # print('tqdm updated')
            # 9999 issue:
            # gc.collect()
            # process = psutil.Process(os.getpid())
            # print(process.memory_info().rss)

    # Compute mean of all metrics in summary
    # print(len(summ))
    # print(summ[0])
    metrics_mean = {metric: np.mean([x[metric] for x in summ]) for metric in summ[0]}
    metrics_string = " ; ".join("{}: {:05.3f}".format(k, v) for k, v in metrics_mean.items())
    logging.info("- Train metrics: " + metrics_string)

    # Scheduler step (epoch-wise scheduler, e.g., reduceOnPlateou)
    # scheduler.step(loss_avg())
    # writer.add_scalar('Learning Rate', scheduler.get_lr()[0], (epoch_counter()-1) * len(dataloader) + i)

    return metrics_mean


def evaluate(model, criterion, dataloader, metrics, params):
    """Evaluate the model on `num_steps` batches.
    Args:
        model: (torch.nn.Module) the neural network
        criterion: a function that takes batch_output and batch_labels and computes the loss for the batch
        dataloader: (DataLoader) a torch.utils.data.DataLoader object that fetches data
        metrics: (dict) a dictionary of functions that compute a metric using the output and labels of each batch
        params: (Params) hyperparameters
        num_steps: (int) number of batches to train on, each of size params.batch_size
    Returns:
        metrics_mean: (dict) of float-castable validation-metric values (np.float, int, float, etc.)
    """

    print('in evaluate')
    # set model to evaluation mode
    model.eval()

    # summary for current eval loop
    summ = []

    # compute metrics over the dataset
    for batch in dataloader:
        print('iterating batches')

        # Unpack batch, move to device
        input_seqs = batch['input_seqs'].to(params.device)  # torch.tensor (n, 100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
        input_1ds = batch['input_1ds'].to(params.device)    # torch.tensor (n, 59-6)
        input_2ds = batch['input_2ds'].to(params.device)    # torch.tensor (n, 100, 100, 3) - merge of three jet images
        targets = batch['targets'].to(params.device)        # torch.tensor (n, )

        # Forward pass
        # outputs = model(input_seqs)             # torch.tensor (n, num_classes)
        outputs = model(input_1ds)               # torch.tensor (n, num_classes)

        # Compute loss
        loss = criterion(outputs, targets)
            
        # Move to cpu
        outputs = outputs.data.cpu()
        targets = targets.data.cpu()

        # Compute all metrics on this batch
        summary = {metric: metrics[metric](outputs, targets) for metric in metrics}
        summary['loss'] = loss.item()
        summ.append(summary)

    # compute mean of all metrics in summary
    metrics_mean = {metric: np.mean([x[metric] for x in summ]) for metric in summ[0]}
    metrics_string = " ; ".join("{}: {:05.3f}".format(k, v) for k, v in metrics_mean.items())
    logging.info("- Eval metrics : " + metrics_string)
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

    print(f"params.cuda: {params.cuda}, params.device: {params.device}")

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
    utils.set_logger(os.path.join(args.model_dir, 'train.log'))

    # Set tensorboard writer
    writer = SummaryWriter(os.path.join(args.model_dir, 'tb'))

    # Create the input data pipeline
    logging.info(f"Loading the datasets from {args.data_dir}...")

    # Creating dataloaders
    # (1) creating dataset
    dataset = data.get_dataset(args.data_dir)['train-val']

    # (2) train-validation split
    dataset_size = len(dataset)
    train_size =  params.train if params.train != -1 else dataset_size - max(params.val, 0)
    val_size = params.val if params.val != -1 else dataset_size - max(params.train, 0)
    
    assert params.train + params.val < dataset_size, f"Dataset of {dataset_size} examples cannot split into (train:{params.train}, val:{params.val})"
    train_set, val_set, _ = torch.utils.data.random_split(dataset, [train_size, val_size, dataset_size-train_size-val_size])
    # train_set = torch.utils.data.Subset(dataset, list(range(0,train_size)))
    # val_set = torch.utils.data.Subset(dataset, list(range(train_size,train_size + val_size)))

    # (3) bucket random sampler
    train_sampler = data.BucketSampler(num_samples=len(train_set), num_buckets=45)
    
    # (4) train-validation dataloaders
    train_loader = data.DataLoader(train_set, batch_size=params.batch_size, shuffle=True, collate_fn=data.get_collate_fn())
    # train_loader = data.DataLoader(train_set, batch_size=params.batch_size, sampler=train_sampler, collate_fn=data.get_collate_fn())
    # train_loader = data.DataLoader(train_set, batch_size=params.batch_size, collate_fn=data.get_collate_fn(), num_workers=4)
    val_loader = data.DataLoader(val_set, batch_size=params.batch_size, collate_fn=data.get_collate_fn())
    
    logging.info("- done.")

    # Instantiate model
    logging.info(f"Building model using params from {args.model_dir}")
    if args.retrain is not None: 
        # load previous trained torchscript
        restore_path = os.path.join(args.model_dir, args.retrain + '.script.pth')
        logging.info("Restoring trained-model from {}".format(restore_path))
        
        # load model
        model = torch.jit.load(restore_path, map_location=params.device)
    else:
        model = MODEL(**params.dict).to(params.device)

    # Instantiate optimizer and scheduler
    optimizer = optim.AdamW(model.parameters(), lr=params.learning_rate)
    # scheduler = torch.optim.lr_scheduler.ReduceLROnPlateau(optimizer, factor=params.factor, patience=params.patience)
    # scheduler = torch.optim.lr_scheduler.CyclicLR(optimizer, base_lr=5e-5, max_lr=2e-3, step_size_up=10, step_size_down=None, mode='exp_range', gamma=0.9994, scale_fn=None, scale_mode='cycle', cycle_momentum=False, last_epoch=-1, verbose=False)
    scheduler = torch.optim.lr_scheduler.OneCycleLR(optimizer, max_lr=params.max_learning_rate, steps_per_epoch=dataset_size, epochs=params.num_epochs, pct_start=params.anneal_start, div_factor=params.init_div_factor, final_div_factor=params.final_div_factor)
    # scheduler = torch.optim.lr_scheduler.OneCycleLR(optimizer, max_lr=params.max_learning_rate, steps_per_epoch=len(train_loader), epochs=params.num_epochs, pct_start=params.anneal_start, div_factor=params.init_div_factor, final_div_factor=params.final_div_factor)
    
    # Reload weights from restore_file if specified
    if args.restore_file is not None:
        # load parameters
        restore_path = os.path.join(args.model_dir, args.restore_file + '.pth.tar')
        logging.info("Restoring parameters from {}".format(restore_path))
        params.checkpoint = utils.load_checkpoint(restore_path, model, optimizer, scheduler)

        # load stats
        metrics_paths = list(Path(args.model_dir).glob('*best_weights.json'))
        params.best_acc = (
            utils.load_json_to_dict(metrics_paths[0])['accuracy']
            if len(metrics_paths)
            else 0.0
        )

    # Define loss function and metrics
    criterion =  torch.nn.NLLLoss(ignore_index=params.ignore_index)
    metrics = net.metrics

    # def scan_hdf5(path, recursive=True, tab_step=2):
    #     def scan_node(g, tabs=0):
    #         print(' ' * tabs, g.name)
    #         for k, v in g.items():
    #             if isinstance(v, h5py.Dataset):
    #                 print(' ' * tabs + ' ' * tab_step + ' -', v.name)
    #             elif isinstance(v, h5py.Group) and recursive:
    #                 scan_node(v, tabs=tabs + tab_step)
    #     with h5py.File(path, 'r') as f:
    #         scan_node(f)

    # scan_hdf5(args.data_dir + "/train-val/jetImage_7_100p_0_10000.h5")
    # scan_hdf5(args.data_dir + "/new_train-val/jetImage_0_30p_0_10000.h5")

    # Train the model
    logging.info(f"Starting training for {params.num_epochs} epoch(s), currently at epoch {params.checkpoint['epoch']+1 if args.restore_file else 1}.")
    train_loop(
        model = model,
        optimizer = optimizer,
        scheduler = scheduler,
        criterion = criterion,
        metrics = metrics,
        params = params,
        model_dir = args.model_dir,
        writer=writer,
        train_dataloader = train_loader,
        val_dataloader = None,#val_loader,
        train_set=dataset,
    )

    def mean_var_info(name: str, index: int, mean: torch.Tensor, var: torch.Tensor, ctr: int, sub_index: str='') -> str:
        result = f"{name}{index}\n"
        result += f"mean{sub_index}: {mean.size()}\n\t"

        curr_mean = torch.mean(mean, dim=0)
        if len(mean.size()) > 1:
            result += f"[0]: {curr_mean[0]}\n\t"
            result += f"[1:]: {torch.mean(curr_mean[1:])}\n"
        else:
            result += f"{curr_mean}\n"

        result += f"var{sub_index}: {var.size()}\n\t"

        curr_var = torch.mean(var, dim=0)
        if len(var.size()) > 1:
            result += f"[0]: {curr_var[0]}\n\t"
            result += f"[1:]: {torch.mean(curr_var[1:])}\n"
            print(f"[({curr_mean[0]}, {curr_var[0]}), ({torch.mean(curr_mean[1:])}, {torch.mean(curr_var[1:])})],")
        else:
            result += f"{curr_var}\n"
            print(f"[({curr_mean}, {curr_var})],")

        result += f"ctr{sub_index}: {ctr}\n"

        return result

    with open("training_mean_var.txt", 'w') as afile:
        afile.write(mean_var_info(name='Net', index=0, mean=model.get_avg_mean(), var=model.get_avg_var(), ctr=model.get_counter()))
        # afile.write(f"Net mean: {model.get_avg_mean().size()}\n{torch.mean(model.get_avg_mean())}\nvar: {model.get_avg_var().size()}\n{torch.mean(model.get_avg_var())}\nctr: {model.get_counter()}\n")
        for index, tr in enumerate(model.transformers):
            afile.write('-'*20 + '\n')
            afile.write(mean_var_info(name='Trans', index=index, sub_index='0', mean=tr.get_avg_mean0(), var=tr.get_avg_var0(), ctr=tr.get_counter0()))
            afile.write(mean_var_info(name='Trans', index=index, sub_index='3', mean=tr.get_avg_mean3(), var=tr.get_avg_var3(), ctr=tr.get_counter3()))
            afile.write(mean_var_info(name='SA', index=index, mean=tr.self_attention.get_avg_mean(), var=tr.self_attention.get_avg_var(), ctr=tr.self_attention.get_counter()))
            # afile.write(f"Trans{index} mean0: {tr.get_avg_mean0().size()}\n{torch.mean(tr.get_avg_mean0(), dim=0)}\nvar0: {tr.get_avg_var0().size()}\n{torch.mean(tr.get_avg_var0(), dim=0)}\nctr0: {tr.get_counter0()}\n")
            # afile.write(f"Trans{index} mean3: {tr.get_avg_mean3().size()}\n{torch.mean(tr.get_avg_mean3(), dim=0)}\nvar3: {tr.get_avg_var3().size()}\n{torch.mean(tr.get_avg_var3(), dim=0)}\nctr3: {tr.get_counter3()}\n")
            # afile.write(f"SA{index} mean: {tr.self_attention.get_avg_mean().size()}\n{torch.mean(tr.self_attention.get_avg_mean(), dim=0)}\nvar: {tr.self_attention.get_avg_var().size()}\n{torch.mean(tr.self_attention.get_avg_var(), dim=0)}\nctr: {tr.self_attention.get_counter()}\n")
    
    with open("training_mean_var_detailed.txt", 'w') as afile:
        afile.write(f"Net mean: \n{model.get_avg_mean()}\nvar: \n{model.get_avg_var()}\nctr: {model.get_counter()}\n")
        for index, tr in enumerate(model.transformers):
            afile.write('-'*20 + '\n')
            afile.write(f"Trans{index} mean0: \n{tr.get_avg_mean0()}\nvar0: \n{tr.get_avg_var0()}\nctr0: {tr.get_counter0()}\n")
            afile.write(f"Trans{index} mean3: \n{tr.get_avg_mean3()}\nvar3: \n{tr.get_avg_var3()}\nctr3: {tr.get_counter3()}\n")
            afile.write(f"SA{index} mean: \n{tr.self_attention.get_avg_mean()}\nvar: \n{tr.self_attention.get_avg_var()}\nctr: {tr.self_attention.get_counter()}\n")


    # print(f"Net mean: \n{model.get_avg_mean()}\n, var: \n{model.get_avg_var()}\n, ctr: \n{model.get_counter()}\n")
    # for index, transformer in enumerate(model.transformers):
    #     print(f"Trans{index} mean0: \n{transformer.get_avg_mean0()}\n, var0: \n{transformer.get_avg_var0()}\n, ctr0: \n{transformer.get_counter0()}\n")
    #     print(f"Trans{index} mean3: \n{transformer.get_avg_mean3()}\n, var3: \n{transformer.get_avg_var3()}\n, ctr3: \n{transformer.get_counter3()}\n")
    #     print(f"SA{index} mean: \n{transformer.self_attention.get_avg_mean()}\n, var: \n{transformer.self_attention.get_avg_var()}\n, ctr: \n{transformer.self_attention.get_counter()}\n")

    # for index, transformer in enumerate(model.transformers):
    #     print(f"Trans{index} mean0: {transformer.linear_0.running_mean}, var0: {transformer.linear_0.running_var}")
    #     print(f"Trans{index} mean3: {transformer.linear_3.running_mean}, var3: {transformer.linear_3.running_var}")
    #     print(f"SA{index} mean: {transformer.self_attention.norm.running_mean}, var: {transformer.self_attention.norm.running_var}")
    # Close tensorboard writer
    writer.close()


