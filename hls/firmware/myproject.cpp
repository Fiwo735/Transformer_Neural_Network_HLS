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
#include <iostream>

#include "myproject.h"
#include "parameters.h"

void myproject(
    input_t data_in[N_INPUT],
    result_t data_out[N_LABELS],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    #pragma HLS ARRAY_RESHAPE variable=data_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=data_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=data_in,data_out 
    #pragma HLS PIPELINE

    const_size_in_1 = N_INPUT;
    const_size_out_1 = N_LABELS;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        std::cout << "Loading weights from txt" << "\n";
        
        nnet::load_weights_from_txt<model_default_t, 16>(cls_token, "cls_token.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(inp_layer_weight, "inp_layer_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(inp_layer_bias, "inp_layer_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 80>(out_layer_1_weight, "out_layer_1_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(out_layer_1_bias, "out_layer_1_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 768>(transformers_0_self_attention_qkv_weight, "transformers_0_self_attention_qkv_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(transformers_0_self_attention_out_weight, "transformers_0_self_attention_out_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 16>(transformers_0_self_attention_out_bias, "transformers_0_self_attention_out_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(transformers_0_linear_2_weight, "transformers_0_linear_2_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 512>(transformers_0_linear_5_weight, "transformers_0_linear_5_weight.txt");

        loaded_weights = true;
    }
#endif

#ifndef __SYNTHESIS__
    std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app);
    nnet::print_full_result<input_t, N_INPUT>("data_in", data_in, fout);
#endif

    // Input embedding
    input_t embedded_input[N_EMBEDDED];
    nnet::dense<input_t, input_t, embedded_config>(data_in, embedded_input, inp_layer_weight, inp_layer_bias);

#ifndef __SYNTHESIS__
    nnet::print_full_result<input_t, N_EMBEDDED>("embedded_input", embedded_input, fout);
#endif

    // Class token
    input_t embedded_with_cls[N_TRANSFORMER];
    nnet::concatenate2d<input_t, input_t, input_t, concat_config0>(cls_token, embedded_input, embedded_with_cls);

#ifndef __SYNTHESIS__
    nnet::print_full_result<input_t, N_EMBEDDED_DIM>("cls_token", cls_token, fout);
    nnet::print_full_result<input_t, N_TRANSFORMER>("embedded_with_cls", embedded_with_cls, fout);
#endif

    // Jet transformer
    input_t transformer_0_out[N_TRANSFORMER];
    // typename self_attention_config0::inv_sqrt_d_k_t inv_sqrt_d_k = N_SA_INV_SQRT_SIZE0;
    nnet::transformer<input_t, input_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_config0, sa_transpose_config0, sa_dense_config1, sa_softmax_config0, sa_dense_config2, sa_dense_config3, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
        embedded_with_cls,
        transformer_0_out,
        transformers_0_self_attention_qkv_weight,
        transformers_0_self_attention_out_weight,
        transformers_0_self_attention_out_bias,
        transformers_0_linear_2_weight,
        transformers_0_linear_5_weight
    );

#ifndef __SYNTHESIS__
    nnet::print_full_result<input_t, N_TRANSFORMER>("transformer_0_out", transformer_0_out, fout);
#endif

    // MLP dimension reduction
    // TODO: implement this using a new function
    input_t mlp_dimensions_reduced[N_EMBEDDED_DIM];
    mlp_dim: for (int imlp = 0; imlp < N_TRANSFORMER; imlp++) {
        mlp_dimensions_reduced[imlp] = transformer_0_out[2 * imlp];
    }
#ifndef __SYNTHESIS__
    nnet::print_full_result<input_t, N_EMBEDDED_DIM>("mlp_dimensions_reduced", mlp_dimensions_reduced, fout);
#endif

    // MLP dense
    input_t mlp_out[N_LABELS];
    nnet::dense<input_t, input_t, mlp_config>(mlp_dimensions_reduced, mlp_out, out_layer_1_weight, out_layer_1_bias);

#ifndef __SYNTHESIS__
    nnet::print_full_result<input_t, N_LABELS>("mlp_out", mlp_out, fout);
#endif

    // Softmax
    // reduce precision for more accurate results of log_softmax
    // TODO use the proper nnet::cast
    input_t_red mlp_out_red[N_LABELS];
    for (int jj = 0; jj < N_LABELS; jj++) {
        mlp_out_red[jj] = (input_t_red) mlp_out[jj];
    }
    nnet::log_softmax_latency<input_t_red, result_t, softmax_config0>(mlp_out_red, data_out);

#ifndef __SYNTHESIS__
    nnet::print_full_result<result_t, N_LABELS>("data_out", data_out, fout);
    fout.close();
#endif
}
