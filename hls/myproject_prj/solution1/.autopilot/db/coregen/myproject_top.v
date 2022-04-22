// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
`timescale 1 ns / 1 ps
module myproject_top (
data_in_V_Clk_A,
data_in_V_Rst_A,
data_in_V_EN_A,
data_in_V_WEN_A,
data_in_V_Addr_A,
data_in_V_Dout_A,
data_in_V_Din_A,
data_in_V_Clk_B,
data_in_V_Rst_B,
data_in_V_EN_B,
data_in_V_WEN_B,
data_in_V_Addr_B,
data_in_V_Dout_B,
data_in_V_Din_B,
data_out_V_Clk_A,
data_out_V_Rst_A,
data_out_V_EN_A,
data_out_V_WEN_A,
data_out_V_Addr_A,
data_out_V_Dout_A,
data_out_V_Din_A,
data_out_V_Clk_B,
data_out_V_Rst_B,
data_out_V_EN_B,
data_out_V_WEN_B,
data_out_V_Addr_B,
data_out_V_Dout_B,
data_out_V_Din_B,
aresetn,
aclk,
const_size_in_1,
const_size_in_1_ap_vld,
const_size_out_1,
const_size_out_1_ap_vld,
ap_start,
ap_ready,
ap_done,
ap_idle
);

parameter RESET_ACTIVE_LOW = 1;

output data_in_V_Clk_A ;
output data_in_V_Rst_A ;
output data_in_V_EN_A ;
output [8 - 1:0] data_in_V_WEN_A ;
output [32 - 1:0] data_in_V_Addr_A ;
output [64 - 1:0] data_in_V_Dout_A ;
input [64 - 1:0] data_in_V_Din_A ;
output data_in_V_Clk_B ;
output data_in_V_Rst_B ;
output data_in_V_EN_B ;
output [8 - 1:0] data_in_V_WEN_B ;
output [32 - 1:0] data_in_V_Addr_B ;
output [64 - 1:0] data_in_V_Dout_B ;
input [64 - 1:0] data_in_V_Din_B ;


output data_out_V_Clk_A ;
output data_out_V_Rst_A ;
output data_out_V_EN_A ;
output [8 - 1:0] data_out_V_WEN_A ;
output [32 - 1:0] data_out_V_Addr_A ;
output [64 - 1:0] data_out_V_Dout_A ;
input [64 - 1:0] data_out_V_Din_A ;
output data_out_V_Clk_B ;
output data_out_V_Rst_B ;
output data_out_V_EN_B ;
output [8 - 1:0] data_out_V_WEN_B ;
output [32 - 1:0] data_out_V_Addr_B ;
output [64 - 1:0] data_out_V_Dout_B ;
input [64 - 1:0] data_out_V_Din_B ;

input aresetn ;

input aclk ;

output [16 - 1:0] const_size_in_1 ;
output const_size_in_1_ap_vld ;
output [16 - 1:0] const_size_out_1 ;
output const_size_out_1_ap_vld ;
input ap_start ;
output ap_ready ;
output ap_done ;
output ap_idle ;


wire data_in_V_Clk_A;
wire data_in_V_Rst_A;
wire data_in_V_EN_A;
wire [8 - 1:0] data_in_V_WEN_A;
wire [32 - 1:0] data_in_V_Addr_A;
wire [64 - 1:0] data_in_V_Dout_A;
wire [64 - 1:0] data_in_V_Din_A;
wire data_in_V_Clk_B;
wire data_in_V_Rst_B;
wire data_in_V_EN_B;
wire [8 - 1:0] data_in_V_WEN_B;
wire [32 - 1:0] data_in_V_Addr_B;
wire [64 - 1:0] data_in_V_Dout_B;
wire [64 - 1:0] data_in_V_Din_B;


wire data_out_V_Clk_A;
wire data_out_V_Rst_A;
wire data_out_V_EN_A;
wire [8 - 1:0] data_out_V_WEN_A;
wire [32 - 1:0] data_out_V_Addr_A;
wire [64 - 1:0] data_out_V_Dout_A;
wire [64 - 1:0] data_out_V_Din_A;
wire data_out_V_Clk_B;
wire data_out_V_Rst_B;
wire data_out_V_EN_B;
wire [8 - 1:0] data_out_V_WEN_B;
wire [32 - 1:0] data_out_V_Addr_B;
wire [64 - 1:0] data_out_V_Dout_B;
wire [64 - 1:0] data_out_V_Din_B;

wire aresetn;



wire [4 - 1:0] sig_myproject_data_in_V_address0;
wire sig_myproject_data_in_V_ce0;
wire [35 - 1:0] sig_myproject_data_in_V_q0;
wire [4 - 1:0] sig_myproject_data_in_V_address1;
wire sig_myproject_data_in_V_ce1;
wire [35 - 1:0] sig_myproject_data_in_V_q1;


wire [3 - 1:0] sig_myproject_data_out_V_address0;
wire sig_myproject_data_out_V_ce0;
wire sig_myproject_data_out_V_we0;
wire [35 - 1:0] sig_myproject_data_out_V_d0;
wire [3 - 1:0] sig_myproject_data_out_V_address1;
wire sig_myproject_data_out_V_ce1;
wire sig_myproject_data_out_V_we1;
wire [35 - 1:0] sig_myproject_data_out_V_d1;

wire sig_myproject_ap_rst;



myproject myproject_U(
    .data_in_V_address0(sig_myproject_data_in_V_address0),
    .data_in_V_ce0(sig_myproject_data_in_V_ce0),
    .data_in_V_q0(sig_myproject_data_in_V_q0),
    .data_in_V_address1(sig_myproject_data_in_V_address1),
    .data_in_V_ce1(sig_myproject_data_in_V_ce1),
    .data_in_V_q1(sig_myproject_data_in_V_q1),
    .data_out_V_address0(sig_myproject_data_out_V_address0),
    .data_out_V_ce0(sig_myproject_data_out_V_ce0),
    .data_out_V_we0(sig_myproject_data_out_V_we0),
    .data_out_V_d0(sig_myproject_data_out_V_d0),
    .data_out_V_address1(sig_myproject_data_out_V_address1),
    .data_out_V_ce1(sig_myproject_data_out_V_ce1),
    .data_out_V_we1(sig_myproject_data_out_V_we1),
    .data_out_V_d1(sig_myproject_data_out_V_d1),
    .ap_rst(sig_myproject_ap_rst),
    .ap_clk(aclk),
    .const_size_in_1(const_size_in_1),
    .const_size_in_1_ap_vld(const_size_in_1_ap_vld),
    .const_size_out_1(const_size_out_1),
    .const_size_out_1_ap_vld(const_size_out_1_ap_vld),
    .ap_start(ap_start),
    .ap_ready(ap_ready),
    .ap_done(ap_done),
    .ap_idle(ap_idle)
);

myproject_data_in_V_if myproject_data_in_V_if_U(
    .clk(aclk),
    .reset(sig_myproject_ap_rst_n),
    .data_in_V_address0(sig_myproject_data_in_V_address0),
    .data_in_V_ce0(sig_myproject_data_in_V_ce0),
    .data_in_V_q0(sig_myproject_data_in_V_q0),
    .data_in_V_address1(sig_myproject_data_in_V_address1),
    .data_in_V_ce1(sig_myproject_data_in_V_ce1),
    .data_in_V_q1(sig_myproject_data_in_V_q1),
    .Clk_A(data_in_V_Clk_A),
    .Rst_A(data_in_V_Rst_A),
    .EN_A(data_in_V_EN_A),
    .WEN_A(data_in_V_WEN_A),
    .Addr_A(data_in_V_Addr_A),
    .Dout_A(data_in_V_Dout_A),
    .Din_A(data_in_V_Din_A),
    .Clk_B(data_in_V_Clk_B),
    .Rst_B(data_in_V_Rst_B),
    .EN_B(data_in_V_EN_B),
    .WEN_B(data_in_V_WEN_B),
    .Addr_B(data_in_V_Addr_B),
    .Dout_B(data_in_V_Dout_B),
    .Din_B(data_in_V_Din_B));

myproject_data_out_V_if myproject_data_out_V_if_U(
    .clk(aclk),
    .reset(sig_myproject_ap_rst_n),
    .data_out_V_address0(sig_myproject_data_out_V_address0),
    .data_out_V_ce0(sig_myproject_data_out_V_ce0),
    .data_out_V_we0(sig_myproject_data_out_V_we0),
    .data_out_V_d0(sig_myproject_data_out_V_d0),
    .data_out_V_address1(sig_myproject_data_out_V_address1),
    .data_out_V_ce1(sig_myproject_data_out_V_ce1),
    .data_out_V_we1(sig_myproject_data_out_V_we1),
    .data_out_V_d1(sig_myproject_data_out_V_d1),
    .Clk_A(data_out_V_Clk_A),
    .Rst_A(data_out_V_Rst_A),
    .EN_A(data_out_V_EN_A),
    .WEN_A(data_out_V_WEN_A),
    .Addr_A(data_out_V_Addr_A),
    .Dout_A(data_out_V_Dout_A),
    .Din_A(data_out_V_Din_A),
    .Clk_B(data_out_V_Clk_B),
    .Rst_B(data_out_V_Rst_B),
    .EN_B(data_out_V_EN_B),
    .WEN_B(data_out_V_WEN_B),
    .Addr_B(data_out_V_Addr_B),
    .Dout_B(data_out_V_Dout_B),
    .Din_B(data_out_V_Din_B));

myproject_ap_rst_if #(
    .RESET_ACTIVE_LOW(RESET_ACTIVE_LOW))
ap_rst_if_U(
    .dout(sig_myproject_ap_rst),
    .din(aresetn));

endmodule
