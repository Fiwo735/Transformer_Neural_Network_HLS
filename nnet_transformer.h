#ifndef NNET_SELF_ATTENTION_H_
#define NNET_SELF_ATTENTION_H_

#include "nnet_common.h"
#include "nnet_mult.h"
#include "nnet_dense_latency.h"
#include "nnet_dense_resource.h"
#include "nnet_helpers.h"
#include "hls_stream.h"
#include <math.h>

// #include "nnet_self_attention.h"

namespace nnet {

template<class data_T, class res_T, typename CONFIG_T>
void transformer(
    data_T    data[CONFIG_T::n_in],
    res_T     res[CONFIG_T::n_out],
    typename CONFIG_T::weight_t  weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::bias_t    biases[CONFIG_T::n_out])
{

    // 0 Input

    // 1 Normalise
    data_T input_norm_out[CONFIG_T::n_in];
    input_norm_out = data; // TODO: do normalise

    // 2 Self-attention
    data_T self_attention_out[CONFIG_T::n_in];
    self_attention<data_T, data_T, CONFIG_T>(input_norm_out, self_attention_out, weights, biases);

    // 3 Sum (0) + (2)
    data_T middle_sum_out[CONFIG_T::n_in];
    Middle_sum: for (imidsum = 0; imidsum < CONFIG_T::n_in; imidsum++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        // TODO: this could be done directly when calculating self-attention, possibly saving array access time
        middle_sum_out[imidsum] = self_attention_out[imidsum] + data[imidsum];
    }

    // 4 Normalise
    data_T sum_norm_out[CONFIG_T::n_in];
    sum_norm_out = middle_sum_out // TODO: do normalise

    // 5 FF
    data_T FF_out[CONFIG_T::n_in];
    FF_out = sum_norm_out // TODO: do FF

    // 6 Sum (3) + (5)
    data_T end_sum_out[CONFIG_T::n_in];
    Middle_sum: for (iendsum = 0; iendsum < CONFIG_T::n_in; iendsum++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        end_sum_out[iendsum] = middle_sum_out[iendsum] + FF_out[iendsum];
    }

    // 7 Cast
    Result: for(int ires = 0; ires < CONFIG_T::n_out; ires++){
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS UNROLL
        }
        //res[ires] = (res_T) (acc[ires]);
        res[ires] = cast<data_T, res_T, CONFIG_T>(end_sum_out[ires]);
    }
}

#endif