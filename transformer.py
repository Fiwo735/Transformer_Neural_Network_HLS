# Adapted from https://pytorch.org/tutorials/beginner/transformer_tutorial.html
import sys
import math
import copy
import time
from typing import Tuple

from torchtext.datasets import WikiText2
from torchtext.data.utils import get_tokenizer
from torchtext.vocab import build_vocab_from_iterator

import torch
from torch import nn, Tensor
import torch.nn.functional as F
from torch.nn import TransformerEncoder, TransformerEncoderLayer
from torch.utils.data import dataset, DataLoader

import energyflow

import fyp21yuan_code.nn.model.data as data

class TransformerModel(nn.Module):

    def __init__(self, ntoken: int, d_model: int, nhead: int, d_hid: int,
                 nlayers: int, dropout: float = 0.5):
        super().__init__()
        self.model_type = 'Transformer'
        self.pos_encoder = PositionalEncoding(d_model, dropout)
        encoder_layers = TransformerEncoderLayer(d_model, nhead, d_hid, dropout)
        self.transformer_encoder = TransformerEncoder(encoder_layers, nlayers)
        self.encoder = nn.Embedding(ntoken, d_model)
        self.d_model = d_model
        self.decoder = nn.Linear(d_model, ntoken)

        self.init_weights()

    def init_weights(self) -> None:
        initrange = 0.1
        self.encoder.weight.data.uniform_(-initrange, initrange)
        self.decoder.bias.data.zero_()
        self.decoder.weight.data.uniform_(-initrange, initrange)

    def forward(self, src: Tensor, src_mask: Tensor) -> Tensor:
        """
        Args:
            src: Tensor, shape [seq_len, batch_size]
            src_mask: Tensor, shape [seq_len, seq_len]

        Returns:
            output Tensor of shape [seq_len, batch_size, ntoken]
        """
        if not self.training:
          print('initial:')
          print(src)
        src = self.encoder(src) * math.sqrt(self.d_model)
        if not self.training:
          print('after encoder:')
          print(src)
        src = self.pos_encoder(src)
        if not self.training:
          print('after pos_encoder:')
          print(src)
        output = self.transformer_encoder(src, src_mask)
        if not self.training:
          print('after transformer_encoder:')
          print(output)
        output = self.decoder(output)
        if not self.training:
          print('after decoder:')
          print(output)
        return output

def generate_square_subsequent_mask(sz: int) -> Tensor:
    """Generates an upper-triangular matrix of -inf, with zeros on diag."""
    return torch.triu(torch.ones(sz, sz) * float('-inf'), diagonal=1)

class PositionalEncoding(nn.Module):

    def __init__(self, d_model: int, dropout: float = 0.1, max_len: int = 5000):
        super().__init__()
        self.dropout = nn.Dropout(p=dropout)

        position = torch.arange(max_len).unsqueeze(1)
        div_term = torch.exp(torch.arange(0, d_model, 2) * (-math.log(10000.0) / d_model))
        pe = torch.zeros(max_len, 1, d_model)
        pe[:, 0, 0::2] = torch.sin(position * div_term)
        pe[:, 0, 1::2] = torch.cos(position * div_term)
        self.register_buffer('pe', pe)

    def forward(self, x: Tensor) -> Tensor:
        """
        Args:
            x: Tensor, shape [seq_len, batch_size, embedding_dim]
        """
        x = x + self.pe[:x.size(0)]
        return self.dropout(x)

def batchify(data: Tensor, bsz: int, device: torch.device) -> Tensor:
    """Divides the data into bsz separate sequences, removing extra elements
    that wouldn't cleanly fit.

    Args:
        data: Tensor, shape [N]
        bsz: int, batch size

    Returns:
        Tensor of shape [N // bsz, bsz]
    """
    seq_len = data.size(0) // bsz
    data = data[:seq_len * bsz]
    data = data.view(bsz, seq_len).t().contiguous()
    return data.to(device)

def get_wiki_data(device: torch.device) -> Tuple[Tensor, Tensor, Tensor, int]:
  train_iter = WikiText2(split='train')
  tokenizer = get_tokenizer('basic_english')
  vocab = build_vocab_from_iterator(map(tokenizer, train_iter), specials=['<unk>'])
  vocab.set_default_index(vocab['<unk>'])

  def data_process(raw_text_iter: dataset.IterableDataset) -> Tensor:
      """Converts raw text into a flat Tensor."""
      data = [torch.tensor(vocab(tokenizer(item)), dtype=torch.long) for item in raw_text_iter]
      return torch.cat(tuple(filter(lambda t: t.numel() > 0, data)))

  # train_iter was "consumed" by the process of building the vocab,
  # so we have to create it again
  train_iter, val_iter, test_iter = WikiText2()
  train_data = data_process(train_iter)
  val_data = data_process(val_iter)
  test_data = data_process(test_iter)

  batch_size = 20
  eval_batch_size = 10
  train_data = batchify(train_data, batch_size, device)  # shape [seq_len, batch_size]
  val_data = batchify(val_data, eval_batch_size, device)
  test_data = batchify(test_data, eval_batch_size, device)

  return train_data, val_data, test_data, len(vocab)

def get_jet_data(device: torch.device) -> Tuple[Tensor, Tensor, Tensor, int]:
  dataset = energyflow.mod.load(amount=1, cache_dir='./.energyflow', collection='CMS2011AJets', dataset='cms')
  # print(dataset)
  # print(len(dataset))
  return dataset

