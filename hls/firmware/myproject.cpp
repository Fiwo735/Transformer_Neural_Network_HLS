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
        // std::cout << "Loading weights from txt" << "\n";
        
        nnet::load_weights_from_txt<top_cls_token_t, 64>(cls_token, "cls_token.txt");
        nnet::load_weights_from_txt<top_embedded_weight_t, 1024>(inp_layer_weight, "inp_layer_weight.txt");
        nnet::load_weights_from_txt<top_embedded_bias_t, 64>(inp_layer_bias, "inp_layer_bias.txt");
        nnet::load_weights_from_txt<top_norm_weight_t, 64>(out_layer_0_weight, "out_layer_0_weight.txt");
        nnet::load_weights_from_txt<top_norm_bias_t, 64>(out_layer_0_bias, "out_layer_0_bias.txt");
        nnet::load_weights_from_txt<top_mlp_weight_t, 320>(out_layer_1_weight, "out_layer_1_weight.txt");
        nnet::load_weights_from_txt<top_mlp_bias_t, 5>(out_layer_1_bias, "out_layer_1_bias.txt");

        nnet::load_weights_from_txt<SA_norm_weight_t, 64>(transformers_0_self_attention_norm_weight, "transformers_0_self_attention_norm_weight.txt");
        nnet::load_weights_from_txt<SA_norm_bias_t, 64>(transformers_0_self_attention_norm_bias, "transformers_0_self_attention_norm_bias.txt");
        nnet::load_weights_from_txt<SA_Q_weight_t, 4096>(transformers_0_self_attention_q_weight, "transformers_0_self_attention_q_weight.txt");
        nnet::load_weights_from_txt<SA_K_weight_t, 4096>(transformers_0_self_attention_k_weight, "transformers_0_self_attention_k_weight.txt");
        nnet::load_weights_from_txt<SA_V_weight_t, 4096>(transformers_0_self_attention_v_weight, "transformers_0_self_attention_v_weight.txt");
        nnet::load_weights_from_txt<SA_dense_weight_t, 4096>(transformers_0_self_attention_out_weight, "transformers_0_self_attention_out_weight.txt");
        nnet::load_weights_from_txt<SA_dense_bias_t, 64>(transformers_0_self_attention_out_bias, "transformers_0_self_attention_out_bias.txt");
        nnet::load_weights_from_txt<SA_exp_norm_weight_t, 961>(transformers_0_self_attention_pre_exp_norm_weight, "transformers_0_self_attention_pre_exp_norm_weight.txt");

        nnet::load_weights_from_txt<T_norm1_bias_t, 961>(transformers_0_self_attention_pre_exp_norm_bias, "transformers_0_self_attention_pre_exp_norm_bias.txt");
        nnet::load_weights_from_txt<T_norm0_weight_t, 64>(transformers_0_linear_0_weight, "transformers_0_linear_0_weight.txt");
        nnet::load_weights_from_txt<T_norm0_bias_t, 64>(transformers_0_linear_0_bias, "transformers_0_linear_0_bias.txt");
        nnet::load_weights_from_txt<T_dense0_weight_t, 8192>(transformers_0_linear_2_weight, "transformers_0_linear_2_weight.txt");
        nnet::load_weights_from_txt<T_norm1_weight_t, 128>(transformers_0_linear_3_weight, "transformers_0_linear_3_weight.txt");
        nnet::load_weights_from_txt<T_norm1_bias_t, 128>(transformers_0_linear_3_bias, "transformers_0_linear_3_bias.txt");
        nnet::load_weights_from_txt<T_dense1_weight_t, 8192>(transformers_0_linear_5_weight, "transformers_0_linear_5_weight.txt");

        nnet::load_weights_from_txt<SA_norm_weight_t, 64>(transformers_1_self_attention_norm_weight, "transformers_1_self_attention_norm_weight.txt");
        nnet::load_weights_from_txt<SA_norm_bias_t, 64>(transformers_1_self_attention_norm_bias, "transformers_1_self_attention_norm_bias.txt");
        nnet::load_weights_from_txt<SA_Q_weight_t, 4096>(transformers_1_self_attention_q_weight, "transformers_1_self_attention_q_weight.txt");
        nnet::load_weights_from_txt<SA_K_weight_t, 4096>(transformers_1_self_attention_k_weight, "transformers_1_self_attention_k_weight.txt");
        nnet::load_weights_from_txt<SA_V_weight_t, 4096>(transformers_1_self_attention_v_weight, "transformers_1_self_attention_v_weight.txt");
        nnet::load_weights_from_txt<SA_dense_weight_t, 4096>(transformers_1_self_attention_out_weight, "transformers_1_self_attention_out_weight.txt");
        nnet::load_weights_from_txt<SA_dense_bias_t, 64>(transformers_1_self_attention_out_bias, "transformers_1_self_attention_out_bias.txt");
        nnet::load_weights_from_txt<SA_exp_norm_weight_t, 961>(transformers_1_self_attention_pre_exp_norm_weight, "transformers_1_self_attention_pre_exp_norm_weight.txt");

        nnet::load_weights_from_txt<T_norm1_bias_t, 961>(transformers_1_self_attention_pre_exp_norm_bias, "transformers_1_self_attention_pre_exp_norm_bias.txt");
        nnet::load_weights_from_txt<T_norm0_weight_t, 64>(transformers_1_linear_0_weight, "transformers_1_linear_0_weight.txt");
        nnet::load_weights_from_txt<T_norm0_bias_t, 64>(transformers_1_linear_0_bias, "transformers_1_linear_0_bias.txt");
        nnet::load_weights_from_txt<T_dense0_weight_t, 8192>(transformers_1_linear_2_weight, "transformers_1_linear_2_weight.txt");
        nnet::load_weights_from_txt<T_norm1_weight_t, 128>(transformers_1_linear_3_weight, "transformers_1_linear_3_weight.txt");
        nnet::load_weights_from_txt<T_norm1_bias_t, 128>(transformers_1_linear_3_bias, "transformers_1_linear_3_bias.txt");
        nnet::load_weights_from_txt<T_dense1_weight_t, 8192>(transformers_1_linear_5_weight, "transformers_1_linear_5_weight.txt");

        nnet::load_weights_from_txt<SA_norm_weight_t, 64>(transformers_2_self_attention_norm_weight, "transformers_2_self_attention_norm_weight.txt");
        nnet::load_weights_from_txt<SA_norm_bias_t, 64>(transformers_2_self_attention_norm_bias, "transformers_2_self_attention_norm_bias.txt");
        nnet::load_weights_from_txt<SA_Q_weight_t, 4096>(transformers_2_self_attention_q_weight, "transformers_2_self_attention_q_weight.txt");
        nnet::load_weights_from_txt<SA_K_weight_t, 4096>(transformers_2_self_attention_k_weight, "transformers_2_self_attention_k_weight.txt");
        nnet::load_weights_from_txt<SA_V_weight_t, 4096>(transformers_2_self_attention_v_weight, "transformers_2_self_attention_v_weight.txt");
        nnet::load_weights_from_txt<SA_dense_weight_t, 4096>(transformers_2_self_attention_out_weight, "transformers_2_self_attention_out_weight.txt");
        nnet::load_weights_from_txt<SA_dense_bias_t, 64>(transformers_2_self_attention_out_bias, "transformers_2_self_attention_out_bias.txt");
        nnet::load_weights_from_txt<SA_exp_norm_weight_t, 961>(transformers_2_self_attention_pre_exp_norm_weight, "transformers_2_self_attention_pre_exp_norm_weight.txt");

        nnet::load_weights_from_txt<T_norm1_bias_t, 961>(transformers_2_self_attention_pre_exp_norm_bias, "transformers_2_self_attention_pre_exp_norm_bias.txt");
        nnet::load_weights_from_txt<T_norm0_weight_t, 64>(transformers_2_linear_0_weight, "transformers_2_linear_0_weight.txt");
        nnet::load_weights_from_txt<T_norm0_bias_t, 64>(transformers_2_linear_0_bias, "transformers_2_linear_0_bias.txt");
        nnet::load_weights_from_txt<T_dense0_weight_t, 8192>(transformers_2_linear_2_weight, "transformers_2_linear_2_weight.txt");
        nnet::load_weights_from_txt<T_norm1_weight_t, 128>(transformers_2_linear_3_weight, "transformers_2_linear_3_weight.txt");
        nnet::load_weights_from_txt<T_norm1_bias_t, 128>(transformers_2_linear_3_bias, "transformers_2_linear_3_bias.txt");
        nnet::load_weights_from_txt<T_dense1_weight_t, 8192>(transformers_2_linear_5_weight, "transformers_2_linear_5_weight.txt");

        loaded_weights = true;
    }
