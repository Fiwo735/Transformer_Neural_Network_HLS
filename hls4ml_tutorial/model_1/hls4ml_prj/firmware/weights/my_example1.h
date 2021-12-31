// Example

#ifndef MY_EXAMPLE1_H
#define MY_EXAMPLE1_H

#ifndef __SYNTHESIS__
model_default_t my_example1[6];
#else
model_default_t my_example1[6] =
{
  7, 8,
  9, 1,
  2, 3
};

#endif

#endif