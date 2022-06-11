#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
// #include "nnet_utils/nnet_mult.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_transformer.h"

#include "nnet_utils/nnet_merge.h"
#include "nnet_utils/nnet_mult.h"


//hls-fpga-machine-learning insert weights
#include "weights/cls_token.h"
#include "weights/inp_layer_weight.h"
#include "weights/inp_layer_bias.h"
<<<<<<< HEAD
#include "weights/out_layer_1_weight.h"
#include "weights/out_layer_1_bias.h"
#include "weights/transformers_0_self_attention_qkv_weight.h"
#include "weights/transformers_0_self_attention_out_weight.h"
#include "weights/transformers_0_self_attention_out_bias.h"
#include "weights/transformers_0_linear_2_weight.h"
#include "weights/transformers_0_linear_5_weight.h"
=======
#include "weights/out_layer_0_weight.h"
#include "weights/out_layer_0_bias.h"
#include "weights/out_layer_1_weight.h"
#include "weights/out_layer_1_bias.h"
#include "weights/transformers_0_self_attention_norm_weight.h"
#include "weights/transformers_0_self_attention_norm_bias.h"
#include "weights/transformers_0_self_attention_q_weight.h"
#include "weights/transformers_0_self_attention_k_weight.h"
#include "weights/transformers_0_self_attention_v_weight.h"
#include "weights/transformers_0_self_attention_out_weight.h"
#include "weights/transformers_0_self_attention_out_bias.h"
#include "weights/transformers_0_self_attention_pre_exp_norm_weight.h"
#include "weights/transformers_0_self_attention_pre_exp_norm_bias.h"
#include "weights/transformers_0_linear_0_weight.h"
#include "weights/transformers_0_linear_0_bias.h"
#include "weights/transformers_0_linear_2_weight.h"
#include "weights/transformers_0_linear_3_weight.h"
#include "weights/transformers_0_linear_3_bias.h"
#include "weights/transformers_0_linear_5_weight.h"
#include "weights/transformers_1_self_attention_norm_weight.h"
#include "weights/transformers_1_self_attention_norm_bias.h"
#include "weights/transformers_1_self_attention_q_weight.h"
#include "weights/transformers_1_self_attention_k_weight.h"
#include "weights/transformers_1_self_attention_v_weight.h"
#include "weights/transformers_1_self_attention_out_weight.h"
#include "weights/transformers_1_self_attention_out_bias.h"
#include "weights/transformers_1_self_attention_pre_exp_norm_weight.h"
#include "weights/transformers_1_self_attention_pre_exp_norm_bias.h"
#include "weights/transformers_1_linear_0_weight.h"
#include "weights/transformers_1_linear_0_bias.h"
#include "weights/transformers_1_linear_2_weight.h"
#include "weights/transformers_1_linear_3_weight.h"
#include "weights/transformers_1_linear_3_bias.h"
#include "weights/transformers_1_linear_5_weight.h"
#include "weights/transformers_2_self_attention_norm_weight.h"
#include "weights/transformers_2_self_attention_norm_bias.h"
#include "weights/transformers_2_self_attention_q_weight.h"
#include "weights/transformers_2_self_attention_k_weight.h"
#include "weights/transformers_2_self_attention_v_weight.h"
#include "weights/transformers_2_self_attention_out_weight.h"
#include "weights/transformers_2_self_attention_out_bias.h"
#include "weights/transformers_2_self_attention_pre_exp_norm_weight.h"
#include "weights/transformers_2_self_attention_pre_exp_norm_bias.h"
#include "weights/transformers_2_linear_0_weight.h"
#include "weights/transformers_2_linear_0_bias.h"
#include "weights/transformers_2_linear_2_weight.h"
#include "weights/transformers_2_linear_3_weight.h"
#include "weights/transformers_2_linear_3_bias.h"
#include "weights/transformers_2_linear_5_weight.h"
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

