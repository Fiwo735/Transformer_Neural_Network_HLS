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

#ifndef NNET_ACTIVATION_H_
#define NNET_ACTIVATION_H_

#include <cmath>
#include "ap_fixed.h"
#include "nnet_common.h"
#include "nnet_mult.h"

namespace nnet {

struct activ_config
{
    // IO size
    static const unsigned n_in = 10;

    // Internal info
    static const unsigned table_size = 1024;

    // Resource reuse info
    static const unsigned io_type = io_parallel;
    static const unsigned reuse_factor = 1;

    // Internal data type definitions
    typedef ap_fixed<18,8> table_t;

    template<class x_T, class y_T, class res_T>
    using product = nnet::product::mult<x_T, y_T, res_T>;
};

// *************************************************
//       LINEAR Activation -- See Issue 53
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void linear(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        res[ii] = data[ii];
    }
}



// *************************************************
//       RELU Activation
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void relu(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if (datareg > 0) res[ii] = datareg;
        else res[ii] = 0;
    }
}

template<class data_T, class res_T, int MAX_INT, typename CONFIG_T>
void relu_max(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if (datareg < 0) res[ii] = 0;
        else if (datareg > MAX_INT) res[ii] = MAX_INT;
        else res[ii] = datareg;
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void relu6(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    relu_max<data_T, res_T, 6, CONFIG_T>(data, res);
}

template<class data_T, class res_T, typename CONFIG_T>
void relu1(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    relu_max<data_T, res_T, 1, CONFIG_T>(data, res);
}

// *************************************************
//       Sigmoid Activation
// *************************************************
inline float sigmoid_fcn_float(float input) {
    return 1.0 / (1 + std::exp(-input));
}

template<typename CONFIG_T, int N_TABLE>
void init_sigmoid_table(typename CONFIG_T::table_t table_out[N_TABLE])
{
    // Default logistic sigmoid function:
    //   result = 1/(1+e^(-x))
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range -8 to +8)
        float in_val = 2*8.0*(ii-float(N_TABLE)/2.0)/float(N_TABLE);
        // Next, compute lookup table function
        typename CONFIG_T::table_t real_val = sigmoid_fcn_float(in_val);
        //std::cout << "Lookup table In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void sigmoid(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    // Initialize the lookup table
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::table_t sigmoid_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::table_t sigmoid_table[CONFIG_T::table_size];
#endif
    if (!initialized) {
        init_sigmoid_table<CONFIG_T, CONFIG_T::table_size>(sigmoid_table);
        initialized = true;
    }

    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    // Index into the lookup table based on data
    int data_round;
    int index;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        data_round = data[ii]*CONFIG_T::table_size/16;
        index = data_round + 8*CONFIG_T::table_size/16;
        if (index < 0)   index = 0;
        if (index > CONFIG_T::table_size-1) index = CONFIG_T::table_size-1;
        res[ii] = (res_T) sigmoid_table[index];
    }
}

// *************************************************
//       Sigmoid Linear Unit Activation
// *************************************************

template<class data_T, class res_T, typename CONFIG_T>
void silu(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    data_T sigmoid_result[CONFIG_T::n_in];
    sigmoid<data_T, data_T, CONFIG_T>(data, sigmoid_result);

    for (int ii = 0; ii < CONFIG_T::n_in; ii++) {
        // if (CONFIG_T::io_type == io_serial){
        //     #pragma HLS PIPELINE
        // } //TODO: PIPELINE or UNROLL?
        res[ii] = (res_T) CONFIG_T::template product<data_T, data_T, data_T>::product(data[ii], sigmoid_result[ii]);
    }
}

// *************************************************
//       Softmax Activation
// *************************************************

enum class softmax_implementation {latency=0, legacy=1, stable=2};

inline float exp_fcn_float(float input) {
    return std::exp(input);
}

inline float log_fcn_float(float input) {
    return std::log(input);
}

template<class data_T, typename CONFIG_T>
inline float softmax_real_val_from_idx(unsigned i){
    // std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
    // Treat the index as the top N bits
    static constexpr int N = ceillog2(CONFIG_T::table_size); // number of address bits for table
    data_T x(0);
    x(x.width-1, x.width-N) = i;
    // fout << "N: " << N << " x.width: " << x.width << " i: " << i << " x: " << x << "\n";
    // fout.close(); //TODO removes
    return (float) x;
}

