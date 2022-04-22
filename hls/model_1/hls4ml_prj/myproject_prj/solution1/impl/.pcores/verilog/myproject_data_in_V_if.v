// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1ns/1ps

module myproject_data_in_V_if (
    // system singals
    input  wire        clk,
    input  wire        reset,
    // user signals
    input  wire [3:0]  data_in_V_address0,
    input  wire        data_in_V_ce0,
    output wire [34:0] data_in_V_q0,
    input  wire [3:0]  data_in_V_address1,
    input  wire        data_in_V_ce1,
    output wire [34:0] data_in_V_q1,
    // bus signals
    output wire        Clk_A,
    output wire        Rst_A,
    output wire        EN_A,
    output wire [7:0]  WEN_A,
    output wire [31:0] Addr_A,
    output wire [63:0] Dout_A,
    input  wire [63:0] Din_A,
    output wire        Clk_B,
    output wire        Rst_B,
    output wire        EN_B,
    output wire [7:0]  WEN_B,
    output wire [31:0] Addr_B,
    output wire [63:0] Dout_B,
    input  wire [63:0] Din_B
);
//------------------------Body---------------------------
assign Clk_A        = clk;
assign Rst_A        = reset;
assign EN_A         = data_in_V_ce0;
assign Addr_A       = {data_in_V_address0, 3'b0};
assign WEN_A        = 8'b0;
assign Dout_A       = 64'b0;
assign data_in_V_q0 = Din_A[34:0];
assign Clk_B        = clk;
assign Rst_B        = reset;
assign EN_B         = data_in_V_ce1;
assign Addr_B       = {data_in_V_address1, 3'b0};
assign data_in_V_q1 = Din_B[34:0];

endmodule
