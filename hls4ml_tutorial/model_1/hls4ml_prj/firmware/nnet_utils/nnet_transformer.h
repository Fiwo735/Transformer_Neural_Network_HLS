#ifndef NNET_TRANSFORMER_H_
#define NNET_TRANSFORMER_H_

#include "nnet_common.h"
#include "nnet_mult.h"
#include "nnet_activation_stream.h"
#include "nnet_dense_latency.h"
#include "nnet_dense_resource.h"
#include "nnet_helpers.h"
#include "nnet_self_attention.h"
#include "hls_stream.h"
#include <math.h>

// #include "nnet_self_attention.h"

namespace nnet {

struct transformer_config
{
    // Internal data type definitions
    typedef float accum_t;
    typedef float weight_t;
    typedef float norm1_weight_t;
    typedef float norm1_bias_t;
    typedef float Q_weight_t;
    typedef float K_weight_t;
    typedef float V_weight_t;
    typedef float inv_sqrt_d_k_t;
    typedef float ff_weight_t;
    typedef float ff_bias_t;
    typedef float exp_table_t;
    typedef float inv_table_t;
    typedef float table_t;

    // Data type definitions for normalize
    typedef float bias_t; //TODO: we need separate bias for norm1/norm2/ff?
    typedef float scale_t;

    // Layer Sizes
    static const unsigned n_in = 10;
    static const unsigned n_out = 10;
    static const unsigned n_filt = -1;
    static const unsigned d_k = 10;
    static const unsigned d_v = 10;
    static const unsigned d_h = 10;
    static const unsigned height = 10;
    static const unsigned width = 10;
    static const unsigned table_size = 1024;

    // Resource reuse info
    static const unsigned io_type = io_parallel;
    static const unsigned strategy = latency;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::latency;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    // Product function to use
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

template<class data_T, class res_T, typename CONFIG_T>
void transformer(
    data_T    data[CONFIG_T::n_in],
    res_T     res[CONFIG_T::n_out],
    typename CONFIG_T::norm1_weight_t norm1_weight[CONFIG_T::n_in],
    typename CONFIG_T::norm1_bias_t   norm1_bias[CONFIG_T::n_in],
    typename CONFIG_T::Q_weight_t     Q_weight[CONFIG_T::n_in],
    typename CONFIG_T::K_weight_t     K_weight[CONFIG_T::n_in],
    typename CONFIG_T::V_weight_t     V_weight[CONFIG_T::n_in],
    typename CONFIG_T::inv_sqrt_d_k_t inv_sqrt_d_k[CONFIG_T::n_in],
    typename CONFIG_T::ff_weight_t    ff_weights[CONFIG_T::n_in*CONFIG_T::n_out],
    typename CONFIG_T::ff_bias_t      ff_biases[CONFIG_T::n_out]
){

    // 1 Normalise
    data_T input_norm_out[CONFIG_T::n_in];
    nnet::normalize<data_T, data_T, CONFIG_T>(data, input_norm_out, norm1_weight, norm1_bias);

    // // 2 Self-attention
    data_T self_attention_out[CONFIG_T::n_in];
    self_attention<data_T, data_T, CONFIG_T>(input_norm_out, self_attention_out, Q_weight, K_weight, V_weight, inv_sqrt_d_k);

    // 3 Sum (0) + (2)
    data_T middle_sum_out[CONFIG_T::n_in];
    Middle_sum: for (int imidsum = 0; imidsum < CONFIG_T::n_in; imidsum++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        middle_sum_out[imidsum] = self_attention_out[imidsum] + data[imidsum];
    }

    // 4 Normalise
    data_T sum_norm_out[CONFIG_T::n_in];
    nnet::normalize<data_T, data_T, CONFIG_T>(middle_sum_out, sum_norm_out, norm1_weight, norm1_bias);

    // // 5 FF
    data_T FF_out[CONFIG_T::n_in];
    nnet::dense<data_T, data_T, CONFIG_T>(sum_norm_out, FF_out, ff_weights, ff_biases);

    // 6 Sum (3) + (5)
    data_T end_sum_out[CONFIG_T::n_in];
    Final_sum: for (int iendsum = 0; iendsum < CONFIG_T::n_in; iendsum++) {
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

}

#endif