#define EINSUM_PIPELINE(DEPTH) {\
  if (io_type == io_parallel) {\
    if (pipeline_einsum_depth == DEPTH) {\
      #pragma HLS PIPELINE II=reuse_factor\
    } else {\
      #pragma HLS unroll \
    }\
  }\
}

type_t result[H][K][Q];
if (io_type == io_serial) {
  #pragma HLS ARRAY_PARTITION variable=result cyclic factor=cycle_factor
} else if (io_type == io_parallel) {
  #pragma HLS ARRAY_PARTITION variable=result complete
}

Einsum_H: for (unsigned hh = 0; hh < H; hh++) {
  EINSUM_PIPELINE(3);
  Einsum_K: for (unsigned kk = 0; kk < K; kk++) {
    EINSUM_PIPELINE(2);
    Einsum_Q: for (unsigned qq = 0; qq < Q; qq++) {
      EINSUM_PIPELINE(1);
      Einsum_C: for (unsigned cc = 0; cc < C; cc++) {
        EINSUM_PIPELINE(0);
        if (cc == 0) result[hh][kk][qq] = 0;
        result[hh][kk][qq] += A[qq][hh][cc] * B[kk][hh][cc];
      }
    }
  }
}