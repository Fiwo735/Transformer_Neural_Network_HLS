from tkinter import X
import typing

import torch
import torch.nn as nn

torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

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
    
    def __init__(
        self,
        in_dim: int,
        latent_dim: typing.Optional[int] = None,
        num_heads: int = 1,
        is_debug: bool = False,
        num_particles: int = 30,
        normalization: str = 'Batch',
    ) -> None:
        """
        Args :
            in_dim (int) : the channel dimension of queries tensor. (C)
            latent_dim (int) : the latent channel dimension (num_heads * head_dim, default equal to C)
            num_heads (int) : number of attention heads
        """

        super(SelfAttention, self).__init__()
        self.is_debug = is_debug
        self.in_dim = in_dim
        self.channel_in = in_dim # C
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.head_dim = self.latent_dim // num_heads
        self.heads = num_heads
        self.normalization = normalization
        self.num_particles = num_particles

        if self.normalization == 'Batch':
            self.norm = nn.BatchNorm1d(in_dim)
        elif self.normalization == 'Layer':
            self.norm = nn.LayerNorm(in_dim)
        else:
            # Dummy so type checking doesnt complain
            self.norm = nn.BatchNorm1d(in_dim)

        self.q = nn.Linear(in_dim, in_dim, bias=False)
        self.k = nn.Linear(in_dim, in_dim, bias=False)
        self.v = nn.Linear(in_dim, in_dim, bias=False)
        self.out = nn.Linear(in_dim, in_dim)

        if self.normalization == 'Batch':
            self.pre_exp_norm = nn.BatchNorm1d((self.num_particles + 1) * (self.num_particles + 1))
        elif self.normalization == 'Layer':
            self.pre_exp_norm = nn.LayerNorm((self.num_particles + 1) * (self.num_particles + 1))
        else:
            # Dummy so type checking doesnt complain
            self.pre_exp_norm = nn.BatchNorm1d((self.num_particles + 1) * (self.num_particles + 1))

        assert (in_dim // num_heads) * num_heads == in_dim, "Embedding dim needs to be divisible by num_heads"
        assert self.head_dim * num_heads ==  self.latent_dim, "Latent dim needs to be divisible by num_heads."

        torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

    def debug_print(self, name: str, t):
        pass
        # if self.is_debug and not self.training:
        #     print(f"\nSA: {name} -> {t.size()}")
        #     print(t)

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
        if self.normalization == 'Batch':
            out = self.norm(x.transpose(1,2)).transpose(1,2)
        elif self.normalization == 'Layer':
            out = self.norm(x)
        else:
            out = x
        self.debug_print('out (after norm)', out)

        # Queries, keys, and values
        queries = self.q(out).view(m_batch, seq_len, self.heads, -1)
        self.debug_print('queries', queries)
        keys = self.k(out).view(m_batch, seq_len, self.heads, -1)
        self.debug_print('keys', keys)
        values = self.v(out).view(m_batch, seq_len, self.heads, -1)
        self.debug_print('values', values)

        # Attention softmax(Q^T*K)
        energy = torch.einsum("nqhc,nkhc->nhqk", [queries, keys])
        self.debug_print('energy', energy)

        if self.normalization == 'Batch' or self.normalization == 'Layer':
            energy_norm_pre = energy.view(m_batch, self.heads, -1).transpose(1,2)
            self.debug_print('energy_norm_pre', energy_norm_pre)
            energy_norm = self.pre_exp_norm(energy_norm_pre)
            self.debug_print('energy_norm', energy_norm)
            energy_post = energy_norm.transpose(1,2).view(m_batch, self.heads, self.num_particles+1, self.num_particles+1)
            self.debug_print('energy_post', energy_post)
        else:
            energy_post = energy

        attention = torch.softmax(energy_post / (C ** (1 / 2)), dim=-1)
        self.debug_print('attention', attention)

        # Output
        out = torch.einsum("nhql,nlhc->nqhc", [attention, values])
        self.debug_print('out (after einsum)', out)

        out = out.reshape(m_batch, seq_len, -1)
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
    
    def __init__(
        self,
        in_dim: int,
        latent_dim: typing.Optional[int] = None,
        num_heads: int = 1,
        dropout: float = 0.,
        is_debug:bool = False,
        num_particles: int = 30,
        activation: str = 'ReLU',
        normalization: str = 'Batch',
    ) -> None:
        super(Transformer, self).__init__()
        self.is_debug = is_debug
        self.in_dim = in_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.channel_in = in_dim
        self.normalization = normalization

        self.self_attention = SelfAttention(
            in_dim,
            latent_dim=self.latent_dim,
            num_heads=num_heads,
            is_debug=self.is_debug,
            num_particles=num_particles,
            normalization=normalization,
        )

        if self.normalization == 'Batch':
            self.norm_0 = nn.BatchNorm1d(in_dim)
        elif self.normalization == 'Layer':
            self.norm_0 = nn.LayerNorm(in_dim)
        else:
            # Dummy so type checking doesnt complain
            self.norm_0 = nn.BatchNorm1d(in_dim)

        if activation == 'ReLU':
            self.activ_0 = nn.ReLU()
        elif activation == 'SiLU':
            self.activ_0 = nn.SiLU()
        else:
            raise TypeError('Unknown activation function')

        self.linear_0 = nn.Linear(in_dim, in_dim*2, bias=False)

        if self.normalization == 'Batch':
            self.norm_1 = nn.BatchNorm1d(in_dim*2)
        elif self.normalization == 'Layer':
            self.norm_1 = nn.LayerNorm(in_dim*2)
        else:
            # Dummy so type checking doesnt complain
            self.norm_1 = nn.BatchNorm1d(in_dim*2)

        if activation == 'ReLU':
            self.activ_1 = nn.ReLU()
        elif activation == 'SiLU':
            self.activ_1 = nn.SiLU()
        else:
            raise TypeError('Unknown activation function')

        self.linear_1 = nn.Linear(in_dim*2, in_dim, bias=False)

        self.dropout = nn.Dropout(dropout)

        torch.set_printoptions(precision=5, threshold=2097152, linewidth=1000, sci_mode=False)

    def debug_print(self, name: str, t):
        pass
        # if self.is_debug and not self.training:
        #     print(f"\nT: {name} -> {t.size()}")
        #     print(t)

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

        if self.normalization == 'Batch':
            out0 = self.norm_0(x.transpose(1,2)).transpose(1,2)
        elif self.normalization == 'Layer':
            out0 = self.norm_0(x)
        else:
            out0 = x
        self.debug_print('out0 (after norm_0)', out0)

        out1 = self.activ_0(out0)
        self.debug_print('out1 (after activ_0)', out1)

        out2 = self.linear_0(out1)
        self.debug_print('out2 (after linear_0)', out2)

        if self.normalization == 'Batch':
            out3 = self.norm_1(out2.transpose(1,2)).transpose(1,2)
        elif self.normalization == 'Layer':
            out3 = self.norm_1(out2)
        else:
            out3 = out2
        self.debug_print('out3 (after norm_1)', out3)

        out4 = self.activ_1(out3)
        self.debug_print('out4 (after activ_1)', out4)

        out5 = self.linear_1(out4)
        self.debug_print('out5 (after linear_1)', out5)

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