def get_batch(source: Tensor, i: int, bptt: int = 35) -> Tuple[Tensor, Tensor]:
    """
    Args:
        source: Tensor, shape [full_seq_len, batch_size]
        i: int

    Returns:
        tuple (data, target), where data has shape [seq_len, batch_size] and
        target has shape [seq_len * batch_size]
    """
    seq_len = min(bptt, len(source) - 1 - i)
    data = source[i:i+seq_len]
    target = source[i+1:i+1+seq_len].reshape(-1)
    return data, target

def train(model: nn.Module, train_data: Tensor, epoch:int, bptt: int = 35) -> None:
    model.train()  # turn on train mode
    total_loss = 0.
    log_interval = 200
    start_time = time.time()
    src_mask = generate_square_subsequent_mask(bptt).to(device)

    num_batches = len(train_data) // bptt
    for batch, i in enumerate(range(0, train_data.size(0) - 1, bptt)):
        data, targets = get_batch(train_data, i)
        batch_size = data.size(0)
        if batch_size != bptt:  # only on last batch
            src_mask = src_mask[:batch_size, :batch_size]
        output = model(data, src_mask)
        loss = criterion(output.view(-1, ntokens), targets)

        optimizer.zero_grad()
        loss.backward()
        torch.nn.utils.clip_grad_norm_(model.parameters(), 0.5)
        optimizer.step()

        total_loss += loss.item()
        if batch % log_interval == 0 and batch > 0:
            lr = scheduler.get_last_lr()[0]
            ms_per_batch = (time.time() - start_time) * 1000 / log_interval
            cur_loss = total_loss / log_interval
            ppl = math.exp(cur_loss)
            print(f'| epoch {epoch:3d} | {batch:5d}/{num_batches:5d} batches | '
                  f'lr {lr:02.2f} | ms/batch {ms_per_batch:5.2f} | '
                  f'loss {cur_loss:5.2f} | ppl {ppl:8.2f}')
            total_loss = 0
            start_time = time.time()

def train_loop(model: nn.Module, train_data: Tensor, val_data: Tensor, epochs: int = 1) -> nn.Module:
    best_model = None
    best_val_loss = float('inf')
    
    for epoch in range(1, epochs + 1):
      epoch_start_time = time.time()
      train(model, train_data, epoch)
      val_loss = evaluate(model, val_data)
      val_ppl = math.exp(val_loss)
      elapsed = time.time() - epoch_start_time
      print('-' * 89)
      print(f'| end of epoch {epoch:3d} | time: {elapsed:5.2f}s | '
            f'valid loss {val_loss:5.2f} | valid ppl {val_ppl:8.2f}')
      print('-' * 89)

      if val_loss < best_val_loss:
          best_val_loss = val_loss
          best_model = copy.deepcopy(model)

      scheduler.step()

    return best_model

def evaluate(model: nn.Module, eval_data: Tensor, bptt: int = 35) -> float:
    model.eval()  # turn on evaluation mode
    total_loss = 0.
    src_mask = generate_square_subsequent_mask(bptt).to(device)

    with torch.no_grad():
        for i in range(0, eval_data.size(0) - 1, bptt):
            data, targets = get_batch(eval_data, i)
            batch_size = data.size(0)
            if batch_size != bptt:
                src_mask = src_mask[:batch_size, :batch_size]
            output = model(data, src_mask)
            output_flat = output.view(-1, ntokens)
            total_loss += batch_size * criterion(output_flat, targets).item()

    model.train() # turn off evaluation mode
    return total_loss / (len(eval_data) - 1)

if __name__ == "__main__":

  device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')
  train_data, val_data, test_data, ntokens = get_wiki_data(device)
  datasets = data.get_dataset('fyp21yuan_code/data/processed', splits=['train-val', 'test'])
  train_data2 = datasets['train-val']
  # train_loader = DataLoader(train_data2, batch_size=20, shuffle=True, collate_fn=data.get_collate_fn())
  exit()

  emsize = 200  # embedding dimension
  d_hid = 200  # dimension of the feedforward network model in nn.TransformerEncoder
  nlayers = 2  # number of nn.TransformerEncoderLayer in nn.TransformerEncoder
  nhead = 2  # number of heads in nn.MultiheadAttention
  dropout = 0.2  # dropout probability
  lr = 5.0  # learning rate
  epochs = 1

  model = TransformerModel(ntokens, emsize, nhead, d_hid, nlayers, dropout).to(device)
  criterion = nn.CrossEntropyLoss()
  optimizer = torch.optim.SGD(model.parameters(), lr=lr)
  scheduler = torch.optim.lr_scheduler.StepLR(optimizer, 1.0, gamma=0.95)

  model_path = 'current_model.pth'

  if len(sys.argv) > 1 and sys.argv[1] == 'train':
    print('Training model...')
    best_model = train_loop(model=model, train_data=train_data, val_data=val_data, epochs=epochs)
    torch.save(best_model, model_path)

  else:
    print('Loading model...')
    best_model = torch.load(model_path)

  torch.set_printoptions(profile="full", sci_mode=False)
  print(best_model)
  test_loss = evaluate(best_model, test_data[0:8])
  torch.set_printoptions(profile="default")
  test_ppl = math.exp(test_loss)
  print('=' * 89)
  print(f'| End of training | test loss {test_loss:5.2f} | test ppl {test_ppl:8.2f}')
  print('=' * 89)