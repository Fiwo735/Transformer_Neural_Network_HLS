from pathlib import Path

import numpy as np
from jinja2 import Environment, FileSystemLoader

# Constants
BATCH_SIZE = 10
INPUT_FEATURE_DIM = 16 # 16 HLFs
TARGET_NAMES = ['gluon', 'light_quark', 'w_boson', 'z_boson', 'top_quark']
GRAPH_APP_NAME = "test_network"
FILE_DIR = Path(__file__).parent

# Input Features (m = BATCH_SIZE)
inputs = np.genfromtxt((FILE_DIR / 'data/inputs.csv').resolve(), delimiter=',', skip_header=True)
weights = {
    'inp' : np.genfromtxt((FILE_DIR / 'data/weights/net.0.weight.csv').resolve(), delimiter=',', skip_header=True),
    'out' : np.genfromtxt((FILE_DIR / 'data/weights/net.2.weight.csv').resolve(), delimiter=',', skip_header=True)
}
biases = {
    'inp' : np.genfromtxt((FILE_DIR / 'data/weights/net.0.bias.csv').resolve(), delimiter=',', skip_header=True),
    'out' : np.genfromtxt((FILE_DIR / 'data/weights/net.2.bias.csv').resolve(), delimiter=',', skip_header=True)
}

assert inputs.shape[0] == BATCH_SIZE, "Check BATCH_SIZE of provided data file"

# Create devices
device_instances = []

# (1) input devices
for inp_device_idx in range(INPUT_FEATURE_DIM):
    input_device = {'id' : f"in_{inp_device_idx}", 'type' : "input", 'property' : f'"x":{list(inputs[:,inp_device_idx])}'}
    device_instances.append(input_device)

# (2) neuron devices
for neuron_idx, bias in enumerate(list(biases['inp'])):
    output_device = {'id' : f"n_{neuron_idx}", 'type' : "neuron", 'property' : f'"b":{bias},"fanin":16'}
    device_instances.append(output_device)

# (3) output devices
for out_device_name, bias in zip(TARGET_NAMES, list(biases['out'])):
    output_device = {'id' : f"{out_device_name}", 'type' : "output", 'property' : f'"b":{bias},"fanin":32'}
    device_instances.append(output_device)


# Create edges
edge_instances = []

# (1) input -> hidden layer
for neuron_idx in range(weights['inp'].shape[0]):
    for inp_idx in range(weights['inp'].shape[1]):
        weight = weights['inp'][neuron_idx, inp_idx]
        edge_instance = { 'path' : f'n_{neuron_idx}:input-in_{inp_idx}:fire', 'property' : f'"weight":{weight}'}
        edge_instances.append(edge_instance)

# (2) hidden -> output
for out_idx, out_name in enumerate(TARGET_NAMES):
    for neuron_idx in range(weights['out'].shape[1]):
        weight = weights['out'][out_idx, neuron_idx]
        edge_instance = { 'path' : f'{out_name}:input-n_{neuron_idx}:fire', 'property' : f'"weight":{weight}'}
        edge_instances.append(edge_instance)

if __name__ == '__main__':
    # Create environment
    file_loader = FileSystemLoader('poets/templates')
    env = Environment(loader=file_loader)

    # Load template
    template = env.get_template('nn-gals.xml.jinja').render(
        graph={'id':"test_network"},
        graphProperties=f'"batch":{BATCH_SIZE}',
        batch_size=BATCH_SIZE,
        device_instances=device_instances,
        edge_instances=edge_instances
    )
    
    # Make graph
    with open((FILE_DIR / f'out/{GRAPH_APP_NAME}.xml'), 'w') as f:
        f.write(template)