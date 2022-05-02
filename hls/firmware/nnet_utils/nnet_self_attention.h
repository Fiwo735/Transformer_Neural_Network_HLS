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
    using product = product::mult<x_T, y_T, res_T>;
};

template<class data_T, class res_T, typename CONFIG_T, typename NORM_CONFIG_T, typename DENSE0_CONFIG_T, typename SA_TRANSPOSE0_CONFIG_T, typename SOFTMAX_CONFIG_T, typename DENSE3_CONFIG_T>
void self_attention(
    data_T                            data[CONFIG_T::n_particles][CONFIG_T::n_qkv_in_el],
    res_T                             res[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention],
    typename CONFIG_T::QKV_weight_t   QKV_weight[CONFIG_T::n_QKV_weight],
    typename CONFIG_T::dense_weight_t dense_weight[CONFIG_T::n_dense_weight],
    typename CONFIG_T::dense_bias_t   dense_bias[CONFIG_T::n_dense_bias]
){
    #pragma HLS PIPELINE

    // QKV (dense)
    data_T qkv_out_el[CONFIG_T::n_particles][CONFIG_T::n_qkv_out_el];
    QKV_dense: for (int iqkv = 0; iqkv < CONFIG_T::n_particles; iqkv++) {
        dense_latency_no_bias<data_T, data_T, DENSE0_CONFIG_T>(data[iqkv], qkv_out_el[iqkv], QKV_weight);
    }
    PRETTY_PRINT_2D(qkv_out_el, CONFIG_T::n_particles, CONFIG_T::n_qkv_out_el);

    // QKV split
    data_T queries[CONFIG_T::n_particles][CONFIG_T::n_q];
    data_T keys[CONFIG_T::n_particles][CONFIG_T::n_k];
    data_T values[CONFIG_T::n_particles][CONFIG_T::n_v];

    QKV_split: for (unsigned ii = 0; ii < CONFIG_T::n_particles; ii++) {
        for (unsigned ll = 0; ll < CONFIG_T::n_qkv_out_el/(3*2); ll++) { // 3 from QKV, 2 from inner jj loop
            for (unsigned jj = 0; jj < 2; jj++){ // TODO likely depends on particles (?) and shouldnt be hardcoded
                unsigned out_index = ll * 2 + jj;
                unsigned in_index_const = ll + jj * CONFIG_T::n_qkv_out_el / 2;
                unsigned in_index_var = CONFIG_T::n_qkv_out_el / (2*3);

                queries[ii][out_index] = qkv_out_el[ii][in_index_const]; // const + 0 * var
                keys[ii][out_index] = qkv_out_el[ii][in_index_const + in_index_var]; // const + 1 * var
                values[ii][out_index] = qkv_out_el[ii][in_index_const + 2 * in_index_var]; // const + 2 * var
            }
        }
    }
    PRETTY_PRINT_2D(queries, CONFIG_T::n_particles, CONFIG_T::n_q);
    PRETTY_PRINT_2D(keys, CONFIG_T::n_particles, CONFIG_T::n_k);
    PRETTY_PRINT_2D(values, CONFIG_T::n_particles, CONFIG_T::n_v);


    // TODO make the dimensions nicer (improve parameters.h)
    data_T queries_outer_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_q/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_q; iv++) {
            queries_outer_transposed[iv % 2][((iv >> 1) << 1) + jj] = queries[jj][iv];
        }
    }
    PRETTY_PRINT_2D(queries_outer_transposed, 2, CONFIG_T::n_particles*CONFIG_T::n_q/2);

    data_T keys_outer_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_k/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_k; iv++) {
            keys_outer_transposed[iv % 2][((int) (iv / 2)) * 2 + jj] = keys[jj][iv];
        }
    }
    PRETTY_PRINT_2D(keys_outer_transposed, 2, CONFIG_T::n_particles*CONFIG_T::n_k/2);

    data_T keys_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_k/2];
    for (int jj = 0; jj < 2; jj++) {
        transpose_2d<data_T, SA_TRANSPOSE0_CONFIG_T>(keys_outer_transposed[jj], keys_transposed[jj]);
    }
    PRETTY_PRINT_2D(keys_transposed, 2, CONFIG_T::n_particles*CONFIG_T::n_k/2);

    // Energy (matmul)
    // std::cout << "energy" << std::endl;
    static data_T energy[CONFIG_T::n_particles][CONFIG_T::n_energy];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        matmul<data_T, data_T, 2, CONFIG_T::n_el/2, CONFIG_T::n_el/2, 2>(queries_outer_transposed[jj], keys_transposed[jj], energy[jj]);
    }
    PRETTY_PRINT_2D(energy, CONFIG_T::n_particles, CONFIG_T::n_energy);

    // Scale and reduce precision for more accurate results of softmax, then flatten
    data_T_red energy_scaled_red[CONFIG_T::n_particles][2][CONFIG_T::n_attention];
    data_T attention[CONFIG_T::n_particles][2][CONFIG_T::n_attention];
    data_T attention_flat[CONFIG_T::n_particles][2 * CONFIG_T::n_attention];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int ii = 0; ii < 2; ii++) {
            for (int kk = 0; kk < CONFIG_T::n_attention; kk++) {
                if (CONFIG_T::io_type == io_serial){
                    #pragma HLS UNROLL
                }
                data_T current = (energy[jj][ii + kk * 2]) >> SCALE_SHIFT;
                energy_scaled_red[jj][ii][kk] = cast<data_T, data_T_red, CONFIG_T>(current);
            }

            softmax<data_T_red, data_T, SOFTMAX_CONFIG_T>(energy_scaled_red[jj][ii], attention[jj][ii]);
            // TODO maybe manually recast the type into full precision? as currently it happens implicitly in softmax

            for (int kk = 0; kk < CONFIG_T::n_attention; kk++) {
                // std::cout << "attention[" << jj << "][" << ii << "][" << kk << "]: " << attention[jj][ii][kk] << std::endl;
                attention_flat[jj][kk * CONFIG_T::n_attention + ii] = attention[jj][ii][kk]; //TODO CONFIG_T::n_attention might need to be '2' (ii loop)
                // std::cout << "attention_flat[" << jj << "][" << kk * CONFIG_T::n_attention + ii << "]: " << attention_flat[jj][kk * CONFIG_T::n_attention + ii] << "\n" << std::endl;
            }
        }
    }
    PRETTY_PRINT_3D(energy_scaled_red, CONFIG_T::n_particles, 2, CONFIG_T::n_attention);
    PRETTY_PRINT_3D(attention, CONFIG_T::n_particles, 2, CONFIG_T::n_attention);
    PRETTY_PRINT_2D(attention_flat, CONFIG_T::n_particles, 2 * CONFIG_T::n_attention);

    data_T values_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_v/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_v; iv++) {
            values_transposed[iv % 2][((iv >> 1) << 1) + jj] = values[jj][iv];
        }
    }
    PRETTY_PRINT_2D(values_transposed, 2, CONFIG_T::n_particles*CONFIG_T::n_v/2);

    // Scaled attention (matmul)
    // std::cout << "scaled attention" << std::endl;
    static data_T scaled_attention[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        matmul<data_T, data_T, 2, 2, 2, CONFIG_T::n_el/2>(attention_flat[jj], values_transposed[jj], scaled_attention[jj]);
    }
    PRETTY_PRINT_2D(scaled_attention, CONFIG_T::n_particles, CONFIG_T::n_scaled_attention);

    data_T scaled_attention_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_scaled_attention/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_scaled_attention; iv++) {
            scaled_attention_transposed[iv % 2][((iv >> 1) << 1) + jj] = scaled_attention[jj][iv];
        }
    }
    PRETTY_PRINT_2D(scaled_attention_transposed, 2, CONFIG_T::n_particles*CONFIG_T::n_scaled_attention/2);

    // Reshape
    data_T scaled_attention_reshaped[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    for (int jj = 0; jj < 2; jj++) {
        for (int kk = 0; kk < CONFIG_T::n_particles; kk++) {
            for (int ii = 0; ii < CONFIG_T::n_scaled_attention/2; ii++) {
                scaled_attention_reshaped[jj][ii + kk * CONFIG_T::n_scaled_attention/2] = scaled_attention_transposed[jj][ii * CONFIG_T::n_particles + kk];
            }
        }
    }
    PRETTY_PRINT_2D(scaled_attention_reshaped, CONFIG_T::n_particles, CONFIG_T::n_scaled_attention);

    // Dense
    // data_T result[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        dense<data_T, data_T, DENSE3_CONFIG_T>(scaled_attention_reshaped[jj], res[jj], dense_weight, dense_bias);
    }
    PRETTY_PRINT_2D(res, CONFIG_T::n_particles, CONFIG_T::n_scaled_attention);
}

}

#endif