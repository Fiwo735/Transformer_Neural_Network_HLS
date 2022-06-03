import torch
import torch.nn as nn
import torch.nn.functional as F
import numpy as np

import brevitas.nn as qnn
from brevitas.core.scaling import ParameterScaling
from brevitas.core.bit_width import BitWidthParameter
from brevitas.quant import Int8ActPerTensorFixedPoint as fp8a
from brevitas.quant import Int8WeightPerTensorFixedPoint as fp8w
from brevitas.quant import Int8BiasPerTensorFixedPointInternalScaling as fp8b
from brevitas.quant_tensor import QuantTensor

import typing
from typing import Tuple, Optional

class SelfAttentionQuantBrevitas(nn.Module):
  """Quant Self-Attention"""
  def __init__(self, in_dim:int, latent_dim:Optional[int]=None, num_heads:int=1, is_debug:bool = False) -> None:
    """
    Args :
        in_dim (int) : the channel dimension of queries tensor. (C)
        latent_dim (int) : the latent channel dimension (num_heads * head_dim, default equal to C)
        num_heads (int) : number of attention heads
    """

    super(SelfAttentionQuantBrevitas, self).__init__()
    self.is_debug = is_debug
    self.in_dim = in_dim
    # print(f"SelfAttention.in_dim={self.in_dim}")
    self.channel_in = in_dim # C
    self.latent_dim = latent_dim if latent_dim is not None else in_dim
    self.head_dim = self.latent_dim // num_heads
    self.heads = num_heads

    self.norm = nn.BatchNorm1d(in_dim)

    self.q = qnn.QuantLinear(
      in_dim,
      in_dim,
      bias=False,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=True,
    )

    self.k = qnn.QuantLinear(
      in_dim,
      in_dim,
      bias=False,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=True,
    )

    self.v = qnn.QuantLinear(
      in_dim,
      in_dim,
      bias=False,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=True,
    )

    self.out = qnn.QuantLinear(
      in_dim,
      in_dim,
      bias=False,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=False,
    )

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

        """
        Args :
            x : input feature maps (batch_m, seq_len, C)
        Returns :
            out : self attention value + input feature (batch_m, seq_len, C)
        """

        m_batch, seq_len, C = x.size()
        self.debug_print('input', x)
            
        # Normalization across channels
        out = QuantTensor(self.norm(x.transpose(1,2)).transpose(1,2)) # Quant <- Tensor
        self.debug_print('out (after norm)', out)

        # Queries, keys, and values
        out_q = self.q(out) # Quant <- Quant
        self.debug_print('out_q', out_q)

        out_k = self.k(out) # Quant <- Quant
        self.debug_print('out_k', out_k)

        out_v = self.v(out) # Quant <- Quant
        self.debug_print('out_v', out_v)

        queries = out_q.view(m_batch, seq_len, self.heads, -1) # Quant <- Quant
        self.debug_print('queries', queries)

        keys = out_k.view(m_batch, seq_len, self.heads, -1) # Quant <- Quant
        self.debug_print('keys', keys)

        values = out_v.view(m_batch, seq_len, self.heads, -1) # Quant <- Quant
        self.debug_print('values', values)

        # Attention softmax(Q^T*K)
        energy = torch.einsum("nqhc,nkhc->nhqk", [queries.tensor, keys.tensor]) # Tensor <- Quant, Quant
        self.debug_print('energy', energy)

        energy_norm_pre = energy.view(m_batch, self.heads, -1).transpose(1,2) # Quant <- Quant
        self.debug_print('energy_norm_pre', energy_norm_pre)

        energy_norm = QuantTensor(self.pre_exp_norm(energy_norm_pre)) # Quant <- Tensor
        self.debug_print('energy_norm', energy_norm)

        energy_post = energy_norm.transpose(1,2).view(m_batch, self.heads, self.num_particles+1, self.num_particles+1) # Quant <- Quant
        self.debug_print('energy_post', energy_post)


        attention = torch.softmax(energy_post, dim=-1) # Tensor <- Quant
        self.debug_print('attention', attention)

        # Output
        out = QuantTensor(torch.einsum("nhql,nlhc->nqhc", [attention, values.tensor])) # Quant <- Tensor, Tensor
        self.debug_print('out (after einsum)', out)

        out = out.reshape(m_batch, seq_len, -1) # Quant <- Quant
        self.debug_print('out (after reshape)', out)

        out = self.out(out) # Tensor <- Quant
        self.debug_print('out (after out())', out)

        final_sum = out + x # Tensor <- Tensor, Tensor
        self.debug_print('final_sum (before returning)', final_sum)
        
        return final_sum


