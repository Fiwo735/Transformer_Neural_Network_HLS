import torch
import torch.utils.benchmark as benchmark
from tqdm import tqdm


# Models for test
model_constituent_base = torch.jit.load('experiments/constituent_base/best.script.pth', map_location='cpu').eval()
model_constituent_cluster = torch.jit.load('experiments/constituent_cluster/best.script.pth', map_location='cpu').eval()
model_constituent_graph = torch.jit.load('experiments/constituent_graph/best.script.pth', map_location='cpu').eval()
model_constituent_small = torch.jit.load('experiments/constituent_perceiver_3_64/best.script.pth', map_location='cpu').eval()
model_constituent_tiny = torch.jit.load('experiments/constituent_perceiver_1/best.script.pth', map_location='cpu').eval()
model_constituent_tiny_recurrent = torch.jit.load('experiments/constituent_perceiver_recurrent/best.script.pth', map_location='cpu').eval()

MODELS = [
    ('constituent-base', lambda x : model_constituent_base(x)),
    ('constituent-cluster', lambda x : model_constituent_cluster(x)),
    ('constituent-graph', lambda x : model_constituent_graph(x)),
    ('constituent-small', lambda x : model_constituent_small(x)),
    ('constituent-tiny', lambda x : model_constituent_tiny(x)),
    ('constituent-tiny-recurrent', lambda x : model_constituent_tiny_recurrent(x)),
]


if __name__ == '__main__':
    results = []
    for num_constituents in tqdm((30, 50, 100, 150), unit='input_size'):
        x = torch.randn(1000, num_constituents, 16)
        for model, model_fn in tqdm(MODELS, leave=False, unit='model'):
            result = benchmark.Timer(
                stmt='model(x)',
                globals={'x': x, 'model': model_fn},
                num_threads=torch.get_num_threads(),
                label="Model Inference",
                env=model,
                description=f'[1000, {num_constituents}, 16]',
            ).timeit(2)
            results.append(result)
            result.median

    compare = benchmark.Compare(results)
    compare.trim_significant_figures()
    compare.colorize()
    compare.print()
