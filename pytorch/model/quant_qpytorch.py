import torch
import torch.nn as nn
import torch.nn.functional as F
import numpy as np

from qtorch.quant import Quantizer, quantizer

class ConstituentNetQuantQPyTorch(nn.Module):

    """
        ConstituentNet Base Model
    """

    def __init__(
      self,
      in_dim: int = 16,
      embbed_dim: int = 128,
      num_heads: int = 2,
      num_classes: int = 5,
      num_transformers: int = 4,
      dropout: float = 0.,
      is_debug: bool = False,
      input_q: Tuple[int] = (3,),
      embedding_q: Tuple[int, int, int, int] = (3, 3, 3, 3),
      norm_q: Tuple[int, int, int, int] = (3, 3, 3, 3),
      out_q: Tuple[int, int, int, int] = (3, 3, 3, 3),

      **kwargs
    ) -> None:

        super(ConstituentNetQuantQPyTorch, self).__init__()
        self.is_debug = is_debug
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_transformers = num_transformers
        
        self.inp_layer = nn.Linear(in_dim, embbed_dim)
        # self.out_layer = nn.Sequential(
        #     nn.LayerNorm(embbed_dim),
        #     nn.Linear(embbed_dim, num_classes)
        # )
        # self.out_layer_0 = nn.LayerNorm(embbed_dim)
        self.out_layer_0 = nn.BatchNorm1d(embbed_dim)
        self.out_layer_1 = nn.Linear(embbed_dim, num_classes)
        
        self.cls_token = nn.Parameter(torch.randn(1, 1, embbed_dim)) # learned classification token, (1, 1, C)
        self.transformers = nn.ModuleList([
            Transformer(embbed_dim, num_heads=num_heads, dropout=dropout, is_debug=self.is_debug) for _ in range(num_transformers)
        ])

        # self.curr_mean = 0.0
        # self.curr_var = 0.0
        self.curr_mean = None
        self.curr_var = None
        self.counter = 0

        torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

    def get_avg_mean(self):
        # return self.curr_mean / self.counter
        # return torch.div(self.curr_mean, self.counter)
        return self.out_layer_0.running_mean

    def get_avg_var(self):
        # return self.curr_var / self.counter
        # return torch.div(self.curr_var, self.counter)
        return self.out_layer_0.running_var

    def get_counter(self):
        return self.counter

    def debug_print(self, name: str, t):
        if self.is_debug and not self.training:
            print(f"\n{name} -> {t.size()}")
            print(t)

    def forward(self, x):

        m_batch, seq_len, _ = x.size() # (m_batch, seq_len=100, input_dim=16)
        self.debug_print('input', x)

        # Input layer
        out = self.inp_layer(x) # (m_batch, seq_len, C)
        self.debug_print('out (after input layer)', out)

        # Append class tokens to input
        cls_tokens = self.cls_token.repeat(m_batch, 1, 1)
        out = torch.cat((cls_tokens, out), dim=1) # (m_batch, seq_len + 1, C)
        self.debug_print('cls_tokens', cls_tokens)
        self.debug_print('out (after class tokens)', out)

        # Transformer layers
        for transformer in self.transformers:
            out = transformer(out)       # (m_batch, seq_len + 1, C)
            self.debug_print('out (after transformer layer)', out)

        # Output layer
        out = out[:, 0]                           # (m_batch, 1, C
        self.debug_print('out (after out[:, 0])', out)

        # For normalization calculation embedding
        with torch.no_grad():
            if self.training:
                # print(f'{out.shape=}')
                cur_var = torch.var(out, dim=0, unbiased=False)
                self.curr_var = (self.curr_var + cur_var) if self.curr_var is not None else (cur_var)
                # print(f'{cur_var.shape=}')
                # print(f'{self.curr_var.shape=}')
                cur_mean = torch.mean(out, dim=0)
                self.curr_mean = (self.curr_mean + cur_mean) if self.curr_mean is not None else (cur_mean)
                # print(f'{cur_mean.shape=}')
                # print(f'{self.curr_mean.shape=}')
                self.counter += 1

        out = self.out_layer_0(out)
        self.debug_print('out (after out layer 0)', out)

        out = self.out_layer_1(out)
        self.debug_print('out (after out layer 1)', out)

        out = out.squeeze(1)
        self.debug_print('out (after squeeze())', out)
            
        # out = self.out_layer(out).squeeze(1)      # (m_batch, 1, C) -> (batch_m, num_classes)
        # if not self.training:
        #     print("out (after out layer)")
        #     print(out)

        # final_result = torch.sub(out, out.max(dim=-1, keepdim=True).values)
        final_result = F.log_softmax(out, dim=-1)
        # final_result = F.softmax(out, dim=-1)
        self.debug_print('final_result (softmax)', final_result)

        return final_result