#endif

    PRETTY_PRINT_2D(data_in, N_PARTICLES, N_FEATURES);

    // Input embedding
    top_embedded_t embedded_input[N_PARTICLES][N_EMBEDDED_DIM];
    Embedding_dense: for (unsigned ipart = 0; ipart < N_PARTICLES; ipart++) {
        nnet::dense<input_t, top_embedded_t, embedded_config>(data_in[ipart], embedded_input[ipart], inp_layer_weight, inp_layer_bias);
    }
    PRETTY_PRINT_2D(embedded_input, N_PARTICLES, N_EMBEDDED_DIM);

    // Class token
    top_cls_token_t embedded_with_cls[N_PARTICLES+1][N_EMBEDDED_DIM];
    PRETTY_PRINT(cls_token, N_EMBEDDED_DIM);
    Concat_0: for (unsigned icls = 0; icls < N_EMBEDDED_DIM; icls++) {
        embedded_with_cls[0][icls] = cls_token[icls];
    }
    Concat_1_0: for (unsigned ipart = 0; ipart < N_PARTICLES; ipart++) {
        Concat_1_1: for (unsigned icls = 0; icls < N_EMBEDDED_DIM; icls++) {
            embedded_with_cls[ipart+1][icls] = (top_cls_token_t) embedded_input[ipart][icls]; 
        }
    }
    PRETTY_PRINT_2D(embedded_with_cls, N_PARTICLES+1, N_EMBEDDED_DIM);

    // Jet transformers
    top_transformer_0_t transformer_0_out[N_PARTICLES+1][N_EMBEDDED_DIM];
    nnet::transformer<top_cls_token_t, top_transformer_0_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_q_config0, sa_dense_k_config0, sa_dense_v_config0, sa_softmax_config0, sa_dense_config3, sa_exp_norm_config, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
        embedded_with_cls,
        transformer_0_out,
        transformers_0_self_attention_norm_weight,
        transformers_0_self_attention_norm_bias,
        // transformers_0_self_attention_qkv_weight,
        transformers_0_self_attention_q_weight,
        transformers_0_self_attention_k_weight,
        transformers_0_self_attention_v_weight,
        transformers_0_self_attention_out_weight,
        transformers_0_self_attention_out_bias,
        transformers_0_self_attention_pre_exp_norm_weight,
        transformers_0_self_attention_pre_exp_norm_bias,
        transformers_0_linear_0_weight,
        transformers_0_linear_0_bias,
        transformers_0_linear_2_weight,
        transformers_0_linear_3_weight,
        transformers_0_linear_3_bias,
        transformers_0_linear_5_weight
    );
    PRETTY_PRINT_2D(transformer_0_out, N_PARTICLES+1, N_EMBEDDED_DIM);

