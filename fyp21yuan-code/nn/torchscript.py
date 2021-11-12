import torch
import argparse
import os

import model.net as net
import utils

BASE_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

parser = argparse.ArgumentParser()
parser.add_argument('--model_dir', default=os.path.join(BASE_DIR, 'experiments/base_model'),
                    help="Directory containing params.json")

# Load the parameters from json file
args = parser.parse_args()
json_path = os.path.join(args.model_dir, 'params.json')
assert os.path.isfile(json_path), "No json configuration file found at {}".format(json_path)
params = utils.Params(json_path)

# Use GPU if available
params.cuda = torch.cuda.is_available()
params.device = torch.device("cuda" if params.cuda else "cpu")

# Create model
model = net.ConstituentNetFourier(embbed_dim=params.embbed_dim, num_mixers=params.num_mixers, dropout=params.dropout_rate)

# Model type
TYPE = 'best'

# Load checkpoint
restore_path = os.path.join(args.model_dir, TYPE + '.pth.tar')
checkpoint = torch.load(restore_path)
model.load_state_dict(checkpoint['state_dict'])

# Save torchscript
filepath = os.path.join(args.model_dir, f'{TYPE}.script.pth')
model.eval()
model_script = torch.jit.script(model)
model_script.save(filepath)