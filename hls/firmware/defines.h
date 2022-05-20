#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers

// input of size (N_BATCH_SIZE, N_PARTICLES, N_FEATURES)
// N_BATCH_SIZE not used currently 
#define N_BATCH_SIZE 1
#define N_PARTICLES 1
#define N_FEATURES 16
#define N_LABELS 5

// Network configuration options
#define SKIP_FINAL_ACTIVATION 0
#define SKIP_NORM 0
#define N_TRANSFORMER_LAYERS 3
#define N_HEADS 2
#define N_EMBEDDED_DIM 16
// SCALE_SHIFT is log2(sqrt(N_EMBEDDED_DIM))
#define SCALE_SHIFT 2

// Derived configuration options
#define N_INPUT (N_PARTICLES * N_FEATURES)
#define N_EMBEDDED (N_PARTICLES * N_EMBEDDED_DIM)
// N_TRANSFORMER uses N_PARTICLES + 1 to account for the hidden class tokens
#define N_TRANSFORMER ((N_PARTICLES + 1) * N_EMBEDDED_DIM)


// #if N_EMBEDDED_DIM == 1
//   #define N_SA_INV_SQRT_SIZE0 1.0000000000000000
// #elif N_EMBEDDED_DIM == 2
//   #define N_SA_INV_SQRT_SIZE0 0.7071067811865470
// #elif N_EMBEDDED_DIM == 4
//   #define N_SA_INV_SQRT_SIZE0 0.5000000000000000
// #elif N_EMBEDDED_DIM == 8
//   #define N_SA_INV_SQRT_SIZE0 0.3535533905932740
// #elif N_EMBEDDED_DIM == 16
//   #define N_SA_INV_SQRT_SIZE0 0.2500000000000000
// #elif N_EMBEDDED_DIM == 32
//   #define N_SA_INV_SQRT_SIZE0 0.1767766952966370
// #elif N_EMBEDDED_DIM == 64
//   #define N_SA_INV_SQRT_SIZE0 0.1250000000000000
// #elif N_EMBEDDED_DIM == 128
//   #define N_SA_INV_SQRT_SIZE0 0.0883883476483184
// #elif N_EMBEDDED_DIM == 256
//   #define N_SA_INV_SQRT_SIZE0 0.0625000000000000
// #endif

// Hardware precision (ap_fixed<total, int>)
#define N_BIG_TABLE_SIZE 1024
// #define N_SMALL_TABLE_SIZE 1024

typedef ap_fixed<27,15> model_default_t;
typedef ap_fixed<27,15> input_t;
typedef ap_fixed<27,15> result_t;

typedef ap_fixed<17,7> general_table_t;
typedef ap_fixed<17,7> data_T_red;
typedef ap_fixed<17,7> input_t_red;

// Top
typedef ap_fixed<27,15> input_t;

typedef ap_fixed<27,15> top_embedded_weight_t;
typedef ap_fixed<27,15> top_embedded_bias_t;
typedef ap_fixed<27,15> top_embedded_t;
typedef ap_fixed<27,15> top_embedded_a_t;
typedef ap_fixed<27,15> top_embedded_b_t;
typedef ap_fixed<27,15> top_embedded_w_t;

typedef ap_fixed<27,15> top_cls_token_t;

typedef ap_fixed<27,15> top_mlp_dim_red_t;

typedef ap_fixed<27,15> top_norm_weight_t;
typedef ap_fixed<27,15> top_norm_bias_t;
typedef ap_fixed<27,15> top_norm_t;

typedef ap_fixed<27,15> top_mlp_weight_t;
typedef ap_fixed<27,15> top_mlp_bias_t;
typedef ap_fixed<27,15> top_mlp_t;

typedef ap_fixed<17,7> top_mlp_red_t;

typedef ap_fixed<27,15> result_t;

// Transformer

// Self-Attention



#endif
