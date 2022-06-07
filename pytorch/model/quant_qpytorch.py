import torch
import torch.nn as nn
import torch.nn.functional as F
import numpy as np
import typing

from qtorch import FixedPoint
from qtorch.quant import Quantizer, quantizer

# ----------------- BIT WIDTHS -----------------
WL = 64
FL = 40

QUANTIZER = lambda : Quantizer(
    forward_number=FixedPoint(wl=WL, fl=FL),
    backward_number=FixedPoint(wl=WL, fl=FL),
    forward_rounding='nearest',
    backward_rounding='stochastic',
)
WEIGHT_QUANT = quantizer(
    forward_number=FixedPoint(wl=WL, fl=FL),
    backward_number=FixedPoint(wl=WL, fl=FL),
    forward_rounding='nearest',
    backward_rounding='stochastic',
)
GRAD_QUANT = quantizer(
    forward_number=FixedPoint(wl=WL, fl=FL),
    backward_number=FixedPoint(wl=WL, fl=FL),
    forward_rounding='nearest',
    backward_rounding='stochastic',
)
MOMENTUM_QUANT = quantizer(
    forward_number=FixedPoint(wl=WL, fl=FL),
    backward_number=FixedPoint(wl=WL, fl=FL),
    forward_rounding='nearest',
    backward_rounding='stochastic',
)
ACC_QUANT = quantizer(
    forward_number=FixedPoint(wl=WL, fl=FL),
    backward_number=FixedPoint(wl=WL, fl=FL),
    forward_rounding='nearest',
    backward_rounding='stochastic',
)
# ---------------------------------------------

class SelfAttentionQuantQPyTorch(nn.Module):

    def __init__(self, in_dim:int, latent_dim:typing.Optional[int]=None, num_heads:int=1, is_debug:bool = False) -> None:

        super(SelfAttentionQuantQPyTorch, self).__init__()
        self.is_debug = is_debug
        self.in_dim = in_dim
        self.channel_in = in_dim # C
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.head_dim = self.latent_dim // num_heads
        self.heads = num_heads

        self.norm = nn.BatchNorm1d(in_dim)

        self.q = nn.Linear(in_dim, in_dim, bias=False)
        self.k = nn.Linear(in_dim, in_dim, bias=False)
        self.v = nn.Linear(in_dim, in_dim, bias=False)

        self.out = nn.Linear(in_dim, in_dim)

        self.quant = QUANTIZER()

        # TODO can this be done better?
        self.num_particles = 30
        self.pre_exp_norm = nn.BatchNorm1d((self.num_particles + 1) * (self.num_particles + 1))

        assert  (in_dim // num_heads) * num_heads == in_dim, "Embedding dim needs to be divisible by num_heads"
        assert  self.head_dim * num_heads ==  self.latent_dim, "Latent dim needs to be divisible by num_heads."

        torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)
    
    def debug_print(self, name: str, t):
        if self.is_debug and not self.training:
            print(f"\nSA: {name} -> {t.size()}")
            print(t)

    def forward(self, x):

        m_batch, seq_len, C = x.size()
        self.debug_print('input', x)

        out = self.quant(self.norm(x.transpose(1,2)).transpose(1,2))
        self.debug_print('out (after norm)', out)

        out_q = self.quant(self.q(out))
        self.debug_print('out_q', out_q)

        out_k = self.quant(self.k(out))
        self.debug_print('out_k', out_k)

        out_v = self.quant(self.v(out))
        self.debug_print('out_v', out_v)

        queries, keys, values = out_q.view(m_batch, seq_len, self.heads, -1), out_k.view(m_batch, seq_len, self.heads, -1), out_v.view(m_batch, seq_len, self.heads, -1)
        self.debug_print('queries', queries)
        self.debug_print('keys', keys)
        self.debug_print('values', values)

        energy = self.quant(torch.einsum("nqhc,nkhc->nhqk", [queries, keys]))  # (batch_m, num_heads, seq_len, seq_len)
        self.debug_print('energy', energy)

        energy_norm_pre = energy.view(m_batch, self.heads, -1).transpose(1,2)
        self.debug_print('energy_norm_pre', energy_norm_pre)

        energy_norm = self.quant(self.pre_exp_norm(energy_norm_pre))
        self.debug_print('energy_norm', energy_norm)

        energy_post = energy_norm.transpose(1,2).view(m_batch, self.heads, self.num_particles+1, self.num_particles+1)
        self.debug_print('energy_post', energy_post)

        attention = self.quant(torch.softmax(energy_post / (C ** (1 / 2)), dim=-1)) # (batch_m, num_heads, seq_len, seq_len)
        self.debug_print('attention', attention)

        out = self.quant(torch.einsum("nhql,nlhc->nqhc", [attention, values])) # (batch_m, seq_len, num_heads, C//num_head)
        self.debug_print('out (after einsum)', out)

        out = out.reshape(m_batch, seq_len, -1) # (batch_m, seq_len, C)
        self.debug_print('out (after reshape)', out)

        out = self.quant(self.out(out))
        self.debug_print('out (after out())', out)

        final_sum = self.quant(out + x)
        self.debug_print('final_sum (before returning)', final_sum)
        
        return final_sum

