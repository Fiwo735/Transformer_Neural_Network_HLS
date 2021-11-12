import enum
import typing
import enum
import collections
from pathlib import Path


import h5py
import numpy as np
import torch
from torch.utils.data import Dataset, DataLoader


class Features(str, enum.Enum):
    """
        HDF5 dataset group names.
    """
    
    jetConstituentList = 'jetConstituentList' # shape (10000, 100, 16), type "<f8">,
    jetImage = 'jetImage'                     # shape (10000, 100, 100), type "<f8">,
    jetImageECAL = 'jetImageECAL'             # shape (10000, 100, 100), type "<f8">,
    jetImageHCAL = 'jetImageHCAL'             # shape (10000, 100, 100), type "<f8">,
    jets = 'jets'                             # shape (10000, 59), type "<f8">,
    particleFeatureNames = 'particleFeatureNames' # shape (17,), type "|O">,
    jetFeatureNames = 'jetFeatureNames'       # shape (59,), type "|O">,


class Sample(typing.NamedTuple):
    """
        Sample returned by calling dataset.
    """
    
    input_seq : np.ndarray          # (100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
    input_1d : np.ndarray           # (59-6, )
    input_2d : np.ndarray           # (100, 100, 3) - merge of three jet images
    target : int                    # int, [0, 5] -> ['j_g', 'j_q', 'j_w', 'j_z', 'j_t] 
    jet : np.ndarray                # (59)
    jetImage : np.ndarray           # (100, 100)
    jetImageECAL : np.ndarray       # (100, 100)
    jetImageHCAL : np.ndarray       # (100, 100)
    jetConstituentList : np.ndarray # (100, 16)


class Cache(collections.OrderedDict): 
    """
       Fix sized dictionary.
    """

    def __init__(self, *args, max:typing.Optional[int]=None, **kwargs):
        self._max = max
        super().__init__(*args, **kwargs)
        self._check_size_limit()
    
    def __setitem__(self, key, value):
        collections.OrderedDict.__setitem__(self, key, value)
        self._check_size_limit()

    def _check_size_limit(self):
        if self._max is not None:
            while len(self) > self._max:
                self.popitem(last=False)