template<class data_T, typename CONFIG_T>
inline float softmax_real_val_from_idx_pos(unsigned i){
    // std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
    // Treat the index as the top N bits
    static constexpr int N = ceillog2(CONFIG_T::table_size); // number of address bits for table
    data_T x(0);
    x(x.width-2, x.width-N-1) = i;
    // fout << "N: " << N << " x.width: " << x.width << " i: " << i << " x: " << x << "\n";
    // fout.close(); //TODO removes
    return (float) x;
}

template<class data_T, typename CONFIG_T>
inline unsigned softmax_idx_from_real_val(data_T x){
    // Slice the top N bits to get an index into the table
    static constexpr int N = ceillog2(CONFIG_T::table_size); // number of address bits for table
    ap_uint<N> y = x(x.width-1, x.width-N); // slice the top N bits of input
    return (unsigned) y(N-1, 0);
}

template<class data_T, typename CONFIG_T>
inline unsigned softmax_idx_from_real_val_pos(data_T x){
    // Slice the top N bits to get an index into the table
    static constexpr int N = ceillog2(CONFIG_T::table_size); // number of address bits for table
    ap_uint<N> y = x(x.width-2, x.width-N-1); // slice the top N bits of input
    return (unsigned) y(N-1, 0);
}

template<class data_T, typename CONFIG_T>
void init_exp_table(typename CONFIG_T::exp_table_t table_out[CONFIG_T::table_size]){
    // std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
    // The template data_T is the data type used to address the table
    for(unsigned i = 0; i < CONFIG_T::table_size; i++){
        // Slicing bits for address is going to round towards 0, so take the central value
        float x = softmax_real_val_from_idx<data_T, CONFIG_T>(i);
        typename CONFIG_T::exp_table_t exp_x = exp_fcn_float(x);
        table_out[i] = exp_x;
        // fout << "x: " << x << " exp_fcn_float(x): " << exp_fcn_float(x) << " exp_x: " << exp_x << " table_out[i]: " << table_out[i] << "\n";
    }
    // fout.close(); //TODO removes
}

template<class data_T, typename CONFIG_T>
void init_log_table(typename CONFIG_T::log_table_t table_out[CONFIG_T::table_size]){
    // std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
    // The template data_T is the data type used to address the table
    for(unsigned i = 0; i < CONFIG_T::table_size; i++){
        // Slicing bits for address is going to round towards 0, so take the central value
        float x = softmax_real_val_from_idx_pos<data_T, CONFIG_T>(i);
        // float x = (float) i;
        // std::cout << "i: " << i << " x: " << x << "\n";
        // typename CONFIG_T::log_table_t log_x = log_fcn_float(x);
        typename CONFIG_T::log_table_t log_x = std::log(x);
        table_out[i] = log_x;
        // table_out[i] = log(i);
        // std::cout << " log_fcn_float(x): " << log_fcn_float(x) << " log_x: " << log_x << " table_out[i]: " << table_out[i] << std::endl;
        // fout << "x: " << x << " log_fcn_float(x): " << log_fcn_float(x) << " log_x: " << log_x << " table_out[i]: " << table_out[i] << "\n";
    }
    // fout.close(); //TODO removes
}

template<class data_T, typename CONFIG_T>
void init_invert_table(typename CONFIG_T::inv_table_t table_out[CONFIG_T::table_size]){
    // std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
    // The template data_T is the data type used to address the table
    for(unsigned i = 0; i < CONFIG_T::table_size; i++){
        float x = softmax_real_val_from_idx<data_T, CONFIG_T>(i);
        typename CONFIG_T::inv_table_t inv_x = 1 / x;
        table_out[i] = inv_x;
        // fout << "i: " << i << " softmax_real_val_from_idx(i): " << x << " inv_x: " << inv_x << " table_out[i]: " << table_out[i] << "\n";
    }
    // fout.close(); //TODO removes
}

