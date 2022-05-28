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
#define N_PARTICLES 30
#define N_FEATURES 16
#define N_LABELS 5

// Network configuration options
#define SKIP_FINAL_ACTIVATION 0
#define SKIP_NORM 0
#define N_TRANSFORMER_LAYERS 3
#define N_HEADS 2
#define N_EMBEDDED_DIM 64
// SCALE_SHIFT is log2(sqrt(N_EMBEDDED_DIM))
#define SCALE_SHIFT 3

// Derived configuration options
#define N_INPUT (N_PARTICLES * N_FEATURES)
#define N_EMBEDDED (N_PARTICLES * N_EMBEDDED_DIM)
// N_TRANSFORMER uses N_PARTICLES + 1 to account for the hidden class tokens
#define N_TRANSFORMER ((N_PARTICLES + 1) * N_EMBEDDED_DIM)

// Hardware precision (ap_fixed<total, int>)
// #define N_BIG_TABLE_SIZE 4096
// #define N_SMALL_TABLE_SIZE 1024

// typedef ap_fixed<34,18> model_default_t;
// typedef ap_fixed<34,18> input_t;
// typedef ap_fixed<34,18> result_t;

// typedef ap_fixed<31,11> general_table_t;
// typedef ap_fixed<31,11> data_T_red;
// typedef ap_fixed<31,11> input_t_red;

//--------------------Top--------------------
typedef ap_fixed<29,18> input_t;

typedef ap_fixed<30,18> top_embedded_t;
typedef ap_fixed<30,18> top_embedded_weight_t;
typedef ap_fixed<30,18> top_embedded_bias_t;
typedef ap_fixed<30,18> top_embedded_accum_t;

typedef ap_fixed<30,18> top_cls_token_t;
//--------------------------------------------

//--------------Self-Attention----------------
typedef ap_fixed<30,18> SA_norm_t;
typedef ap_fixed<30,18> SA_norm_weight_t;
typedef ap_fixed<30,18> SA_norm_bias_t;

// typedef ap_fixed<34,18> SA_QKV_t;
// typedef ap_fixed<34,18> SA_QKV_weight_t;
// typedef ap_fixed<34,18> SA_QKV_accum_t;

typedef ap_fixed<30,18> SA_Q_t;
typedef ap_fixed<30,18> SA_Q_weight_t;
typedef ap_fixed<30,18> SA_Q_accum_t;

typedef ap_fixed<30,18> SA_K_t;
typedef ap_fixed<30,18> SA_K_weight_t;
typedef ap_fixed<30,18> SA_K_accum_t;

typedef ap_fixed<30,18> SA_V_t;
typedef ap_fixed<30,18> SA_V_weight_t;
typedef ap_fixed<30,18> SA_V_accum_t;

typedef ap_fixed<30,18> SA_energy_t;

typedef ap_fixed<30,18> SA_exp_norm_t;
typedef ap_fixed<30,18> SA_exp_norm_weight_t;
typedef ap_fixed<30,18> SA_exp_norm_bias_t;

typedef ap_fixed<30,18> SA_exp_norm_red_t;
typedef ap_fixed<30,18> SA_softmax_exp_t;
typedef ap_fixed<30,18> SA_softmax_inv_t;
#define N_SOFTMAX_TABLE 4096
#define EXP_TARGET_IWIDTH 4
#define INV_TARGET_IWIDTH 7

typedef ap_fixed<30,18> SA_attention_t;

typedef ap_fixed<30,18> SA_scaled_attention_t;

typedef ap_fixed<30,18> SA_dense_weight_t;
typedef ap_fixed<30,18> SA_dense_bias_t;
typedef ap_fixed<30,18> SA_dense_accum_t;

typedef ap_fixed<30,18> SA_result_t;
//--------------------------------------------

//----------------Transformer-----------------
typedef ap_fixed<30,18> SA_result_sum_t;

typedef ap_fixed<30,18> T_norm0_t;
typedef ap_fixed<30,18> T_norm0_weight_t;
typedef ap_fixed<30,18> T_norm0_bias_t;

typedef ap_fixed<30,18> T_activ0_t;

typedef ap_fixed<30,18> T_dense0_t;
typedef ap_fixed<30,18> T_dense0_weight_t;
typedef ap_fixed<30,18> T_dense0_accum_t;

typedef ap_fixed<30,18> T_norm1_t;
typedef ap_fixed<30,18> T_norm1_weight_t;
typedef ap_fixed<30,18> T_norm1_bias_t;

typedef ap_fixed<30,18> T_activ1_t;

typedef ap_fixed<30,18> T_dense1_t;
typedef ap_fixed<30,18> T_dense1_weight_t;
typedef ap_fixed<30,18> T_dense1_accum_t;
//--------------------------------------------

//--------------------Top--------------------
typedef ap_fixed<30,18> top_transformer_0_t;
typedef ap_fixed<30,18> top_transformer_1_t;
typedef ap_fixed<30,18> top_transformer_2_t;

typedef ap_fixed<30,18> top_mlp_dim_red_t;

typedef ap_fixed<30,18> top_norm_t;
typedef ap_fixed<30,18> top_norm_weight_t;
typedef ap_fixed<30,18> top_norm_bias_t;

typedef ap_fixed<30,18> top_mlp_t;
typedef ap_fixed<30,18> top_mlp_weight_t;
typedef ap_fixed<30,18> top_mlp_bias_t;
typedef ap_fixed<30,18> top_mlp_accum_t;

typedef ap_fixed<30,18> top_mlp_red_t;
typedef ap_fixed<30,18> top_log_softmax_exp_t;
typedef ap_fixed<30,18> top_log_softmax_log_t;
#define N_LOG_SOFTMAX_TABLE 4096
#define LOG_TARGET_IWIDTH 5
#define LOG_EXP_TARGET_IWIDTH 4

typedef ap_fixed<30,18> result_t;
//--------------------------------------------



#endif