class JetDataset(Dataset):
    """
        Jet-tagging Dataset
    """

    def __init__(self, data_dir:typing.Optional[str]=None, transform=None, recursive:bool=True, lazy:bool=True, cache_size:int=16) -> None:
        """
        Args:
            data_dir (string, optional): Directory with all data.
            transform (callable, optional): Optional transform to be applied on a sample.
            recursive (bool): If True, searches for h5 files in subdirectories.
            lazy (bool): If True, only load h5 files when needed.
            cache_size (int): Max number of h5 files that will be cached.
        """

        if data_dir is None:
            data_dir : Path = Path(__file__).parent / "../../data/processed/train-val"
        else:
            data_dir : Path = Path(data_dir)
        
        assert data_dir.is_dir(), f"argument data_dir needs to be a valid directory (got {data_dir})"
        
        if recursive:
            file_paths = list(data_dir.glob('**/*.h5'))
        else:
            file_paths = list(data_dir.glob('*.h5'))
        
        if len(file_paths) < 1:
            raise RuntimeError('No hdf5 files found')

        if not lazy:
            data = self.load_hdf5_files(file_paths[0:max(cache_size, len(file_paths))])
        else:
            data = {}
      
        self.data_dir = data_dir
        self.transform = transform
        self.file_paths = file_paths
        self.data = Cache(data, max=cache_size)

        self._jetFeatureNames = None
        self._particleFeatureNames = None

    def __len__(self) -> int:
        subset_lengths = []
 
        for file_path in self.file_paths:
            with h5py.File(file_path) as file:
                subset_lengths.append(len(file['jets']))

        return sum(subset_lengths)
    
    def __getitem__(self, idx:int) -> Sample:
        """
        Get training sample by index.
        Args:
            idx: (int) index in [0, 1, ..., size_of_dataset-1]
        Returns:
            sample: (Sample) one training sample
        """

        if torch.is_tensor(idx):
            idx = idx.tolist()

        # get corresponding hdf5 file
        file_idx = idx // 10000
        features = self.get_file_data_by_id(file_idx)
        
        # get corresponding training example
        jet = features['jets'][idx % 10000]
        jetImage = features['jetImage'][idx % 10000]
        jetImageECAL = features['jetImageECAL'][idx % 10000]    
        jetImageHCAL = features['jetImageHCAL'][idx % 10000]
        jetConstituentList = features['jetConstituentList'][idx % 10000]

        # get inputs
        target = int(np.argmax(jet[-6:-1])) # int
        input_seq = jetConstituentList      # (100, 16)
        input_1d = jet[:-6]                 # (53, )
        input_2d = np.dstack(
            [jetImage, jetImageECAL, jetImageHCAL]
        )                              # (100, 100, 3)
        
        # sample tuple
        sample = Sample(
            input_seq = input_seq,         # (100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
            input_1d = input_1d,           # (59-6, )
            input_2d = input_2d,           # (100, 100, 3) - merge of three jet images
            target = target,               # int
            jet = jet,                     # (59)
            jetImage = jetImage,           # (100, 100)
            jetImageECAL = jetImageECAL,   # (100, 100)
            jetImageHCAL = jetImageHCAL,   # (100, 100)
            jetConstituentList = jetConstituentList  # (100, 16)
        )

        # apply transformation (torch-vision transform-like)
        if self.transform is not None:
            sample = self.transform(sample)
        
        return sample

    @property
    def jetFeatureNames(self) -> typing.List[str]:
        """
        Return:
            lengths (list[str]): the list of jet feature names. (len == (59))
        """

        if self._jetFeatureNames is None:
            with h5py.File(self.file_paths[0]) as file:
                self._jetFeatureNames = [name.decode('utf-8') for name in list(file['jetFeatureNames'])]
        return self._jetFeatureNames

    @property
    def particleFeatureNames(self) -> typing.List[str]:
        """
        Return:
            lengths (list[str]): the list of constituparticle feature names. (len == (17)) 
        """
        if self._particleFeatureNames is None:
            with h5py.File(self.file_paths[0]) as file:
                self._particleFeatureNames = [ name.decode('utf-8') for name in list(file['particleFeatureNames'])]
        return self._particleFeatureNames
    
    def get_file_data_by_id(self, file_idx: int):
        """
        Load single hdf5 data by file_idx.
        Args:
            file_idx: (int) the index of a hdf5 file in file_paths (list) property.
        Returns:
            data: (Dict[str, h5py.Dataset]) a hash table of read hdf5 datasets.
        """


        if file_idx not in self.data:
            self.data[file_idx] = self.load_hdf5_file(self.file_paths[file_idx])
          
        return  self.data[file_idx]

    @staticmethod
    def load_hdf5_file(file_path: Path) -> typing.Dict[str, np.ndarray]:
        """
        Load all hdf5 datasets.
        Args:
            file_paths: (List[Path]) a list of hdf5 file paths.
        Returns:
            data: (Dict[str, np.ndarray]) a hash table of hdf5 file dataset
        """

        data = dict()

        with h5py.File(file_path) as file:
            for feature_name, feature in file.items():
                if feature_name not in ['jetFeatureNames', 'particleFeatureNames']:
                    data[feature_name]= np.array(feature) #.setflags(write=False)
        
        return data
    
    @staticmethod
    def load_hdf5_files(file_paths:typing.List[Path]) -> typing.Dict[int, typing.Dict[str, np.ndarray]]:

        """
        Load all hdf5 datasets.
        Args:
            file_paths: (List[Path]) a list of hdf5 file paths.
        Returns:
            data: (Dict[int, Dict[str, np.ndarray]]) a hash table of read hdf5 datasets.
        """

        data = dict()

        for idx, file_path in enumerate(file_paths):
            data[idx] = JetDataset.load_hdf5_file(file_path=file_path)
        
        return data


