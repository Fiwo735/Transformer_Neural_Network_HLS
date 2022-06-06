#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "myproject.h"


int main(int argc, char **argv)
{

  data_t input[io_size] = {1, 2, 3, 4, 5};
  data_t output[io_size];

  myproject(input, output);

  for (unsigned i = 0; i < io_size; i++) {
    std::cout << "input[" << i << "]: " << input[i] << ", output[" << i << "]: " << output[i] << std::endl;
  }

  return 0;
}
