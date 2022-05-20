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

#include "nnet_layernorm.h"

namespace nnet {

struct transformer_config
{

    static const unsigned n_SA_norm_weight = 128;
    static const unsigned n_SA_norm_bias = 128;
    static const unsigned n_SA_QKV_weight = 49152;
    static const unsigned n_SA_dense_weight = 16384;
    static const unsigned n_SA_dense_bias = 128;

    static const unsigned n_norm0_weight = 128;
    static const unsigned n_norm0_bias = 128;
    static const unsigned n_dense0_weight = 32768;
    static const unsigned n_norm1_weight = 256;
    static const unsigned n_norm1_bias = 256;
    static const unsigned n_dense1_weight = 32768;

    typedef float SA_norm_weight_t;
    typedef float SA_norm_bias_t;
    typedef float SA_QKV_weight_t;
    typedef float SA_dense_weight_t;
    typedef float SA_dense_bias_t;

    typedef float norm0_weight_t;
    typedef float norm0_bias_t;
    typedef float dense0_weight_t;
    typedef float norm1_weight_t;
    typedef float norm1_bias_t;
    typedef float dense1_weight_t;

    // // Internal data type definitions
    // typedef float accum_t;
    // typedef float weight_t;
    // typedef float norm1_weight_t;
    // typedef float norm1_bias_t;
    // typedef float Q_weight_t;
    // typedef float K_weight_t;
    // typedef float V_weight_t;
    // typedef float inv_sqrt_d_k_t;
    // typedef float ff_weight_t;
    // typedef float ff_bias_t;
    typedef float exp_table_t;
    typedef float inv_table_t;
    typedef float table_t;

    // Data type definitions for normalize
    typedef float bias_t;
    typedef float scale_t;

