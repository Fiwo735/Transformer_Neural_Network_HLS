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

#include "nnet_layernorm.h"

namespace nnet {

struct self_attention_config
{
    typedef float norm_weight_t;
    typedef float norm_bias_t;
    typedef float QKV_weight_t;
    typedef float dense_weight_t;
    typedef float dense_bias_t;

    static const unsigned n_norm_weight = 128;
    static const unsigned n_norm_bias = 128;
    static const unsigned n_QKV_weight = 49152;
    static const unsigned n_dense_weight = 16384;
    static const unsigned n_dense_bias = 128;

    // Internal data type definitions
    typedef float bias_t;
    typedef float weight_t;
    typedef float accum_t;

    typedef float inv_sqrt_d_k_t;

    // static const inv_sqrt_d_k_t inv_sqrt_d_k = 0.0883883476483; //TODO:

    // Layer Sizes
    static const unsigned n_in = 256;
    static const unsigned n_out = 256;

    static const unsigned n_qkv = 768;
    static const unsigned n_q = 256;
    static const unsigned n_k = 256;
    static const unsigned n_v = 256;
    static const unsigned n_energy = 8;
    static const unsigned n_scaled_attention = 256;

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

template<class data_T, class res_T, typename CONFIG_T, typename NORM_CONFIG_T, typename DENSE0_CONFIG_T, typename DENSE1_CONFIG_T, typename SOFTMAX_CONFIG_T, typename DENSE2_CONFIG_T, typename DENSE3_CONFIG_T>
void self_attention(
    data_T    data[CONFIG_T::n_in],
    res_T     res[CONFIG_T::n_out],

    typename CONFIG_T::inv_sqrt_d_k_t inv_sqrt_d_k,

    typename CONFIG_T::norm_weight_t  norm_weight[CONFIG_T::n_norm_weight],
    typename CONFIG_T::norm_bias_t    norm_bias[CONFIG_T::n_norm_bias],
    typename CONFIG_T::QKV_weight_t   QKV_weight[CONFIG_T::n_QKV_weight],
    typename CONFIG_T::dense_weight_t dense_weight[CONFIG_T::n_dense_weight],
    typename CONFIG_T::dense_bias_t   dense_bias[CONFIG_T::n_dense_bias]
){
    std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app);

    // 1 norm
    data_T input_norm[CONFIG_T::n_in];
    nnet::normalize<data_T, data_T, NORM_CONFIG_T>(data, input_norm, norm_weight, norm_bias);
    fout << "input_norm ("<< CONFIG_T::n_in << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_in>(input_norm, fout);
    // fout << "after printing input_norm" << "\n";
    
    // 2.1 qkv (dense)
    data_T qkv_out[CONFIG_T::n_qkv];
    data_T zero_bias0[CONFIG_T::n_qkv];
    nnet::fill_zero<data_T,CONFIG_T::n_qkv >(zero_bias0);
    nnet::dense<data_T, data_T, DENSE0_CONFIG_T>(input_norm, qkv_out, QKV_weight, zero_bias0);
    fout << "qkv_out ("<< CONFIG_T::n_qkv << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_qkv>(qkv_out, fout);

    // 2.2 reshape
    data_T qkv_reshaped[CONFIG_T::n_qkv];
    //TODO: implement this properly 384 (3*128) -> 2x192
    QKV_reshape: for (int iqkv = 0; iqkv < CONFIG_T::n_qkv; iqkv++) {
        qkv_reshaped[iqkv] = qkv_out[iqkv];
    }
    fout << "qkv_reshaped ("<< CONFIG_T::n_qkv << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_qkv>(qkv_reshaped, fout);

    // 3 split
    data_T queries[CONFIG_T::n_q];
    data_T keys[CONFIG_T::n_k];
    data_T values[CONFIG_T::n_v];

    Queries_split: for (int iq = 0; iq < CONFIG_T::n_q; iq++) {
        queries[iq] = qkv_reshaped[iq];
    }
    fout << "queries ("<< CONFIG_T::n_q << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_q>(queries, fout);
    Keys_split: for (int ik = 0; ik < CONFIG_T::n_k; ik++) {
        keys[ik] = qkv_reshaped[CONFIG_T::n_q + ik];
    }
    fout << "keys ("<< CONFIG_T::n_k << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_k>(keys, fout);
    Values_split: for (int iv = 0; iv < CONFIG_T::n_v; iv++) {
        values[iv] = qkv_reshaped[CONFIG_T::n_q + CONFIG_T::n_k + iv];
    }
    fout << "values ("<< CONFIG_T::n_v << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_v>(values, fout);

    // 4.1 energy - dense
    data_T energy[CONFIG_T::n_energy];
    // nnet::transpose_2d<data_T, CONFIG_T>(); //TODO: might need to transpose keys
    data_T zero_bias1[CONFIG_T::n_energy];
    nnet::fill_zero<data_T,CONFIG_T::n_energy >(zero_bias1);
    nnet::dense<data_T, data_T, DENSE1_CONFIG_T>(queries, energy, keys, zero_bias1);
    fout << "energy ("<< CONFIG_T::n_energy << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_energy>(energy, fout);

    // 4.2 scale
    data_T energy_scaled[CONFIG_T::n_energy];
    // model_default_t inv_sqrt_d_k = INVERSE; //TODO: implement properly using config
    Scale: for (int iscale = 0; iscale < CONFIG_T::n_energy; iscale++) {
        energy_scaled[iscale] = CONFIG_T::template product<data_T, data_T, data_T>::product(energy[iscale], inv_sqrt_d_k);//TODO: CONFIG_T::inv_sqrt_d_k);
    }
    fout << "energy_scaled ("<< CONFIG_T::n_energy << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_energy>(energy_scaled, fout);

