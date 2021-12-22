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
    input_t data_in[N_INPUT_1_1],
    result_t data_out[N_LAYER_11],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    //hls-fpga-machine-learning insert IO
    #pragma HLS ARRAY_RESHAPE variable=fc1_input complete dim=0
    #pragma HLS ARRAY_PARTITION variable=layer13_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=fc1_input,layer13_out 
    #pragma HLS PIPELINE 

    const_size_in_1 = N_INPUT_1_1;
    const_size_out_1 = N_LAYER_11;

#ifndef __SYNTHESIS__
    static bool loaded_weights = false;
    if (!loaded_weights) {
        //hls-fpga-machine-learning insert load weights
        std::cout << "Loading weights from txt" << "\n";
        nnet::load_weights_from_txt<model_default_t, 1024>(w2, "w2.txt");
        nnet::load_weights_from_txt<model_default_t, 64>(b2, "b2.txt");
        nnet::load_weights_from_txt<model_default_t, 2048>(w5, "w5.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b5, "b5.txt");
        nnet::load_weights_from_txt<model_default_t, 1024>(w8, "w8.txt");
        nnet::load_weights_from_txt<model_default_t, 32>(b8, "b8.txt");
        nnet::load_weights_from_txt<model_default_t, 160>(w11, "w11.txt");
        nnet::load_weights_from_txt<model_default_t, 5>(b11, "b11.txt");

        nnet::load_weights_from_txt<model_default_t, 2048>(inp_layer_weight, "inp_layer_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(inp_layer_bias, "inp_layer_bias.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(cls_token, "cls_token.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(transformers_0_linear_0_weight, "transformers_0_linear_0_weight.txt");
        nnet::load_weights_from_txt<model_default_t, 128>(transformers_0_linear_0_bias, "transformers_0_linear_0_bias.txt");
        loaded_weights = true;
    }
#endif

    // ****************************************
    // NETWORK INSTANTIATION
    // ****************************************

    //hls-fpga-machine-learning insert layers
    std::ofstream fout("tb_data/csim_layers.log");

    fout << "data_in:" << "\n";
    nnet::print_result<input_t, N_INPUT_1_1>(data_in, fout);

    // 1 input embedding + class token
    input_t embedded_input[N_TRANSFORMER];
    nnet::dense<input_t, input_t, config2>(data_in, embedded_input, inp_layer_weight, inp_layer_bias); // fc1
    embedded_input[N_INPUT_1_1] = cls_token[0];
    fout << "embedded_input:" << "\n";
    nnet::print_result<input_t, N_TRANSFORMER>(embedded_input, fout);

    // 2.1 jet transformer
    input_t transformer_0_out[N_TRANSFORMER];
    nnet::transformer<input_t, input_t, transformer_config>(embedded_input, transformer_0_out, transformers_0_linear_0_weight, transformers_0_linear_0_bias);
    fout << "transformer_0_out:" << "\n";
    nnet::print_result<input_t, N_TRANSFORMER>(transformer_0_out, fout);

    // 2.1 jet transformer
    input_t transformer_1_out[N_TRANSFORMER];
    nnet::transformer<input_t, input_t, transformer_config>(transformer_0_out, transformer_1_out, transformers_0_linear_0_weight, transformers_0_linear_0_bias);
    fout << "transformer_1_out:" << "\n";
    nnet::print_result<input_t, N_TRANSFORMER>(transformer_1_out, fout);

    // 2.1 jet transformer
    input_t transformer_2_out[N_TRANSFORMER];
    nnet::transformer<input_t, input_t, transformer_config>(transformer_1_out, transformer_2_out, transformers_0_linear_0_weight, transformers_0_linear_0_bias);
    fout << "transformer_2_out:" << "\n";
    nnet::print_result<input_t, N_TRANSFORMER>(transformer_2_out, fout);


    layer11_t layer11_out[N_LAYER_11];
    #pragma HLS ARRAY_PARTITION variable=layer11_out complete dim=0
    nnet::dense<input_t, layer11_t, config11>(transformer_2_out, layer11_out, w11, b11); // output
    fout << "layer11_out:" << "\n";
    nnet::print_result<layer11_t, N_LAYER_11>(layer11_out, fout);

    nnet::softmax<input_t, result_t, softmax_config13>(layer11_out, data_out); // softmax
    fout << "data_out:" << "\n";
    nnet::print_result<result_t, N_LAYER_11>(data_out, fout);

}
