import collections
import json
import logging
import os
import shutil
import typing

import torch
import numba
import numpy as np
import matplotlib.pyplot as plt


class Params():
    """Class that loads hyperparameters from a json file.
    Example:
    ```
    params = Params(json_path)
    print(params.learning_rate)
    params.learning_rate = 0.5  # overwrite/change value of learning_rate in params
    ```
    """

    def __init__(self, json_path):
        with open(json_path) as f:
            params = json.load(f)
            self.__dict__.update(params)

    def save(self, json_path):
        with open(json_path, 'w') as f:
            json.dump(self.__dict__, f, indent=4)
            
    def update(self, json_path):
        """Loads parameters from json file"""
        with open(json_path) as f:
            params = json.load(f)
            self.__dict__.update(params)

    @property
    def dict(self):
        """Gives dict-like access to Params instance by `params.dict['learning_rate']"""
        return self.__dict__


class RunningAverage():
    """A simple class that maintains the running average of a quantity
    
    Example:
    ```
    loss_avg = RunningAverage()
    loss_avg.update(2)
    loss_avg.update(4)
    loss_avg() = 3
    ```
    """
    def __init__(self):
        self.steps = 0
        self.total = 0
    
    def update(self, val: float):
        self.total += val
        self.steps += 1
    
    def __call__(self) -> float:
        
        # Avoid calling prior to update (zero-division)
        if float(self.steps) == 0:
            return 0
        
        return self.total/float(self.steps)


class MovingAverage():
    """A simple class that maintains the running exponential average of a quantity
    
    Example:
    ```
    loss_avg = MovingAverage()
    loss_avg.update(2)
    loss_avg.update(4)
    loss_avg() = 3
    ```
    """
    def __init__(self, beta=0.95):
        self.beta = beta
        self.value = 0
    
    def update(self, val: float):
        self.value = self.beta * self.value + (1 - self.beta) * val
    
    def __call__(self) -> float:
        return float(self.value)


class Counter():
    """A simple class that maintains a global counter (default start from 1)
    
    Example:
    ```
    epoch = Counter('epoch')
    epoch() = 1
    epoch_2 = Counter('epoch')
    epoch_2() = 2
    ```
    """

    counters = collections.defaultdict(int)

    def __init__(self, name: str, initial:int=1):
        self.name = name
        self.counters[name] += initial if self.counters[name] < initial else 1

    def update(self, val: int=1):
        self.counters[self.name] += val
    
    def __call__(self) -> int:        
        return self.counters[self.name]

    
def set_logger(log_path):
    """Set the logger to log info in terminal and file `log_path`.
    In general, it is useful to have a logger so that every output to the terminal is saved
    in a permanent file. Here we save it to `model_dir/train.log`.
    Example:
    ```
    logging.info("Starting training...")
    ```
    Args:
        log_path: (string) the file to store all the log
    """
    logger = logging.getLogger()
    logger.setLevel(logging.INFO)

    if not logger.handlers:
        # Logging to a file
        file_handler = logging.FileHandler(log_path)
        file_handler.setFormatter(logging.Formatter('%(asctime)s:%(levelname)s: %(message)s'))
        logger.addHandler(file_handler)

        # Logging to console
        stream_handler = logging.StreamHandler()
        stream_handler.setFormatter(logging.Formatter('%(message)s'))
        logger.addHandler(stream_handler)


def save_dict_to_json(d, json_path):
    """Saves dict of floats in json file
    Args:
        d: (dict) of float-castable values (np.float, int, float, etc.)
        json_path: (string) path to json file
    """
    with open(json_path, 'w') as f:
        # We need to convert the values to float for json (it doesn't accept np.array, np.float, )
        d = {k: float(v) for k, v in d.items()}
        json.dump(d, f, indent=4)


def load_json_to_dict(json_path):
    """Saves dict of floats in json file
    Args:
        json_path: (string) path to json file
    Return:
        d: (dict) of float-castable values (np.float, int, float, etc.)
    """
    with open(json_path) as f:
        d = json.load(f)
    
    return d


def save_checkpoint(state, is_best, checkpoint):
    """Saves model and training parameters at checkpoint + 'last.pth.tar'. If is_best==True, also saves
    checkpoint + 'best.pth.tar'
    Args:
        state: (dict) contains model's state_dict, may contain other keys such as epoch, optimizer state_dict
        is_best: (bool) True if it is the best model seen till now
        checkpoint: (string) folder where parameters are to be saved
    """
    filepath = os.path.join(checkpoint, 'last.pth.tar')
    if not os.path.exists(checkpoint):
        print("Checkpoint Directory does not exist! Making directory {}".format(checkpoint))
        os.mkdir(checkpoint)
    else:
        print("Checkpoint Directory exists! ")
    torch.save(state, filepath)
    if is_best:
        shutil.copyfile(filepath, os.path.join(checkpoint, 'best.pth.tar'))


def load_checkpoint(checkpoint, model, optimizer=None, scheduler=None):
    """Loads model parameters (state_dict) from file_path. If optimizer is provided, loads state_dict of
    optimizer assuming it is present in checkpoint.
    Args:
        checkpoint: (string) filename which needs to be loaded
        model: (torch.nn.Module) model for which the parameters are loaded
        optimizer: (torch.optim) optional: resume optimizer from checkpoint
        scheduler: (torch.optim.lr_scheduler) optional: resume scheduler from checkpoint
    """
    if not os.path.exists(checkpoint):
        raise("File doesn't exist {}".format(checkpoint))
    checkpoint = torch.load(checkpoint)
    model.load_state_dict(checkpoint['state_dict'])

    if optimizer:
        optimizer.load_state_dict(checkpoint['optim_dict'])
    
    if scheduler:
        scheduler.load_state_dict(checkpoint['scheduler_dict'])

    return checkpoint