template <class data_T, class res_T, typename CONFIG_T>
void softmax_latency(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in]){
    std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
    #pragma HLS pipeline

    // Initialize the lookup tables
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::exp_table_t exp_table[CONFIG_T::table_size];
    typename CONFIG_T::inv_table_t invert_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::exp_table_t exp_table[CONFIG_T::table_size];
    static typename CONFIG_T::inv_table_t invert_table[CONFIG_T::table_size];

#endif
    if (!initialized) {
        // Note we are exponentiating the inputs, which have type data_T
        init_exp_table<data_T, CONFIG_T>(exp_table);
        // Note we are inverting the exponentials, which have type exp_table_t
        init_invert_table<typename CONFIG_T::exp_table_t, CONFIG_T>(invert_table);
        initialized = true;
    }

    nnet::print_full_result<general_table_t, CONFIG_T::table_size>("\nexp_table", exp_table, fout);
    nnet::print_full_result<general_table_t, CONFIG_T::table_size>("\ninvert_table:", invert_table, fout);
    nnet::print_full_result<data_T, CONFIG_T::n_in>("\nafter table initialization, data:", data, fout);
    // nnet::print_full_result<data_T, CONFIG_T::n_in>("after table initialization, data:", data, std::cout);

    // Calculate all the e^x's
    typename CONFIG_T::exp_table_t exp_res[CONFIG_T::n_in];
    #pragma HLS array_partition variable=exp_res complete
    typename CONFIG_T::exp_table_t exp_sum(0);
    if (CONFIG_T::n_in == 2){
        for(unsigned i = 0; i < CONFIG_T::n_in; i++){
            #pragma HLS unroll
            // softmax(a) == softmax(-a).flip() -> seems to improve stability when taking the inverse later on
            // Only works when len(data) == 2
            unsigned x = softmax_idx_from_real_val<data_T, CONFIG_T>(-data[i]);
            exp_res[CONFIG_T::n_in - i - 1] = exp_table[x];
        }
    } else{
        for(unsigned i = 0; i < CONFIG_T::n_in; i++){
            #pragma HLS unroll
            unsigned x = softmax_idx_from_real_val<data_T, CONFIG_T>(data[i]);
            exp_res[i] = exp_table[x];
        }
    }

    nnet::print_full_result<general_table_t, CONFIG_T::n_in>("exp_res", exp_res, fout);
    // nnet::print_full_result<general_table_t, CONFIG_T::n_in>("exp_res", exp_res, std::cout);

    // Explicitly sum the results with an adder tree.
    // Rounding & Saturation mode, which improve accuracy, prevent Vivado from expression balancing
    Op_add<typename CONFIG_T::exp_table_t> op_add;
    exp_sum = reduce<typename CONFIG_T::exp_table_t, CONFIG_T::n_in, Op_add<typename CONFIG_T::exp_table_t>>(exp_res, op_add);

    fout << "exp_sum: " << exp_sum << "\n";
    // std::cout << "exp_sum: " << exp_sum << "\n";

    typename CONFIG_T::inv_table_t inv_exp_sum = invert_table[softmax_idx_from_real_val<typename CONFIG_T::exp_table_t,CONFIG_T>(exp_sum)];

    fout << "inv_exp_sum: " << inv_exp_sum << "\n";
    // std::cout << "inv_exp_sum: " << inv_exp_sum << "\n";

    for(unsigned i = 0; i < CONFIG_T::n_in; i++){
        #pragma HLS unroll
        res[i] = exp_res[i] * inv_exp_sum;
    }

    nnet::print_full_result<res_T, CONFIG_T::n_in>("res", res, fout);
    // nnet::print_full_result<res_T, CONFIG_T::n_in>("res", res, std::cout);

    // fout.close(); //TODO removes
}

