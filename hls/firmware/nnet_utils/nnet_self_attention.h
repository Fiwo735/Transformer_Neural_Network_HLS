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
    using product = product::mult<x_T, y_T, res_T>;
};

template<class data_T, class res_T, typename CONFIG_T, typename NORM_CONFIG_T, typename DENSE0_CONFIG_T, typename SA_TRANSPOSE0_CONFIG_T, typename DENSE1_CONFIG_T, typename SOFTMAX_CONFIG_T, typename DENSE2_CONFIG_T, typename DENSE3_CONFIG_T>
void self_attention(
    data_T    data[CONFIG_T::n_in],
    res_T     res[CONFIG_T::n_out],

    typename CONFIG_T::inv_sqrt_d_k_t inv_sqrt_d_k,

    // typename CONFIG_T::norm_weight_t  norm_weight[CONFIG_T::n_norm_weight],
    // typename CONFIG_T::norm_bias_t    norm_bias[CONFIG_T::n_norm_bias],
    // typename CONFIG_T::norm_weight_t  norm_weight_1[CONFIG_T::n_norm_weight],
    // typename CONFIG_T::norm_bias_t    norm_bias_1[CONFIG_T::n_norm_bias],
    typename CONFIG_T::QKV_weight_t   QKV_weight[CONFIG_T::n_QKV_weight],
    typename CONFIG_T::dense_weight_t dense_weight[CONFIG_T::n_dense_weight],
    typename CONFIG_T::dense_bias_t   dense_bias[CONFIG_T::n_dense_bias]
){
#ifndef __SYNTHESIS__
    std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app);
#endif

    // // 1 norm
    // // data_T temp_fix = (data_T) 0.215424;
    // std::cout << "S1" << std::endl;
    // data_T input_norm[CONFIG_T::n_in];
    // data_T input_norm_in_el[CONFIG_T::n_particles][CONFIG_T::n_norm_el];
    // data_T input_norm_out_el[CONFIG_T::n_particles][CONFIG_T::n_norm_el];

    // split_equally<data_T, CONFIG_T::n_particles, CONFIG_T::n_norm_el>(data, input_norm_in_el);
    // Layer_normalize: for (int inorm = 0; inorm < CONFIG_T::n_particles; inorm++) {
    //     layer_normalize<data_T, data_T, NORM_CONFIG_T>(input_norm_in_el[inorm], input_norm_out_el[inorm], norm_weight, norm_bias);//, norm_weight_1, norm_bias_1, temp_fix);
    // }
    // // TODO the join is probably not needed as the variables keep taking format [n_particles][n_xxx]
    // join_equally<data_T, CONFIG_T::n_particles, CONFIG_T::n_norm_el>(input_norm_out_el, input_norm);
    // // print_full_result<data_T, CONFIG_T::n_in>("input_norm", input_norm, fout);
    
    // 2.1 qkv (dense)
    data_T qkv_out[CONFIG_T::n_qkv];
    data_T zero_bias0[CONFIG_T::n_qkv_out_el];
    fill_zero<data_T,CONFIG_T::n_qkv_out_el>(zero_bias0);
    data_T qkv_in_el[CONFIG_T::n_particles][CONFIG_T::n_qkv_in_el];
    data_T qkv_out_el[CONFIG_T::n_particles][CONFIG_T::n_qkv_out_el];

    // split_equally<data_T, CONFIG_T::n_particles, CONFIG_T::n_qkv_in_el>(input_norm, qkv_in_el);
    split_equally<data_T, CONFIG_T::n_particles, CONFIG_T::n_qkv_in_el>(data, qkv_in_el);
    QKV: for (int iqkv = 0; iqkv < CONFIG_T::n_particles; iqkv++) {
        dense<data_T, data_T, DENSE0_CONFIG_T>(qkv_in_el[iqkv], qkv_out_el[iqkv], QKV_weight, zero_bias0);
    }
    join_equally<data_T, CONFIG_T::n_particles, CONFIG_T::n_qkv_out_el>(qkv_out_el, qkv_out);
