import typing

import torch
import torch.nn as nn


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
    
    def __init__(self, in_dim:int, latent_dim:typing.Optional[int]=None, num_heads:int=1) -> None:

        """
        Args :
            in_dim (int) : the channel dimension of queries tensor. (C)
            latent_dim (int) : the latent channel dimension (num_heads * head_dim, default equal to C)
            num_heads (int) : number of attention heads
        """

        super(SelfAttention, self).__init__()
        self.in_dim = in_dim
        self.channel_in = in_dim # C
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.head_dim = self.latent_dim // num_heads
        self.heads = num_heads
        self.heads = num_heads
        self.gamma = 1  # self.gamma = nn.Parameter(torch.zeros(1))

        self.norm = nn.LayerNorm(in_dim) 
        self.qkv = nn.Linear(in_dim, 2*self.latent_dim + in_dim, bias=False)
        self.out = nn.Linear(in_dim, in_dim)

        assert  (in_dim // num_heads) * num_heads == in_dim, "Embedding dim needs to be divisible by num_heads"
        assert  self.head_dim * num_heads ==  self.latent_dim, "Latent dim needs to be divisible by num_heads."


    def forward(self, x):

        """
        Args :
            x : input feature maps (batch_m, seq_len, C)
        Returns :
            out : self attention value + input feature (batch_m, seq_len, C)
        """

        m_batch, seq_len, C = x.size()
        if not self.training:
            print("x.size()")
            print(x.size())

        C_H = self.head_dim
        if not self.training:
            print("self.head_dim")
            print(self.head_dim)

        if not self.training:
            print("input")
            print(x)

        # Normalization across channels
        out = self.norm(x)
        if not self.training:
            print("out (after norm)")
            print(out)

        # Queries, keys, and values
        out = self.qkv(out).view(m_batch, seq_len, self.heads, -1)   # (batch_m, seq_len, num_heads, 2*C_head + C//num_head )
        if not self.training:
            print("out (after qkv)")
            print(out)

        queries, keys, values = torch.split(out, [C_H, C_H, C // self.heads], dim=-1)
        if not self.training:
            print("queries")
            print(queries)
            print("keys")
            print(keys)
            print("values")
            print(values)

        # Attention softmax(Q^T*K)
        energy = torch.einsum("nqhc,nkhc->nhqk", [queries, keys])  # (batch_m, num_heads, seq_len, seq_len)
        if not self.training:
            print("energy")
            print(energy)

        attention = torch.softmax(energy / (C ** (1 / 2)), dim=-1) # (batch_m, num_heads, seq_len, seq_len)
        if not self.training:
            print("attention")
            print(attention)

        # Output
        out = torch.einsum("nhql,nlhc->nqhc", [attention, values]) # (batch_m, seq_len, num_heads, C//num_head)
        if not self.training:
            print("out (after einsum)")
            print(out)

        out = out.reshape(m_batch, seq_len, -1) # (batch_m, seq_len, C)
        if not self.training:
            print("out (after reshape)")
            print(out)

        out = self.out(out)
        if not self.training:
            print("out (after out())")
            print(out)

        if not self.training:
            print("out + x (before returning")
            print(out + x)
        
        return out + x


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
    
    def __init__(self, in_dim:int, latent_dim:typing.Optional[int]=None, num_heads:int=1, dropout:float=0.) -> None:
        super(Transformer, self).__init__()
        self.in_dim = in_dim
        self.latent_dim = latent_dim if latent_dim is not None else in_dim
        self.channel_in = in_dim
        self.self_attention = SelfAttention(in_dim, latent_dim=self.latent_dim, num_heads=num_heads)
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
            out : self-attention  + linear-transformation (batch_m, seq_len, C)
            energy: self-attention energy (batch_m, seq_len, seq_len)
        """

        if not self.training:
            print("input")
            print(x)

        x = self.self_attention(x)

        if not self.training:
            print("x (after self-attention)")
            print(x)

        out = self.linear(x)

        if not self.training:
            print("out (after linear)")
            print(out)

        out = x + out

        if not self.training:
            print("out (after x + out)")
            print(out)

        out =  self.dropout(out)

        if not self.training:
            print("out (after dropout)")
            print(out)

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