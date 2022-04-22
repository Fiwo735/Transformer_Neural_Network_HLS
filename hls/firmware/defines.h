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

#define N_EMBEDDED_DIM 16

#define N_INPUT (N_PARTICLES * N_FEATURES)
#define N_EMBEDDED (N_PARTICLES * N_EMBEDDED_DIM)
// N_TRANSFORMER uses N_PARTICLES + 1 to account for the hidden class tokens
#define N_TRANSFORMER ((N_PARTICLES + 1) * N_EMBEDDED_DIM)

#define N_LABELS 5

#if N_EMBEDDED_DIM == 1
  #define N_SA_INV_SQRT_SIZE0 1.0000000000000000
#elif N_EMBEDDED_DIM == 2
  #define N_SA_INV_SQRT_SIZE0 0.7071067811865470
#elif N_EMBEDDED_DIM == 4
  #define N_SA_INV_SQRT_SIZE0 0.5000000000000000
#elif N_EMBEDDED_DIM == 8
  #define N_SA_INV_SQRT_SIZE0 0.3535533905932740
#elif N_EMBEDDED_DIM == 16
  #define N_SA_INV_SQRT_SIZE0 0.2500000000000000
#elif N_EMBEDDED_DIM == 32
  #define N_SA_INV_SQRT_SIZE0 0.1767766952966370
#elif N_EMBEDDED_DIM == 64
  #define N_SA_INV_SQRT_SIZE0 0.1250000000000000
#elif N_EMBEDDED_DIM == 128
  #define N_SA_INV_SQRT_SIZE0 0.0883883476483184
#elif N_EMBEDDED_DIM == 256
  #define N_SA_INV_SQRT_SIZE0 0.0625000000000000
#endif

#define N_BIG_TABLE_SIZE 4096
#define N_SMALL_TABLE_SIZE 1024

//hls-fpga-machine-learning insert layer-precision
// typedef ap_fixed<16,6> model_default_t;
// typedef ap_fixed<16,6> input_t;
// typedef ap_fixed<16,6> result_t;
// typedef ap_fixed<18,8> general_table_t;

// typedef ap_fixed<32,9> model_default_t;
// typedef ap_fixed<32,9> input_t;
// typedef ap_fixed<32,9> result_t;
// typedef ap_fixed<32,9> general_table_t;

// ap_fixed<total, int> 
typedef ap_fixed<35,15> model_default_t;
typedef ap_fixed<35,15> input_t;
typedef ap_fixed<35,15> result_t;
// typedef ap_fixed<64,32> general_table_t;
typedef ap_fixed<16,6> general_table_t;
typedef ap_fixed<16,6> data_T_red;
typedef ap_fixed<16,6> input_t_red;

// typedef float general_table_t;
// typedef float model_default_t;
// typedef float input_t;
// typedef float result_t;

#endif