#if N_TRANSFORMER_LAYERS > 1
    top_transformer_1_t transformer_1_out[N_PARTICLES+1][N_EMBEDDED_DIM];
    nnet::transformer<top_transformer_0_t, top_transformer_1_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_q_config0, sa_dense_k_config0, sa_dense_v_config0, sa_softmax_config0, sa_dense_config3, sa_exp_norm_config, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
        transformer_0_out,
        transformer_1_out,
        transformers_1_self_attention_norm_weight,
        transformers_1_self_attention_norm_bias,
        // transformers_1_self_attention_qkv_weight,
        transformers_1_self_attention_q_weight,
        transformers_1_self_attention_k_weight,
        transformers_1_self_attention_v_weight,
        transformers_1_self_attention_out_weight,
        transformers_1_self_attention_out_bias,
        transformers_1_self_attention_pre_exp_norm_weight,
        transformers_1_self_attention_pre_exp_norm_bias,
        transformers_1_linear_0_weight,
        transformers_1_linear_0_bias,
        transformers_1_linear_2_weight,
        transformers_1_linear_3_weight,
        transformers_1_linear_3_bias,
        transformers_1_linear_5_weight
    );
    PRETTY_PRINT_2D(transformer_1_out, N_PARTICLES+1, N_EMBEDDED_DIM);
#endif

