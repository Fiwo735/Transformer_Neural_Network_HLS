from tkinter import X
import typing

import torch
import torch.nn as nn

torch.set_printoptions(profile='full', sci_mode=False, threshold=2097152)


class FeedForward(nn.Module):

    """
        Position-wise feed-forward layer
    """

    def __init__(self, in_dim:int, multiplication:int=2, activation:str='GELU'):
        self.feed_forward = nn.Sequential(
            nn.LayerNorm(in_dim),
            nn.SiLU(),
            nn.Linear(in_dim, in_dim*multiplication, bias=False),
            nn.LayerNorm(in_dim*multiplication),
            nn.SiLU(),
            nn.Linear(in_dim*multiplication, in_dim, bias=False),
        )
    
    def forward():
        pass


class Attention(nn.Module):

    """ 
        Scaled Dot-Product attention layer
    """
    
    def __init__(self, in_dim:int, context_dim:typing.Optional[int]=None, latent_dim:typing.Optional[int]=None, num_heads:int=1) -> None:

        """
        Args :
            in_dim (int) : the channel dimension of queries tensor. (C)
            context_dim (int) : the channel dimension of keys and values tensors. (C_ctx, defualt equal to C)
            latent_dim (int) : the latent channel dimension (num_heads * head_dim, default equal to C)
            num_heads (int) : number of attention heads
        """

        super(Attention, self).__init__()
        self.in_dim = in_dim
        self.channel_in = in_dim # C
        self.context_dim = context_dim if context_dim is not None else in_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.head_dim = self.latent_dim // num_heads
        self.heads = num_heads
        self.gamma = 1  # self.gamma = nn.Parameter(torch.zeros(1))

        self.norm = nn.LayerNorm(in_dim) 
        self.queries = nn.Linear(in_dim, self.latent_dim, bias=False)
        self.keys = nn.Linear(self.context_dim, self.latent_dim, bias=False)
        self.values = nn.Linear(self.context_dim, in_dim, bias=False)
        self.out = nn.Linear(in_dim, in_dim)

        assert  (in_dim // num_heads) * num_heads == in_dim, "Input dim needs to be divisible by num_heads, since out_dim == in_dim."
        assert  self.head_dim * num_heads ==  self.latent_dim, "Latent dim needs to be divisible by num_heads."

    def forward(self, queries, keys, values):

        """
        Args :
            queries : queries tensor (batch_m, query_seq_len, C)
            keys : keys tensor (batch_m, key_seq_len, C_ctx)
            values : values tensor (batch_m, val_seq_len, C_ctx), key_seq_len == val_seq_len
        Returns :
            out : attention + queries tensor (batch_m, query_seq_len, C)
            energy : energy values (batch_m, query_seq_len, key_seq_len) 
        """

        m_batch, query_seq_len, C = queries.size()
        key_seq_len, C_H = keys.size(1), self.head_dim

        # Normalization of queries across channels
        queries_pre = queries
        queries = self.norm(queries) # (batch_m, query_seq_len, C)

        # Queries, keys, and values
        queries = self.queries(queries).view(m_batch, query_seq_len, self.heads, C_H)         # (batch_m, query_seq_len, num_heads, C_head)
        keys = self.keys(keys).view(m_batch, key_seq_len, self.heads, C_H)                    # (batch_m, key_seq_len, num_heads, C_head)
        values = self.values(values).view(m_batch, key_seq_len, self.heads, C // self.heads)  # (batch_m, key_seq_len, num_heads, C // num_heads)

        # Attention softmax(Q^T*K)
        energy = torch.einsum("nqhc,nkhc->nhqk", [queries, keys])  # (batch_m, num_heads, query_seq_len, key_seq_len)
        attention = torch.softmax(energy / (C ** (1 / 2)), dim=-1) # (batch_m, num_heads, query_seq_len, key_seq_len) 

        # Output
        out = torch.einsum("nhql,nlhc->nqhc", [attention, values]) # (batch_m, query_seq_len, num_heads, C // num_heads)
        out = out.reshape(m_batch, query_seq_len, -1) # (batch_m, query_seq_len, C)
        out = self.out(out)
        
        return out + queries_pre, energy


class SelfAttention(nn.Module):

    """ 
        Self-attention layer
    """
    
    def __init__(self, in_dim:int, latent_dim:typing.Optional[int]=None, num_heads:int=1, is_debug:bool = False) -> None:

        """
        Args :
            in_dim (int) : the channel dimension of queries tensor. (C)
            latent_dim (int) : the latent channel dimension (num_heads * head_dim, default equal to C)
            num_heads (int) : number of attention heads
        """

        super(SelfAttention, self).__init__()
        self.is_debug = is_debug
        self.in_dim = in_dim
        # print(f"SelfAttention.in_dim={self.in_dim}")
        self.channel_in = in_dim # C
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.head_dim = self.latent_dim // num_heads
        self.heads = num_heads
        self.heads = num_heads
        self.gamma = 1  # self.gamma = nn.Parameter(torch.zeros(1))

        # self.norm = nn.LayerNorm(in_dim)
        # self.norm = nn.BatchNorm1d(in_dim) 
        self.qkv = nn.Linear(in_dim, 2*self.latent_dim + in_dim, bias=False)
        self.out = nn.Linear(in_dim, in_dim)

        # self.curr_mean = 0.0
        # self.curr_var = 0.0
        self.curr_mean = None
        self.curr_var = None
        self.counter = 0

        assert  (in_dim // num_heads) * num_heads == in_dim, "Embedding dim needs to be divisible by num_heads"
        assert  self.head_dim * num_heads ==  self.latent_dim, "Latent dim needs to be divisible by num_heads."

    def get_avg_mean(self):
        # return self.curr_mean / self.counter
        return torch.div(self.curr_mean, self.counter)

    def get_avg_var(self):
        # return self.curr_var / self.counter
        return torch.div(self.curr_var, self.counter)
    
    def get_counter(self):
        return self.counter
    
    def debug_print(self, name: str, t):
        if self.is_debug and not self.training:
            print(f"SA: {name} -> {t.size()}")
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

        C_H = self.head_dim
        # self.debug_print(f'self.head_dim {C_H}')

        # For normalization calculation embedding
        with torch.no_grad():
            if self.training:
                cur_var = torch.var(x, dim=2, unbiased=False)
                if self.curr_var is not None:
                    if self.curr_var.shape == cur_var.shape:
                        self.curr_var = self.curr_var + cur_var
                    else:
                        pass
                        # print(f'{self.curr_var.shape=}, {curr_var.shape=}')
                else:
                    self.curr_var = cur_var

                cur_mean = torch.mean(x, dim=2)
                if self.curr_mean is not None:
                    if self.curr_mean.shape == cur_mean.shape:
                        self.curr_mean = self.curr_mean + cur_mean
                    else:
                        pass
                        # print(f'{self.curr_mean.shape=}, {cur_mean.shape=}')
                else:
                    self.curr_mean = cur_mean
                self.counter += 1
            
        # Normalization across channels
        # out = self.norm(x)
        # self.debug_print('out (after norm)', out)

        # Queries, keys, and values
        # out = self.qkv(out)
        out = self.qkv(x)
        self.debug_print('out (after qkv)', out)
        # self.debug_print(f'weight of qkv {self.qkv.weight.size()}')

        out = out.view(m_batch, seq_len, self.heads, -1)   # (batch_m, seq_len, num_heads, 2*C_head + C//num_head )
        # self.debug_print('out (after view)', out)

        queries, keys, values = torch.split(out, [C_H, C_H, C // self.heads], dim=-1)
        self.debug_print('queries', queries)
        self.debug_print('keys', keys)
        self.debug_print('values', values)

        # Attention softmax(Q^T*K)
        energy = torch.einsum("nqhc,nkhc->nhqk", [queries, keys])  # (batch_m, num_heads, seq_len, seq_len)
        self.debug_print('energy', energy)

        attention = torch.softmax(energy / (C ** (1 / 2)), dim=-1) # (batch_m, num_heads, seq_len, seq_len)
        self.debug_print('attention', attention)

        # Output
        out = torch.einsum("nhql,nlhc->nqhc", [attention, values]) # (batch_m, seq_len, num_heads, C//num_head)
        self.debug_print('out (after einsum)', out)

        out = out.reshape(m_batch, seq_len, -1) # (batch_m, seq_len, C)
        self.debug_print('out (after reshape)', out)

        out = self.out(out)
        self.debug_print('out (after out())', out)

        final_sum = out + x
        self.debug_print('final_sum (before returning)', final_sum)
        
        return final_sum


class AttentionDynamicQuery(nn.Module):

    """ 
        Scaled Dot-Product attention layer with dynamic (GRU) query.
    """
    
    def __init__(self, in_dim:int, context_dim:typing.Optional[int]=None, latent_dim:typing.Optional[int]=None, num_heads:int=1) -> None:

        """
        Args :
            in_dim (int) : the channel dimension of queries tensor. (C)
            context_dim (int) : the channel dimension of keys and values tensors. (C_ctx, defualt equal to C)
            latent_dim (int) : the latent channel dimension (num_heads * head_dim, default equal to C)
            num_heads (int) : number of attention heads
        """

        super(AttentionDynamicQuery, self).__init__()
        self.in_dim = in_dim
        self.channel_in = in_dim # C
        self.context_dim = context_dim if context_dim is not None else in_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.head_dim = self.latent_dim // num_heads
        self.heads = num_heads
        self.gamma = 1  # self.gamma = nn.Parameter(torch.zeros(1))

        self.norm = nn.LayerNorm(in_dim) 
        self.queries = nn.GRUCell(in_dim, self.latent_dim)
        self.keys = nn.Linear(self.context_dim, self.latent_dim, bias=False)
        self.values = nn.Linear(self.context_dim, in_dim, bias=False)
        self.out = nn.Linear(in_dim, in_dim)

        assert  (in_dim // num_heads) * num_heads == in_dim, "Input dim needs to be divisible by num_heads, since out_dim == in_dim."
        assert  self.head_dim * num_heads ==  self.latent_dim, "Latent dim needs to be divisible by num_heads."

    def forward(self, queries, keys, values, queries_hidden):

        """
        Args :
            queries : queries tensor (batch_m, query_seq_len, C)
            keys : keys tensor (batch_m, key_seq_len, C_ctx)
            values : values tensor (batch_m, val_seq_len, C_ctx), key_seq_len == val_seq_len
            queries_hidden : hidden queries tensor for GRU cell state (batch_m, query_seq_len, C)
        Returns :
            out : attention + queries tensor (batch_m, query_seq_len, C)
            energy : energy values (batch_m, query_seq_len, key_seq_len)
            queries_hidden : hidden queries tensor for GRU cell state (batch_m, query_seq_len, C)
        """

        m_batch, query_seq_len, C = queries.size()
        key_seq_len, C_H = keys.size(1), self.head_dim

        # Normalization of queries across channels
        queries_pre = queries
        queries = self.norm(queries) # (batch_m, query_seq_len, C)

        # Queries, keys, and values
        queries = self.queries(queries.view(m_batch * query_seq_len, C), queries_hidden.view(m_batch * query_seq_len, C)) # (batch_m * query_seq_len, C)
        queries = queries_hidden = queries.view(m_batch, query_seq_len, self.heads, C_H)      # (batch_m, query_seq_len, num_heads, C_head)
        keys = self.keys(keys).view(m_batch, key_seq_len, self.heads, C_H)                    # (batch_m, key_seq_len, num_heads, C_head)
        values = self.values(values).view(m_batch, key_seq_len, self.heads, C // self.heads)  # (batch_m, key_seq_len, num_heads, C // num_heads)

        # Attention softmax(Q^T*K)
        energy = torch.einsum("nqhc,nkhc->nhqk", [queries, keys])  # (batch_m, num_heads, query_seq_len, key_seq_len)
        attention = torch.softmax(energy / (C ** (1 / 2)), dim=-1) # (batch_m, num_heads, query_seq_len, key_seq_len) 

        # Output
        out = torch.einsum("nhql,nlhc->nqhc", [attention, values]) # (batch_m, query_seq_len, num_heads, C // num_heads)
        out = out.reshape(m_batch, query_seq_len, -1) # (batch_m, query_seq_len, C)
        out = self.out(out)
        
        return out + queries_pre, energy, queries_hidden


class FourierMixing(nn.Module):

    """
        Fourier-mixing layer
    """
    
    def __init__(self, in_dim:int):
        super(FourierMixing, self).__init__()
        self.channel_in = in_dim # C
        self.gamma = 1  # self.gamma = nn.Parameter(torch.zeros(1))
        self.norm = nn.LayerNorm(in_dim) 

    def forward(self, x):
        out = self.norm(x)
        out = torch.fft.fft(torch.fft.fft(out, dim=-1), dim=-2).real
        return out + x


class Transformer(nn.Module):

    """ 
        Transformer block with self-attention.
    """
    
    def __init__(self, in_dim:int, latent_dim:typing.Optional[int]=None, num_heads:int=1, dropout:float=0., is_debug:bool = False) -> None:
        super(Transformer, self).__init__()
        self.is_debug = is_debug
        self.in_dim = in_dim
        # print(f"Transformer.in_dim={self.in_dim}")
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.channel_in = in_dim
        self.self_attention = SelfAttention(in_dim, latent_dim=self.latent_dim, num_heads=num_heads, is_debug=self.is_debug)
        # self.linear = nn.Sequential(
        #     nn.LayerNorm(in_dim),
        #     nn.SiLU(),
        #     nn.Linear(in_dim, in_dim*2, bias=False),
        #     nn.LayerNorm(in_dim*2),
        #     nn.SiLU(),
        #     nn.Linear(in_dim*2, in_dim, bias=False),
        # )
        # self.linear_0 = nn.LayerNorm(in_dim)
        # self.linear_0 = nn.BatchNorm1d(in_dim)
        # self.linear_1 = nn.SiLU()
        self.linear_1 = nn.ReLU()
        self.linear_2 = nn.Linear(in_dim, in_dim*2, bias=False)
        # self.linear_3 = nn.LayerNorm(in_dim*2)
        # self.linear_3 = nn.BatchNorm1d(in_dim*2)
        # self.linear_4 = nn.SiLU()
        self.linear_4 = nn.ReLU()
        self.linear_5 = nn.Linear(in_dim*2, in_dim, bias=False)

        self.dropout = nn.Dropout(dropout)

        # self.curr_mean0 = 0.0
        # self.curr_var0 = 0.0
        self.curr_mean0 = None
        self.curr_var0 = None
        self.counter0 = 0
        # self.curr_mean3 = 0.0
        # self.curr_var3 = 0.0
        self.curr_mean3 = None
        self.curr_var3 = None
        self.counter3 = 0

    def get_avg_mean0(self):
        # return self.curr_mean0 / self.counter0
        return torch.div(self.curr_mean0, self.counter0)

    def get_avg_var0(self):
        # return self.curr_var0 / self.counter0
        return torch.div(self.curr_var0, self.counter0)

    def get_counter0(self):
        return self.counter0

    def get_avg_mean3(self):
        # return self.curr_mean3 / self.counter3
        return torch.div(self.curr_mean3, self.counter3)

    def get_avg_var3(self):
        # return self.curr_var3 / self.counter3
        return torch.div(self.curr_var3, self.counter3)

    def get_counter3(self):
        return self.counter3

    def debug_print(self, name: str, t):
        if self.is_debug and not self.training:
            print(f"T: {name} -> {t.size()}")
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

        x = self.self_attention(x)
        self.debug_print('x (after self-attention)', x)

        # For normalization calculation embedding
        with torch.no_grad():
            if self.training:
                # self.curr_var0 += torch.var(x, unbiased=False)
                # self.curr_mean0 += torch.mean(x)
                # self.counter0 += 1
                cur_var0 = torch.var(x, dim=2, unbiased=False)
                self.curr_var0 = (self.curr_var0 + cur_var0) if self.curr_var0 is not None else (cur_var0)
                cur_mean0 = torch.mean(x, dim=2)
                self.curr_mean0 = (self.curr_mean0 + cur_mean0) if self.curr_mean0 is not None else (cur_mean0)
                self.counter0 += 1

        # out0 = self.linear_0(x)
        # self.debug_print('out0 (after linear_0)', out0)

        # out1 = self.linear_1(out0)
        out1 = self.linear_1(x)
        self.debug_print('out1 (after linear_1)', out1)

        out2 = self.linear_2(out1)
        self.debug_print('out2 (after linear_2)', out2)

        # For normalization calculation embedding
        with torch.no_grad():
            if self.training:
                # self.curr_var3 += torch.var(out2, unbiased=False)
                # self.curr_mean3 += torch.mean(out2)
                # self.counter3 += 1

                cur_var3 = torch.var(out2, dim=2, unbiased=False)
                self.curr_var3 = (self.curr_var3 + cur_var3) if self.curr_var3 is not None else (cur_var3)
                cur_mean3 = torch.mean(out2, dim=2)
                self.curr_mean3 = (self.curr_mean3 + cur_mean3) if self.curr_mean3 is not None else (cur_mean3)
                self.counter3 += 1

        # out3 = self.linear_3(out2)
        # self.debug_print('out3 (after linear_3)', out3)

        # out4 = self.linear_4(out3)
        out4 = self.linear_4(out2)
        self.debug_print('out4 (after linear_4)', out4)

        out5 = self.linear_5(out4)
        self.debug_print('out5 (after linear_5)', out5)

        out = x + out5
        self.debug_print('out (after x + out)', out)

        out =  self.dropout(out)
        self.debug_print('out (after dropout)', out)

        return out


class CrossTransformer(nn.Module):

    """ 
        Transformer block with cross-attention.
    """
    
    def __init__(self, in_dim:int, context_dim:typing.Optional[int]=None, latent_dim:typing.Optional[int]=None, num_heads:int=1, self_attention:bool=True, dropout:float=0.) -> None:
        super(CrossTransformer, self).__init__()
        self.in_dim = in_dim
        self.context_dim = context_dim if context_dim is not None else in_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.channel_in = in_dim
        self.use_self_attention = self_attention

        self.self_attention = SelfAttention(in_dim, latent_dim=self.latent_dim, num_heads=num_heads) if self.use_self_attention else nn.Identity()
        self.cross_attention = Attention(in_dim, context_dim=self.context_dim, num_heads=num_heads)
        self.linear = nn.Sequential(
            nn.LayerNorm(in_dim),
            nn.SiLU(),
            nn.Linear(in_dim, in_dim*2, bias=False),
            nn.LayerNorm(in_dim*2),
            nn.SiLU(),
            nn.Linear(in_dim*2, in_dim, bias=False),
        )
        self.dropout = nn.Dropout(dropout)

    def forward(self, queries, contexts):

        """
        Args :
            queries : the queries tensor (batch_m, seq_len, C)
            contexts : the encoded contexts/keys&values tensor (batch_m, ctx_seq_len, C)
        Returns :
            out : self-attention + cross-attention + linear-transformation (batch_m, seq_len, C)
            energy: cross-attention energy (batch_m, seq_len, ctx_seq_len)
        """
        
        queries = self.self_attention(queries) # inter-cluster self-attention
        queries, energy = self.cross_attention(queries, contexts, contexts) # cluster-constituent attention
        out = self.linear(queries)
        out = queries + out # res-connection
        out =  self.dropout(out)

        return out, energy


class CrossTransformerDynamicQuery(nn.Module):

    """ 
        Transformer block with cross-attention and dynamic query.
    """
    
    def __init__(self, in_dim:int, context_dim:typing.Optional[int]=None, latent_dim:typing.Optional[int]=None, num_heads:int=1, self_attention:bool=True, dropout:float=0.) -> None:
        super(CrossTransformerDynamicQuery, self).__init__()
        self.in_dim = in_dim
        self.context_dim = context_dim if context_dim is not None else in_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.channel_in = in_dim
        self.use_self_attention = self_attention

        self.self_attention = SelfAttention(in_dim, latent_dim=self.latent_dim, num_heads=num_heads) if self_attention else nn.Identity()
        self.cross_attention = AttentionDynamicQuery(in_dim, context_dim=self.context_dim, num_heads=num_heads)
        self.linear = nn.Sequential(
            nn.LayerNorm(in_dim),
            nn.SiLU(),
            nn.Linear(in_dim, in_dim*2, bias=False),
            nn.LayerNorm(in_dim*2),
            nn.SiLU(),
            nn.Linear(in_dim*2, in_dim, bias=False),
        )
        self.dropout = nn.Dropout(dropout)

    def forward(self, queries, contexts, queries_hidden):

        """
        Args :
            queries : the queries tensor (batch_m, seq_len, C)
            contexts : the encoded contexts/keys&values tensor (batch_m, ctx_seq_len, C)
            queries_hidden : hidden queries tensor for GRU cell state (batch_m, query_seq_len, C)
        Returns :
            out : self-attention + cross-attention + linear-transformation (batch_m, seq_len, C)
            energy: cross-attention energy (batch_m, seq_len, ctx_seq_len)
            queries_hidden : hidden queries tensor for GRU cell state (batch_m, query_seq_len, C)
        """

        queries = self.self_attention(queries) # inter-cluster self-attention
        queries, energy, queries_hidden = self.cross_attention(queries, contexts, contexts, queries_hidden) # cluster-constituent attention
        out = self.linear(queries)
        out = queries + out # res-connection
        out =  self.dropout(out)

        return out, energy, queries_hidden


class FourierMixer(nn.Module):

    """ 
        FourierMixer block for ConstituentNet-Fourier.
    """
    
    def __init__(self, in_dim:int, dropout:float=0.) -> None:
        super(FourierMixer, self).__init__()
        self.in_dim = in_dim
        self.channel_in = in_dim
        self.fourier_mixing = FourierMixing(in_dim)
        self.linear = nn.Sequential(
            nn.LayerNorm(in_dim),
            nn.SiLU(),
            nn.Linear(in_dim, in_dim*2, bias=False),
            nn.LayerNorm(in_dim*2),
            nn.SiLU(),
            nn.Linear(in_dim*2, in_dim, bias=False),
        )
        self.dropout = nn.Dropout(dropout)

    def forward(self, x):

        """
        Args :
            x : input feature maps (batch_m, seq_len, C)
        Returns :
            out : fourier-mixer  + linear-transformation (batch_m, seq_len, C)
        """

        x = self.fourier_mixing(x)
        out = self.linear(x)
        out = x + out
        out =  self.dropout(out)

        return out


class Perceiver(nn.Module):

    """ 
        Perceiver block.
    """
    
    def __init__(self, in_dim:int, context_dim:int, latent_dim:typing.Optional[int]=None, num_latent_transformers:int=1, num_heads:int=1, num_latent_heads:int=1, self_attention:bool=False, dropout:float=0.) -> None:
        super(Perceiver, self).__init__()
        self.in_dim = in_dim
        self.channel_in = in_dim
        self.context_dim = context_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        
        self.cross_transformer = CrossTransformer(in_dim, context_dim=context_dim, latent_dim=self.latent_dim, num_heads=num_heads, self_attention=self_attention, dropout=dropout)
        self.transformers = nn.ModuleList([
            Transformer(in_dim, latent_dim=self.latent_dim, num_heads=num_latent_heads, dropout=dropout) for _ in range(num_latent_transformers)
        ])

    def forward(self, x, constituents):

        """
        Args :
            x : the latent tensor (batch_m, num_latents, C)
            constituents : the constituents tensor (batch_m, num_constituents, 16)
        Returns :
            out : cross-attention + linear + self-attention + linear (batch_m, num_latents, C)
            energy : cross-attention energy (batch_m, num_latents, num_constituents)
        """

        # Query - cross-attention latent and constituents input spaces
        out, energy = self.cross_transformer(x, constituents)

        # Feature abstraction - self-attention latent space
        for transformer in self.transformers:
            out = transformer(out)

        return out, energy


class PerceiverDynamicQuery(nn.Module):

    """ 
        Perceiver block with dynamic query.
    """
    
    def __init__(self, in_dim:int, context_dim:int, latent_dim:typing.Optional[int]=None, num_latent_transformers:int=1, num_heads:int=1, num_latent_heads:int=1, self_attention:bool=False, dropout:float=0.) -> None:
        super(PerceiverDynamicQuery, self).__init__()
        self.in_dim = in_dim
        self.channel_in = in_dim
        self.context_dim = context_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        
        self.cross_transformer = CrossTransformerDynamicQuery(in_dim, context_dim=context_dim, latent_dim=self.latent_dim, num_heads=num_heads, self_attention=self_attention, dropout=dropout)
        self.transformers = nn.ModuleList([
            Transformer(in_dim, latent_dim=self.latent_dim, num_heads=num_latent_heads, dropout=dropout) for _ in range(num_latent_transformers)
        ])

    def forward(self, x, constituents, queries_hidden):

        """
        Args :
            x : the latent tensor (batch_m, num_latents, C)
            constituents : the constituents tensor (batch_m, num_constituents, 16)
        Returns :
            out : cross-attention + linear + self-attention + linear (batch_m, num_latents, C)
            energy : cross-attention energy (batch_m, num_latents, num_constituents)
        """

        # Query - cross-attention latent and constituents input spaces
        out, energy, queries_hidden = self.cross_transformer(x, constituents, queries_hidden)

        # Feature abstraction - self-attention latent space
        for transformer in self.transformers:
            out= transformer(out)

        return out, energy, queries_hidden

torch.set_printoptions(profile=None, sci_mode=None, threshold=None)