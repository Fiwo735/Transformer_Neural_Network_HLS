#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers

// TODO JETS
// #define N_COLLISIONS 5

// TODO particle counter
#define N_JET_COUNT 1

// TODO 
#define N_BATCH_SIZE 128

#define N_FEATURES 16

// #define N_INPUT (N_BATCH_SIZE)
#define N_INPUT (N_JET_COUNT * N_FEATURES)
#define N_EMBEDDED (N_JET_COUNT * N_BATCH_SIZE)
#define N_TRANSFORMER ((N_JET_COUNT + 1) * N_BATCH_SIZE)

#define N_LABELS 5

#define N_SA_INV_SQRT_SIZE0 0.0883883476483

//hls-fpga-machine-learning insert layer-precision
// typedef ap_fixed<16,6> model_default_t;
// typedef ap_fixed<16,6> input_t;
// typedef ap_fixed<16,6> result_t;
// typedef ap_fixed<18,8> general_table_t;

// typedef ap_fixed<32,9> model_default_t;
// typedef ap_fixed<32,9> input_t;
// typedef ap_fixed<32,9> result_t;
// typedef ap_fixed<32,9> general_table_t;

typedef ap_fixed<64,32> model_default_t;
typedef ap_fixed<64,32> input_t;
typedef ap_fixed<64,32> result_t;
typedef ap_fixed<64,32> general_table_t;

// typedef float general_table_t;
// typedef float model_default_t;
// typedef float input_t;
// typedef float result_t;

#endif
