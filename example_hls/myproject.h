#ifndef MYPROJECT_H_
#define MYPROJECT_H_

#include "ap_fixed.h"

const static unsigned io_size = 5;
typedef ap_fixed<30,15> data_t;

void myproject(
    data_t data_in[io_size],
    data_t data_out[io_size]
);

#endif