template <class data_T, class res_T, typename CONFIG_T>
void log_softmax_latency(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in], typename CONFIG_T::log_table_t log_table[CONFIG_T::table_size]){
// void log_softmax_latency(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in]){
    // std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
    #pragma HLS pipeline

    // Initialize the lookup tables
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::exp_table_t exp_table[CONFIG_T::table_size];
    // typename CONFIG_T::inv_table_t invert_table[CONFIG_T::table_size];
    // typename CONFIG_T::log_table_t log_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::exp_table_t exp_table[CONFIG_T::table_size];
    // static typename CONFIG_T::inv_table_t invert_table[CONFIG_T::table_size];
    // static typename CONFIG_T::log_table_t log_table[CONFIG_T::table_size];
#endif

    #pragma HLS RESOURCE variable=log_table core=RAM_2P

    if (!initialized) {
        // Note we are exponentiating the inputs, which have type data_T
        init_exp_table<data_T, CONFIG_T>(exp_table);
        // Note we are inverting the exponentials, which have type exp_table_t
        // init_invert_table<typename CONFIG_T::exp_table_t, CONFIG_T>(invert_table);
        // init_log_table<data_T, CONFIG_T>(log_table);
        initialized = true;
    }

    // nnet::print_full_result<general_table_t, CONFIG_T::table_size>("exp_table", exp_table, fout);
    // nnet::print_full_result<general_table_t, CONFIG_T::table_size>("log_table", log_table, fout);
    // nnet::print_full_result<general_table_t, CONFIG_T::table_size>("invert_table:", invert_table, fout);
    // nnet::print_full_result<data_T, CONFIG_T::n_in>("after table initialization, data:", data, std::cout);

    // Calculate all the e^x's
    typename CONFIG_T::exp_table_t exp_res[CONFIG_T::n_in];
    #pragma HLS array_partition variable=exp_res complete
    typename CONFIG_T::exp_table_t exp_sum(0);
    for(unsigned i = 0; i < CONFIG_T::n_in; i++){
        #pragma HLS unroll
        unsigned x = softmax_idx_from_real_val<data_T, CONFIG_T>(data[i]);
        exp_res[i] = exp_table[x];
    }

    // nnet::print_full_result<general_table_t, CONFIG_T::n_in>("exp_res", exp_res, std::cout);

    // Explicitly sum the results with an adder tree.
    // Rounding & Saturation mode, which improve accuracy, prevent Vivado from expression balancing
    Op_add<typename CONFIG_T::exp_table_t> op_add;
    exp_sum = reduce<typename CONFIG_T::exp_table_t, CONFIG_T::n_in, Op_add<typename CONFIG_T::exp_table_t>>(exp_res, op_add);

    // std::cout << "exp_sum: " << exp_sum << "\n";

    // typename CONFIG_T::inv_table_t inv_exp_sum = invert_table[softmax_idx_from_real_val<typename CONFIG_T::exp_table_t,CONFIG_T>(exp_sum)];
    unsigned xx = softmax_idx_from_real_val_pos<typename CONFIG_T::exp_table_t,CONFIG_T>(exp_sum) * 2; // TODO fix idx scaling from manually generated table
    // std::cout << "xx: " << xx << "\n";
    // unsigned xx = (unsigned) exp_sum;
    typename CONFIG_T::log_table_t log_sum = log_table[xx];
    // fout << "inv_exp_sum: " << inv_exp_sum << "\n";
    // std::cout << "log_sum: " << log_sum << "\n";

    // Op_max<data_T> op_max;
    // data_T x_max = reduce<data_T, CONFIG_T::n_in, Op_max<data_T>>(data, op_max);

    for(unsigned i = 0; i < CONFIG_T::n_in; i++){
        #pragma HLS unroll
        res[i] = data[i] - log_sum;
        // res[i] = data[i] - x_max;
    }

    // nnet::print_full_result<res_T, CONFIG_T::n_in>("res", res, std::cout);

    // fout.close(); //TODO removes
}

// template <class data_T, class res_T, typename CONFIG_T>
// void log_softmax_latency(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in]){
//     // std::ofstream fout("tb_data/csim_layers.log", std::ios_base::app); //TODO remove
//     // #pragma HLS pipeline
//     //TODO: the above pragma is removed for now as it causes init_invert_table to unroll,
//     // which breaks synthesis due to 'large runtime and excessive memory usage due to increase in code size'

//     // Initialize the lookup tables
// #ifdef __HLS_SYN__
//     bool initialized = false;
//     typename CONFIG_T::log_table_t log_table[CONFIG_T::table_size];
// #else
//     static bool initialized = false;
//     static typename CONFIG_T::log_table_t log_table[CONFIG_T::table_size];
// #endif

