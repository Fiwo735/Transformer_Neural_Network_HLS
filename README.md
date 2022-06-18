# Reconfigurable Acceleration of Transformer Neural Networks with Meta-Programming Strategies for Particle Physics Experiments

## Available programs
### Explore a Pytorch architecture

`python3 pytorch/train_evaluate.py <options>`

- `--particles <int>`: use dataset specific jet dataset (1, 30, 50, 100, 150)

- `--train`: train before evaluating

- `--debug`: train/evaluate debug (prints each layer output) model

- `--timing`: perform timing evaluation

- `--rng_seed`: randomize all seeds

- `--use_cpu`: force CPU usage, even if GPU available

- `--only_predictions`: only print predictions

- `--fetch`: refetch a dataset

- `--tiny_size <int>`: number of particles to use for debug (to select fewer particles than the dataset offers, e.g. 10 out of 30)

- `--epochs <int>`: epoch number to use for training and/or timing evaluation

- `--cuda <int>`: CUDA device ID (for machines with more than 1 GPU)

- `--generate_hls_tb <int>`: place specific number of input samples and PyTorch results as TB input and output for HLS

- `--flops`: perform FLOPS measurement

- `--norm_info <str>`: \[deprecated\] write summary of network's normalization layers



<br>

### Extract weights and biases from a trained model

`python3 scripts/extract_weights_biases.py <options>`

- `--debug`: use debug version of the Pytorch model


<br>

###  Run Vivado HLS

`python3 scripts/compare_hls_pytorch.py <options>`

- `--csim`: run C Simulation

- `--synth`: run C/RTL Synthesis

- `--cosim`: run RTL Cosimulation

- `--reset`: reset design

- `--pytorch`: run Pytorch model

- `--load <str>`: load pickled data and analyse it

- `--quiet`: supress outputs

<br>

###  Perform a post-training quantization

`python3 scripts/quantization_search.py <options>`

- `--quiet`: supress outputs

<br>

###  Generate precomputed log table for HLS

`python3 scripts/generate_log_table.py <options>`

- `--table_size <int>`: Number of elements (must be a power of 2)

- `--max_value <int>`: Biggest value used

- `--path <str>`: path of the resulting table

- `--var_name <str>`: name of the table variable

- `--var_type <str>`: HLS type of the table variable

- `--quiet`: supress outputs

<br>

## Repo structure
```
├─ hls/
│   ├─ firmware/
│   │   ├─ nnet_utils/
│   │   │   ├─ nnet_activation.h               # log_softmax_latency, softmax_latency
│   │   │   ├─ nnet_self_attention.h           # self_attention
│   │   │   └─ nnet_transformer.h              # transformer
│   │   │
│   │   ├─ weights/                            # Weights and biases used in HLS
│   │   ├─ defines.h                           # typedef's, #define's
│   │   ├─ myproject.cpp                       # Implementation of ConstituentNetBase
│   │   ├─ myproject.h                         # Prototype of top-level function
│   │   └─ parameters.h                        # #include's, nnet struct redefinitions
│   │
│   ├─ tb_data/
│   │   ├─ csim_layer.log                      # C Simulation layer-by-layer output data
│   │   ├─ csim_result.log                     # C Simulation final output data (calculated)
│   │   ├─ tb_input_features.dat               # Input data
│   │   └─ tb_output_predictions.dat           # Output data (provided)
│   │
│   ├─ build_prj.tcl                           # Script for running C Simulation/Synthesis
│   └─ myproject_test.cpp                      # TB program for C Simulation
│
├─ pytorch/
│   ├─ data/                                   # Particles data
│   ├─ model/                                  # Modified ConstituentNet model files
│   └─ train_evaluate.py                       # Used to train and/or evaluate Pytorch model
│
├─ scripts/
│   ├─ compare_hls_pytorch.py                  # Runs and compares HLS vs Pytorch implementation
│   ├─ extract_weights_biases.py               # Extracts weights and biases from a Pytorch model
│   ├─ quantization_search.py                  # Perform post-training quantization search
│   ├─ generate_log_table.py                   # Generate precomputed log table for HLS
│   └─ playground.py                           # Used for testing and debugging Pytorch implementation
│
├─ logs/                                       # All sorts of logs and images
│   └─ synthesis_reports/                      # Synthesis reports captured at different design stages
│
├─ thesis/                                     # Directory used for generating the LaTeX thesis
│
├─ .gitignore                                  # gitignore
├─ environment.yaml                            # Packages for Conda environment
├─ requirements.txt                            # Packages for pip
└─ README.md                                   # This file
```

<br>

## Helpful links
https://fastmachinelearning.org/hls4ml/