#ifndef __SYNTHESIS__
    print_full_result<data_T, CONFIG_T::n_qkv>("qkv_out", qkv_out, fout);
#endif

    // 2.2 reshape
    data_T qkv_reshaped[CONFIG_T::n_particles][CONFIG_T::n_qkv_out_el];
    //TODO: implement this properly 384 (3*128) -> 2x192
    QKV_reshape: for (int ii = 0; ii < CONFIG_T::n_particles; ii++) {
        for (int jj = 0; jj < CONFIG_T::n_qkv_out_el; jj += 2) {
            qkv_reshaped[ii][jj] = qkv_out[ii + jj];
            qkv_reshaped[ii][jj+1] = qkv_out[ii + jj + CONFIG_T::n_qkv_out_el];
        }
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_qkv_out_el>("qkv_reshaped[ii]", qkv_reshaped[ii], fout);
#endif
    }

    // 3 QKV split
    data_T queries[CONFIG_T::n_particles][CONFIG_T::n_q];
    data_T keys[CONFIG_T::n_particles][CONFIG_T::n_k];
    data_T values[CONFIG_T::n_particles][CONFIG_T::n_v];

    Queries_split: for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iq = 0; iq < CONFIG_T::n_q; iq++) {
            queries[jj][iq] = qkv_reshaped[jj][iq];
        }
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_q>("queries[jj]", queries[jj], fout);
#endif
    }

    Keys_split: for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int ik = 0; ik < CONFIG_T::n_k; ik++) {
            keys[jj][ik] = qkv_reshaped[jj][CONFIG_T::n_q + ik];
        }
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_k>("keys[jj]", keys[jj], fout);
#endif
    }

    Values_split: for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_v; iv++) {
            values[jj][iv] = qkv_reshaped[jj][CONFIG_T::n_q + CONFIG_T::n_k + iv];
        }
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_v>("values[jj]", values[jj], fout);
#endif
    }

    // TODO make the dimensions nicer (improve parameters.h)
    data_T queries_outer_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_q/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_q; iv++) {
            queries_outer_transposed[iv % 2][((iv >> 1) << 1) + jj] = queries[jj][iv];
        }
    }
#ifndef __SYNTHESIS__
    for (int jj = 0; jj < 2; jj++) {
        print_full_result<data_T, CONFIG_T::n_particles*CONFIG_T::n_q/2>("queries_outer_transposed[jj]", queries_outer_transposed[jj], fout);
    }
#endif

    data_T keys_outer_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_k/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_k; iv++) {
            keys_outer_transposed[iv % 2][((int) (iv / 2)) * 2 + jj] = keys[jj][iv];
        }
    }
#ifndef __SYNTHESIS__
    for (int jj = 0; jj < 2; jj++) {
        print_full_result<data_T, CONFIG_T::n_particles*CONFIG_T::n_k/2>("keys_outer_transposed[jj]", keys_outer_transposed[jj], fout);
    }