class BucketSampler(torch.utils.data.Sampler[int]):

    """
    Bucket Sampler
    
    (1) separate dataset samples into buckets (approx. number of hdf5 files)
    (2) return random sampled batches by shuffling buckets order & sample order within bucket
    """
    
    def __init__(self, num_samples:int, num_buckets:int=45, shuffle=True):

        """
        Args:
            num_samples (int): number of samples in the dataset
            num_buckets (int): number of independent buckets to sample data
            shuffle (bool): true -> random shuffle buckets order & sample order within bucket
        Return:
            None
        """
                
        self.shuffle = shuffle
        self.num_samples = num_samples
        self.num_buckets = num_buckets
        self.bucket_range : typing.List[typing.Tuple[int, int]] = [
            (i, min(i + num_samples//num_buckets, num_samples)) for i in range(0, num_samples, num_samples//num_buckets)
        ] # [[start_id, end_id),...,[start_id,num_samples)]
            
    def __iter__(self):

        if self.shuffle != True:
            yield from range(self.num_samples)

        generator = torch.Generator()
        generator.manual_seed(int(torch.empty((), dtype=torch.int64).random_().item()))

        for bucket in torch.randperm(self.num_buckets, generator=generator).tolist():
            for bucket_idx in torch.randperm(self.bucket_range[bucket][1] - self.bucket_range[bucket][0], generator=generator).tolist():
                yield self.bucket_range[bucket][0] + bucket_idx
    
    def __len__(self):
        return self.num_samples


class RandomPermute(object):
    """Permute randomly the constituent list"""

    def __call__(self, sample:Sample) -> Sample:

        input_seq = sample.input_seq

        # Permutated sequence
        permutation = np.random.permutation(len(input_seq))

        # Permute orignial sample
        input_seq = input_seq[permutation]

        return Sample(
            input_seq = input_seq,                # (100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
            input_1d = sample.input_1d,           # (59-6, )
            input_2d = sample.input_2d,           # (100, 100, 3) - merge of three jet images
            target = sample.target,               # int
            jet = sample.jet,                     # (59)
            jetImage = sample.jetImage,           # (100, 100)
            jetImageECAL = sample.jetImageECAL,   # (100, 100)
            jetImageHCAL = sample.jetImageHCAL,   # (100, 100)
            jetConstituentList = sample.jetConstituentList  # (100, 16)
        )


def get_collate_fn(stage="train", params=None):
    """
    Get the collate function that is used in dataloader.
    
    Args:
        params (Param)
    Return:
        collate_fn (function): A callable collate_fn
    """

    assert stage in ["train", "val"], "stage is either `train` or `val`" 

    def collate_fn(batch):
        """
        Collate function
        
        (1) padd batch input tensors
        (2) create masks for the input tensors
        Args:
            batch (Sample[]): a list of Sample namedtuples 
        Return:
            batch (dict): a dict of torch.Tensors or lists
        """

        # Unpack Samples[]
        input_seqs, input_1ds, input_2ds, targets, jets, jetImages, jetImageECALs, jetImageHCALs, jetConstituentLists = zip(*batch)
      
        # create torch tensors: inputs, input_0ds, targets
        input_seqs = torch.tensor(input_seqs, dtype=torch.float32)
        input_1ds = torch.tensor(input_1ds, dtype=torch.float32)[:,[12, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 48, 52]]
        input_2ds = torch.tensor(input_2ds, dtype=torch.float32)
        targets = torch.tensor(targets, dtype=torch.long) # float64 (n, )  

        return {
            'input_seqs' : input_seqs,         # torch.tensor (n, 100, 16) - the first 100 highest-$p_T$ particles are considered for each jet
            'input_1ds' : input_1ds,           # torch.tensor (n, 16)
            'input_2ds' : input_2ds,           # torch.tensor (n, 100, 100, 3) - merge of three jet images
            'targets' : targets,               # torch.tensor (n, )
            'jets' : jets,                     # List[int] (59)
            'jetImages' : jetImages,           # List[np.ndarray] (n, (100, 100))
            'jetImageECALs' : jetImageECALs,   # List[np.ndarray] (n, (100, 100))
            'jetImageHCALs' : jetImageHCALs,   # List[np.ndarray] (n, (100, 100))
            'jetConstituentLists' : jetConstituentLists  # List[np.ndarray] (n, (100, 16))
        }

    return collate_fn


def get_dataset(data_dir=None, splits:typing.List[str]=['train-val']):
    """
    Get the Dataset object for each split in splits.
    Args:
        data_dir: (string) directory containing the dataset
        splits: (list[str]) has one or more of 'train-val', 'test', depending on which data is required
    Returns:
        datasets: (dict) contains the Dataset object for each type in splits
    """

    if data_dir is None:
        data_dir : Path = Path(__file__).parent / "../../data/processed"
    else:
        data_dir : Path = Path(data_dir)
    
    assert data_dir.is_dir(), f"argument data_dir needs to be a valid directory (got {data_dir})"

    datasets = {}

    for split in ['train-val', 'test']:
        transform = RandomPermute() if split == 'train-val' else None
        if split in splits:
            dataset = JetDataset(data_dir / split, transform=transform)
            datasets[split] = dataset

    return datasets


if __name__ == "__main__":
    # create dataset
    print("Creating datasets...")
    dataset = get_dataset()

    print(f"size of dataset: {len(dataset)}")
    # print("First sample from dataset:", dataset[0])

    # create dataloaders
    print("Creating dataloaders...")
    collate_fn = get_collate_fn()
    train_set, val_set = torch.utils.data.random_split(dataset, [len(dataset)-100, 100])

    train_loader = DataLoader(train_set, shuffle=True, batch_size=4, collate_fn=collate_fn)
    val_loader = DataLoader(val_set, shuffle=True, batch_size=4, collate_fn=collate_fn)

    # print first batches:
    print(f"first train batch (batch-size of 4): {next(iter(train_loader))}")
    print(f"first val batch (batch-size of 4): {next(iter(val_loader))}")