    // Layer Sizes
    static const unsigned n_in = 256;
    static const unsigned n_out = 256;
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
    static const softmax_implementation implementation = softmax_implementation::latency;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    // Product function to use
    template<class x_T, class y_T, class res_T>
    using product = product::mult<x_T, y_T, res_T>;
};

// TODO make input_t and data_t be used consistently

template<class data_T, class res_T, typename CONFIG_T, typename SA_CONFIG_T, typename SA_NORM_CONFIG_T, typename SA_DENSE0_CONFIG_T, typename SA_TRANSPOSE0_CONFIG_T, typename SA_SOFTMAX_CONFIG_T, typename SA_DENSE3_CONFIG_T, typename NORM0_CONFIG_T, typename SIG0_CONFIG_T, typename DENSE0_CONFIG_T, typename NORM1_CONFIG_T, typename SIG1_CONFIG_T, typename DENSE1_CONFIG_T>
void transformer(
    data_T                               data[CONFIG_T::n_particles][CONFIG_T::n_el],
    res_T                                res[CONFIG_T::n_particles][CONFIG_T::n_el],
    typename CONFIG_T::SA_norm_weight_t  SA_norm_weight[CONFIG_T::n_el],
    typename CONFIG_T::SA_norm_bias_t    SA_norm_bias[CONFIG_T::n_el],
    typename CONFIG_T::SA_QKV_weight_t   SA_QKV_weight[CONFIG_T::n_SA_QKV_weight],
    typename CONFIG_T::SA_dense_weight_t SA_dense_weight[CONFIG_T::n_SA_dense_weight],
    typename CONFIG_T::SA_dense_bias_t   SA_dense_bias[CONFIG_T::n_SA_dense_bias],
    typename CONFIG_T::norm0_weight_t    norm0_weight[CONFIG_T::n_el],
    typename CONFIG_T::norm0_bias_t      norm0_bias[CONFIG_T::n_el],
    typename CONFIG_T::dense0_weight_t   dense0_weight[CONFIG_T::n_dense0_weight],
    typename CONFIG_T::norm1_weight_t    norm1_weight[CONFIG_T::n_el_doubled],
    typename CONFIG_T::norm1_bias_t      norm1_bias[CONFIG_T::n_el_doubled],
    typename CONFIG_T::dense1_weight_t   dense1_weight[CONFIG_T::n_dense1_weight]
){
    #pragma HLS ARRAY_PARTITION variable=data complete dim=0
    #pragma HLS ARRAY_PARTITION variable=res complete dim=0
    #pragma HLS FUNCTION_INSTANTIATE variable=SA_QKV_weight,SA_dense_weight,SA_dense_bias,dense0_weight,dense1_weight
    #pragma HLS PIPELINE

    // Self-attention
    data_T self_attention_out[CONFIG_T::n_particles][CONFIG_T::n_el];
    #pragma HLS ARRAY_PARTITION variable=self_attention_out complete dim=0
    self_attention<data_T, data_T, SA_CONFIG_T, SA_NORM_CONFIG_T, SA_DENSE0_CONFIG_T, SA_TRANSPOSE0_CONFIG_T, SA_SOFTMAX_CONFIG_T, SA_DENSE3_CONFIG_T>(
        data,
        self_attention_out,
        SA_norm_weight,
        SA_norm_bias,
        SA_QKV_weight,
        SA_dense_weight,
        SA_dense_bias
    );
    PRETTY_PRINT_2D(self_attention_out, CONFIG_T::n_particles, CONFIG_T::n_el);

    data_T self_attention_sum[CONFIG_T::n_particles][CONFIG_T::n_el];
    #pragma HLS ARRAY_PARTITION variable=self_attention_sum complete dim=0
#if SKIP_NORM == 0
    data_T normalized0[CONFIG_T::n_particles][CONFIG_T::n_el];
    #pragma HLS ARRAY_PARTITION variable=normalized0 complete dim=0
#endif
    data_T activ0[CONFIG_T::n_particles][CONFIG_T::n_el];
    #pragma HLS ARRAY_PARTITION variable=activ0 complete dim=0
    data_T dense0_out[CONFIG_T::n_particles][CONFIG_T::n_el_doubled];
    #pragma HLS ARRAY_PARTITION variable=dense0_out complete dim=0
#if SKIP_NORM == 0
    data_T normalized1[CONFIG_T::n_particles][CONFIG_T::n_el_doubled];
    #pragma HLS ARRAY_PARTITION variable=normalized1 complete dim=0
#endif
    data_T activ1[CONFIG_T::n_particles][CONFIG_T::n_el_doubled];
    #pragma HLS ARRAY_PARTITION variable=activ1 complete dim=0
    data_T dense1_out[CONFIG_T::n_particles][CONFIG_T::n_el];
    #pragma HLS ARRAY_PARTITION variable=dense1_out complete dim=0


    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iendsum = 0; iendsum < CONFIG_T::n_el; iendsum++) {
            self_attention_sum[jj][iendsum] = data[jj][iendsum] + self_attention_out[jj][iendsum];
        }

#if SKIP_NORM == 0
        normalize<data_T, data_T, NORM0_CONFIG_T>(self_attention_sum[jj], normalized0[jj], norm0_weight, norm0_bias);
        relu<data_T, data_T, SIG0_CONFIG_T>(normalized0[jj], activ0[jj]);
#else
        relu<data_T, data_T, SIG0_CONFIG_T>(self_attention_sum[jj], activ0[jj]);
#endif

        dense_latency_no_bias<data_T, data_T, DENSE0_CONFIG_T>(activ0[jj], dense0_out[jj], dense0_weight);

#if SKIP_NORM == 0
        normalize<data_T, data_T, NORM1_CONFIG_T>(dense0_out[jj], normalized1[jj], norm1_weight, norm1_bias);
        relu<data_T, data_T, SIG1_CONFIG_T>(normalized1[jj], activ1[jj]);
#else
        relu<data_T, data_T, SIG1_CONFIG_T>(dense0_out[jj], activ1[jj]);
#endif

        dense_latency_no_bias<data_T, data_T, DENSE1_CONFIG_T>(activ1[jj], dense1_out[jj], dense1_weight);

        for (int ii = 0; ii < CONFIG_T::n_el; ii++) {
            res[jj][ii] = dense1_out[jj][ii] + self_attention_sum[jj][ii];
        }
    }
    PRETTY_PRINT_2D(self_attention_sum, CONFIG_T::n_particles, CONFIG_T::n_el);
    PRETTY_PRINT_2D(activ0, CONFIG_T::n_particles, CONFIG_T::n_el);
    PRETTY_PRINT_2D(dense0_out, CONFIG_T::n_particles, CONFIG_T::n_el_doubled);
    PRETTY_PRINT_2D(activ1, CONFIG_T::n_particles, CONFIG_T::n_el_doubled);
    PRETTY_PRINT_2D(dense1_out, CONFIG_T::n_particles, CONFIG_T::n_el);
    PRETTY_PRINT_2D(res, CONFIG_T::n_particles, CONFIG_T::n_el);
}

}

#endif