# Reconfigurable Acceleration of Transformer Neural Networks with Meta-Programming Strategies for Particle Physics Experiments
## How to run
Train or evaluate the Pytorch model:

`python3 pytorch/train_evaluate.py [-h] [--train] [--debug] [--timing] [--rng_seed] [--use_cpu]`

`--train`: train before evaluating

`--debug`: train/evaluate debug (prints each layer output) model

`--timing`: time evaluation

`--rng_seed`: randomize all seeds

`--use_cpu`: force CPU usage, even if GPU available

<br>
Extract weights and biases from a trained model:

`python3 scripts/extract_weights_biases.py`

For now no options, hard-coded to the existings paths.

<br>
Run Vivado HLS:

`python3 scripts/compare_hls_pytorch.py --run_hls`

For now no actual options, hard-coded to existing paths.

<br>

## TODO plan
- Scale HLS implementation to multiple particles data:
  - currently: batch size of 1 with 1 particle with 16 dimensions, (1, 1, 16) → (1, 5)
  - next: batch size of 1 with N particles with 16 dimensions, (1, N, 16) → (1, 5)

- Depending on latency/throughput findings, consider scaling HLS implementation to higher batch size:
  - planned: batch size of 1 with N particle with 16 dimensions, (1, N, 16) → (1, 5)
  - next: batch size of B with N particles with 16 dimensions, (B, N, 16) → (B, 5)

- Experiment and optimize with HLS implementation

- Implement self attention and transformer layers as auto generated code in hls4ml

- Instantiate ConstituentNetBase in HLS directly from Pytorch using hls4ml

<br>

## Repo structure
```
├─ fyp21yuan_code/                             # Yuan MSc code
│
├─ hls/
│   ├─ firmware/
│   │   ├─ nnet_utils/
│   │   │   ├─ nnet_activation.h               # SiLU, init_log_table, Log_softmax_latency
│   │   │   ├─ nnet_helpers.h                  # print_full_results
│   │   │   ├─ nnet_layernorm.h                # layer_normalize
│   │   │   ├─ nnet_merge.h                    # split_equally, join_equally, matmul
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
│   │   ├─ csim_layer.log                      # CSimulation layer-by-layer output data
│   │   ├─ csim_result.log                     # CSimulation final output data (calculated)
│   │   ├─ tb_input_features.dat               # Input data
│   │   └─ tb_output_predictions.dat           # Output data (provided)
│   │
│   ├─ build_prj.tcl                           # Script for running CSimulation/Synthesis
│   └─ myproject_test.cpp                      # TB program for CSimulation
│
├─ pytorch/
│   ├─ data/                                   # Particles data
│   ├─ model/                                  # Modified ConstituentNet model files
│   └─ train_evaluate.py                       # Used to train and/or evaluate Pytorch model
│
├─ scripts/
│   ├─ compare_hls_pytorch.py                  # Runs and compares HLS vs Pytorch implementation
│   ├─ extract_weights_biases.py               # Extracts weights and biases from a Pytorch model
│   └─ playground.py                           # Used for testing and debugging Pytorch implementation
│
├─ thesis/                                     # Directory used for generating the LaTeX thesis
│
├─ .gitignore                                  # gitignore
└─ README.md                                   # This file
```

<br>

## Helpful links
https://fastmachinelearning.org/hls4ml/