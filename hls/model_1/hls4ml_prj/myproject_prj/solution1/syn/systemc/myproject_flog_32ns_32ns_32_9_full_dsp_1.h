// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __myproject_flog_32ns_32ns_32_9_full_dsp_1__HH__
#define __myproject_flog_32ns_32ns_32_9_full_dsp_1__HH__
#include "ACMP_flog.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int din1_WIDTH,
    int dout_WIDTH>
SC_MODULE(myproject_flog_32ns_32ns_32_9_full_dsp_1) {
    sc_core::sc_in_clk clk;
    sc_core::sc_in<sc_dt::sc_logic> reset;
    sc_core::sc_in<sc_dt::sc_logic> ce;
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_in< sc_dt::sc_lv<din1_WIDTH> >   din1;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_flog<ID, 9, din0_WIDTH, din1_WIDTH, dout_WIDTH> ACMP_flog_U;

    SC_CTOR(myproject_flog_32ns_32ns_32_9_full_dsp_1):  ACMP_flog_U ("ACMP_flog_U") {
        ACMP_flog_U.clk(clk);
        ACMP_flog_U.reset(reset);
        ACMP_flog_U.ce(ce);
        ACMP_flog_U.din0(din0);
        ACMP_flog_U.din1(din1);
        ACMP_flog_U.dout(dout);

    }

};

#endif //