class TransformerQuantBrevitas(nn.Module):
  """Quant Transformer"""
  def __init__(self, in_dim:int, latent_dim:Optional[int]=None, num_heads:int=1, dropout:float=0., is_debug:bool = False) -> None:
    super(TransformerQuantBrevitas, self).__init__()
    self.is_debug = is_debug
    self.in_dim = in_dim
    # print(f"Transformer.in_dim={self.in_dim}")
    self.latent_dim = latent_dim if latent_dim is not None else in_dim
    self.channel_in = in_dim
    self.self_attention = SelfAttentionQuantBrevitas(in_dim, latent_dim=self.latent_dim, num_heads=num_heads, is_debug=self.is_debug)

    self.linear_0 = nn.BatchNorm1d(in_dim)

    self.linear_1 = qnn.QuantReLU(
      acy_quant=fp8a,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=True,
    )

    self.linear_2 = qnn.QuantLinear(
      in_dim,
      in_dim*2,
      bias=False,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=True,
    )

    self.linear_3 = nn.BatchNorm1d(in_dim*2)

    self.linear_4 = qnn.QuantReLU(
      acy_quant=fp8a,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=True,
    )

    self.linear_5 = qnn.QuantLinear(
      in_dim*2,
      in_dim,
      bias=False,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=True,
    )

    # self.dropout = nn.Dropout(dropout)

    torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)


  def debug_print(self, name: str, t):
    if self.is_debug and not self.training:
      print(f"\nT: {name} -> {t.size()}")
      print(t)

  def forward(self, x):

    """
    Args :
        x : input feature maps (batch_m, seq_len, C)
    Returns :
        out : self-attention  + linear-transformation (batch_m, seq_len, C)
        energy: self-attention energy (batch_m, seq_len, seq_len)
    """

    self.debug_print('input', x)

    out = self.self_attention(x) # Tensor <- Tensor
    self.debug_print('out (after self-attention)', out)

    out = QuantTensor(self.linear_0(x.transpose(1,2)).transpose(1,2)) # Quant <- Tensor
    self.debug_print('out (after linear_0)', out)

    out = self.linear_1(out) # Quant <- Quant
    self.debug_print('out (after linear_1)', out)

    out = self.linear_2(out) # Quant <- Quant
    self.debug_print('out (after linear_2)', out)

    out = QuantTensor(self.linear_3(out.tensor.transpose(1,2)).transpose(1,2)) # Quant <- Quant
    self.debug_print('out (after linear_3)', out)

    out = self.linear_4(out) # Quant <- Quant
    self.debug_print('out (after linear_4)', out)

    out = self.linear_5(out) # Quant <- Quant
    self.debug_print('out (after linear_5)', out)

    out = x + out.tensor # Tensor <- Tensor, Quant
    self.debug_print('out (after x + out)', out)

    # out =  self.dropout(out)
    # self.debug_print('out (after dropout)', out)

    return out