#include "weights/log_table.h"

//------- TOP -------
<<<<<<< HEAD

struct embedded_config : nnet::dense_config {
    static const unsigned n_in = N_INPUT;
    static const unsigned n_out = N_EMBEDDED;
=======
struct embedded_config : nnet::dense_config {
    static const unsigned n_in = N_FEATURES;
    static const unsigned n_out = N_EMBEDDED_DIM;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
<<<<<<< HEAD
    static const unsigned n_nonzeros = (N_EMBEDDED * N_EMBEDDED);
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
=======
    static const unsigned n_nonzeros = (N_FEATURES * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;

    typedef top_embedded_accum_t accum_t;
    typedef top_embedded_bias_t bias_t;
    typedef top_embedded_weight_t weight_t;
    typedef ap_uint<1> index_t;

>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

<<<<<<< HEAD
struct concat_config0 : nnet::concat_config {
    static const unsigned n_elem1_0 = N_EMBEDDED_DIM;
    static const unsigned n_elem1_1 = 1;

    static const unsigned n_elem2_0 = N_EMBEDDED;
    static const unsigned n_elem2_1 = 1;

    static const unsigned axis = -1;
};

struct normalize_config0 : nnet::layernorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;
=======
struct normalize_config0 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef top_norm_bias_t bias_t;
    typedef top_norm_weight_t scale_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

    // Layer Sizes
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_filt = -1;
<<<<<<< HEAD
    static const unsigned n_layers = 1;
=======
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct mlp_config : nnet::dense_config {
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_out = N_LABELS;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * N_LABELS);
    static const bool store_weights_in_bram = false;
<<<<<<< HEAD
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
=======

    typedef top_mlp_accum_t accum_t;
    typedef top_mlp_bias_t bias_t;
    typedef top_mlp_weight_t weight_t;
    typedef ap_uint<1> index_t;

>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct softmax_config0 : nnet::activ_config {
    static const unsigned n_in = N_LABELS;
<<<<<<< HEAD
    static const unsigned table_size = N_BIG_TABLE_SIZE;
=======
    static const unsigned table_size = N_LOG_SOFTMAX_TABLE;
    static const unsigned log_target_iwidth = LOG_TARGET_IWIDTH;
    static const unsigned exp_target_iwidth = LOG_EXP_TARGET_IWIDTH;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::latency;
<<<<<<< HEAD
    typedef general_table_t exp_table_t;
    typedef general_table_t inv_table_t;
    typedef general_table_t log_table_t;
};

//------- TOP -------

//------- TRANSFORMER -------

=======
    
    typedef top_log_softmax_exp_t exp_table_t;
    typedef top_log_softmax_log_t log_table_t;
};
//------- TOP -------

//------- TRANSFORMER -------
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
struct transformer_config0 : nnet::transformer_config {
    static const unsigned n_in = N_TRANSFORMER;
    static const unsigned n_out = N_TRANSFORMER;

    static const unsigned n_particles = (N_PARTICLES + 1);
    static const unsigned n_el = N_EMBEDDED_DIM;
    static const unsigned n_el_doubled = (N_EMBEDDED_DIM * 2);

    static const unsigned n_SA_norm_weight = N_EMBEDDED_DIM;
    static const unsigned n_SA_norm_bias = N_EMBEDDED_DIM;
<<<<<<< HEAD
    static const unsigned n_SA_QKV_weight = (N_EMBEDDED_DIM * 3 * N_EMBEDDED_DIM); // 3 x N_EMBEDDED_DIM -> N_EMBEDDED_DIM
    static const unsigned n_SA_dense_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM); // N_EMBEDDED_DIM -> N_EMBEDDED_DIM
    static const unsigned n_SA_dense_bias = N_EMBEDDED_DIM;
=======
    // static const unsigned n_SA_QKV_weight = (N_EMBEDDED_DIM * 3 * N_EMBEDDED_DIM); // 3 x N_EMBEDDED_DIM -> N_EMBEDDED_DIM
    static const unsigned n_SA_Q_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_SA_K_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_SA_V_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_SA_dense_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM); // N_EMBEDDED_DIM -> N_EMBEDDED_DIM
    static const unsigned n_SA_dense_bias = N_EMBEDDED_DIM;
    static const unsigned n_SA_exp_norm_weight = ((N_PARTICLES + 1) * (N_PARTICLES + 1));
    static const unsigned n_SA_exp_norm_bias = ((N_PARTICLES + 1) * (N_PARTICLES + 1));

>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

