#ifndef NNET_SELF_ATTENTION_H_
#define NNET_SELF_ATTENTION_H_

#include "nnet_common.h"
#include "nnet_mult.h"
#include "nnet_activation_stream.h"
#include "nnet_dense_latency.h"
#include "nnet_dense_resource.h"
#include "nnet_helpers.h"
#include "nnet_merge.h"
#include "nnet_array.h"
#include "hls_stream.h"
#include <math.h>

#include "nnet_layernorm.h"

#ifndef __SYNTHESIS__
std::ofstream FOUT("tb_data/csim_layers.log", std::ios_base::app);

#define PRETTY_PRINT(ARR, SIZE) {\
  FOUT << #ARR << " [" << SIZE << "]:\n";\
  for (unsigned i = 0; i < SIZE; i++) {\
    FOUT << ARR[i] << " ";\
  }\
  FOUT << "\n\n";\
}

#define PRETTY_PRINT_2D(ARR, SIZE0, SIZE1) {\
  FOUT << #ARR << " [" << SIZE0 << "][" << SIZE1 << "]:\n";\
  for (unsigned i = 0; i < SIZE0; i++) {\
    for (unsigned j = 0; j < SIZE1; j++) {\
        FOUT << ARR[i][j] << " ";\
    }\
    FOUT << "\n";\
  }\
  FOUT << "\n";\
}

#define PRETTY_PRINT_3D(ARR, SIZE0, SIZE1, SIZE2) {\
  FOUT << #ARR << " [" << SIZE0 << "][" << SIZE1 << "][" << SIZE2 << "]:\n";\
  for (unsigned i = 0; i < SIZE0; i++) {\
    for (unsigned j = 0; j < SIZE1; j++) {\
        for (unsigned k = 0; k < SIZE2; k++) {\
            FOUT << ARR[i][j][k] << " ";\
        }\
        FOUT << "\n";\
    }\
    FOUT << "\n";\
  }\
}

#else

#define PRETTY_PRINT(ARR, SIZE) {}
#define PRETTY_PRINT_2D(ARR, SIZE0, SIZE1) {}
#define PRETTY_PRINT_3D(ARR, SIZE0, SIZE1, SIZE2) {}
#endif

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

    // Layer Sizes
    static const unsigned n_in = 256;
    static const unsigned n_out = 256;

    static const unsigned n_qkv = 768;
    static const unsigned n_q = 256;
    static const unsigned n_k = 256;
    static const unsigned n_v = 256;
    // static const unsigned n_energy = 8;
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
    using product = product::mult<x_T, y_T, res_T>;
};

