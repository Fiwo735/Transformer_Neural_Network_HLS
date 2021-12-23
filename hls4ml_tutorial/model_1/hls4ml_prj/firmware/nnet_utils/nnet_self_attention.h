#ifndef NNET_SELF_ATTENTION_H_
#define NNET_SELF_ATTENTION_H_

#include "nnet_common.h"
#include "nnet_mult.h"
#include "nnet_activation_stream.h"
#include "nnet_dense_latency.h"
#include "nnet_dense_resource.h"
#include "nnet_helpers.h"
#include "nnet_array.h"
#include "hls_stream.h"
#include <math.h>

namespace nnet {

struct self_attention_config
{
    // Internal data type definitions
    typedef float bias_t;
    typedef float weight_t;
    typedef float accum_t;

    // Layer Sizes
    static const unsigned n_in = 10;
    static const unsigned n_out = 10;

    // Resource reuse info
    static const unsigned io_type = io_parallel;
    static const unsigned strategy = latency; 
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    // Product function to use
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

template<class data_T, class res_T, typename CONFIG_T>
void self_attention(
    data_T    data[CONFIG_T::d_k], // d_k == h
    res_T     res[CONFIG_T::d_v], // d_v == h
    typename CONFIG_T::Q_weight_t  weights_Q[CONFIG_T::d_k*CONFIG_T::d_h], // d_k x h == h x h
    typename CONFIG_T::K_weight_t  weights_K[CONFIG_T::d_k*CONFIG_T::d_h], // d_k x h == h x h
    typename CONFIG_T::V_weight_t  weights_V[CONFIG_T::d_v*CONFIG_T::d_h],  // d_v x h == h x h
    typename CONFIG_T::inv_sqrt_d_k_t  inv_sqrt_d_k[CONFIG_T::d_k]
){

    data_T zero_biases_qk[CONFIG_T::d_k];
    nnet::fill_zero<data_T, CONFIG_T::d_k>(zero_biases_qk);
    data_T zero_biases_v[CONFIG_T::d_v];
    nnet::fill_zero<data_T, CONFIG_T::d_v>(zero_biases_v);
    data_T zero_biases_kk[CONFIG_T::d_k*CONFIG_T::d_k];
    nnet::fill_zero<data_T, CONFIG_T::d_k*CONFIG_T::d_k>(zero_biases_kk);

    // 2.1 Q - queries, d_k entries
    // matrix: n_q x d_k
    data_T Q_out[CONFIG_T::d_k];
    // #pragma HLS ARRAY_PARTITION variable=Q_out complete dim=0
    nnet::dense<data_T, data_T, CONFIG_T>(data, Q_out, weights_Q, zero_biases_qk);

    // 2.2 K - keys, d_k entries
    // matrix: n_k x d_k
    data_T K_out[CONFIG_T::d_k];
    // #pragma HLS ARRAY_PARTITION variable=K_out complete dim=0
    nnet::dense<data_T, data_T, CONFIG_T>(data, K_out, weights_K, zero_biases_qk);

    // 2.3 V - values, d_v entries
    // matrix: n_k x d_v
    data_T V_out[CONFIG_T::d_v];
    // #pragma HLS ARRAY_PARTITION variable=V_out complete dim=0
    nnet::dense<data_T, data_T, CONFIG_T>(data, V_out, weights_V, zero_biases_v);

    // 3   MatMul
    // Q * K^T
    data_T K_T_out[CONFIG_T::d_k];
    nnet::transpose_2d<data_T, CONFIG_T>(K_out, K_T_out);
    data_T QK_out[CONFIG_T::d_k];
    // #pragma HLS ARRAY_PARTITION variable=QK_out complete dim=0
    nnet::dense<data_T, data_T, CONFIG_T>(Q_out, QK_out, K_T_out, zero_biases_qk);

    // 4   Scale (element-wise)
    // ... * sqrt(d_k)
    data_T scale_out[CONFIG_T::d_k];
    nnet::dense<data_T, data_T, CONFIG_T>(QK_out, scale_out, inv_sqrt_d_k, zero_biases_qk);

    // 5   Softmax
    // softmax(...)
    data_T softmax_out[CONFIG_T::d_k];
    nnet::softmax<data_T, data_T, CONFIG_T>(scale_out, softmax_out);
    

    // 6   MatMul
    // ... * V
    data_T softmax_V_out[CONFIG_T::n_out];
    nnet::dense<data_T, data_T, CONFIG_T>(softmax_out, softmax_V_out, V_out, zero_biases_qk);

    // 7   Cast
    Result: for(int ires = 0; ires < CONFIG_T::n_out; ires++){
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS UNROLL
        }
        //res[ires] = (res_T) (acc[ires]);
        res[ires] = cast<data_T, res_T, CONFIG_T>(softmax_V_out[ires]);
    }
}

}

#endif