    static const unsigned n_norm0_weight = N_EMBEDDED_DIM;
    static const unsigned n_norm0_bias = N_EMBEDDED_DIM;
    static const unsigned n_dense0_weight = (N_EMBEDDED_DIM * 2 * N_EMBEDDED_DIM); // N_EMBEDDED_DIM -> 2 x N_EMBEDDED_DIM
    static const unsigned n_norm1_weight = (N_EMBEDDED_DIM * 2);
    static const unsigned n_norm1_bias = (N_EMBEDDED_DIM * 2);
    static const unsigned n_dense1_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM * 2); // 2 x N_EMBEDDED_DIM -> N_EMBEDDED_DIM

    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;

<<<<<<< HEAD
    typedef model_default_t accum_t;

    typedef model_default_t SA_norm_weight_t;
    typedef model_default_t SA_norm_bias_t;
    typedef model_default_t SA_QKV_weight_t;
    typedef model_default_t SA_dense_weight_t;
    typedef model_default_t SA_dense_bias_t;

    typedef model_default_t norm0_weight_t;
    typedef model_default_t norm0_bias_t;
    typedef model_default_t dense0_weight_t;
    typedef model_default_t norm1_weight_t;
    typedef model_default_t norm1_bias_t;
    typedef model_default_t dense1_weight_t;
=======
    typedef SA_norm_weight_t     S_norm_weight_t;
    typedef SA_norm_bias_t       S_norm_bias_t;
    // typedef SA_QKV_weight_t      S_QKV_weight_t;
    typedef SA_Q_weight_t        S_Q_weight_t;
    typedef SA_K_weight_t        S_K_weight_t;
    typedef SA_V_weight_t        S_V_weight_t;
    typedef SA_dense_weight_t    S_dense_weight_t;
    typedef SA_dense_bias_t      S_dense_bias_t;
    typedef SA_exp_norm_weight_t S_exp_norm_weight_t;
    typedef SA_exp_norm_bias_t   S_exp_norm_bias_t;

    typedef SA_result_t S_result_t;
    typedef SA_result_sum_t S_result_sum_t;

    typedef T_norm0_t norm0_t;
    typedef T_norm0_weight_t norm0_weight_t;
    typedef T_norm0_bias_t norm0_bias_t;

    typedef T_activ0_t activ0_t;

    typedef T_dense0_t dense0_t;
    typedef T_dense0_weight_t dense0_weight_t;

    typedef T_norm1_t norm1_t;
    typedef T_norm1_weight_t norm1_weight_t;
    typedef T_norm1_bias_t norm1_bias_t;

    typedef T_activ1_t activ1_t;

    typedef T_dense1_t dense1_t;
    typedef T_dense1_weight_t dense1_weight_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

    // typedef model_default_t bias_t;
    // typedef model_default_t scale_t;
    // typedef model_default_t norm1_bias_t;
    // typedef model_default_t norm1_weight_t;
    // typedef model_default_t ff_weight_t;
    // typedef model_default_t ff_bias_t;
    // typedef model_default_t Q_weight_t;
    // typedef model_default_t K_weight_t;
    // typedef model_default_t V_weight_t;
    // typedef model_default_t inv_sqrt_d_k_t;
