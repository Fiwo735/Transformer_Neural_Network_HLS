#include <iostream>

#include "myproject.h"


const static unsigned dim0 = 30;
const static unsigned dim1 = 30;
const static unsigned dim2 = 30;

void myproject(
    data_t data_in[io_size],
    data_t data_out[io_size]
) {

    data_t accum[io_size] = {0, 0, 0, 0, 0};
    data_t value0 = 2.5;
    data_t value1[dim1] = {
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5
    };
    data_t value2[dim2] = {
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5,
        1, 2, 3, 4, 5
    };

    Main_0: for (unsigned j = 0; j < io_size; j++) {
        #pragma HLS UNROLL
        Main_1: for (unsigned i = 0; i < dim0; i++) {
            #pragma HLS PIPELINE II=1
            Main_2: for (unsigned k = 0; k < dim1; k++) {
                Main_3: for (unsigned m = 0; m < dim2; m++) {
                    accum[j] += data_in[j] * value0 + value1[k] * value2[m];
                }
            }
        }
    }

    Result: for (unsigned j = 0; j < io_size; j++) {
        #pragma HLS PIPELINE II=1
        data_out[j] = accum[j];
    }

}