#endif
    

    data_T keys_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_k/2];
    for (int jj = 0; jj < 2; jj++) {
        transpose_2d<data_T, SA_TRANSPOSE0_CONFIG_T>(keys_outer_transposed[jj], keys_transposed[jj]);
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_particles*CONFIG_T::n_k/2>("keys_transposed[jj]", keys_transposed[jj], fout);
#endif
    }

    // 4.1 energy - dense
    data_T energy[CONFIG_T::n_particles][CONFIG_T::n_energy];
    data_T zero_bias1[CONFIG_T::n_energy];
    fill_zero<data_T,CONFIG_T::n_energy>(zero_bias1);

    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        matmul<data_T, data_T, 2, CONFIG_T::n_el/2, CONFIG_T::n_el/2, 2>(queries_outer_transposed[jj], keys_transposed[jj], energy[jj]);
        // dense<data_T, data_T, DENSE1_CONFIG_T>(queries_outer_transposed[jj], energy[jj], keys_transposed[jj], zero_bias1);
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_energy>("energy[jj]", energy[jj], fout);
#endif
    }

    // 4.2 scale
    data_T energy_scaled[CONFIG_T::n_particles][2][CONFIG_T::n_attention];
    // model_default_t inv_sqrt_d_k = INVERSE; //TODO: implement properly using config
    Scale: for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int ii = 0; ii < 2; ii++) {
            for (int iscale = 0; iscale < CONFIG_T::n_attention; iscale++) {
                // energy_scaled[jj][ii][iscale] = CONFIG_T::template product<data_T, data_T, data_T>::product(energy[jj][ii + iscale * 2], inv_sqrt_d_k);//TODO: CONFIG_T::inv_sqrt_d_k);
                energy_scaled[jj][ii][iscale] = (energy[jj][ii + iscale * 2]) >> 2;
            }
#ifndef __SYNTHESIS__
            print_full_result<data_T, CONFIG_T::n_attention>("energy_scaled[jj][ii]", energy_scaled[jj][ii], fout);
#endif
        }
    }

    // reduce precision for more accurate results of softmax
    data_T_red energy_scaled_red[CONFIG_T::n_particles][2][CONFIG_T::n_attention];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int ii = 0; ii < 2; ii++) {
            for (int kk = 0; kk < CONFIG_T::n_attention; kk++) {
                if (CONFIG_T::io_type == io_serial){
                    #pragma HLS UNROLL
                }
                energy_scaled_red[jj][ii][kk] = cast<data_T, data_T_red, CONFIG_T>(energy_scaled[jj][ii][kk]);
            }
#ifndef __SYNTHESIS__
            print_full_result<data_T_red, CONFIG_T::n_attention>("energy_scaled_red[jj][ii]", energy_scaled_red[jj][ii], fout);
#endif
        }
    }



    // 5 attention - softmax
    data_T attention[CONFIG_T::n_particles][2][CONFIG_T::n_attention];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int ii = 0; ii < 2; ii++) {
            // softmax<data_T, data_T, SOFTMAX_CONFIG_T>(energy_scaled[jj][ii], attention[jj][ii]);
            softmax<data_T_red, data_T, SOFTMAX_CONFIG_T>(energy_scaled_red[jj][ii], attention[jj][ii]);
#ifndef __SYNTHESIS__
            print_full_result<data_T, CONFIG_T::n_attention>("attention[jj][ii]", attention[jj][ii], fout);
#endif
        }
    }
    // TODO maybe manually recast the type into full precision? as currently it happens implicitly in softmax

    // flatten last two dims
    data_T attention_flat[CONFIG_T::n_particles][2 * CONFIG_T::n_attention];
    for (int kk = 0; kk < CONFIG_T::n_particles; kk++) {
        for (int jj = 0; jj < CONFIG_T::n_attention; jj++) {
            for (int ii = 0; ii < 2; ii++) {
                attention_flat[kk][jj + ii * 2] = attention[kk][jj][ii];
            }
        }
    }
#ifndef __SYNTHESIS__
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        print_full_result<data_T, 2*CONFIG_T::n_attention>("attention_flat[jj]", attention_flat[jj], fout);
    }
#endif

    data_T values_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_v/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_v; iv++) {
            values_transposed[iv % 2][((iv >> 1) << 1) + jj] = values[jj][iv];
        }
    }
#ifndef __SYNTHESIS__
    for (int jj = 0; jj < 2; jj++) {
        print_full_result<data_T, CONFIG_T::n_particles*CONFIG_T::n_v/2>("values_transposed[jj]", values_transposed[jj], fout);
    }
