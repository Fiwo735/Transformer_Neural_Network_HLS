import torch
import torch.nn as nn
import torch.nn.functional as F
import numpy as np

from .layer import Perceiver, PerceiverDynamicQuery, Transformer, FourierMixer, CrossTransformer

torch.set_printoptions(profile='full', sci_mode=False, threshold=2097152)

class DNN(nn.Module):

    """
        Simple Feed-forwad Model
    """

    def __init__(self, in_dim:int=16, embbed_dim=32, num_classes:int=5, dropout:float=0., **kwargs) -> None:
        super(DNN, self).__init__()
        self.input_size = self.channel_in = in_dim     

        self.net = nn.Sequential(
            nn.Linear(in_dim, embbed_dim),
            nn.ReLU(),
            nn.Linear(embbed_dim, num_classes),
            nn.LogSoftmax(-1)
        )
    
    def forward(self, x):
        return self.net(x)


class ConstituentNet(nn.Module):

    """
        ConstituentNet Base Model
    """

    def __init__(self, in_dim:int=16, embbed_dim:int=128, num_heads:int=2, num_classes:int=5, num_transformers:int=4, dropout:float=0., **kwargs) -> None:
        super(ConstituentNet, self).__init__()
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_transformers = num_transformers
        
        self.inp_layer = nn.Linear(in_dim, embbed_dim)
        # self.out_layer = nn.Sequential(
        #     nn.LayerNorm(embbed_dim),
        #     nn.Linear(embbed_dim, num_classes)
        # )
        self.out_layer_0 = nn.LayerNorm(embbed_dim)
        self.out_layer_1 = nn.Linear(embbed_dim, num_classes)
        
        self.cls_token = nn.Parameter(torch.randn(1, 1, embbed_dim)) # learned classification token, (1, 1, C)
        self.transformers = nn.ModuleList([
            Transformer(embbed_dim, num_heads=num_heads, dropout=dropout) for _ in range(num_transformers)
        ])

        # self.curr_mean = 0.0
        # self.curr_var = 0.0
        self.curr_mean = None
        self.curr_var = None
        self.counter = 0

    def get_avg_mean(self):
        # return self.curr_mean / self.counter
        return torch.div(self.curr_mean, self.counter)

    def get_avg_var(self):
        # return self.curr_var / self.counter
        return torch.div(self.curr_var, self.counter)

    def get_counter(self):
        return self.counter

    def forward(self, x):

        m_batch, seq_len, _ = x.size() # (m_batch, seq_len=100, input_dim=16)
        if not self.training:
            print(f"x.size()")
            print(x.size())

        if not self.training:
            print(f"input -> {x.size()}")
            print(x)

        # Input layer
        out = self.inp_layer(x) # (m_batch, seq_len, C)
        if not self.training:
            print(f"out (after input layer) -> {out.size()}")
            print(out)

        # Append class tokens to input
        cls_tokens = self.cls_token.repeat(m_batch, 1, 1)
        out = torch.cat((cls_tokens, out), dim=1) # (m_batch, seq_len + 1, C)
        if not self.training:
            print(f"cls_tokens -> {cls_tokens.size()}")
            print(cls_tokens)
            print(f"out (after class tokens) -> {out.size()}")
            print(out)

        # Transformer layers
        for transformer in self.transformers:
            out = transformer(out)       # (m_batch, seq_len + 1, C)
            if not self.training:
                print(f"out (after transformer layer) -> {out.size()}")
                print(out)

        # Output layer
        out = out[:, 0]                           # (m_batch, 1, C)
        if not self.training:
            print(f"out (after out[:, 0]) -> {out.size()}")
            print(out)

        # For normalization calculation embedding
        if self.training:
            cur_var = torch.var(out, dim=1, unbiased=False)
            self.curr_var = (self.curr_var + cur_var) if self.curr_var is not None else (cur_var)
            cur_mean = torch.mean(out, dim=1)
            self.curr_mean = (self.curr_mean + cur_mean) if self.curr_mean is not None else (cur_mean)
            self.counter += 1

        out = self.out_layer_0(out)
        if not self.training:
            print(f"out (after out layer 0) -> {out.size()}")
            print(out)

        out = self.out_layer_1(out)
        if not self.training:
            print(f"out (after out layer 1) -> {out.size()}")
            print(out)

        out = out.squeeze(1)
        if not self.training:
            print(f"out (after squeeze()) -> {out.size()}")
            print(out)
            
        # out = self.out_layer(out).squeeze(1)      # (m_batch, 1, C) -> (batch_m, num_classes)
        # if not self.training:
        #     print("out (after out layer)")
        #     print(out)

        final_result = F.log_softmax(out, dim=-1)
        if not self.training:
            print(f"final_result (softmax) -> {final_result.size()}")
            print(final_result)
        return final_result