//     if (!initialized) {
//         init_log_table<data_T, CONFIG_T>(log_table);
//         initialized = true;
//     }

//     // nnet::print_full_result<typename CONFIG_T::log_table_t, CONFIG_T::table_size>("log_table", log_table, fout);

//     data_T softmax_res[CONFIG_T::n_in];
//     softmax_latency<data_T, data_T, CONFIG_T>(data, softmax_res);

//     // nnet::print_full_result<data_T, CONFIG_T::n_in>("softmax_latency", softmax_res, fout);

//     for(unsigned i = 0; i < CONFIG_T::n_in; i++){
//         #pragma HLS unroll
//         unsigned x = softmax_idx_from_real_val<data_T, CONFIG_T>(softmax_res[i]);
//         res[i] = log_table[x];
//     }

//     // fout.close(); //TODO removes
// }

template <class data_T, class res_T, typename CONFIG_T>
void softmax_stable(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in]){
    #pragma HLS pipeline

    // Initialize the lookup tables
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::exp_table_t exp_table[CONFIG_T::table_size];
    typename CONFIG_T::inv_table_t invert_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::exp_table_t exp_table[CONFIG_T::table_size];
    static typename CONFIG_T::inv_table_t invert_table[CONFIG_T::table_size];

#endif
    if (!initialized) {
        // Note we are exponentiating the inputs, which have type data_T
        init_exp_table<data_T, CONFIG_T>(exp_table);
        // Note we are inverting the exponentials, which have type exp_table_t
        init_invert_table<typename CONFIG_T::exp_table_t, CONFIG_T>(invert_table);
        initialized = true;
    }

    // Find the max and compute all delta(x_i, x_max)
    Op_max<data_T> op_max;
    data_T x_max = reduce<data_T, CONFIG_T::n_in, Op_max<data_T>>(data, op_max);

    // For the diffs, use the same type as the input but force rounding and saturation
    ap_fixed<data_T::width, data_T::iwidth,AP_RND,AP_SAT> d_xi_xmax[CONFIG_T::n_in];
    for(unsigned i = 0; i < CONFIG_T::n_in; i++){
        #pragma HLS unroll
        d_xi_xmax[i] = data[i] - x_max;
    }

    // Calculate all the e^x's
    typename CONFIG_T::exp_table_t exp_res[CONFIG_T::n_in];
    #pragma HLS array_partition variable=exp_res complete
    typename CONFIG_T::exp_table_t exp_sum(0);
    for(unsigned i = 0; i < CONFIG_T::n_in; i++){
        #pragma HLS unroll
        unsigned x = softmax_idx_from_real_val<data_T, CONFIG_T>(d_xi_xmax[i]);
        exp_res[i] = exp_table[x];
    }

    // Explicitly sum the results with an adder tree.
    // Rounding & Saturation mode, which improve accuracy, prevent Vivado from expression balancing
    Op_add<typename CONFIG_T::exp_table_t> op_add;
    exp_sum = reduce<typename CONFIG_T::exp_table_t, CONFIG_T::n_in, Op_add<typename CONFIG_T::exp_table_t>>(exp_res, op_add);

    typename CONFIG_T::inv_table_t inv_exp_sum = invert_table[softmax_idx_from_real_val<typename CONFIG_T::exp_table_t,CONFIG_T>(exp_sum)];
    for(unsigned i = 0; i < CONFIG_T::n_in; i++){
        #pragma HLS unroll
        res[i] = exp_res[i] * inv_exp_sum;
    }
}

template<typename CONFIG_T, int N_TABLE>
void init_exp_table_legacy(typename CONFIG_T::table_t table_out[N_TABLE])
{
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range -8 to +8)
        float in_val = 2*8.0*(ii-float(N_TABLE)/2.0)/float(N_TABLE);
        // Next, compute lookup table function
        typename CONFIG_T::table_t real_val = exp_fcn_float(in_val);
        //std::cout << "Lookup table In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<typename CONFIG_T, int N_TABLE>
