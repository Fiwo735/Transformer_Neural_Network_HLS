#ifndef DEFINES_H_
#define DEFINES_H_

#include "ap_int.h"
#include "ap_fixed.h"
#include "nnet_utils/nnet_types.h"
#include <cstddef>
#include <cstdio>

//hls-fpga-machine-learning insert numbers
#define N_JET_COUNT 1
#define N_BATCH_SIZE 128
#define N_FEATURES 16

#define N_INPUT (N_JET_COUNT * N_FEATURES)
#define N_EMBEDDED (N_JET_COUNT * N_BATCH_SIZE)
#define N_TRANSFORMER ((N_JET_COUNT + 1) * N_BATCH_SIZE)

#define N_LABELS 5

//hls-fpga-machine-learning insert layer-precision
typedef ap_fixed<16,6> model_default_t;
typedef ap_fixed<16,6> input_t;
typedef ap_fixed<16,6> result_t;

#endif