    // 5 attention - softmax
    data_T attention[CONFIG_T::n_energy];
    nnet::softmax<data_T, data_T, SOFTMAX_CONFIG_T>(energy_scaled, attention); // softmax
    fout << "attention ("<< CONFIG_T::n_energy << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_energy>(attention, fout);

    // 6 scaled attention - dense
    data_T scaled_attention[CONFIG_T::n_scaled_attention];
    data_T zero_bias2[CONFIG_T::n_scaled_attention];
    nnet::fill_zero<data_T,CONFIG_T::n_scaled_attention >(zero_bias2);
    nnet::dense<data_T, data_T, DENSE2_CONFIG_T>(attention, scaled_attention, values, zero_bias2);
    fout << "scaled_attention ("<< CONFIG_T::n_scaled_attention << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_scaled_attention>(scaled_attention, fout);

    // 7 reshape
    data_T scaled_attention_reshaped[CONFIG_T::n_scaled_attention];
    //TODO: implement this properly
    Scaled_attention_reshape: for (int isa = 0; isa < CONFIG_T::n_scaled_attention; isa++) {
        scaled_attention_reshaped[isa] = scaled_attention[isa];
    }
    fout << "scaled_attention_reshaped ("<< CONFIG_T::n_scaled_attention << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_scaled_attention>(scaled_attention_reshaped, fout);

    // 8 dense
    data_T result[CONFIG_T::n_out];
    nnet::dense<data_T, data_T, DENSE3_CONFIG_T>(scaled_attention_reshaped, result, dense_weight, dense_bias);
    fout << "result ("<< CONFIG_T::n_out << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_out>(result, fout);

    // 9 sum
    data_T sum_out[CONFIG_T::n_out];
    Final_sum: for (int iendsum = 0; iendsum < CONFIG_T::n_out; iendsum++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        sum_out[iendsum] = result[iendsum] + data[iendsum];
    }
    fout << "sum_out ("<< CONFIG_T::n_out << "):" << "\n";
    nnet::print_result<data_T, CONFIG_T::n_out>(sum_out, fout);

    // 10 Cast
    Result: for(int ires = 0; ires < CONFIG_T::n_out; ires++){
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS UNROLL
        }
        res[ires] = cast<data_T, res_T, CONFIG_T>(sum_out[ires]);
    }



    // data_T zero_biases_qk[CONFIG_T::d_k];
    // nnet::fill_zero<data_T, CONFIG_T::d_k>(zero_biases_qk);
    // data_T zero_biases_v[CONFIG_T::d_v];
    // nnet::fill_zero<data_T, CONFIG_T::d_v>(zero_biases_v);
    // data_T zero_biases_kk[CONFIG_T::d_k*CONFIG_T::d_k];
    // nnet::fill_zero<data_T, CONFIG_T::d_k*CONFIG_T::d_k>(zero_biases_kk);

    // // 2.1 Q - queries, d_k entries
    // // matrix: n_q x d_k
    // data_T Q_out[CONFIG_T::d_k];
    // // #pragma HLS ARRAY_PARTITION variable=Q_out complete dim=0
    // nnet::dense<data_T, data_T, CONFIG_T>(data, Q_out, weights_Q, zero_biases_qk);

    // // 2.2 K - keys, d_k entries
    // // matrix: n_k x d_k
    // data_T K_out[CONFIG_T::d_k];
    // // #pragma HLS ARRAY_PARTITION variable=K_out complete dim=0
    // nnet::dense<data_T, data_T, CONFIG_T>(data, K_out, weights_K, zero_biases_qk);

    // // 2.3 V - values, d_v entries
    // // matrix: n_k x d_v
    // data_T V_out[CONFIG_T::d_v];
    // // #pragma HLS ARRAY_PARTITION variable=V_out complete dim=0
    // nnet::dense<data_T, data_T, CONFIG_T>(data, V_out, weights_V, zero_biases_v);

    // // 3   MatMul
    // // Q * K^T
    // data_T K_T_out[CONFIG_T::d_k];
    // nnet::transpose_2d<data_T, CONFIG_T>(K_out, K_T_out);
    // data_T QK_out[CONFIG_T::d_k];
    // // #pragma HLS ARRAY_PARTITION variable=QK_out complete dim=0
    // nnet::dense<data_T, data_T, CONFIG_T>(Q_out, QK_out, K_T_out, zero_biases_qk);

    // // 4   Scale (element-wise)
    // // ... * sqrt(d_k)
    // data_T scale_out[CONFIG_T::d_k];
    // nnet::dense<data_T, data_T, CONFIG_T>(QK_out, scale_out, inv_sqrt_d_k, zero_biases_qk);

    // // 5   Softmax
    // // softmax(...)
    // data_T softmax_out[CONFIG_T::d_k];
    // nnet::softmax<data_T, data_T, CONFIG_T>(scale_out, softmax_out);
    

    // // 6   MatMul
    // // ... * V
    // data_T softmax_V_out[CONFIG_T::n_out];
    // nnet::dense<data_T, data_T, CONFIG_T>(softmax_out, softmax_V_out, V_out, zero_biases_qk);

    // // 7   Cast
    // Result: for(int ires = 0; ires < CONFIG_T::n_out; ires++){
    //     if (CONFIG_T::io_type == io_serial){
    //         #pragma HLS UNROLL
    //     }
    //     //res[ires] = (res_T) (acc[ires]);
    //     res[ires] = cast<data_T, res_T, CONFIG_T>(softmax_V_out[ires]);
    // }

    fout.close();
}

}

#endif