void init_invert_table_legacy(typename CONFIG_T::table_t table_out[N_TABLE])
{
    // Inversion function:
    //   result = 1/x
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range 0 to +64)
        float in_val = 64.0*ii/float(N_TABLE);
        // Next, compute lookup table function
        if (in_val > 0.0) table_out[ii] = 1.0/in_val;
        else table_out[ii] = 0.0;
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void softmax_legacy(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    // Initialize the lookup table
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::table_t exp_table[CONFIG_T::table_size];
    typename CONFIG_T::table_t invert_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::table_t exp_table[CONFIG_T::table_size];
    static typename CONFIG_T::table_t invert_table[CONFIG_T::table_size];
#endif
    if (!initialized) {
        init_exp_table_legacy<CONFIG_T, CONFIG_T::table_size>(exp_table);
        init_invert_table_legacy<CONFIG_T, CONFIG_T::table_size>(invert_table);
        initialized = true;
    }

    if (CONFIG_T::io_type == io_parallel){
        // Note: This is going to be a resource hog to run with pipeline, but hey, whatever
        #pragma HLS PIPELINE
    }

    // Index into the lookup table based on data for exponentials
    typename CONFIG_T::table_t exp_res[CONFIG_T::n_in];// different, independent, fixed point precision
    typename CONFIG_T::table_t exp_diff_res;// different, independent, fixed point precision
    data_T data_cache[CONFIG_T::n_in];
    int data_round;
    int index;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        data_cache[ii] = data[ii];
        exp_res[ii] = 0;
    }

    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial) {
            #pragma HLS PIPELINE
        }
        for (int jj=0; jj<CONFIG_T::n_in; jj++) {
            if (ii==jj) exp_diff_res = 1;
            else {
                data_round = (data_cache[jj]-data_cache[ii])*CONFIG_T::table_size/16;
                index = data_round + 8*CONFIG_T::table_size/16;
                if (index < 0)   index = 0;
                if (index > CONFIG_T::table_size-1) index = CONFIG_T::table_size-1;
                exp_diff_res = exp_table[index];
            }
            exp_res[ii] += exp_diff_res;
        }
    }

    //Second loop to invert
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        int exp_res_index = exp_res[ii]*CONFIG_T::table_size/64;
        if (exp_res_index < 0)   exp_res_index = 0;
        if (exp_res_index > CONFIG_T::table_size-1) exp_res_index = CONFIG_T::table_size-1;
        //typename CONFIG_T::table_t exp_res_invert = invert_table[exp_res_index];
        res[ii] = (res_T) invert_table[exp_res_index];
    }

}

template<class data_T, class res_T, typename CONFIG_T>
void softmax(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in]){
    #pragma HLS inline
    switch(CONFIG_T::implementation){
    case softmax_implementation::latency:
        softmax_latency<data_T, res_T, CONFIG_T>(data, res);
        break;
    case softmax_implementation::stable:
        softmax_stable<data_T, res_T, CONFIG_T>(data, res);
        break;
    case softmax_implementation::legacy:
        softmax_legacy<data_T, res_T, CONFIG_T>(data, res);
        break;
    }
}

// *************************************************
//       TanH Activation
// *************************************************
template<typename CONFIG_T, int N_TABLE>
void init_tanh_table(typename CONFIG_T::table_t table_out[N_TABLE])
{
    // Implement tanh lookup
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range -4 to +4)
        float in_val = 2*4.0*(ii-float(N_TABLE)/2.0)/float(N_TABLE);
        // Next, compute lookup table function
        typename CONFIG_T::table_t real_val = tanh(in_val);
        //std::cout << "Tanh:  Lookup table Index: " <<  ii<< " In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}


template<class data_T, class res_T, typename CONFIG_T>
void tanh(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    // Initialize the lookup table
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::table_t tanh_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::table_t tanh_table[CONFIG_T::table_size];
#endif
    if (!initialized) {
        init_tanh_table<CONFIG_T, CONFIG_T::table_size>(tanh_table);
        initialized = true;
    }

    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    // Index into the lookup table based on data
    int data_round;
    int index;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        data_round = data[ii]*CONFIG_T::table_size/8;
        index = data_round + 4*CONFIG_T::table_size/8;
        //std::cout << "Input: "  << data[ii] << " Round: " << data_round << " Index: " << index << std::endl;
        if (index < 0)   index = 0;
        if (index > CONFIG_T::table_size-1) index = CONFIG_T::table_size-1;
        res[ii] = (res_T) tanh_table[index];
    }
}

