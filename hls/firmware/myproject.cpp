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

#ifndef __SYNTHESIS__
// std::ofstream FOUT("tb_data/csim_layers.log", std::ios_base::app);

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

void myproject(
    // input_t data_in[N_INPUT],
    input_t data_in[N_PARTICLES][N_FEATURES],
    result_t data_out[N_LABELS],
    unsigned short &const_size_in_1,
    unsigned short &const_size_out_1
) {

    #pragma HLS ARRAY_RESHAPE variable=data_in complete dim=0
    #pragma HLS ARRAY_PARTITION variable=data_out complete dim=0
    #pragma HLS INTERFACE ap_vld port=data_in,data_out 
    #pragma HLS PIPELINE

    const_size_in_1 = N_PARTICLES * N_FEATURES;
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

    PRETTY_PRINT_2D(data_in, N_PARTICLES, N_FEATURES);

    // Input embedding
    input_t embedded_input[N_PARTICLES][N_EMBEDDED_DIM];
    for (unsigned ipart = 0; ipart < N_PARTICLES; ipart++) {
        nnet::dense<input_t, input_t, embedded_config>(data_in[ipart], embedded_input[ipart], inp_layer_weight, inp_layer_bias);
    }
    PRETTY_PRINT_2D(embedded_input, N_PARTICLES, N_EMBEDDED_DIM);

    // Class token
    input_t embedded_with_cls[N_PARTICLES+1][N_EMBEDDED_DIM];
    PRETTY_PRINT(cls_token, N_EMBEDDED_DIM);
    for (unsigned icls = 0; icls < N_EMBEDDED_DIM; icls++) {
        embedded_with_cls[0][icls] = cls_token[icls];
    }
    for (unsigned ipart = 0; ipart < N_PARTICLES; ipart++) {
        for (unsigned icls = 0; icls < N_EMBEDDED_DIM; icls++) {
            embedded_with_cls[ipart+1][icls] = embedded_input[ipart][icls]; 
        }
    }
    PRETTY_PRINT_2D(embedded_with_cls, N_PARTICLES+1, N_EMBEDDED_DIM);

    // Jet transformer
    input_t transformer_0_out[N_PARTICLES+1][N_EMBEDDED_DIM];
    nnet::transformer<input_t, input_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_config0, sa_transpose_config0, sa_softmax_config0, sa_dense_config3, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
        embedded_with_cls,
        transformer_0_out,
        transformers_0_self_attention_qkv_weight,
        transformers_0_self_attention_out_weight,
        transformers_0_self_attention_out_bias,
        transformers_0_linear_2_weight,
        transformers_0_linear_5_weight
    );
    PRETTY_PRINT_2D(transformer_0_out, N_PARTICLES+1, N_EMBEDDED_DIM);

    // MLP dimension reduction
    input_t mlp_dimensions_reduced[N_EMBEDDED_DIM];
    mlp_dim: for (int imlp = 0; imlp < N_EMBEDDED_DIM; imlp++) {
        mlp_dimensions_reduced[imlp] = transformer_0_out[0][imlp];
    }
    PRETTY_PRINT(mlp_dimensions_reduced, N_EMBEDDED_DIM);

    // MLP dense
    input_t mlp_out[N_LABELS];
    nnet::dense<input_t, input_t, mlp_config>(mlp_dimensions_reduced, mlp_out, out_layer_1_weight, out_layer_1_bias);
    PRETTY_PRINT(mlp_out, N_LABELS);

    // Reduce precision for more accurate results of Log softmax
    input_t_red mlp_out_red[N_LABELS];
    for (int jj = 0; jj < N_LABELS; jj++) {
        mlp_out_red[jj] = (input_t_red) mlp_out[jj];
    }
    PRETTY_PRINT(mlp_out_red, N_LABELS);
    nnet::log_softmax_latency<input_t_red, result_t, softmax_config0>(mlp_out_red, data_out, log_table);
    PRETTY_PRINT(data_out, N_LABELS);

#ifndef __SYNTHESIS__
    FOUT.close();
#endif
}