class Transformer(nn.Module):

    def __init__(self, in_dim:int, latent_dim:typing.Optional[int]=None, num_heads:int=1, dropout:float=0., is_debug:bool = False) -> None:
        super(Transformer, self).__init__()
        self.is_debug = is_debug
        self.in_dim = in_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.channel_in = in_dim
        self.self_attention = SelfAttentionQuantQPyTorch(in_dim, latent_dim=self.latent_dim, num_heads=num_heads, is_debug=self.is_debug)

        self.linear_0 = nn.BatchNorm1d(in_dim)
        self.linear_1 = nn.ReLU()
        self.linear_2 = nn.Linear(in_dim, in_dim*2, bias=False)
        self.linear_3 = nn.BatchNorm1d(in_dim*2)
        self.linear_4 = nn.ReLU()
        self.linear_5 = nn.Linear(in_dim*2, in_dim, bias=False)

        self.dropout = nn.Dropout(dropout)

        self.quant = QUANTIZER()

        torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

    def debug_print(self, name: str, t):
        if self.is_debug and not self.training:
            print(f"\nT: {name} -> {t.size()}")
            print(t)

    def forward(self, x):

        self.debug_print('input', x)

        x = self.self_attention(x)
        self.debug_print('x (after self-attention)', x)


        out0 = self.quant(self.linear_0(x.transpose(1,2)).transpose(1,2))
        self.debug_print('out0 (after linear_0)', out0)

        out1 = self.quant(self.linear_1(out0))
        self.debug_print('out1 (after linear_1)', out1)

        out2 = self.quant(self.linear_2(out1))
        self.debug_print('out2 (after linear_2)', out2)

        out3 = self.quant(self.linear_3(out2.transpose(1,2)).transpose(1,2))
        self.debug_print('out3 (after linear_3)', out3)

        out4 = self.quant(self.linear_4(out3))
        self.debug_print('out4 (after linear_4)', out4)

        out5 = self.quant(self.linear_5(out4))
        self.debug_print('out5 (after linear_5)', out5)

        out = self.quant(x + out5)
        self.debug_print('out (after x + out)', out)

        # out =  self.dropout(out)
        # self.debug_print('out (after dropout)', out)

        return out

class ConstituentNetQuantQPyTorch(nn.Module):

    def __init__(
      self,
      in_dim: int = 16,
      embbed_dim: int = 128,
      num_heads: int = 2,
      num_classes: int = 5,
      num_transformers: int = 4,
      dropout: float = 0.,
      is_debug: bool = False,
    ) -> None:

        super(ConstituentNetQuantQPyTorch, self).__init__()
        self.is_debug = is_debug
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_transformers = num_transformers
        
        self.inp_layer = nn.Linear(in_dim, embbed_dim)

        self.out_layer_0 = nn.BatchNorm1d(embbed_dim)
        self.out_layer_1 = nn.Linear(embbed_dim, num_classes)
        
        self.cls_token = nn.Parameter(torch.randn(1, 1, embbed_dim)) # learned classification token, (1, 1, C)
        self.transformers = nn.ModuleList([
            Transformer(embbed_dim, num_heads=num_heads, dropout=dropout, is_debug=self.is_debug) for _ in range(num_transformers)
        ])

        self.quant = QUANTIZER()

        torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

    def debug_print(self, name: str, t):
        if self.is_debug and not self.training:
            print(f"\n{name} -> {t.size()}")
            print(t)

    def forward(self, x):

        m_batch, seq_len, _ = x.size() # (m_batch, seq_len=100, input_dim=16)
        self.debug_print('input', x)

        x = self.quant(x)
        self.debug_print('x quant', x)

        # Input layer
        out = self.quant(self.inp_layer(x)) # (m_batch, seq_len, C)
        self.debug_print('out (after input layer)', out)

        # Append class tokens to input
        cls_tokens = self.quant(self.cls_token.repeat(m_batch, 1, 1))
        self.debug_print('cls_tokens', cls_tokens)

        out = torch.cat((cls_tokens, out), dim=1) # (m_batch, seq_len + 1, C)
        self.debug_print('out (after class tokens)', out)

        # Transformer layers
        for transformer in self.transformers:
            out = transformer(out)       # (m_batch, seq_len + 1, C)
            self.debug_print('out (after transformer layer)', out)

        # Output layer
        out = out[:, 0]                           # (m_batch, 1, C
        self.debug_print('out (after out[:, 0])', out)

        out = self.quant(self.out_layer_0(out))
        self.debug_print('out (after out layer 0)', out)

        out = self.quant(self.out_layer_1(out))
        self.debug_print('out (after out layer 1)', out)

        out = out.squeeze(1)
        self.debug_print('out (after squeeze())', out)

        final_result = self.quant(F.log_softmax(out, dim=-1))
        self.debug_print('final_result (softmax)', final_result)

        return final_result