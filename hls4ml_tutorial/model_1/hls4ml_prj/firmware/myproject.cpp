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

    //hls-fpga-machine-learning insert IO
    // #pragma HLS ARRAY_RESHAPE variable=fc1_input complete dim=0
    // #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    // #pragma HLS INTERFACE ap_vld port=fc1_input,layer13_out
    #pragma HLS INTERFACE ap_vld port=data_in,data_out 
    // #pragma HLS PIPELINE
    //TODO: the above pragma is removed for now as it causes init_invert_table to unroll,
    // which breaks synthesis due to 'large runtime and excessive memory usage due to increase in code size'


    const_size_in_1 = N_INPUT;
    const_size_out_1 = N_LABELS;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        std::cout << "Loading weights from txt" << "\n";
        
        nnet::load_weights_from_txt<model_default_t, 128>(cls_token, "cls_token.txt");
        nnet::load_weights_from_txt<model_default_t, 2048>(inp_layer_weight, "inp_layer_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(inp_layer_bias, "inp_layer_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(out_layer_0_weight, "out_layer_0_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(out_layer_0_bias, "out_layer_0_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 640>(out_layer_1_weight, "out_layer_1_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(out_layer_1_bias, "out_layer_1_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(transformers_0_self_attention_norm_weight, "transformers_0_self_attention_norm_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(transformers_0_self_attention_norm_bias, "transformers_0_self_attention_norm_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 49152>(transformers_0_self_attention_qkv_weight, "transformers_0_self_attention_qkv_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 16384>(transformers_0_self_attention_out_weight, "transformers_0_self_attention_out_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(transformers_0_self_attention_out_bias, "transformers_0_self_attention_out_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(transformers_0_linear_0_weight, "transformers_0_linear_0_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(transformers_0_linear_0_bias, "transformers_0_linear_0_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(transformers_0_linear_2_weight, "transformers_0_linear_2_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(transformers_0_linear_3_weight, "transformers_0_linear_3_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 256>(transformers_0_linear_3_bias, "transformers_0_linear_3_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 32768>(transformers_0_linear_5_weight, "transformers_0_linear_5_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_1_self_attention_norm_weight, "transformers_1_self_attention_norm_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_1_self_attention_norm_weight_1, "transformers_1_self_attention_norm_weight_1.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_1_self_attention_norm_bias, "transformers_1_self_attention_norm_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_1_self_attention_norm_bias_1, "transformers_1_self_attention_norm_bias_1.txt");
        // nnet::load_weights_from_txt<model_default_t, 49152>(transformers_1_self_attention_qkv_weight, "transformers_1_self_attention_qkv_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 16384>(transformers_1_self_attention_out_weight, "transformers_1_self_attention_out_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_1_self_attention_out_bias, "transformers_1_self_attention_out_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_1_linear_0_weight, "transformers_1_linear_0_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_1_linear_0_bias, "transformers_1_linear_0_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 32768>(transformers_1_linear_2_weight, "transformers_1_linear_2_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 256>(transformers_1_linear_3_weight, "transformers_1_linear_3_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 256>(transformers_1_linear_3_bias, "transformers_1_linear_3_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 32768>(transformers_1_linear_5_weight, "transformers_1_linear_5_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_2_self_attention_norm_weight, "transformers_2_self_attention_norm_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_2_self_attention_norm_weight_1, "transformers_2_self_attention_norm_weight_1.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_2_self_attention_norm_bias, "transformers_2_self_attention_norm_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_2_self_attention_norm_bias_1, "transformers_2_self_attention_norm_bias_1.txt");
        // nnet::load_weights_from_txt<model_default_t, 49152>(transformers_2_self_attention_qkv_weight, "transformers_2_self_attention_qkv_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 16384>(transformers_2_self_attention_out_weight, "transformers_2_self_attention_out_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_2_self_attention_out_bias, "transformers_2_self_attention_out_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_2_linear_0_weight, "transformers_2_linear_0_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 128>(transformers_2_linear_0_bias, "transformers_2_linear_0_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 32768>(transformers_2_linear_2_weight, "transformers_2_linear_2_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 256>(transformers_2_linear_3_weight, "transformers_2_linear_3_weight.txt");
        // nnet::load_weights_from_txt<model_default_t, 256>(transformers_2_linear_3_bias, "transformers_2_linear_3_bias.txt");
        // nnet::load_weights_from_txt<model_default_t, 32768>(transformers_2_linear_5_weight, "transformers_2_linear_5_weight.txt");

        // nnet::load_weights_from_txt<model_default_t, 6>(my_example0, "my_example0.txt");
        // nnet::load_weights_from_txt<model_default_t, 6>(my_example1, "my_example1.txt");

        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers
    std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app);

    nnet::print_full_result<input_t, N_INPUT>("data_in", data_in, fout);

    // 1 input embedding
    input_t embedded_input[N_EMBEDDED];
    nnet::dense<input_t, input_t, embedded_config>(data_in, embedded_input, inp_layer_weight, inp_layer_bias);
    nnet::print_full_result<input_t, N_EMBEDDED>("embedded_input", embedded_input, fout);

    // 2 class token
    input_t embedded_with_cls[N_TRANSFORMER];
    nnet::print_full_result<input_t, N_EMBEDDED_DIM>("cls_token", cls_token, fout);

    nnet::concatenate2d<input_t, input_t, input_t, concat_config0>(cls_token, embedded_input, embedded_with_cls);
    nnet::print_full_result<input_t, N_TRANSFORMER>("embedded_with_cls", embedded_with_cls, fout);

    // 3.1 jet transformer
    input_t transformer_0_out[N_TRANSFORMER];
    typename self_attention_config0::inv_sqrt_d_k_t inv_sqrt_d_k = N_SA_INV_SQRT_SIZE0;
    nnet::transformer<input_t, input_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_config0, sa_transpose_config0, sa_dense_config1, sa_softmax_config0, sa_dense_config2, sa_dense_config3, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
        embedded_with_cls,
        transformer_0_out,

        inv_sqrt_d_k,

        transformers_0_self_attention_norm_weight,
        transformers_0_self_attention_norm_bias,
        transformers_0_self_attention_norm_weight,
        transformers_0_self_attention_norm_bias,
        transformers_0_self_attention_qkv_weight,
        transformers_0_self_attention_out_weight,
        transformers_0_self_attention_out_bias,

        transformers_0_linear_0_weight,
        transformers_0_linear_0_bias,
        transformers_0_linear_2_weight,
        transformers_0_linear_3_weight,
        transformers_0_linear_3_bias,
        transformers_0_linear_5_weight
    );
    nnet::print_full_result<input_t, N_TRANSFORMER>("transformer_0_out", transformer_0_out, fout);

    // 3.2 jet transformer
    // input_t transformer_1_out[N_TRANSFORMER];
    // nnet::transformer<input_t, input_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_config0, sa_transpose_config0, sa_dense_config1, sa_softmax_config0, sa_dense_config2, sa_dense_config3, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
    //     transformer_0_out,
    //     transformer_1_out,

    //     inv_sqrt_d_k,

    //     transformers_1_self_attention_norm_weight,
    //     transformers_1_self_attention_norm_bias,
    //     transformers_1_self_attention_norm_weight_1,
    //     transformers_1_self_attention_norm_bias_1,
    //     transformers_1_self_attention_qkv_weight,
    //     transformers_1_self_attention_out_weight,
    //     transformers_1_self_attention_out_bias,

    //     transformers_1_linear_0_weight,
    //     transformers_1_linear_0_bias,
    //     transformers_1_linear_2_weight,
    //     transformers_1_linear_3_weight,
    //     transformers_1_linear_3_bias,
    //     transformers_1_linear_5_weight
    // );
    // nnet::print_full_result<input_t, N_TRANSFORMER>("transformer_1_out", transformer_1_out, fout);

    // // 3.3 jet transformer
    // input_t transformer_2_out[N_TRANSFORMER];
    // nnet::transformer<input_t, input_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_config0, sa_transpose_config0, sa_dense_config1, sa_softmax_config0, sa_dense_config2, sa_dense_config3, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
    //     transformer_1_out,
    //     transformer_2_out,

    //     inv_sqrt_d_k,

    //     transformers_2_self_attention_norm_weight,
    //     transformers_2_self_attention_norm_bias,
    //     transformers_2_self_attention_norm_weight_1,
    //     transformers_2_self_attention_norm_bias_1,
    //     transformers_2_self_attention_qkv_weight,
    //     transformers_2_self_attention_out_weight,
    //     transformers_2_self_attention_out_bias,

    //     transformers_2_linear_0_weight,
    //     transformers_2_linear_0_bias,
    //     transformers_2_linear_2_weight,
    //     transformers_2_linear_3_weight,
    //     transformers_2_linear_3_bias,
    //     transformers_2_linear_5_weight
    // );
    // nnet::print_full_result<input_t, N_TRANSFORMER>("transformer_2_out", transformer_2_out, fout);

    // 4.1 MLP dimension reduction
    // TODO: implement this using a new function
    input_t mlp_dimensions_reduced[N_EMBEDDED_DIM];
    mlp_dim: for (int imlp = 0; imlp < N_TRANSFORMER; imlp++) {
        mlp_dimensions_reduced[imlp] = transformer_0_out[2 * imlp];
        // mlp_dimensions_reduced[imlp] = transformer_2_out[2 * imlp];
    }
    nnet::print_full_result<input_t, N_EMBEDDED_DIM>("mlp_dimensions_reduced", mlp_dimensions_reduced, fout);

    // 4.2 MLP normalization
    input_t mlp_norm[N_EMBEDDED_DIM];
    nnet::layer_normalize<input_t, input_t, normalize_config0>(mlp_dimensions_reduced, mlp_norm, out_layer_0_weight, out_layer_0_bias);
    nnet::print_full_result<input_t, N_EMBEDDED_DIM>("mlp_norm", mlp_norm, fout);

    // 4.3 MLP dense
    input_t mlp_out[N_LABELS];
    nnet::dense<input_t, input_t, mlp_config>(mlp_norm, mlp_out, out_layer_1_weight, out_layer_1_bias);
    nnet::print_full_result<input_t, N_LABELS>("mlp_out", mlp_out, fout);

    // reduce precision for more accurate results of log_softmax
    // TODO use the proper nnet::cast
    input_t_red mlp_out_red[N_LABELS];
    for (int jj = 0; jj < N_LABELS; jj++) {
        mlp_out_red[jj] = (input_t_red) mlp_out[jj];
    }

    // 5 softmax
    nnet::log_softmax_latency<input_t_red, result_t, softmax_config0>(mlp_out_red, data_out);
    nnet::print_full_result<result_t, N_LABELS>("data_out", data_out, fout);

    fout.close();
}