#if N_TRANSFORMER_LAYERS > 2
    top_transformer_2_t transformer_2_out[N_PARTICLES+1][N_EMBEDDED_DIM];
    nnet::transformer<top_transformer_1_t, top_transformer_2_t, transformer_config0, self_attention_config0, sa_norm_config0, sa_dense_q_config0, sa_dense_k_config0, sa_dense_v_config0, sa_softmax_config0, sa_dense_config3, sa_exp_norm_config, normalize_config1, sigmoid_config0, transformer_dense_config0, normalize_config2, sigmoid_config1, transformer_dense_config1>(
        transformer_1_out,
        transformer_2_out,
        transformers_2_self_attention_norm_weight,
        transformers_2_self_attention_norm_bias,
        // transformers_2_self_attention_qkv_weight,
        transformers_2_self_attention_q_weight,
        transformers_2_self_attention_k_weight,
        transformers_2_self_attention_v_weight,
        transformers_2_self_attention_out_weight,
        transformers_2_self_attention_out_bias,
        transformers_2_self_attention_pre_exp_norm_weight,
        transformers_2_self_attention_pre_exp_norm_bias,
        transformers_2_linear_0_weight,
        transformers_2_linear_0_bias,
        transformers_2_linear_2_weight,
        transformers_2_linear_3_weight,
        transformers_2_linear_3_bias,
        transformers_2_linear_5_weight
    );
    PRETTY_PRINT_2D(transformer_2_out, N_PARTICLES+1, N_EMBEDDED_DIM);
#endif

    // MLP dimension reduction
    top_mlp_dim_red_t mlp_dimensions_reduced[N_EMBEDDED_DIM];
    MLP_dim: for (int imlp = 0; imlp < N_EMBEDDED_DIM; imlp++) {
#if N_TRANSFORMER_LAYERS == 1
        mlp_dimensions_reduced[imlp] = (top_mlp_dim_red_t) transformer_0_out[0][imlp];
#elif N_TRANSFORMER_LAYERS == 2
        mlp_dimensions_reduced[imlp] = (top_mlp_dim_red_t) transformer_1_out[0][imlp];
#elif N_TRANSFORMER_LAYERS == 3
        mlp_dimensions_reduced[imlp] = (top_mlp_dim_red_t) transformer_2_out[0][imlp];
#else
        std::cerr << "Transformer layers count must be in {1, 2, 3}" << std::endl;
#endif
    }
    PRETTY_PRINT(mlp_dimensions_reduced, N_EMBEDDED_DIM);

#if SKIP_NORM == 0
    // Normalize
    top_norm_t normalized[N_EMBEDDED_DIM];
    nnet::normalize<top_mlp_dim_red_t, top_norm_t, normalize_config0>(mlp_dimensions_reduced, normalized, out_layer_0_weight, out_layer_0_bias);
    PRETTY_PRINT(normalized, N_EMBEDDED_DIM);
#endif

#if SKIP_FINAL_ACTIVATION == 0
    // MLP dense
    top_mlp_t mlp_out[N_LABELS];
#if SKIP_NORM == 0
    nnet::dense<top_norm_t, top_mlp_t, mlp_config>(normalized, mlp_out, out_layer_1_weight, out_layer_1_bias);
#else
    nnet::dense<top_mlp_dim_red_t, top_mlp_t, mlp_config>(mlp_dimensions_reduced, mlp_out, out_layer_1_weight, out_layer_1_bias);
#endif
    PRETTY_PRINT(mlp_out, N_LABELS);

    // Reduce precision for more accurate results of Log softmax
    top_mlp_red_t mlp_out_red[N_LABELS];
    MLP_cast: for (int jj = 0; jj < N_LABELS; jj++) {
        mlp_out_red[jj] = (top_mlp_red_t) mlp_out[jj];
    }
    PRETTY_PRINT(mlp_out_red, N_LABELS);
    nnet::log_softmax_latency<top_mlp_red_t, result_t, softmax_config0>(mlp_out_red, data_out, log_table);
#else
#if SKIP_NORM == 0
    nnet::dense<top_norm_t, result_t, mlp_config>(normalized, data_out, out_layer_1_weight, out_layer_1_bias);
#else
    nnet::dense<top_mlp_dim_red_t, result_t, mlp_config>(mlp_dimensions_reduced, data_out, out_layer_1_weight, out_layer_1_bias);
#endif
#endif
    PRETTY_PRINT(data_out, N_LABELS);

#ifndef __SYNTHESIS__
    // TODO don't close and just let it close automatically to avoid issues where running multiple tests?
    // FOUT.close();
#endif
}
