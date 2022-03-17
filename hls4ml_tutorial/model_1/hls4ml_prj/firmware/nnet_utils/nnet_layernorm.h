//
//    rfnoc-hls-neuralnet: Vivado HLS code for neural-net building blocks
//
//    Copyright (C) 2017 EJ Kreinar
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef NNET_LAYERNORM_H_
#define NNET_LAYERNORM_H_

#include "nnet_common.h"
#include "nnet_dense.h"
#include "hls_stream.h"
#include <math.h>

namespace nnet {

struct layernorm_config
{
    // Internal data type definitions
    typedef float bias_t;
    typedef float scale_t;
    // typedef float inverse_count_t;

    // Layer Sizes
    static const unsigned n_in = 10;
    static const unsigned n_filt = -1;
    static const unsigned n_layers = 2;
    // inverse_count_t inverse_count = 0.1;

    // Resource reuse info
    static const unsigned io_type = io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

template<class data_T, class res_T, typename CONFIG_T>
void layer_normalize(
    data_T    data[CONFIG_T::n_in],
    res_T     res[CONFIG_T::n_in],
    typename CONFIG_T::scale_t  scale[CONFIG_T::n_in],
    typename CONFIG_T::bias_t   bias[CONFIG_T::n_in]
    // typename CONFIG_T::scale_t  scale_1[CONFIG_T::n_in],
    // typename CONFIG_T::bias_t   bias_1[CONFIG_T::n_in],
    // data_T temp_fix
){
    std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app);
    data_T cache;
   
    // Use a function_instantiate in case it helps to explicitly optimize unchanging weights/biases
    #pragma HLS function_instantiate variable=scale,bias

    if (CONFIG_T::io_type == io_parallel) {
        // For parallel inputs:
        //   - completely partition arrays -- target fabric
        //   - if we have an unroll factor, limit number of multipliers
        #pragma HLS PIPELINE II=CONFIG_T::reuse_factor

        // #pragma HLS ARRAY_PARTITION variable=weights complete // remove this line for now, it breaks compression sometimes
        #pragma HLS ARRAY_PARTITION variable=scale complete
        #pragma HLS ARRAY_PARTITION variable=bias complete

        int multiplier_limit  = ceil(float(CONFIG_T::n_in) / float(CONFIG_T::reuse_factor));
        CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::limit(multiplier_limit);

    } else if (CONFIG_T::io_type == io_serial) {
        #pragma HLS ARRAY_RESHAPE variable=scale complete dim=1
        #pragma HLS ARRAY_RESHAPE variable=bias complete dim=1
        #pragma HLS DATAFLOW
    }

    // Calculate mean
    data_T mean = (data_T) 0.0;
    Mean: for (int imean = 0; imean < CONFIG_T::n_in; imean++) {
      mean += data[imean];
    }
    // mean *= CONFIG_T::inverse_count;
    mean /= CONFIG_T::n_in;
    // fout << "mean: " << mean << " "; 

    // Calculate variance
    data_T var = (data_T) 0.0;
    Var: for (int ivar = 0; ivar < CONFIG_T::n_in; ivar++) {
        data_T curr_diff = data[ivar] - mean;
        data_T squared = CONFIG_T::template product<data_T, data_T, data_T>::product(curr_diff, curr_diff);
        // if (squared < 0) squared = 0;
        if (squared < 0){
            // std::cout << "data[ivar]: " << data[ivar] << " mean: " << mean << " curr_diff: " << curr_diff << std::endl;
            // std::cout << "squared: " << squared << std::endl;
        }
        var += squared;
    }
    var /= (CONFIG_T::n_in);
    // fout << "variance: " << var << " "; 

    // Calculate result
    data_T eps = (data_T) 0.00001;
    var += eps;
    // std::cout << "var: " << var << std::endl;
    float float_var = (float) var;
    data_T denominator = (data_T) std::sqrt(float_var);
    // fout << "denominator: " << denominator << "\n"; 

    Result: for (int ires = 0; ires < CONFIG_T::n_in; ires++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS UNROLL
            #pragma HLS PIPELINE
        }

        data_T numerator = data[ires] - mean; // should use norm_index for n_filt != -1
        // if (ires == 0) fout << "numerator: " << numerator << " "; 
        numerator /= denominator;
        if (ires == 0) {
            // fout << "num/denom: " << numerator << " ";
            // fout << "scale: " << scale[ires] << " ";
            // fout << "bias: " << bias[ires] << "\n";
        }
        if (CONFIG_T::n_filt==-1) {
            res[ires] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(numerator, scale[ires]) + bias[ires];
	    } else {
            int norm_index = ires%CONFIG_T::n_filt;
            res[ires] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(numerator, scale[norm_index]) + bias[norm_index];
        }

        // if (ires == 0) fout << "res: " << res[ires] << "\n"; 
        
	}
    // Result: for (int ires = 0; ires < CONFIG_T::n_in; ires += CONFIG_T::n_layers) {
    //     if (CONFIG_T::io_type == io_serial){
    //         #pragma HLS UNROLL
    //         #pragma HLS PIPELINE
    //     }

    //     // data_T numerator = data[ires] - mean;
    //     // numerator /= denominator;
    //     if (CONFIG_T::n_filt==-1) {
    //         res[ires] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(data[ires], scale[ires]) + bias[ires];
	//     } else {
    //         int norm_index = ires%CONFIG_T::n_filt;
    //         res[ires] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(data[norm_index], scale[norm_index]) + bias[norm_index];
    //     }

    //     Split: for (int isplit = 1; isplit < CONFIG_T::n_layers; isplit++) {
    //         int icomb = ires + isplit;
    //         if (CONFIG_T::n_filt==-1) {
    //             res[icomb] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(data[icomb], scale_1[icomb]) + bias_1[icomb];
    //             // TODO temporary fix to match Python output (deviation caused by sample differing from training mean/var)
    //             // res[icomb] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(res[icomb], temp_fix);
    //         } else {
    //             int norm_index = icomb%CONFIG_T::n_filt;
    //             res[icomb] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(data[icomb], scale_1[norm_index]) + bias_1[norm_index];
    //             // TODO temporary fix to match Python output (deviation caused by sample differing from training mean/var)
    //             // res[icomb] = CONFIG_T::template product<data_T, typename CONFIG_T::scale_t, res_T>::product(res[icomb], temp_fix);
    //         }
    //     }
        
	// }
    fout.close();
}

}

#endif