class ConstituentNetQuantBrevitas(nn.Module):
  """Quant Base Model"""
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

    super(ConstituentNetQuantBrevitas, self).__init__()
    self.is_debug = is_debug
    self.input_size = in_dim
    self.channel_in = in_dim
    self.embbed_dim = embbed_dim # C
    self.num_transformers = num_transformers

    self.inp_quant = qnn.QuantIdentity(
      bit_width=16,
      # act_quant=fp8a,
      return_quant_tensor=True,
    )
    
    self.inp_layer = qnn.QuantLinear(
      in_dim,
      embbed_dim,
      bias=True,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=False,
    )

    self.out_layer_0 = nn.BatchNorm1d(embbed_dim)
    # self.out_layer_0 = qnn.BatchNorm1dToQuantScaleBias(
    #   embbed_dim,
    #   weight_quant=fp8w,
    #   bias_quant=fp8b,
    #   input_quant=fp8a,
    #   output_quant=fp8a,
    #   return_quant_tensor=True,
    # )

    self.out_layer_1 = qnn.QuantLinear(
      embbed_dim,
      num_classes,
      bias=True,
      weight_quant=fp8w,
      bias_quant=fp8b,
      input_quant=fp8a,
      output_quant=fp8a,
      return_quant_tensor=False,
    )
    # self.out_layer_1 = nn.Linear(embbed_dim, num_classes)
    
    self.cls_token = nn.Parameter(torch.randn(1, 1, embbed_dim))

    self.transformers = nn.ModuleList([
        TransformerQuantBrevitas(embbed_dim, num_heads=num_heads, dropout=dropout, is_debug=self.is_debug) for _ in range(num_transformers)
    ])

    torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

  def debug_print(self, name: str, t):
    if self.is_debug and not self.training:
      print(f"\n{name} -> {t.size()}")
      print(t)

    # if True:
    #     print(f"\n{name} -> {t.size()} ({type(t)})")

  def forward(self, x):

    # print(f'\n1 {self.cls_token=}')

    m_batch, seq_len, _ = x.size() # (m_batch, seq_len=100, input_dim=16)
    self.debug_print('input', x)

    # print(f'{x[0][0]=}')

    # Input quant
    x = self.inp_quant(x) # Quant <- Tensor
    self.debug_print('x (after input quant)', x)
    # print(f'{x.tensor[0][0]=}')

    # Input layer
    out = self.inp_layer(x) # Tensor <- Quant
    self.debug_print('out (after input layer)', out)
    # print(f'{out.tensor[0][0]=}')

    # Append class tokens to input
    # cls_tokens = QuantTensor(self.cls_token.repeat(m_batch, 1, 1)) # Quant <- Tensor
    cls_tokens = self.cls_token.repeat(m_batch, 1, 1) # Tensor <- Tensor
    self.debug_print('cls_tokens', cls_tokens)
    # print(f'{cls_tokens.tensor[0][0]=}')

    # out = torch.cat((cls_tokens, out), dim=1) # (m_batch, seq_len + 1, C)
    # out = torch.cat([cls_tokens.tensor, out], dim=1) # Tensor <- Quant, Tensor
    out = torch.cat([cls_tokens, out], dim=1) # Tensor <- Tensor, Tensor
    self.debug_print('out (after class tokens)', out)
    # print(f'\n4 {out.tensor[0][0:2]=}')

    # Transformer layers
    for transformer in self.transformers:
        out = transformer(out) # Tensor <- Tensor
        self.debug_print('out (after transformer layer)', out)

    # Output layer
    out = QuantTensor(out[:, 0]) # Quant <- Tensor
    self.debug_print('out (after out[:, 0])', out)
    # print(f'\n5 {out.tensor[0]=}')

    # out = self.out_layer_0(out)
    out = QuantTensor(self.out_layer_0(out.tensor)) # Quant <- Quant
    # print(f'\n6.1 {out[0]=}')
    self.debug_print('out (after out layer 0)', out)
    # print(f'\n6 {out.tensor[0]=}')
    # print(f'\n6 {out[0][0]=}')

    out = self.out_layer_1(out)  # Tensor <- Quant
    self.debug_print('out (after out layer 1)', out)
    # print(f'\n7 {out.tensor[0]=}')

    out = out.squeeze(1) # Tensor <- Tensor
    self.debug_print('out (after squeeze())', out)

    final_result = F.log_softmax(out, dim=-1) # Tensor <- Tensor
    self.debug_print('final_result (softmax)', final_result)
    # print(f'\n8.1 {final_result[0]=}')

    # if self.index > 30:
    #   quit()
    # else:
    #   self.index += 1


    return final_result