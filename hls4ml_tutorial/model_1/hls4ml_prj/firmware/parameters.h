#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include "ap_int.h"
#include "ap_fixed.h"

#include "nnet_utils/nnet_helpers.h"
//hls-fpga-machine-learning insert includes
#include "nnet_utils/nnet_activation.h"
#include "nnet_utils/nnet_activation_stream.h"
#include "nnet_utils/nnet_dense.h"
#include "nnet_utils/nnet_dense_compressed.h"
#include "nnet_utils/nnet_dense_stream.h"
#include "nnet_utils/nnet_batchnorm.h"
#include "nnet_utils/nnet_transformer.h"


//hls-fpga-machine-learning insert weights
#include "weights/cls_token.h"
#include "weights/inp_layer_weight.h"
#include "weights/inp_layer_bias.h"
#include "weights/out_layer_0_weight.h"
#include "weights/out_layer_0_bias.h"
#include "weights/out_layer_1_weight.h"
#include "weights/out_layer_1_bias.h"
#include "weights/transformers_0_self_attention_norm_weight.h"
#include "weights/transformers_0_self_attention_norm_bias.h"
#include "weights/transformers_0_self_attention_qkv_weight.h"
#include "weights/transformers_0_self_attention_out_weight.h"
#include "weights/transformers_0_self_attention_out_bias.h"
#include "weights/transformers_0_linear_0_weight.h"
#include "weights/transformers_0_linear_0_bias.h"
#include "weights/transformers_0_linear_2_weight.h"
#include "weights/transformers_0_linear_3_weight.h"
#include "weights/transformers_0_linear_3_bias.h"
#include "weights/transformers_0_linear_5_weight.h"
#include "weights/transformers_1_self_attention_norm_weight.h"
#include "weights/transformers_1_self_attention_norm_bias.h"
#include "weights/transformers_1_self_attention_qkv_weight.h"
#include "weights/transformers_1_self_attention_out_weight.h"
#include "weights/transformers_1_self_attention_out_bias.h"
#include "weights/transformers_1_linear_0_weight.h"
#include "weights/transformers_1_linear_0_bias.h"
#include "weights/transformers_1_linear_2_weight.h"
#include "weights/transformers_1_linear_3_weight.h"
#include "weights/transformers_1_linear_3_bias.h"
#include "weights/transformers_1_linear_5_weight.h"
#include "weights/transformers_2_self_attention_norm_weight.h"
#include "weights/transformers_2_self_attention_norm_bias.h"
#include "weights/transformers_2_self_attention_qkv_weight.h"
#include "weights/transformers_2_self_attention_out_weight.h"
#include "weights/transformers_2_self_attention_out_bias.h"
#include "weights/transformers_2_linear_0_weight.h"
#include "weights/transformers_2_linear_0_bias.h"
#include "weights/transformers_2_linear_2_weight.h"
#include "weights/transformers_2_linear_3_weight.h"
#include "weights/transformers_2_linear_3_bias.h"
#include "weights/transformers_2_linear_5_weight.h"

// #include "weights/my_example0.h"
// #include "weights/my_example1.h"

