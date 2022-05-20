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

template<class data_T, class res_T, typename CONFIG_T, typename NORM_CONFIG_T, typename DENSE0_CONFIG_T, typename SA_TRANSPOSE0_CONFIG_T, typename SOFTMAX_CONFIG_T, typename DENSE3_CONFIG_T>
void self_attention(
    data_T                            data[CONFIG_T::n_particles][CONFIG_T::n_qkv_in_el],
    res_T                             res[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention],
    typename CONFIG_T::norm_weight_t  norm_weight[CONFIG_T::n_qkv_in_el],
    typename CONFIG_T::norm_bias_t    norm_bias[CONFIG_T::n_qkv_in_el],
    typename CONFIG_T::QKV_weight_t   QKV_weight[CONFIG_T::n_QKV_weight],
    typename CONFIG_T::dense_weight_t dense_weight[CONFIG_T::n_dense_weight],
    typename CONFIG_T::dense_bias_t   dense_bias[CONFIG_T::n_dense_bias]
){
    #pragma HLS ARRAY_PARTITION variable=data complete dim=0
    #pragma HLS ARRAY_PARTITION variable=res complete dim=0
    #pragma HLS FUNCTION_INSTANTIATE variable=QKV_weight,dense_weight,dense_bias
    #pragma HLS PIPELINE

#if SKIP_NORM == 0
    // Normalize
    data_T normalized[CONFIG_T::n_particles][CONFIG_T::n_qkv_in_el];
    #pragma HLS ARRAY_PARTITION variable=normalized complete dim=0
    Norm: for (unsigned inorm = 0; inorm < CONFIG_T::n_particles; inorm++) {
        normalize<data_T, data_T, NORM_CONFIG_T>(data[inorm], normalized[inorm], norm_weight, norm_bias);
    }
#endif

    // QKV (dense)
    data_T qkv_out_el[CONFIG_T::n_particles][CONFIG_T::n_qkv_out_el];
    #pragma HLS ARRAY_PARTITION variable=qkv_out_el complete dim=0
    QKV_dense: for (int iqkv = 0; iqkv < CONFIG_T::n_particles; iqkv++) {
#if SKIP_NORM == 0
        dense_latency_no_bias<data_T, data_T, DENSE0_CONFIG_T>(normalized[iqkv], qkv_out_el[iqkv], QKV_weight);
#else
        dense_latency_no_bias<data_T, data_T, DENSE0_CONFIG_T>(data[iqkv], qkv_out_el[iqkv], QKV_weight);
#endif
    }
    PRETTY_PRINT_2D(qkv_out_el, CONFIG_T::n_particles, CONFIG_T::n_qkv_out_el);

    // QKV split
    data_T queries[CONFIG_T::n_particles][CONFIG_T::n_q];
    #pragma HLS ARRAY_PARTITION variable=queries complete dim=0
    data_T keys[CONFIG_T::n_particles][CONFIG_T::n_k];
    #pragma HLS ARRAY_PARTITION variable=keys complete dim=0
    data_T values[CONFIG_T::n_particles][CONFIG_T::n_v];
    #pragma HLS ARRAY_PARTITION variable=values complete dim=0

    QKV_split: for (unsigned ii = 0; ii < CONFIG_T::n_particles; ii++) {
        for (unsigned ll = 0; ll < CONFIG_T::n_qkv_out_el/(3*CONFIG_T::n_heads); ll++) { // 3 from QKV, 2 from number of heads
            for (unsigned jj = 0; jj < CONFIG_T::n_heads; jj++){
                unsigned out_index = ll * CONFIG_T::n_heads + jj;
                unsigned in_index_const = ll + jj * CONFIG_T::n_qkv_out_el / CONFIG_T::n_heads;
                unsigned in_index_var = CONFIG_T::n_qkv_out_el / (3*CONFIG_T::n_heads);

                queries[ii][out_index] = qkv_out_el[ii][in_index_const]; // const + 0 * var
                keys[ii][out_index] = qkv_out_el[ii][in_index_const + in_index_var]; // const + 1 * var
                values[ii][out_index] = qkv_out_el[ii][in_index_const + 2 * in_index_var]; // const + 2 * var
            }
        }
    }
    PRETTY_PRINT_2D(queries, CONFIG_T::n_particles, CONFIG_T::n_q);
    PRETTY_PRINT_2D(keys, CONFIG_T::n_particles, CONFIG_T::n_k);
    PRETTY_PRINT_2D(values, CONFIG_T::n_particles, CONFIG_T::n_v);

    // Einsum(qhc, khc -> hqk)
    data_T energy[CONFIG_T::n_particles][2][2];
    #pragma HLS ARRAY_PARTITION variable=energy complete dim=0
    for (unsigned cc = 0; cc < CONFIG_T::n_el/2; cc++) {
        for (unsigned hh = 0; hh < 2; hh++) {
            for (unsigned qq = 0; qq < CONFIG_T::n_particles; qq++) {
                for (unsigned kk = 0; kk < CONFIG_T::n_particles; kk++) {
                    if (cc == 0) energy[hh][kk][qq] = 0;
                    energy[hh][kk][qq] += (keys[qq][hh + cc * 2] * queries[kk][hh + cc * 2]) >> SCALE_SHIFT;
                    // if (hh == 0 && kk == 0 && qq == 0) std::cout << "energy[" << hh << "][" << kk << "][" << qq << "]: " << energy[hh][kk][qq] << std::endl;
                }
            }
        }
    }
    PRETTY_PRINT_3D(energy, CONFIG_T::n_particles, 2, 2);

    // Scale and reduce precision for more accurate results of softmax
    data_T_red energy_scaled_red[CONFIG_T::n_particles][2][CONFIG_T::n_attention];
    #pragma HLS ARRAY_PARTITION variable=energy_scaled_red complete dim=0
    data_T attention[CONFIG_T::n_particles][2][CONFIG_T::n_attention];
    #pragma HLS ARRAY_PARTITION variable=attention complete dim=0
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int ii = 0; ii < 2; ii++) {
            for (int kk = 0; kk < CONFIG_T::n_attention; kk++) {
                energy_scaled_red[jj][ii][kk] = cast<data_T, data_T_red, CONFIG_T>(energy[jj][ii][kk]);
            }

            softmax<data_T_red, data_T, SOFTMAX_CONFIG_T>(energy_scaled_red[jj][ii], attention[jj][ii]);
            // TODO maybe manually recast the type into full precision? as currently it happens implicitly in softmax
        }
    }
    PRETTY_PRINT_3D(energy_scaled_red, CONFIG_T::n_particles, 2, CONFIG_T::n_attention);
    PRETTY_PRINT_3D(attention, CONFIG_T::n_particles, 2, CONFIG_T::n_attention);

    // Einsum(hql, lhc -> qhc) then reshape
    data_T scaled_attention_reshaped[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    #pragma HLS ARRAY_PARTITION variable=scaled_attention_reshaped complete dim=0
    for (unsigned qq = 0; qq < 2; qq++) {
        for (unsigned ll = 0; ll < CONFIG_T::n_attention; ll++) {
            for (unsigned hh = 0; hh < CONFIG_T::n_particles; hh++) {
                for (unsigned cc = 0; cc < CONFIG_T::n_el/2; cc++) {
                    if (ll == 0) scaled_attention_reshaped[qq][cc + hh * CONFIG_T::n_scaled_attention/2] = 0;
                    scaled_attention_reshaped[qq][cc + hh * CONFIG_T::n_scaled_attention/2] += attention[hh][qq][ll] * values[ll][hh + cc * CONFIG_T::n_particles];
                }
            }
        }
    }
    PRETTY_PRINT_2D(scaled_attention_reshaped, CONFIG_T::n_particles, CONFIG_T::n_scaled_attention);

    // Dense
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        dense<data_T, data_T, DENSE3_CONFIG_T>(scaled_attention_reshaped[jj], res[jj], dense_weight, dense_bias);
    }
    PRETTY_PRINT_2D(res, CONFIG_T::n_particles, CONFIG_T::n_scaled_attention);
}

}

#endif