template<class data_T, class res_T, typename CONFIG_T, typename NORM_CONFIG_T, typename DENSE0_Q_CONFIG_T, typename DENSE0_K_CONFIG_T, typename DENSE0_V_CONFIG_T, typename SOFTMAX_CONFIG_T, typename DENSE3_CONFIG_T, typename EXP_NORM_CONFIG_T>
void self_attention(
    data_T                               data[CONFIG_T::n_particles][CONFIG_T::n_qkv_in_el],
    res_T                                res[CONFIG_T::n_particles][CONFIG_T::n_qkv_in_el],
    typename CONFIG_T::norm_weight_t     norm_weight[CONFIG_T::n_qkv_in_el],
    typename CONFIG_T::norm_bias_t       norm_bias[CONFIG_T::n_qkv_in_el],
    // typename CONFIG_T::QKV_weight_t      QKV_weight[CONFIG_T::n_QKV_weight],
    typename CONFIG_T::Q_weight_t        Q_weight[CONFIG_T::n_Q_weight],
    typename CONFIG_T::K_weight_t        K_weight[CONFIG_T::n_K_weight],
    typename CONFIG_T::V_weight_t        V_weight[CONFIG_T::n_V_weight],
    typename CONFIG_T::dense_weight_t    dense_weight[CONFIG_T::n_dense_weight],
    typename CONFIG_T::dense_bias_t      dense_bias[CONFIG_T::n_dense_bias],
    typename CONFIG_T::exp_norm_weight_t exp_norm_weight[CONFIG_T::n_exp_norm_weight],
    typename CONFIG_T::exp_norm_bias_t   exp_norm_bias[CONFIG_T::n_exp_norm_bias]
){
    #pragma HLS ARRAY_PARTITION variable=data complete dim=0
    #pragma HLS ARRAY_PARTITION variable=res complete dim=0
    #pragma HLS FUNCTION_INSTANTIATE variable=norm_weight_t,norm_bias_t,Q_weight,K_weight,V_weight,dense_weight,dense_bias,exp_norm_weight,exp_norm_bias

#if SKIP_NORM == 0
    // Normalize
    typename CONFIG_T::norm_t normalized[CONFIG_T::n_particles][CONFIG_T::n_qkv_in_el];
    #pragma HLS ARRAY_PARTITION variable=normalized complete dim=0
    Norm_0: for (unsigned inorm = 0; inorm < CONFIG_T::n_particles; inorm++) {
        #pragma HLS PIPELINE II=1
        normalize<data_T, typename CONFIG_T::norm_t, NORM_CONFIG_T>(data[inorm], normalized[inorm], norm_weight, norm_bias);
    }
    PRETTY_PRINT_2D(normalized, CONFIG_T::n_particles, CONFIG_T::n_qkv_in_el);
#endif

    // QKV (dense)
//     typename CONFIG_T::QKV_t qkv_out_el[CONFIG_T::n_particles][CONFIG_T::n_qkv_out_el];
//     #pragma HLS ARRAY_PARTITION variable=qkv_out_el complete dim=0
//     QKV_dense: for (unsigned iqkv = 0; iqkv < CONFIG_T::n_particles; iqkv++) {
// #if SKIP_NORM == 0
//         dense_latency_no_bias<typename CONFIG_T::norm_t, typename CONFIG_T::QKV_t, DENSE0_CONFIG_T>(normalized[iqkv], qkv_out_el[iqkv], QKV_weight);
// #else
//         dense_latency_no_bias<data_T, typename CONFIG_T::QKV_t, DENSE0_CONFIG_T>(data[iqkv], qkv_out_el[iqkv], QKV_weight);
// #endif
//     }
//     PRETTY_PRINT_2D(qkv_out_el, CONFIG_T::n_particles, CONFIG_T::n_qkv_out_el);

    typename CONFIG_T::Q_t queries[CONFIG_T::n_particles][CONFIG_T::n_q];
    #pragma HLS ARRAY_PARTITION variable=queries complete dim=0
    Q_dense: for (unsigned iq = 0; iq < CONFIG_T::n_particles; iq++) {
        #pragma HLS PIPELINE II=1
#if SKIP_NORM == 0
        dense_latency_no_bias<typename CONFIG_T::norm_t, typename CONFIG_T::Q_t, DENSE0_Q_CONFIG_T>(normalized[iq], queries[iq], Q_weight);
#else
        dense_latency_no_bias<data_T, typename CONFIG_T::Q_t, DENSE0_Q_CONFIG_T>(data[iq], queries[iq], Q_weight);
#endif
    }
    PRETTY_PRINT_2D(queries, CONFIG_T::n_particles, CONFIG_T::n_q);

    typename CONFIG_T::K_t keys[CONFIG_T::n_particles][CONFIG_T::n_k];
    #pragma HLS ARRAY_PARTITION variable=keys complete dim=0
    K_dense: for (unsigned ik = 0; ik < CONFIG_T::n_particles; ik++) {
        #pragma HLS PIPELINE II=1
#if SKIP_NORM == 0
        dense_latency_no_bias<typename CONFIG_T::norm_t, typename CONFIG_T::K_t, DENSE0_K_CONFIG_T>(normalized[ik], keys[ik], K_weight);
#else
        dense_latency_no_bias<data_T, typename CONFIG_T::K_t, DENSE0_K_CONFIG_T>(data[ik], keys[ik], K_weight);
#endif
    }
    PRETTY_PRINT_2D(keys, CONFIG_T::n_particles, CONFIG_T::n_k);

    typename CONFIG_T::V_t values[CONFIG_T::n_particles][CONFIG_T::n_v];
    #pragma HLS ARRAY_PARTITION variable=values complete dim=0
    V_dense: for (unsigned iv = 0; iv < CONFIG_T::n_particles; iv++) {
        #pragma HLS PIPELINE II=1
#if SKIP_NORM == 0
        dense_latency_no_bias<typename CONFIG_T::norm_t, typename CONFIG_T::V_t, DENSE0_V_CONFIG_T>(normalized[iv], values[iv], V_weight);
#else
        dense_latency_no_bias<data_T, typename CONFIG_T::V_t, DENSE0_V_CONFIG_T>(data[iv], values[iv], V_weight);
#endif
    }
    PRETTY_PRINT_2D(values, CONFIG_T::n_particles, CONFIG_T::n_v);

    // QKV split
    // QKV_split_0: for (unsigned ii = 0; ii < CONFIG_T::n_particles; ii++) {
    //     QKV_split_1: for (unsigned ll = 0; ll < CONFIG_T::n_qkv_out_el/(3*CONFIG_T::n_heads); ll++) {
    //         QKV_split_2: for (unsigned jj = 0; jj < CONFIG_T::n_heads; jj++){
    //             unsigned out_index = ll * CONFIG_T::n_heads + jj;
    //             unsigned in_index_const = ll + jj * CONFIG_T::n_qkv_out_el / CONFIG_T::n_heads;
    //             unsigned in_index_var = CONFIG_T::n_qkv_out_el / (3*CONFIG_T::n_heads);

    //             queries[ii][out_index] = qkv_out_el[ii][in_index_const]; // const + 0 * var
    //             keys[ii][out_index] = qkv_out_el[ii][in_index_const + in_index_var]; // const + 1 * var
    //             values[ii][out_index] = qkv_out_el[ii][in_index_const + 2 * in_index_var]; // const + 2 * var
    //         }
    //     }
    // }

    // Einsum(qhc, khc -> hqk)
    typename CONFIG_T::energy_t energy[CONFIG_T::n_heads][CONFIG_T::n_particles][CONFIG_T::n_particles];
    #pragma HLS ARRAY_PARTITION variable=energy complete dim=0
    Einsum_0_c: for (unsigned cc = 0; cc < CONFIG_T::n_el/CONFIG_T::n_heads; cc++) {
        Einsum_0_h: for (unsigned hh = 0; hh < CONFIG_T::n_heads; hh++) {
            Einsum_0_q: for (unsigned qq = 0; qq < CONFIG_T::n_particles; qq++) {
                Einsum_0_k: for (unsigned kk = 0; kk < CONFIG_T::n_particles; kk++) {
                    if (cc == 0) energy[hh][kk][qq] = 0;
                    // energy[hh][kk][qq] += keys[qq][hh + cc * CONFIG_T::n_heads] * queries[kk][hh + cc * CONFIG_T::n_heads];
                    energy[hh][kk][qq] += keys[qq][hh * CONFIG_T::n_el/CONFIG_T::n_heads + cc] * queries[kk][hh * CONFIG_T::n_el/CONFIG_T::n_heads + cc];
                }
            }
        }
    }
    PRETTY_PRINT_3D(energy, CONFIG_T::n_heads, CONFIG_T::n_particles, CONFIG_T::n_particles);

    // Reshape
    typename CONFIG_T::energy_t energy_reshaped[CONFIG_T::n_heads][CONFIG_T::n_particles * CONFIG_T::n_particles];
    #pragma HLS ARRAY_PARTITION variable=energy_reshaped complete dim=0
    Reshape_h: for (unsigned hh = 0; hh < CONFIG_T::n_heads; hh++) {
       #pragma HLS PIPELINE II=1
        Reshape_q: for (unsigned qq = 0; qq < CONFIG_T::n_particles; qq++) {
            Reshape_k: for (unsigned kk = 0; kk < CONFIG_T::n_particles; kk++) {
                energy_reshaped[hh][qq*CONFIG_T::n_particles + kk] = energy[hh][qq][kk];
            }
        }
    }
    PRETTY_PRINT_2D(energy_reshaped, CONFIG_T::n_heads, CONFIG_T::n_particles * CONFIG_T::n_particles);

    // Normalize
    typename CONFIG_T::exp_norm_t energy_norm[CONFIG_T::n_heads][CONFIG_T::n_particles * CONFIG_T::n_particles];
    #pragma HLS ARRAY_PARTITION variable=energy_norm complete dim=0
    Norm_1: for (unsigned ii = 0; ii < CONFIG_T::n_heads; ii++) {
        #pragma HLS PIPELINE II=1
        normalize<typename CONFIG_T::energy_t, typename CONFIG_T::exp_norm_t, EXP_NORM_CONFIG_T>(energy_reshaped[ii], energy_norm[ii], exp_norm_weight, exp_norm_bias);
    }
    PRETTY_PRINT_2D(energy_norm, CONFIG_T::n_heads, CONFIG_T::n_particles * CONFIG_T::n_particles);

    // Scale and reduce precision for more accurate results of softmax
    typename CONFIG_T::exp_norm_red_t energy_scaled_red[CONFIG_T::n_heads][CONFIG_T::n_particles][CONFIG_T::n_particles];
    #pragma HLS ARRAY_PARTITION variable=energy_scaled_red complete dim=0
    typename CONFIG_T::attention_t attention[CONFIG_T::n_heads][CONFIG_T::n_particles][CONFIG_T::n_particles];
    #pragma HLS ARRAY_PARTITION variable=attention complete dim=0
    Softmax_0_j: for (int jj = 0; jj < CONFIG_T::n_heads; jj++) {
        #pragma HLS PIPELINE II=1
        Softmax_0_i: for (int ii = 0; ii < CONFIG_T::n_particles; ii++) {
            Scale_cast: for (int kk = 0; kk < CONFIG_T::n_particles; kk++) {
                energy_scaled_red[jj][ii][kk] = cast<typename CONFIG_T::exp_norm_t, typename CONFIG_T::exp_norm_red_t, CONFIG_T>((energy_norm[jj][ii*CONFIG_T::n_particles + kk]) >> SCALE_SHIFT);
            }
            softmax<typename CONFIG_T::exp_norm_red_t, typename CONFIG_T::attention_t, SOFTMAX_CONFIG_T>(energy_scaled_red[jj][ii], attention[jj][ii]);
        }
    }
    PRETTY_PRINT_3D(energy_scaled_red, CONFIG_T::n_heads, CONFIG_T::n_particles, CONFIG_T::n_particles);
    PRETTY_PRINT_3D(attention, CONFIG_T::n_heads, CONFIG_T::n_particles, CONFIG_T::n_particles);

    // Einsum(hql, lhc -> qhc) then reshape
    typename CONFIG_T::scaled_attention_t scaled_attention_reshaped[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    #pragma HLS ARRAY_PARTITION variable=scaled_attention_reshaped complete dim=0
    Einsum_1_l: for (unsigned ll = 0; ll < CONFIG_T::n_particles; ll++) {
        Einsum_1_h: for (unsigned hh = 0; hh < CONFIG_T::n_heads; hh++) {
            Einsum_1_q: for (unsigned qq = 0; qq < CONFIG_T::n_particles; qq++) {
                Einsum_1_c: for (unsigned cc = 0; cc < CONFIG_T::n_el/CONFIG_T::n_heads; cc++) {
                    if (ll == 0) scaled_attention_reshaped[qq][hh + cc * CONFIG_T::n_heads] = 0;
                    // scaled_attention_reshaped[qq][cc + hh * CONFIG_T::n_el/CONFIG_T::n_heads] += attention[hh][qq][ll] * values[ll][hh + cc * CONFIG_T::n_heads];
                    scaled_attention_reshaped[qq][cc + hh * CONFIG_T::n_el/CONFIG_T::n_heads] += attention[hh][qq][ll] * values[ll][hh * CONFIG_T::n_el/CONFIG_T::n_heads + cc];
                }
            }
        }
    }
    PRETTY_PRINT_2D(scaled_attention_reshaped, CONFIG_T::n_particles, CONFIG_T::n_scaled_attention);

    // Dense
    Out_dense: for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        #pragma HLS PIPELINE II=1
        dense<typename CONFIG_T::scaled_attention_t, res_T, DENSE3_CONFIG_T>(scaled_attention_reshaped[jj], res[jj], dense_weight, dense_bias);
    }
    PRETTY_PRINT_2D(res, CONFIG_T::n_particles, CONFIG_T::n_scaled_attention);
}

}

#endif