#endif

    // 6 scaled attention - dense
    data_T scaled_attention[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    data_T zero_bias2[CONFIG_T::n_scaled_attention];
    fill_zero<data_T,CONFIG_T::n_scaled_attention >(zero_bias2);
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        matmul<data_T, data_T, 2, 2, 2, CONFIG_T::n_el/2>(attention_flat[jj], values_transposed[jj], scaled_attention[jj]);
        // dense<data_T, data_T, DENSE2_CONFIG_T>(attention_flat[jj], scaled_attention[jj], values[jj], zero_bias2);
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_scaled_attention>("scaled_attention[jj]", scaled_attention[jj], fout);
#endif
    }

    data_T scaled_attention_transposed[2][CONFIG_T::n_particles*CONFIG_T::n_scaled_attention/2];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iv = 0; iv < CONFIG_T::n_scaled_attention; iv++) {
            scaled_attention_transposed[iv % 2][((iv >> 1) << 1) + jj] = scaled_attention[jj][iv];
        }
    }
#ifndef __SYNTHESIS__
    for (int jj = 0; jj < 2; jj++) {
        print_full_result<data_T, CONFIG_T::n_particles*CONFIG_T::n_scaled_attention/2>("scaled_attention_transposed[jj]", scaled_attention_transposed[jj], fout);
    }
#endif

    // 7 reshape
    data_T scaled_attention_reshaped[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    for (int jj = 0; jj < 2; jj++) {
        for (int kk = 0; kk < CONFIG_T::n_particles; kk++) {
            for (int ii = 0; ii < CONFIG_T::n_scaled_attention/2; ii++) {
                // fout << "jj:" << jj << ", kk:" << kk << ", ii:" << ii << " -> out[" << jj << "][" << ii + kk * CONFIG_T::n_scaled_attention/2 << "] = in[" << jj << "][" << ii * CONFIG_T::n_particles + kk << "] = " << scaled_attention_transposed[jj][ii * CONFIG_T::n_particles + kk] << "\n";
                scaled_attention_reshaped[jj][ii + kk * CONFIG_T::n_scaled_attention/2] = scaled_attention_transposed[jj][ii * CONFIG_T::n_particles + kk];
            }
        }
    }
#ifndef __SYNTHESIS__
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        print_full_result<data_T, CONFIG_T::n_scaled_attention>("scaled_attention_reshaped[jj]", scaled_attention_reshaped[jj], fout);
    }
#endif

    // 8 dense
    data_T result[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        dense<data_T, data_T, DENSE3_CONFIG_T>(scaled_attention_reshaped[jj], result[jj], dense_weight, dense_bias);
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_scaled_attention>("result[jj]", result[jj], fout);
#endif
    }

    // 9 sum
    data_T sum_out[CONFIG_T::n_particles][CONFIG_T::n_scaled_attention];
    Final_sum: for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int iendsum = 0; iendsum < CONFIG_T::n_scaled_attention; iendsum++) {
            if (CONFIG_T::io_type == io_serial){
                #pragma HLS PIPELINE
            }
            sum_out[jj][iendsum] = result[jj][iendsum] + data[jj + iendsum * CONFIG_T::n_particles];
        }
#ifndef __SYNTHESIS__
        print_full_result<data_T, CONFIG_T::n_scaled_attention>("sum_out[jj]", sum_out[jj], fout);
#endif
    }

    data_T sum_out_flat[CONFIG_T::n_out];
    for (int jj = 0; jj < CONFIG_T::n_particles; jj++) {
        for (int ii = 0; ii < CONFIG_T::n_scaled_attention; ii++) {
            sum_out_flat[jj + ii * CONFIG_T::n_particles] = sum_out[jj][ii];
        }
    }
#ifndef __SYNTHESIS__
    print_full_result<data_T, CONFIG_T::n_out>("sum_out_flat", sum_out_flat, fout);
#endif

    // 10 Cast
    Result: for(int ires = 0; ires < CONFIG_T::n_out; ires++){
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS UNROLL
        }
        res[ires] = cast<data_T, res_T, CONFIG_T>(sum_out_flat[ires]);
    }

#ifndef __SYNTHESIS__
    fout.close();
#endif
}

}

#endif