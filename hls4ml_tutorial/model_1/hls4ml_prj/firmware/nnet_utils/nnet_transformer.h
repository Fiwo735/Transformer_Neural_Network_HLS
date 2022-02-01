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
    static const unsigned n_in_doubled = 512;
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

template<class data_T, class res_T, typename CONFIG_T, typename SA_CONFIG_T, typename SA_NORM_CONFIG_T, typename SA_DENSE0_CONFIG_T, typename SA_DENSE1_CONFIG_T, typename SA_SOFTMAX_CONFIG_T, typename SA_DENSE2_CONFIG_T, typename SA_DENSE3_CONFIG_T, typename NORM0_CONFIG_T, typename SIG0_CONFIG_T, typename DENSE0_CONFIG_T, typename NORM1_CONFIG_T, typename SIG1_CONFIG_T, typename DENSE1_CONFIG_T>
void transformer(
    data_T    data[CONFIG_T::n_in],
    res_T     res[CONFIG_T::n_out],

    typename SA_CONFIG_T::inv_sqrt_d_k_t SA_inv_sqrt_d_k,
    typename CONFIG_T::SA_norm_weight_t  SA_norm_weight[CONFIG_T::n_SA_norm_weight],
    typename CONFIG_T::SA_norm_bias_t    SA_norm_bias[CONFIG_T::n_SA_norm_bias],
    typename CONFIG_T::SA_norm_weight_t  SA_norm_weight_1[CONFIG_T::n_SA_norm_weight],
    typename CONFIG_T::SA_norm_bias_t    SA_norm_bias_1[CONFIG_T::n_SA_norm_bias],
    typename CONFIG_T::SA_QKV_weight_t   SA_QKV_weight[CONFIG_T::n_SA_QKV_weight],
    typename CONFIG_T::SA_dense_weight_t SA_dense_weight[CONFIG_T::n_SA_dense_weight],
    typename CONFIG_T::SA_dense_bias_t   SA_dense_bias[CONFIG_T::n_SA_dense_bias],

    typename CONFIG_T::norm0_weight_t    norm0_weight[CONFIG_T::n_norm0_weight],
    typename CONFIG_T::norm0_bias_t      norm0_bias[CONFIG_T::n_norm0_bias],
    typename CONFIG_T::dense0_weight_t   dense0_weight[CONFIG_T::n_dense0_weight],
    typename CONFIG_T::norm1_weight_t    norm1_weight[CONFIG_T::n_norm1_weight],
    typename CONFIG_T::norm1_bias_t      norm1_bias[CONFIG_T::n_norm1_bias],
    typename CONFIG_T::dense1_weight_t   dense1_weight[CONFIG_T::n_dense1_weight]
){
    std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app);

    // 1 Self-attention
    data_T self_attention_out[CONFIG_T::n_in];
    self_attention<data_T, data_T, SA_CONFIG_T, SA_NORM_CONFIG_T, SA_DENSE0_CONFIG_T, SA_DENSE1_CONFIG_T, SA_SOFTMAX_CONFIG_T, SA_DENSE2_CONFIG_T, SA_DENSE3_CONFIG_T>(
        data,
        self_attention_out,

        SA_inv_sqrt_d_k,
        
        SA_norm_weight,
        SA_norm_bias,
        SA_norm_weight_1,
        SA_norm_bias_1,
        SA_QKV_weight,
        SA_dense_weight,
        SA_dense_bias
    );
    fout << "self_attention_out ("<< CONFIG_T::n_in << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in>(self_attention_out, fout);

    // 2.1 norm
    data_T norm0_out[CONFIG_T::n_in];
    normalize<data_T, data_T, NORM0_CONFIG_T>(self_attention_out, norm0_out, norm0_weight, norm0_bias);
    fout << "norm0_out ("<< CONFIG_T::n_in << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in>(norm0_out, fout);

    // 2.2 SiLU
    data_T SiLU0_out[CONFIG_T::n_in];
    // data_T sigmoid0_out[CONFIG_T::n_in];
    // sigmoid<data_T, data_T, SIG0_CONFIG_T>(norm0_out, sigmoid0_out);
    // silu0: for (int isilu0 = 0; isilu0 < CONFIG_T::n_in; isilu0++) {
    //     SiLU0_out[isilu0] = CONFIG_T::template product<data_T, data_T, data_T>::product(norm0_out[isilu0], sigmoid0_out[isilu0]);
    // }
    silu<data_T, data_T, SIG0_CONFIG_T>(norm0_out, SiLU0_out);
    fout << "SiLU0_out ("<< CONFIG_T::n_in << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in>(SiLU0_out, fout);

    // 2.3 dense
    data_T dense0_out[CONFIG_T::n_in_doubled];
    data_T zero_bias0[CONFIG_T::n_in_doubled];
    fill_zero<data_T,CONFIG_T::n_in_doubled >(zero_bias0);
    dense<data_T, data_T, DENSE0_CONFIG_T>(SiLU0_out, dense0_out, dense0_weight, zero_bias0);
    fout << "dense0_out ("<< CONFIG_T::n_in_doubled << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in_doubled>(dense0_out, fout);

    // 2.4 norm
    data_T norm1_out[CONFIG_T::n_in_doubled];
    normalize<data_T, data_T, NORM1_CONFIG_T>(dense0_out, norm1_out, norm1_weight, norm1_bias);
    fout << "norm1_out ("<< CONFIG_T::n_in_doubled << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in_doubled>(norm1_out, fout);

    // 2.5 SiLU
    data_T SiLU1_out[CONFIG_T::n_in_doubled];
    // data_T sigmoid1_out[CONFIG_T::n_in_doubled];
    // sigmoid<data_T, data_T, SIG1_CONFIG_T>(norm1_out, sigmoid1_out);
    // silu1: for (int isilu1 = 0; isilu1 < CONFIG_T::n_in_doubled; isilu1++) {
    //     SiLU1_out[isilu1] = CONFIG_T::template product<data_T, data_T, data_T>::product(norm1_out[isilu1], sigmoid1_out[isilu1]);
    // }
    silu<data_T, data_T, SIG0_CONFIG_T>(norm1_out, SiLU1_out);
    fout << "SiLU1_out ("<< CONFIG_T::n_in_doubled << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in_doubled>(SiLU1_out, fout);

    // 2.6 dense
    data_T dense1_out[CONFIG_T::n_in];
    data_T zero_bias1[CONFIG_T::n_in];
    fill_zero<data_T,CONFIG_T::n_in >(zero_bias1);
    dense<data_T, data_T, DENSE1_CONFIG_T>(SiLU1_out, dense1_out, dense1_weight, zero_bias1);
    fout << "dense1_out ("<< CONFIG_T::n_in << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in>(dense1_out, fout);

    // 3 Sum (1) + (2)
    data_T sum_out[CONFIG_T::n_in];
    Final_sum: for (int iendsum = 0; iendsum < CONFIG_T::n_in; iendsum++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        sum_out[iendsum] = self_attention_out[iendsum] + dense1_out[iendsum];
    }
    fout << "sum_out ("<< CONFIG_T::n_in << "):" << "\n";
    print_result<data_T, CONFIG_T::n_in>(sum_out, fout);

    // 4 Cast
    Result: for(int ires = 0; ires < CONFIG_T::n_out; ires++){
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS UNROLL
        }
        res[ires] = cast<data_T, res_T, CONFIG_T>(sum_out[ires]);
    }

    fout.close();
}

}

#endif