def save_torchscript(model, is_best, model_dir):
    """Saves model and training parameters at checkpoint + 'last.pth.tar'. If is_best==True, also saves
    checkpoint + 'best.pth.tar'
    Args:
        model: (nn.Module) contains model's state_dict, may contain other keys such as epoch, optimizer state_dict
        is_best: (bool) True if it is the best model seen till now
        model_dir: (string) folder where torchscript will be saved
    """

    filepath = os.path.join(model_dir, 'last.script.pth')

    model.eval()

    model_script = torch.jit.script(model)

    model_script.save(filepath)
    
    if is_best:
        shutil.copyfile(filepath, os.path.join(model_dir, 'best.script.pth'))


def count_parameters(model:torch.nn.Module) -> int:
    """Count number of parameters in a pytorch model
    Args:
        model (Type[torch.nn.Module]) a pytorch model
    Return:
        num_parameters (int) number of parameters in the model
    """
    return sum(p.numel() for p in model.parameters() if p.requires_grad)


@typing.overload
def one_hot(x: np.ndarray, num_classes:int, **kwargs) -> np.ndarray:
    ...

def one_hot(x: torch.Tensor, num_classes:int, **kwargs) -> torch.Tensor:
    """One-hot encode
    Args:
        x (np.ndarray | torch.Tensor) an array-like object
    Return:
        out (np.ndarray | torch.Tensor) an array-like object
    """
    if isinstance(x, np.ndarray):
        return np.squeeze(np.eye(num_classes)[x.reshape(-1)])
    if isinstance(x, torch.Tensor):
        return torch.nn.functional.one_hot(x, num_classes, **kwargs)


def confusion_matrix(preds: typing.Union[np.ndarray, torch.Tensor], targets: typing.Union[np.ndarray, torch.Tensor], normalize:typing.Optional[str]=None) -> np.ndarray:
    """Confusion matrix
    Args:
        preds: (np.ndarray | torch.Tensor) an array-like of predicted labels
        targets: (np.ndarray | torch.Tensor) an array-like of true labels
        normalize: (true' | 'pred'| 'all' | None) normalize by prediction, true labels, all, or un-normalized. (default=None)
    Return:
        confusion_matrix: (np.ndarray) the confusion matrix (num_classes, num_classes)
    """

    if normalize not in ['true', 'pred', 'all', None]:
        raise ValueError("normalize must be one of {'true', 'pred', ""'all', None}")

    # num of classes
    n_classes = len(targets.unique()) if isinstance(targets, torch.Tensor) else len(np.unique(targets))

    # accelerate with llvm
    @numba.njit(fastmath=True)
    def solve(n_classes:int) -> np.ndarray:
        # generate confusion matrix
        confusion_matrix = np.zeros((n_classes, n_classes), dtype=np.uint)

        for target, pred in zip(targets.reshape(-1), preds.reshape(-1)):
            confusion_matrix[int(target), int(pred)] += 1
        
        # normalization
        if normalize == 'true':
            confusion_matrix = confusion_matrix / confusion_matrix.sum(axis=1).reshape(-1, 1)
        elif normalize == 'pred':
            confusion_matrix = confusion_matrix / confusion_matrix.sum(axis=0).reshape(1,-1)
        elif normalize == 'all':
            confusion_matrix = confusion_matrix / confusion_matrix.sum()
        
        return confusion_matrix

    return solve(n_classes)


def plot_confusion_matrix(cm:np.ndarray, classes:typing.List[str]=None, title:str=None, cmap=plt.cm.Blues) -> plt.Axes:
    """Plot confusion matrix
    Args:
        cm: (np.ndarray) confusion matrix (num_classes, num_classes)
        classes: (str[]) a list of class names
        title: (str) tile for the generated plot
    Return:
        ax: (pyplot.Axes) matplotlib Axes object
    """

    # Plot title
    if title is None:
        title = 'Confusion matrix'
    
    # Calculate confusion matrix
    classes = [str(i) for i in range(cm.shape[0])] if classes is None else classes

    # create axes
    fig, ax = plt.subplots()
    im = ax.imshow(cm, interpolation='nearest', cmap=cmap)
    ax.figure.colorbar(im, ax=ax)
    ax.set(
        xticks=np.arange(cm.shape[1]), 
        yticks=np.arange(cm.shape[0]), 
        xticklabels=classes, 
        yticklabels=classes,
        title=title, 
        ylabel='True label', 
        xlabel='Predicted label'
    )

    # Rotate the tick labels and set their alignment.
    plt.setp(ax.get_xticklabels(), rotation=45, ha="right", rotation_mode="anchor")

    # Loop over data dimensions and create text annotations.
    fmt = 'd' if np.issubdtype(cm.dtype, np.integer) else '.2f'
    thresh = cm.max() / 2.
    for i in range(cm.shape[0]):
        for j in range(cm.shape[1]):
            ax.text(j, i, format(cm[i, j], fmt), ha="center", va="center", color="white" if cm[i, j] > thresh else "black")
    fig.tight_layout()
    return ax


if __name__ == "__main__":
    
    y_true = np.array([2, 0, 2, 2, 0, 1])
    y_pred = np.array([0, 0, 2, 2, 0, 2])
    
    cm = confusion_matrix(y_pred, y_true, normalize='true')
    ax = plot_confusion_matrix(cm)
    plt.show()