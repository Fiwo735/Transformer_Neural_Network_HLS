// Example

#ifndef MY_EXAMPLE0_H
#define MY_EXAMPLE0_H

#ifndef __SYNTHESIS__
model_default_t my_example0[6];
#else
model_default_t my_example0[6] =
{
  1, 2, 3,
  4, 5, 6
};

#endif

#endif