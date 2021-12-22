#include <math.h>
#include <ap_fixed.h>
#include <iostream>
#include "attention.h"
#define WORDS 10
#define EMBEDDING 512
#define WEIGHTS_CHANNEL 64
#define HEADS 4
typedef ap_fixed<16, 4,AP_RND,AP_SAT> DataTypeATT;
typedef ap_fixed<16, 4, AP_RND,AP_SAT> DataTypeTR_RND;
typedef ap_int<8> datatypeint;
using namespace std;
// In this function, I assume the maximum length of the sentence is with 10 words, THis is a multi-head self-attention function.
void attention(
  DataTypeTR_RND INPUT6[WORDS*EMBEDDING],
  DataTypeATT Z[WORDS*EMBEDDING],
  DataTypeATT Keys[WORDS*WEIGHTS_CHANNEL],
  DataTypeATT Values[WORDS*WEIGHTS_CHANNEL],
  DataTypeATT Wq[HEADS*EMBEDDING*WEIGHTS_CHANNEL],
  DataTypeATT Wk[HEADS*EMBEDDING*WEIGHTS_CHANNEL],
  DataTypeATT Wv[HEADS*EMBEDDING*WEIGHTS_CHANNEL],
  DataTypeATT Wz[HEADS*WEIGHTS_CHANNEL*EMBEDDING]
){
  #pragma HLS INTERFACE s_axilite port=return bundle=control
  */
  DataTypeATT sum[WORDS][WEIGHTS_CHANNEL*HEADS];
  //#pragma HLS ARRAY_PARTITION variable=sum cyclic factor=64 dim=2
  DataTypeATT Q[WORDS][WEIGHTS_CHANNEL];
  //#pragma HLS ARRAY_PARTITION variable=Q complete dim=2
  DataTypeATT K[WORDS][WEIGHTS_CHANNEL];
  //#pragma HLS ARRAY_PARTITION variable=K complete dim=2
  DataTypeATT V[WORDS][WEIGHTS_CHANNEL];
  //#pragma HLS ARRAY_PARTITION variable=V complete dim=2
  DataTypeATT IN[EMBEDDING];
  //#pragma HLS ARRAY_PARTITION variable=IN complete dim=1
  DataTypeATT WQ[EMBEDDING][WEIGHTS_CHANNEL];
  //#pragma HLS ARRAY_PARTITION variable=WQ complete dim=1
  DataTypeATT WK[EMBEDDING][WEIGHTS_CHANNEL];
  //#pragma HLS ARRAY_PARTITION variable=WK complete dim=1
  DataTypeATT WV[EMBEDDING][WEIGHTS_CHANNEL];
  //#pragma HLS ARRAY_PARTITION variable=WV complete dim=1
  DataTypeATT WZ[HEADS*WEIGHTS_CHANNEL][EMBEDDING];
  //#pragma HLS ARRAY_PARTITION variable=WZ complete dim=1
  DataTypeATT Z_local[EMBEDDING];
  //#pragma HLS ARRAY_PARTITION variable=Z_local complete dim=1
  cout << "inside the function" << endl;
  // 4 heads self-attention
  for(int c=0; c<HEADS; c++){
      
    //read part of weights on chip
    for(int i=0; i<EMBEDDING; i++){
      for(int j=0; j<WEIGHTS_CHANNEL; j++){
        //#pragma HLS pipeline
        //#pragma HLS unroll factor=2
        WQ[i][j] = Wq[c*EMBEDDING*WEIGHTS_CHANNEL+i*WEIGHTS_CHANNEL+j];
      }
    }

    for(int i=0; i<EMBEDDING; i++){
      for(int j=0; j<WEIGHTS_CHANNEL; j++){
        #pragma HLS pipeline
        //#pragma HLS unroll factor=2
        WK[i][j] = Wq[c*EMBEDDING*WEIGHTS_CHANNEL+i*WEIGHTS_CHANNEL+j];
      }
    }

    for(int i=0; i<EMBEDDING; i++){
      //#pragma HLS unroll factor=2
      for(int j=0; j<WEIGHTS_CHANNEL; j++){
        //#pragma HLS unroll factor=2
        #pragma HLS pipeline
        WV[i][j] = Wq[c*EMBEDDING*WEIGHTS_CHANNEL+i*WEIGHTS_CHANNEL+j];
      }
    }

    cout<<"after initialize the weights arrays" << endl;
    
    //using trained weights Wq, Wk, Wv to calculate Quries, Keys, Values
    for(int m=0; m<WORDS; m++){

      //#pragma HLS unroll factor=2
      for(int i=0; i<EMBEDDING; i++){
        //#pragma HLS unroll factor=2

        #pragma HLS pipeline
        IN[i] = INPUT6[m*EMBEDDING+i];
      }

      for(int j=0; j<WEIGHTS_CHANNEL; j++){
        //#pragma HLS unroll factor=2
        DataTypeATT Q_sum = 0;
        for(int i=0; i<EMBEDDING; i++){
          //#pragma HLS unroll factor=2
          #pragma HLS pipeline II=3
          Q_sum += IN[i] * WQ[i][j];
        }
        Q[m][j] = Q_sum;
      }
        
      //cout<<"test" << endl;
      for(int j=0; j<WEIGHTS_CHANNEL; j++){
        DataTypeATT K_sum = 0;
        for(int i=0; i<EMBEDDING; i++){
          K_sum += IN[i] * WK[i][j];
          //#pragma HLS unroll factor=2
          #pragma HLS pipeline II=3
        }
        K[m][j] = K_sum;
      }

      for(int j=0; j<WEIGHTS_CHANNEL; j++){
        DataTypeATT V_sum = 0;
        for(int i=0; i<EMBEDDING; i++){
          //#pragma HLS unroll factor=2
          #pragma HLS pipeline II=3
          V_sum += IN[i] * WV[i][j];
        }
        V[m][j] = V_sum;
      }
    }
    //using Quries and Keys to calculate Score
    DataTypeATT Score[WORDS][WORDS];
    //#pragma HLS ARRAY_PARTITION variable=Score complete dim=2
    for(int i=0; i<WORDS; i++){
      //#pragma HLS unroll factor=2

      for(int j=0; j<WORDS; j++){
        //cout<<"test2" << endl;
        DataTypeATT score_sum = 0;
        for(int m=0; m<WEIGHTS_CHANNEL; m++){
          //#pragma HLS unroll factor=2
          #pragma HLS pipeline
          score_sum += (Q[j][m] * K[j][m]) >> 3;
        }
        Score[i][j] = score_sum;
      }
    }
    //calculate the softmax
    DataTypeATT Score_exp_sum[WORDS];
    //#pragma HLS ARRAY_PARTITION variable=Score_exp_sum complete dim=0
    for(int i=0; i<WORDS; i++){
      //#pragma HLS unroll factor=2
      //cout<<"test3" << endl;
      float exp_sum = 0;
      for(int j=0; j<WORDS; j++){
        //#pragma HLS unroll factor=2
        #pragma HLS pipeline
        exp_sum += exp(float(Score[i][j]));
      }
      Score_exp_sum[i] = exp_sum;
    }
    for(int i=0; i<WORDS; i++){
      //#pragma HLS unroll factor=2
      for(int j=0; j<WORDS; j++){
        //#pragma HLS unroll factor=2
        #pragma HLS pipeline
        Score[i][j] = exp(float(Score[i][j]))/float(Score_exp_sum[j]);
      }
    }
    //softmax multiply Values
    for(int i=0; i<WORDS; i++){
      //#pragma HLS unroll factor=2
      for(int j=0; j<WEIGHTS_CHANNEL; j++){
        //cout<<"test4" << endl;
        DataTypeATT tmp = 0;
        for(int m=0; m<WORDS; m++){
          //#pragma HLS unroll factor=2

          #pragma HLS pipeline
          tmp += Score[m][j] * V[m][j];
        }
        sum[i][WEIGHTS_CHANNEL*c + j] = tmp;
      }
    }
  }

  for(int m=0; m<WORDS; m++){
    //#pragma HLS unroll factor=2
    //write K, V back to the memory, they will be used from the decoder side
    for(int j=0; j<WEIGHTS_CHANNEL; j++){
      //#pragma HLS unroll factor=2
      #pragma HLS pipeline
      Keys[m*WEIGHTS_CHANNEL+j] = K[m][j];
    }
    for(int j=0; j<WEIGHTS_CHANNEL; j++){
      #pragma HLS pipeline
      Values[m*WEIGHTS_CHANNEL+j] = V[m][j];
    }
  }

  //The final multiplication to calculate the final output Z
  for(int i=0; i<WORDS; i++){
  //#pragma HLS unroll factor=2
    for(int j=0; j<EMBEDDING; j++){
      //
      for(int m=0; m<WEIGHTS_CHANNEL*HEADS; m++){
        #pragma HLS pipeline
        //#pragma HLS unroll factor=2
        WZ[m][j] = Wz[j*WEIGHTS_CHANNEL*HEADS+m];
      }
    }
    for(int j=0; j<EMBEDDING; j++){
      DataTypeATT Z_sum = 0;
      for(int m=0; m<WEIGHTS_CHANNEL*HEADS; m++){
        Z_sum += sum[i][m] * WZ[m][j];
        #pragma HLS pipeline
      }
      Z_local[j] = Z_sum;
    }
    for(int j=0; j<EMBEDDING; j++){

      Z[i*EMBEDDING+j] = Z_local[j];
    }
  }
}