// *************************************************
//       Hard sigmoid Activation
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void hard_sigmoid(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    data_T slope = (data_T) 0.2;
    data_T shift = (data_T) 0.5;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = slope * data[ii] + shift;
        if (datareg > 1) datareg = 1;
        else if (datareg < 0) datareg = 0;
        res[ii] = datareg;
    }
}

// *************************************************
//       Leaky RELU Activation
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void leaky_relu(data_T data[CONFIG_T::n_in], data_T alpha, res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if (datareg > 0) res[ii] = datareg;
        else res[ii] = alpha * datareg;
    }
}

// *************************************************
//       Thresholded RELU Activation
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void thresholded_relu(data_T data[CONFIG_T::n_in], data_T theta, res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if (datareg > theta) res[ii] = datareg;
        else res[ii] = 0;
    }
}

// *************************************************
//       Softplus Activation
// *************************************************
inline float softplus_fcn_float(float input) {
    return std::log(std::exp(input) + 1.);
}

template<typename CONFIG_T, int N_TABLE>
void init_softplus_table(typename CONFIG_T::table_t table_out[N_TABLE])
{
    // Default softplus function:
    //   result = log(exp(x) + 1)
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range -8 to +8)
        float in_val = 2*8.0*(ii-float(N_TABLE)/2.0)/float(N_TABLE);
        // Next, compute lookup table function
        typename CONFIG_T::table_t real_val = softplus_fcn_float(in_val);
        //std::cout << "Lookup table In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void softplus(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    // Initialize the lookup table
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::table_t softplus_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::table_t softplus_table[CONFIG_T::table_size];
#endif
    if (!initialized) {
        init_softplus_table<CONFIG_T, CONFIG_T::table_size>(softplus_table);
        initialized = true;
    }

    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    // Index into the lookup table based on data
    int data_round;
    int index;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        data_round = data[ii]*CONFIG_T::table_size/16;
        index = data_round + 8*CONFIG_T::table_size/16;
        if (index < 0)   index = 0;
        if (index > CONFIG_T::table_size-1) index = CONFIG_T::table_size-1;
        res[ii] = (res_T) softplus_table[index];
    }
}

// *************************************************
//       Softsign Activation
// *************************************************
inline float softsign_fcn_float(float input) {
    return input / (std::abs(input) + 1.);
}

template<typename CONFIG_T, int N_TABLE>
void init_softsign_table(typename CONFIG_T::table_t table_out[N_TABLE])
{
    // Default softsign function:
    //   result = x / (abs(x) + 1)
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range -8 to +8)
        float in_val = 2*8.0*(ii-float(N_TABLE)/2.0)/float(N_TABLE);
        // Next, compute lookup table function
        typename CONFIG_T::table_t real_val = softsign_fcn_float(in_val);
        //std::cout << "Lookup table In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void softsign(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    // Initialize the lookup table
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::table_t softsign_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::table_t softsign_table[CONFIG_T::table_size];
#endif
    if (!initialized) {
        init_softsign_table<CONFIG_T, CONFIG_T::table_size>(softsign_table);
        initialized = true;
    }

    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    // Index into the lookup table based on data
    int data_round;
    int index;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        data_round = data[ii]*CONFIG_T::table_size/16;
        index = data_round + 8*CONFIG_T::table_size/16;
        if (index < 0)   index = 0;
        if (index > CONFIG_T::table_size-1) index = CONFIG_T::table_size-1;
        res[ii] = (res_T) softsign_table[index];
    }
}

// *************************************************
//       ELU Activation
// *************************************************
inline float elu_fcn_float(float input) {
    return std::exp(input) - 1.;
}