struct my_example_config : nnet::dense_config {
    static const unsigned n_in = 6;
    static const unsigned n_out = 4;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 6;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

//hls-fpga-machine-learning insert layer-config
// input embedding
struct embedded_config : nnet::dense_config {
    static const unsigned n_in = N_INPUT;
    static const unsigned n_out = N_EMBEDDED;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 2048;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct transformer_dense_config0 : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 512;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 32768;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct transformer_dense_config1 : nnet::dense_config {
    static const unsigned n_in = 512;
    static const unsigned n_out = 256;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 32768;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// // relu1
// struct relu_config4 : nnet::activ_config {
//     static const unsigned n_in = N_LAYER_2;
//     static const unsigned table_size = 1024;
//     static const unsigned io_type = nnet::io_parallel;
//     static const unsigned reuse_factor = 1;
//     typedef ap_fixed<18,8> table_t;
// };

// // fc2
// struct config5 : nnet::dense_config {
//     static const unsigned n_in = N_LAYER_2;
//     static const unsigned n_out = N_LAYER_5;
//     static const unsigned io_type = nnet::io_parallel;
//     static const unsigned strategy = nnet::latency;
//     static const unsigned reuse_factor = 1;
//     static const unsigned n_zeros = 0;
//     static const unsigned n_nonzeros = 2048;
//     static const bool store_weights_in_bram = false;
//     typedef ap_fixed<16,6> accum_t;
//     typedef model_default_t bias_t;
//     typedef model_default_t weight_t;
//     typedef ap_uint<1> index_t;
//     template<class x_T, class y_T, class res_T>
//     using product = nnet::product::mult<x_T, y_T, res_T>;
// };

// // relu2
// struct relu_config7 : nnet::activ_config {
//     static const unsigned n_in = N_LAYER_5;
//     static const unsigned table_size = 1024;
//     static const unsigned io_type = nnet::io_parallel;
//     static const unsigned reuse_factor = 1;
//     typedef ap_fixed<18,8> table_t;
// };

// // fc3
// struct config8 : nnet::dense_config {
//     static const unsigned n_in = N_LAYER_5;
//     static const unsigned n_out = N_LAYER_8;
//     static const unsigned io_type = nnet::io_parallel;
//     static const unsigned strategy = nnet::latency;
//     static const unsigned reuse_factor = 1;
//     static const unsigned n_zeros = 0;
//     static const unsigned n_nonzeros = 1024;
//     static const bool store_weights_in_bram = false;
//     typedef ap_fixed<16,6> accum_t;
//     typedef model_default_t bias_t;
//     typedef model_default_t weight_t;
//     typedef ap_uint<1> index_t;
//     template<class x_T, class y_T, class res_T>
//     using product = nnet::product::mult<x_T, y_T, res_T>;
// };

// // relu3
// struct relu_config10 : nnet::activ_config {
//     static const unsigned n_in = N_LAYER_8;
//     static const unsigned table_size = 1024;
//     static const unsigned io_type = nnet::io_parallel;
//     static const unsigned reuse_factor = 1;
//     typedef ap_fixed<18,8> table_t;
// };

// // output
// struct config11 : nnet::dense_config {
//     static const unsigned n_in = N_TRANSFORMER;
//     static const unsigned n_out = N_LAYER_11;
//     static const unsigned io_type = nnet::io_parallel;
//     static const unsigned strategy = nnet::latency;
//     static const unsigned reuse_factor = 1;
//     static const unsigned n_zeros = 0;
//     static const unsigned n_nonzeros = 160;
//     static const bool store_weights_in_bram = false;
//     typedef ap_fixed<16,6> accum_t;
//     typedef model_default_t bias_t;
//     typedef model_default_t weight_t;
//     typedef ap_uint<1> index_t;
//     template<class x_T, class y_T, class res_T>
//     using product = nnet::product::mult<x_T, y_T, res_T>;
// };

struct normalize_config0 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;

    // Layer Sizes
    static const unsigned n_in = N_BATCH_SIZE;
    static const unsigned n_filt = -1;
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct normalize_config1 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;

    // Layer Sizes
    static const unsigned n_in = 256;
    static const unsigned n_filt = -1;
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct normalize_config2 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;

    // Layer Sizes
    static const unsigned n_in = 512;
    static const unsigned n_filt = -1;
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sigmoid_config0 : nnet::activ_config {
    // IO size
    static const unsigned n_in = 256;

    // Internal info
    static const unsigned table_size = 1024;

    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;

    // Internal data type definitions
    typedef general_table_t table_t;
};

struct sigmoid_config1 : nnet::activ_config {
    // IO size
    static const unsigned n_in = 512;

    // Internal info
    static const unsigned table_size = 1024;

    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;

    // Internal data type definitions
    typedef general_table_t table_t;
};

struct mlp_config : nnet::dense_config {
    static const unsigned n_in = N_BATCH_SIZE;
    static const unsigned n_out = N_LABELS;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 640;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// softmax
struct softmax_config0 : nnet::activ_config {
    static const unsigned n_in = N_LABELS;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::latency;
    typedef general_table_t exp_table_t;
    typedef general_table_t inv_table_t;
};

struct sa_softmax_config0 : nnet::activ_config {
    static const unsigned n_in = 8;
    static const unsigned table_size = 1024;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const unsigned axis = -1;
    static const nnet::softmax_implementation implementation = nnet::softmax_implementation::latency;
    typedef general_table_t exp_table_t;
    typedef general_table_t inv_table_t;
};

struct self_attention_config0 : nnet::self_attention_config {
    typedef model_default_t norm_weight_t;
    typedef model_default_t norm_bias_t;
    typedef model_default_t QKV_weight_t;
    typedef model_default_t dense_weight_t;
    typedef model_default_t dense_bias_t;

    static const unsigned n_norm_weight = 128;
    static const unsigned n_norm_bias = 128;
    static const unsigned n_QKV_weight = 49152;
    static const unsigned n_dense_weight = 16384;
    static const unsigned n_dense_bias = 128;

    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef model_default_t accum_t;

    typedef model_default_t inv_sqrt_d_k_t;
    
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

struct sa_norm_config0 : nnet::batchnorm_config {
    // Internal data type definitions
    typedef model_default_t bias_t;
    typedef model_default_t scale_t;

    // Layer Sizes
    static const unsigned n_in = 256;
    static const unsigned n_filt = -1;
    
    // Resource reuse info
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned reuse_factor = 1;
    static const bool store_weights_in_bram = false;
    static const unsigned n_zeros = 0;
    // partitioning arrays cyclically to go with roll factors?
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sa_dense_config0 : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 768;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 49152;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sa_dense_config1 : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 8;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 256;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sa_dense_config2 : nnet::dense_config {
    static const unsigned n_in = 8;
    static const unsigned n_out = 256;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 256;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct sa_dense_config3 : nnet::dense_config {
    static const unsigned n_in = 256;
    static const unsigned n_out = 256;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 16384;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;
    typedef model_default_t bias_t;
    typedef model_default_t weight_t;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

struct transformer_config0 : nnet::transformer_config {
    static const unsigned n_in = N_TRANSFORMER;
    static const unsigned n_in_doubled = N_TRANSFORMER * 2;
    static const unsigned n_out = N_TRANSFORMER;
    static const unsigned io_type = nnet::io_parallel;
    static const unsigned strategy = nnet::latency;
    static const unsigned reuse_factor = 1;
    static const unsigned n_zeros = 0;
    static const unsigned n_nonzeros = 128;
    static const bool store_weights_in_bram = false;
    typedef model_default_t accum_t;

    static const unsigned n_SA_norm_weight = 128;
    static const unsigned n_SA_norm_bias = 128;
    static const unsigned n_SA_QKV_weight = 49152;
    static const unsigned n_SA_dense_weight = 16384;
    static const unsigned n_SA_dense_bias = 128;

    static const unsigned n_norm0_weight = 128;
    static const unsigned n_norm0_bias = 128;
    static const unsigned n_dense0_weight = 32768;
    static const unsigned n_norm1_weight = 256;
    static const unsigned n_norm1_bias = 256;
    static const unsigned n_dense1_weight = 32768;

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
    typedef model_default_t exp_table_t;
    typedef model_default_t inv_table_t;
    typedef model_default_t table_t;
    typedef model_default_t weight_t;
    typedef model_default_t data_T;
    typedef model_default_t res_T;
    typedef ap_uint<1> index_t;
    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};




#endif