<<<<<<< HEAD
    typedef model_default_t exp_table_t;
    typedef model_default_t inv_table_t;
    typedef model_default_t table_t;
    typedef model_default_t weight_t;
    typedef model_default_t data_T;
    typedef model_default_t res_T;
=======
    // typedef model_default_t exp_table_t;
    // typedef model_default_t inv_table_t;
    // typedef model_default_t table_t;
    // typedef model_default_t weight_t;
    // typedef model_default_t data_T;
    // typedef model_default_t res_T;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

<<<<<<< HEAD
struct normalize_config1 : nnet::layernorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;
=======
struct normalize_config1 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef T_norm0_bias_t bias_t;
    typedef T_norm0_weight_t scale_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

    // Layer Sizes
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_filt = -1;
<<<<<<< HEAD
    static const unsigned n_layers = (N_PARTICLES + 1);
=======
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// TODO rename sigmoid0 config to silu0 config? or just activ0 config?
struct sigmoid_config0 : nnet::activ_config {
    // IO size
    static const unsigned n_in = N_EMBEDDED_DIM;

    // Internal info
    // static const unsigned table_size = N_SMALL_TABLE_SIZE;

    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;

<<<<<<< HEAD
    // Internal data type definitions
    typedef general_table_t table_t;

=======
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct transformer_dense_config0 : nnet::dense_config {
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_out = (N_EMBEDDED_DIM * 2);
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * 2 * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;
<<<<<<< HEAD
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
=======
    typedef T_dense0_accum_t accum_t;
    typedef T_dense0_weight_t weight_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

<<<<<<< HEAD
struct normalize_config2 : nnet::layernorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;
=======
struct normalize_config2 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef T_norm1_bias_t bias_t;
    typedef T_norm1_weight_t scale_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

    // Layer Sizes
    static const unsigned n_in = (N_EMBEDDED_DIM * 2);
    static const unsigned n_filt = -1;
<<<<<<< HEAD
    static const unsigned n_layers = (N_PARTICLES + 1);
=======
    // static const unsigned n_layers = (N_PARTICLES + 1);
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sigmoid_config1 : nnet::activ_config {
    // IO size
    static const unsigned n_in = (N_EMBEDDED_DIM * 2);

<<<<<<< HEAD
    // Internal info
    // static const unsigned table_size = N_SMALL_TABLE_SIZE;

=======
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;

<<<<<<< HEAD
    // Internal data type definitions
    typedef general_table_t table_t;

=======
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct transformer_dense_config1 : nnet::dense_config {
    static const unsigned n_in = (N_EMBEDDED_DIM * 2);
    static const unsigned n_out = N_EMBEDDED_DIM;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * 2 * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;
<<<<<<< HEAD
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
=======
    typedef T_dense1_accum_t accum_t;
    typedef T_dense1_weight_t weight_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};
<<<<<<< HEAD

//------- TRANSFORMER -------

//------- SELF ATTENTION -------

struct self_attention_config0 : nnet::self_attention_config {
    typedef model_default_t norm_weight_t;
    typedef model_default_t norm_bias_t;
    typedef model_default_t QKV_weight_t;
    typedef model_default_t dense_weight_t;
    typedef model_default_t dense_bias_t;

    static const unsigned n_norm_weight = N_EMBEDDED_DIM;
    static const unsigned n_norm_bias = N_EMBEDDED_DIM;
    static const unsigned n_QKV_weight = (N_EMBEDDED_DIM * 3 * N_EMBEDDED_DIM);
    static const unsigned n_dense_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_dense_bias = N_EMBEDDED_DIM;

    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef model_default_t accum_t;

    typedef model_default_t inv_sqrt_d_k_t;
    
    // static const inv_sqrt_d_k_t inv_sqrt_d_k = 0.0883883476483; //TODO:
=======
//------- TRANSFORMER -------

//------- SELF ATTENTION -------
struct self_attention_config0 : nnet::self_attention_config {
    typedef SA_norm_t norm_t;
    typedef SA_norm_weight_t norm_weight_t;
    typedef SA_norm_bias_t norm_bias_t;

    // typedef SA_QKV_t QKV_t;
    // typedef SA_QKV_weight_t QKV_weight_t;

    typedef SA_dense_weight_t dense_weight_t;
    typedef SA_dense_bias_t dense_bias_t;
    
    typedef SA_exp_norm_weight_t exp_norm_weight_t;
    typedef SA_exp_norm_bias_t exp_norm_bias_t;

    typedef SA_Q_t Q_t;
    typedef SA_Q_weight_t Q_weight_t;
    typedef SA_K_t K_t;
    typedef SA_K_weight_t K_weight_t;
    typedef SA_V_t V_t;
    typedef SA_V_weight_t V_weight_t;

    typedef SA_energy_t energy_t;
    typedef SA_exp_norm_t exp_norm_t;
    typedef SA_exp_norm_red_t exp_norm_red_t;
    typedef SA_attention_t attention_t;
    typedef SA_scaled_attention_t scaled_attention_t;

    static const unsigned n_norm_weight = N_EMBEDDED_DIM;
    static const unsigned n_norm_bias = N_EMBEDDED_DIM;
    // static const unsigned n_QKV_weight = (N_EMBEDDED_DIM * 3 * N_EMBEDDED_DIM);
    static const unsigned n_Q_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_K_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_V_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_dense_weight = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const unsigned n_dense_bias = N_EMBEDDED_DIM;
    static const unsigned n_exp_norm_weight = ((N_PARTICLES + 1) * (N_PARTICLES + 1));
    static const unsigned n_exp_norm_bias = ((N_PARTICLES + 1) * (N_PARTICLES + 1));
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

    // Layer Sizes
    static const unsigned n_in = N_TRANSFORMER;
    static const unsigned n_out = N_TRANSFORMER;

    static const unsigned n_particles = (N_PARTICLES + 1);

    static const unsigned n_norm_el = N_EMBEDDED_DIM;
    static const unsigned n_el = N_EMBEDDED_DIM;

    static const unsigned n_qkv_in_el = N_EMBEDDED_DIM;
    static const unsigned n_qkv_out_el = (N_EMBEDDED_DIM * 3);

<<<<<<< HEAD
    static const unsigned n_qkv = (N_EMBEDDED_DIM * 3 * (N_PARTICLES + 1));
    static const unsigned n_q = N_EMBEDDED_DIM;
    static const unsigned n_k = N_EMBEDDED_DIM;
    static const unsigned n_v = N_EMBEDDED_DIM;
    static const unsigned n_energy = (2 * (N_PARTICLES + 1));
=======
    // static const unsigned n_qkv = (N_EMBEDDED_DIM * 3 * (N_PARTICLES + 1));
    static const unsigned n_q = N_EMBEDDED_DIM;
    static const unsigned n_k = N_EMBEDDED_DIM;
    static const unsigned n_v = N_EMBEDDED_DIM;
    // static const unsigned n_energy = (2 * (N_PARTICLES + 1));
    static const unsigned n_heads = N_HEADS;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    static const unsigned n_attention = (N_PARTICLES + 1);
    static const unsigned n_scaled_attention = N_EMBEDDED_DIM;

    // Resource reuse info
    static const unsigned io_type =  nnet::io_parallel;
    static const unsigned strategy =  nnet::latency; 
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    // Product function to use
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

<<<<<<< HEAD
struct sa_norm_config0 : nnet::layernorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;
=======
struct sa_norm_config0 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef SA_norm_bias_t bias_t;
    typedef SA_norm_weight_t scale_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c

    // Layer Sizes
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_filt = -1;
<<<<<<< HEAD
    static const unsigned n_layers = (N_PARTICLES + 1);
=======
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

<<<<<<< HEAD
struct sa_dense_config0 : nnet::dense_config {
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_out = (N_EMBEDDED_DIM * 3);
=======
// struct sa_dense_config0 : nnet::dense_config {
//     static const unsigned n_in = N_EMBEDDED_DIM;
//     static const unsigned n_out = (N_EMBEDDED_DIM * 3);
//     static const unsigned io_type = nnet::io_parallel;
//     static const unsigned strategy = nnet::latency;
//     static const unsigned reuse_factor = 1;
//     static const unsigned n_zeros = 0;
//     static const unsigned n_nonzeros = (N_EMBEDDED_DIM * 3 * N_EMBEDDED_DIM);
//     static const bool store_weights_in_bram = false;

//     typedef SA_QKV_accum_t accum_t;
//     typedef SA_QKV_weight_t weight_t;

//     typedef ap_uint<1> index_t;
//     template<class x_T, class y_T, class res_T>
//     using product = nnet::product::mult<x_T, y_T, res_T>;
// };

struct sa_dense_q_config0 : nnet::dense_config {
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_out = N_EMBEDDED_DIM;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
<<<<<<< HEAD
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * 3 * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
=======
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;

    typedef SA_Q_accum_t accum_t;
    typedef SA_Q_weight_t weight_t;

>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

<<<<<<< HEAD
struct sa_transpose_config0 : nnet::transpose_config {
    static const unsigned height = (N_EMBEDDED_DIM / 2);
    static const unsigned width = 2;
};

struct sa_softmax_config0 : nnet::activ_config {
    static const unsigned n_in = 2;
    static const unsigned table_size = N_BIG_TABLE_SIZE;
=======
struct sa_dense_k_config0 : nnet::dense_config {
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_out = N_EMBEDDED_DIM;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;

    typedef SA_K_accum_t accum_t;
    typedef SA_K_weight_t weight_t;

    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sa_dense_v_config0 : nnet::dense_config {
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_out = N_EMBEDDED_DIM;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;

    typedef SA_V_accum_t accum_t;
    typedef SA_V_weight_t weight_t;

    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sa_exp_norm_config : nnet::batchnorm_config {
    // Internal data type definitions
    typedef SA_exp_norm_bias_t bias_t;
    typedef SA_exp_norm_weight_t scale_t;

    // Layer Sizes
    static const unsigned n_in = ((N_PARTICLES + 1) * (N_PARTICLES + 1));
    static const unsigned n_filt = -1;
    // static const unsigned n_layers = (N_PARTICLES + 1);
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sa_softmax_config0 : nnet::activ_config {
    static const unsigned n_in = (N_PARTICLES + 1);
    // static const unsigned n_in = (N_PARTICLES + 1); // TODO!
    static const unsigned table_size = N_SOFTMAX_TABLE;
    static const unsigned exp_target_iwidth = EXP_TARGET_IWIDTH;
    static const unsigned inv_target_iwidth = INV_TARGET_IWIDTH;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::latency;
<<<<<<< HEAD
    typedef general_table_t exp_table_t;
    typedef general_table_t inv_table_t;
=======

    typedef SA_softmax_exp_t exp_table_t;
    typedef SA_softmax_inv_t inv_table_t;
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
};

struct sa_dense_config3 : nnet::dense_config {
    static const unsigned n_in = N_EMBEDDED_DIM;
    static const unsigned n_out = N_EMBEDDED_DIM;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = (N_EMBEDDED_DIM * N_EMBEDDED_DIM);
    static const bool store_weights_in_bram = false;
<<<<<<< HEAD
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

=======

    typedef SA_dense_accum_t accum_t;
    typedef SA_dense_bias_t bias_t;
    typedef SA_dense_weight_t weight_t;
    typedef ap_uint<1> index_t;

    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};
>>>>>>> 9c0d86c28c83f71f1cb2ea0cb2e3aa899ae4e20c
//------- SELF ATTENTION -------
#endif