template<typename CONFIG_T, int N_TABLE>
void init_elu_table(typename CONFIG_T::table_t table_out[N_TABLE])
{
    // Default ELU function:
    //   result = alpha * (e^(x) - 1)
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range -8 to 0)
        float in_val = -8.0*ii/float(N_TABLE);
        // Next, compute lookup table function
        typename CONFIG_T::table_t real_val = elu_fcn_float(in_val);
        //std::cout << "Lookup table In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void elu(data_T data[CONFIG_T::n_in], const res_T alpha, res_T res[CONFIG_T::n_in])
{
    // Initialize the lookup table
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::table_t elu_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::table_t elu_table[CONFIG_T::table_size];
#endif
    if (!initialized) {
        init_elu_table<CONFIG_T, CONFIG_T::table_size>(elu_table);
        initialized = true;
    }

    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    // Index into the lookup table based on data
    int index;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if (datareg >= 0) {
            res[ii] = datareg;
        } else {
            index = datareg*CONFIG_T::table_size/-8;
            if (index > CONFIG_T::table_size-1) index = CONFIG_T::table_size-1;
            res[ii] = alpha * elu_table[index];
        }
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void elu(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    elu<data_T, res_T, CONFIG_T>(data, 1.0, res);
}

// *************************************************
//       SELU Activation
// *************************************************
inline float selu_fcn_float(float input) {
    return 1.0507009873554804934193349852946 * (1.6732632423543772848170429916717 * (std::exp(input) - 1.));
}

template<typename CONFIG_T, int N_TABLE>
void init_selu_table(typename CONFIG_T::table_t table_out[N_TABLE])
{
    // Default SELU function:
    //   result = 1.05 * (1.673 * (e^(x) - 1))
    for (int ii = 0; ii < N_TABLE; ii++) {
        // First, convert from table index to X-value (signed 8-bit, range -8 to 0)
        float in_val = -8.0*ii/float(N_TABLE);
        // Next, compute lookup table function
        typename CONFIG_T::table_t real_val = selu_fcn_float(in_val);
        //std::cout << "Lookup table In Value: " << in_val << " Result: " << real_val << std::endl;
        table_out[ii] = real_val;
    }
}

template<class data_T, class res_T, typename CONFIG_T>
void selu(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    // Initialize the lookup table
#ifdef __HLS_SYN__
    bool initialized = false;
    typename CONFIG_T::table_t selu_table[CONFIG_T::table_size];
#else
    static bool initialized = false;
    static typename CONFIG_T::table_t selu_table[CONFIG_T::table_size];
#endif
    if (!initialized) {
        init_selu_table<CONFIG_T, CONFIG_T::table_size>(selu_table);
        initialized = true;
    }

    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    // Index into the lookup table based on data
    int index;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if (datareg >= 0) {
            res[ii] = res_T(1.0507009873554804934193349852946) * datareg;
        } else {
            index = datareg*CONFIG_T::table_size/-8;
            if (index > CONFIG_T::table_size-1) index = CONFIG_T::table_size-1;
            res[ii] = selu_table[index];
        }
    }
}

// *************************************************
//       PReLU Activation
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void prelu(data_T data[CONFIG_T::n_in], data_T alpha[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if (datareg > 0) res[ii] = datareg;
        else res[ii] = alpha[ii] * datareg;
    }
}

// *************************************************
//       Binary TanH Activation
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void binary_tanh(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{
    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }

    data_T datareg;
    res_T cache;
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial){
            #pragma HLS PIPELINE
        }
        datareg = data[ii];
        if( datareg > 0 ) cache = 1;
        else cache = -1;

        res[ii] = (res_T) cache;
    }
}

// *************************************************
//       Ternary TanH Activation
// *************************************************
template<class data_T, class res_T, typename CONFIG_T>
void ternary_tanh(data_T data[CONFIG_T::n_in], res_T res[CONFIG_T::n_in])
{

    if (CONFIG_T::io_type == io_parallel){
        #pragma HLS PIPELINE
    }
  
    data_T datareg;   
    res_T cache; 
    for (int ii=0; ii<CONFIG_T::n_in; ii++) {
        if (CONFIG_T::io_type == io_serial) {
            #pragma HLS PIPELINE
        }
        datareg = 2*data[ii];
        if( datareg > 1 ) cache = 1;
        else if( datareg > -1 && datareg <= 1) cache=0;
        else cache = -1;
  
        res[ii] = (res_T) cache;
    }
 
}

}

#endif