class ConstituentNetFourier(nn.Module):

    """
        ConstituentNet with Fourier Mixer.
    """

    def __init__(self, in_dim:int=16, embbed_dim:int=128, num_classes:int=5, num_mixers:int=4, dropout:float=0., **kwargs) -> None:
        super(ConstituentNetFourier, self).__init__()
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_mixers = num_mixers
        
        self.inp_layer = nn.Linear(in_dim, embbed_dim)
        self.out_layer = nn.Sequential(
            nn.LayerNorm(embbed_dim),
            nn.Linear(embbed_dim, num_classes)
        )
        self.cls_token = nn.Parameter(torch.randn(1, 1, embbed_dim)) # learned classification token, (1, 1, C)
        self.mixers = nn.ModuleList([
            FourierMixer(embbed_dim, dropout) for _ in range(num_mixers)
        ])

    def forward(self, x):

        m_batch, seq_len, _ = x.size() # (m_batch, seq_len=100, input_dim=16)

        # Input layer
        out = self.inp_layer(x) # (m_batch, seq_len, C)

        # Append class tokens to input
        cls_tokens = self.cls_token.repeat(m_batch, 1, 1)
        out = torch.cat((cls_tokens, out), dim=1) # (m_batch, seq_len + 1, C)

        # Mixer layers
        for mixer in self.mixers:
            out = mixer(out)                # (m_batch, seq_len + 1, C)

        # Output layer
        out = out[:, 0]                           # (m_batch, 1, C)
        out = self.out_layer(out).squeeze(1)      # (m_batch, 1, C) -> (batch_m, num_classes)

        return F.log_softmax(out, dim=-1)


