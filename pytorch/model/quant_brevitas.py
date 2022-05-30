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


from typing import Tuple

class ConstituentNetQuantBrevitas(nn.Module):

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
      **kwargs
    ) -> None:

        super(ConstituentNetQuantBrevitas, self).__init__()
        self.is_debug = is_debug
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_transformers = num_transformers

        self.inp_quant = qnn.QuantIdentity(
          act_quant=fp8a,
          return_quant_tensor=True,
        )
        
        # self.inp_layer = nn.Linear(in_dim, embbed_dim)
        self.inp_layer = qnn.QuantLinear(
          in_dim,
          embbed_dim,
          bias=True,
          weight_quant=fp8w,
          bias_quant=fp8b,
          input_quant=fp8a,
          output_quant=fp8a,
          return_quant_tensor=True,
        )

        # self.out_layer_0 = nn.BatchNorm1d(embbed_dim)
        self.out_layer_0 = qnn.BatchNorm1dToQuantScaleBias(
          embbed_dim,
          weight_quant=fp8w,
          bias_quant=fp8b,
          input_quant=fp8a,
          output_quant=fp8a,
          return_quant_tensor=True,
        )

        # self.out_layer_1 = nn.Linear(embbed_dim, num_classes)
        self.out_layer_1 = qnn.QuantLinear(
          embbed_dim,
          num_classes,
          bias=True,
          weight_quant=fp8w,
          bias_quant=fp8b,
          input_quant=fp8a,
          output_quant=fp8a,
          return_quant_tensor=True,
        )
        
         # learned classification token, (1, 1, C)
        # self.cls_token = nn.Parameter(torch.randn(1, 1, embbed_dim))
        self.cls_token = ParameterScaling(torch.randn(128, 1, embbed_dim)) # hard coded batch size

        # self.transformers = nn.ModuleList([
        #     Transformer(embbed_dim, num_heads=num_heads, dropout=dropout, is_debug=self.is_debug) for _ in range(num_transformers)
        # ])


        torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

    def debug_print(self, name: str, t):
        # if self.is_debug and not self.training:
        #     print(f"\n{name} -> {t.size()}")
        #     print(t)

        if True:
            print(f"\n{name} -> {t.size()} ({type(t)})")

    def forward(self, x):

        m_batch, seq_len, _ = x.size() # (m_batch, seq_len=100, input_dim=16)
        self.debug_print('input', x)

        # Input quant
        x = self.inp_quant(x)
        self.debug_print('x (after input quant)', x)

        # Input layer
        out = self.inp_layer(x) # (m_batch, seq_len, C)
        self.debug_print('out (after input layer)', out)

        # Append class tokens to input
        # cls_tokens = self.cls_token.repeat(m_batch, 1, 1)
        cls_tokens = self.cls_token
        out = torch.cat((cls_tokens, out), dim=1) # (m_batch, seq_len + 1, C)
        self.debug_print('cls_tokens', cls_tokens)
        self.debug_print('out (after class tokens)', out)

        # Transformer layers
        # for transformer in self.transformers:
        #     out = transformer(out)       # (m_batch, seq_len + 1, C)
        #     self.debug_print('out (after transformer layer)', out)

        # Output layer
        print(type(out))
        out = out[:, 0]                           # (m_batch, 1, C)
        self.debug_print('out (after out[:, 0])', out)

        out = self.out_layer_0(out)
        self.debug_print('out (after out layer 0)', out)

        out = self.out_layer_1(out)
        self.debug_print('out (after out layer 1)', out)

        out = out.squeeze(1)
        self.debug_print('out (after squeeze())', out)

        final_result = F.log_softmax(out, dim=-1)
        self.debug_print('final_result (softmax)', final_result)

        return final_result