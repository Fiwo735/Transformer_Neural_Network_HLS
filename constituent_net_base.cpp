#define L 30
#define N 16
#define INPUT_SIZE L*N
#define TRANSFORMER_SIZE (L+1)*N

#pragma hls_design top
void constituent_net_base(
    input_t data_in[INPUT_SIZE], // TODO: parametrize input dimensions
    result_t data_out[]
){

    // 1   input embedding
    input_t embedded_input[TRANSFORMER_SIZE];
    nnet::dense<input_t, input_t, CONFIG_T>(data_in, embedded_input, weights_emb, biases_emb);

    // 2   class token
    Class_token: for (int itoken = INPUT_SIZE; itoken < TRANSFORMER_SIZE; itoken++) {
        embedded_input[itoken] = class_token[itoken - INPUT_SIZE];
    }

    // 3.1 jet transformer
    input_t transformer_0_out[TRANSFORMER_SIZE];
    nnet::transformer<input_t, input_t, CONFIG_T>(embedded_input, transformer_0_out, weights_trans_0, biases_trans_0);

    // 3.2 jet transformer
    input_t transformer_1_out[TRANSFORMER_SIZE];
    nnet::transformer<input_t, input_t, CONFIG_T>(transformer_0_out, transformer_1_out, weights_trans_1, biases_trans_1);

    // 3.3 jet transformer
    input_t transformer_2_out[TRANSFORMER_SIZE];
    nnet::transformer<input_t, input_t, CONFIG_T>(transformer_1_out, transformer_2_out, weights_trans_2, biases_trans_2);

    // 4   MLP = log_softmax


}