class ConstituentNetCluster(nn.Module):

    """
        ConstituentNet Model with clustering tokens, in encoder and decoder fashion.
    """

    def __init__(self, in_dim:int=16, embbed_dim:int=128, num_heads:int=2, num_classes:int=5, num_transformers:int=4, num_clusters:int=4, dropout:float=0., **kwargs) -> None:
        super(ConstituentNetCluster, self).__init__()
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_transformers = num_transformers
        
        self.inp_layer = nn.Linear(in_dim, embbed_dim)
        self.encoder_blocks = nn.ModuleList([
            Transformer(embbed_dim, num_heads=num_heads, dropout=dropout) for _ in range(num_transformers)
        ])
        self.norm = nn.LayerNorm(embbed_dim)
        self.decoder_blocks = nn.ModuleList([
            CrossTransformer(embbed_dim, num_heads=num_heads, dropout=dropout) for _ in range(num_transformers)
        ])
        self.out_layer = nn.Sequential(
            nn.Linear(embbed_dim*num_clusters, embbed_dim*num_clusters // 2),
            nn.Linear(embbed_dim*num_clusters // 2, num_classes),
        )

        self.clusters = nn.Parameter(torch.randn(1, num_clusters, embbed_dim)) # learned clusters (1, num_clusters, C)
        

    def forward(self, x):

        m_batch, _seq_len, _ = x.size() # (m_batch, seq_len=100/150, input_dim=16)

        # Input layer
        enc = self.inp_layer(x) # (m_batch, seq_len, C)

        # Enocder layers
        for encoder in self.encoder_blocks:
            enc = encoder(enc)        # (m_batch, seq_len, C)
        
        # Decoder layers
        out = self.clusters.repeat(m_batch, 1, 1)
        for decoder in self.decoder_blocks:
            out, energy = decoder(out, enc)   # (m_batch, num_clusters, C)

        # Output layer
        out = self.out_layer(out.view(m_batch, -1))  # (m_batch, num_clusters, C) -> (m_batch, num_classes)

        return F.log_softmax(out, dim=-1), energy


class ConstituentNetPerceiver(nn.Module):

    """
        ConstituentNet Model with Perceiver.
    """

    def __init__(self, in_dim:int=16, embbed_dim:int=128, num_embbeds:int=4, num_classes:int=5, num_perceivers:int=4, num_latent_transformers:int=1, num_heads:int=1, num_latent_heads:int=8, self_attention:bool=True, dropout:float=0., **kwargs) -> None:
        super(ConstituentNetPerceiver, self).__init__()
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_perceivers = num_perceivers
        
        self.perceivers = nn.ModuleList([
            Perceiver(
                in_dim=embbed_dim, 
                context_dim=in_dim, 
                num_latent_transformers=num_latent_transformers, 
                num_heads=num_heads, 
                num_latent_heads=num_latent_heads, 
                self_attention=self_attention,
                dropout=dropout
            ) for _ in range(num_perceivers)
        ])
        # self.out_layer = nn.Sequential(
        #     nn.Linear(embbed_dim*num_embbeds, embbed_dim*num_embbeds // 2),
        #     nn.Linear(embbed_dim*num_embbeds // 2, num_classes),
        # )

        self.out_layer = nn.Sequential(
            nn.Linear(embbed_dim*num_embbeds, num_classes),
        )

        self.embbeddings = nn.Parameter(torch.randn(1, num_embbeds, embbed_dim)) # learned embbeddings (1, num_embbeddings, C)
        

    def forward(self, x):

        m_batch, _seq_len, _ = x.size() # (m_batch, seq_len=100/150, input_dim=16)

        # Embbeddings
        out = self.embbeddings.repeat(m_batch, 1, 1)

        # Perceivers
        for perceiver in self.perceivers:
            out, energy = perceiver(out, x)         # (m_batch, num_embbeddings, C)

        # Output layer
        out = self.out_layer(out.view(m_batch, -1)) # (m_batch, num_embbeddings, C) -> (m_batch, num_classes)

        return F.log_softmax(out, dim=-1), energy


class ConstituentNetPerceiverRecurrent(nn.Module):

    """
        ConstituentNet Model with Singe Recurrent Perceiver.
    """

    def __init__(self, in_dim:int=16, embbed_dim:int=128, num_embbeds:int=4, num_classes:int=5, num_perceivers:int=5, num_latent_transformers:int=2, num_heads:int=1, num_latent_heads:int=1, self_attention:bool=True, dropout:float=0., **kwargs) -> None:
        super(ConstituentNetPerceiverRecurrent, self).__init__()
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        self.num_embbeds = num_embbeds
        self.num_perceivers = num_perceivers
        self.depth = num_perceivers
        
        self.perceiver = PerceiverDynamicQuery(
            in_dim=embbed_dim, 
            context_dim=in_dim, 
            num_latent_transformers=num_latent_transformers, 
            num_heads=num_heads, 
            num_latent_heads=num_latent_heads, 
            self_attention=self_attention,
            dropout=dropout
        )

        self.perceivers = nn.ModuleList([
            self.perceiver for _ in range(self.num_perceivers)
        ])

        self.out_layer = nn.Sequential(
            nn.Linear(embbed_dim*num_embbeds, num_classes),
        )

        self.embbeddings = nn.Parameter(torch.randn(1, num_embbeds, embbed_dim)) # learned embbeddings (1, num_embbeddings, C)
        self.query_hidden = nn.Parameter(torch.randn(1, 1, embbed_dim)) # initial query hidden state (1, 1, C)
        

    def forward(self, x):

        m_batch, _seq_len, _ = x.size() # (m_batch, seq_len=100/150, input_dim=16)

        # Query_hidden & Embbeddings
        query_hidden = self.query_hidden.repeat(m_batch, self.num_embbeds, 1)
        out = self.embbeddings.repeat(m_batch, 1, 1)

        # Perceivers
        for perceiver in self.perceivers:
            out, energy, query_hidden = self.perceiver(out, x, query_hidden)  # (m_batch, num_embbeddings, C)

        # Output layer
        out = self.out_layer(out.view(m_batch, -1)) # (m_batch, num_embbeddings, C) -> (m_batch, num_classes)

        return F.log_softmax(out, dim=-1), energy


class ConstituentNetGraph(nn.Module):
    
    """
        ConstituentNet with Fourier Mixer.
    """

    def __init__(self, in_dim:int=16, embbed_dim:int=32, num_classes:int=5, dropout:float=0., **kwargs) -> None:
        super(ConstituentNetGraph, self).__init__()
        self.input_size = in_dim
        self.channel_in = in_dim
        self.embbed_dim = embbed_dim # C
        
        self.inp_layer = nn.Linear(in_dim, embbed_dim)
        self.graph_assign = nn.Sequential(
            nn.Linear(in_dim, 64), # number of graph nodes
            nn.Softmax(dim=-1)
        )
        
        self.convs = nn.Sequential(
            nn.BatchNorm1d(num_features=32),
            nn.Conv1d(32, 64, kernel_size=2, stride=2, bias=False),  # 32
            nn.ReLU(),
            nn.BatchNorm1d(num_features=64),
            nn.Conv1d(64, 128, kernel_size=2, stride=2, bias=False), # 16
            nn.ReLU(),
            nn.BatchNorm1d(num_features=128),
            nn.Conv1d(128, 128, kernel_size=2, stride=2, bias=False), # 8
            nn.ReLU(),
            nn.BatchNorm1d(num_features=128),
            nn.Conv1d(128, 128, kernel_size=2, stride=2, bias=False), # 4
            nn.ReLU(),
            nn.BatchNorm1d(num_features=128),
            nn.Conv1d(128, 256, kernel_size=2, stride=2, bias=False), # 2
            nn.ReLU(),
        )
        
        self.out_layer = nn.Sequential(
            nn.Linear(256 * 2, num_classes)
        )


    def forward(self, x):

        m_batch, seq_len, _ = x.size()      # (m_batch, seq_len=100, input_dim=16)
        
        # Graph node assignment
        graph_assign = self.graph_assign(x) # (m_batch, seq_len=100, num_nodes=64)

        # Input layer
        out = self.inp_layer(x)             # (m_batch, seq_len, C)
        out = out.transpose(1,2)            # (m_batch, C, seq_len)
        out = torch.bmm(out, graph_assign)  # (m_batch, C, num_nodes)
                        
        # Conv layers
        out = self.convs(out)                # (m_batch, C, 2)
        out = self.out_layer(out.view(m_batch, -1))

        return F.log_softmax(out, dim=-1)

        
def accuracy(outputs, targets) -> float:
    """
    Compute the accuracy, given the outputs and targets for all images.
    Args:
        outputs: (torch.Tensor) dimension (batch_size, num_classes) - log softmax output of the model
        targets: (torch.Tensor) dimension (batch_size, ) - list-like [2, 1, 3, 2, 4, 3]
    Returns: (float) accuracy in [0,1]
    """

    preds = outputs.argmax(dim=1).view(-1)

    # FILIP experimenting with changed targets from data.py line 144
    # print(preds)
    # print(preds.shape)

    # print(targets)
    # print(targets.shape)
    # targets = np.argmax(targets, axis=-1)
    # print(targets)
    # print(targets.shape)

    return (torch.sum(preds == targets).float() / len(targets)).item()
    # return (torch.sum(preds == targets).float() / len(targets)).item()


def accuracy_top_k(outputs:torch.Tensor, targets:torch.Tensor, topk:int=5) -> float:
    """
    Computes the accuracy over the k top predictions for the specified values of k.
    Args:
        outputs: (torch.Tensor) dimension (batch_size, num_classes) - log softmax output of the model
        targets: (torch.Tensor) dimension (batch_size, ) - list-like [2, 1, 3, 2, 4, 3]
        topk: (int) number of candidates to take (default: 5)
    Returns: (float) accuracy in [0,1]
    """

    _log_prop_tk, preds_tk = outputs.reshape(-1, outputs.shape[2]).topk(topk, dim=-1)
    targets = targets.reshape(-1)

    return (torch.eq(targets[:, None], preds_tk).any(dim=-1).float().mean()).item()


# maintain all metrics for the training and evaluation loops
metrics = {
    'accuracy': accuracy,
}


if __name__ == "__main__":
    
    # instantiate model
    model = ConstituentNet()
    print("Model created: ", model)

torch.set_printoptions(profile=None, sci_mode=None, threshold=None)