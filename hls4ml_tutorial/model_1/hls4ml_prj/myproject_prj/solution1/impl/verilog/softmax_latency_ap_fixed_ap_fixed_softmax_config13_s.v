// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module softmax_latency_ap_fixed_ap_fixed_softmax_config13_s (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ap_ce,
        data_0_V_read,
        data_1_V_read,
        data_2_V_read,
        data_3_V_read,
        data_4_V_read,
        ap_return_0,
        ap_return_1,
        ap_return_2,
        ap_return_3,
        ap_return_4
);

parameter    ap_ST_fsm_pp0_stage0 = 1'd1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input   ap_ce;
input  [15:0] data_0_V_read;
input  [15:0] data_1_V_read;
input  [15:0] data_2_V_read;
input  [15:0] data_3_V_read;
input  [15:0] data_4_V_read;
output  [15:0] ap_return_0;
output  [15:0] ap_return_1;
output  [15:0] ap_return_2;
output  [15:0] ap_return_3;
output  [15:0] ap_return_4;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [0:0] ap_CS_fsm;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_enable_reg_pp0_iter0;
wire    ap_block_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg    ap_enable_reg_pp0_iter2;
reg    ap_idle_pp0;
reg    ap_block_state1_pp0_stage0_iter0;
wire    ap_block_state2_pp0_stage0_iter1;
wire    ap_block_state3_pp0_stage0_iter2;
reg    ap_block_pp0_stage0_11001;
wire   [9:0] exp_table1_address0;
reg    exp_table1_ce0;
wire   [17:0] exp_table1_q0;
wire   [9:0] exp_table1_address1;
reg    exp_table1_ce1;
wire   [17:0] exp_table1_q1;
wire   [9:0] exp_table1_address2;
reg    exp_table1_ce2;
wire   [17:0] exp_table1_q2;
wire   [9:0] exp_table1_address3;
reg    exp_table1_ce3;
wire   [17:0] exp_table1_q3;
wire   [9:0] exp_table1_address4;
reg    exp_table1_ce4;
wire   [17:0] exp_table1_q4;
wire   [9:0] invert_table2_address0;
reg    invert_table2_ce0;
wire   [13:0] invert_table2_q0;
reg  signed [17:0] exp_res_0_V_reg_420;
reg  signed [17:0] exp_res_1_V_reg_425;
reg  signed [17:0] exp_res_2_V_reg_430;
reg  signed [17:0] exp_res_3_V_reg_435;
reg  signed [17:0] exp_res_4_V_reg_440;
reg    ap_block_pp0_stage0_subdone;
wire   [63:0] zext_ln251_fu_162_p1;
wire   [63:0] zext_ln251_1_fu_177_p1;
wire   [63:0] zext_ln251_2_fu_192_p1;
wire   [63:0] zext_ln251_3_fu_207_p1;
wire   [63:0] zext_ln251_4_fu_222_p1;
wire   [63:0] zext_ln259_fu_261_p1;
wire   [9:0] y_V_fu_152_p4;
wire   [9:0] y_V_1_fu_167_p4;
wire   [9:0] y_V_2_fu_182_p4;
wire   [9:0] y_V_3_fu_197_p4;
wire   [9:0] y_V_4_fu_212_p4;
wire  signed [17:0] add_ln703_fu_227_p0;
wire  signed [17:0] add_ln703_fu_227_p1;
wire  signed [17:0] add_ln703_1_fu_233_p0;
wire  signed [17:0] add_ln703_1_fu_233_p1;
wire   [17:0] add_ln703_1_fu_233_p2;
wire  signed [17:0] add_ln703_2_fu_239_p1;
wire   [17:0] add_ln703_2_fu_239_p2;
wire   [17:0] add_ln703_fu_227_p2;
wire   [17:0] exp_sum_V_fu_245_p2;
wire   [9:0] y_V_5_fu_251_p4;
wire  signed [25:0] mul_ln1118_fu_360_p2;
wire  signed [25:0] mul_ln1118_1_fu_367_p2;
wire  signed [25:0] mul_ln1118_2_fu_374_p2;
wire  signed [25:0] mul_ln1118_3_fu_381_p2;
wire  signed [25:0] mul_ln1118_4_fu_388_p2;
wire  signed [13:0] mul_ln1118_fu_360_p0;
wire  signed [25:0] sext_ln1116_fu_266_p1;
wire  signed [13:0] mul_ln1118_1_fu_367_p0;
wire  signed [13:0] mul_ln1118_2_fu_374_p0;
wire  signed [13:0] mul_ln1118_3_fu_381_p0;
wire  signed [13:0] mul_ln1118_4_fu_388_p0;
reg   [0:0] ap_NS_fsm;
reg    ap_idle_pp0_0to1;
reg    ap_reset_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 1'd1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
end

softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_exp_bkb #(
    .DataWidth( 18 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
exp_table1_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(exp_table1_address0),
    .ce0(exp_table1_ce0),
    .q0(exp_table1_q0),
    .address1(exp_table1_address1),
    .ce1(exp_table1_ce1),
    .q1(exp_table1_q1),
    .address2(exp_table1_address2),
    .ce2(exp_table1_ce2),
    .q2(exp_table1_q2),
    .address3(exp_table1_address3),
    .ce3(exp_table1_ce3),
    .q3(exp_table1_q3),
    .address4(exp_table1_address4),
    .ce4(exp_table1_ce4),
    .q4(exp_table1_q4)
);

softmax_latency_ap_fixed_ap_fixed_softmax_config13_s_invecud #(
    .DataWidth( 14 ),
    .AddressRange( 1024 ),
    .AddressWidth( 10 ))
invert_table2_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(invert_table2_address0),
    .ce0(invert_table2_ce0),
    .q0(invert_table2_q0)
);

myproject_mul_mul_14s_18s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_14s_18s_26_1_1_U258(
    .din0(mul_ln1118_fu_360_p0),
    .din1(exp_res_0_V_reg_420),
    .dout(mul_ln1118_fu_360_p2)
);

myproject_mul_mul_14s_18s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_14s_18s_26_1_1_U259(
    .din0(mul_ln1118_1_fu_367_p0),
    .din1(exp_res_1_V_reg_425),
    .dout(mul_ln1118_1_fu_367_p2)
);

myproject_mul_mul_14s_18s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_14s_18s_26_1_1_U260(
    .din0(mul_ln1118_2_fu_374_p0),
    .din1(exp_res_2_V_reg_430),
    .dout(mul_ln1118_2_fu_374_p2)
);

myproject_mul_mul_14s_18s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_14s_18s_26_1_1_U261(
    .din0(mul_ln1118_3_fu_381_p0),
    .din1(exp_res_3_V_reg_435),
    .dout(mul_ln1118_3_fu_381_p2)
);

myproject_mul_mul_14s_18s_26_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 14 ),
    .din1_WIDTH( 18 ),
    .dout_WIDTH( 26 ))
myproject_mul_mul_14s_18s_26_1_1_U262(
    .din0(mul_ln1118_4_fu_388_p0),
    .din1(exp_res_4_V_reg_440),
    .dout(mul_ln1118_4_fu_388_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_pp0_stage0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_start;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_res_0_V_reg_420 <= exp_table1_q0;
        exp_res_1_V_reg_425 <= exp_table1_q1;
        exp_res_2_V_reg_430 <= exp_table1_q2;
        exp_res_3_V_reg_435 <= exp_table1_q3;
        exp_res_4_V_reg_440 <= exp_table1_q4;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b0 == ap_block_pp0_stage0) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)) | ((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0_0to1 = 1'b1;
    end else begin
        ap_idle_pp0_0to1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (ap_idle_pp0_0to1 == 1'b1))) begin
        ap_reset_idle_pp0 = 1'b1;
    end else begin
        ap_reset_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce0 = 1'b1;
    end else begin
        exp_table1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce1 = 1'b1;
    end else begin
        exp_table1_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce2 = 1'b1;
    end else begin
        exp_table1_ce2 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce3 = 1'b1;
    end else begin
        exp_table1_ce3 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_start == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exp_table1_ce4 = 1'b1;
    end else begin
        exp_table1_ce4 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_ce) & (1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        invert_table2_ce0 = 1'b1;
    end else begin
        invert_table2_ce0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_pp0_stage0 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln703_1_fu_233_p0 = exp_table1_q2;

assign add_ln703_1_fu_233_p1 = exp_table1_q4;

assign add_ln703_1_fu_233_p2 = ($signed(add_ln703_1_fu_233_p0) + $signed(add_ln703_1_fu_233_p1));

assign add_ln703_2_fu_239_p1 = exp_table1_q3;

assign add_ln703_2_fu_239_p2 = ($signed(add_ln703_1_fu_233_p2) + $signed(add_ln703_2_fu_239_p1));

assign add_ln703_fu_227_p0 = exp_table1_q0;

assign add_ln703_fu_227_p1 = exp_table1_q1;

assign add_ln703_fu_227_p2 = ($signed(add_ln703_fu_227_p0) + $signed(add_ln703_fu_227_p1));

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd0];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_pp0_stage0_11001 = ((ap_start == 1'b0) & (ap_start == 1'b1));
end

always @ (*) begin
    ap_block_pp0_stage0_subdone = ((1'b0 == ap_ce) | ((ap_start == 1'b0) & (ap_start == 1'b1)));
end

always @ (*) begin
    ap_block_state1_pp0_stage0_iter0 = (ap_start == 1'b0);
end

assign ap_block_state2_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_reg_pp0_iter0 = ap_start;

assign ap_return_0 = {{mul_ln1118_fu_360_p2[25:10]}};

assign ap_return_1 = {{mul_ln1118_1_fu_367_p2[25:10]}};

assign ap_return_2 = {{mul_ln1118_2_fu_374_p2[25:10]}};

assign ap_return_3 = {{mul_ln1118_3_fu_381_p2[25:10]}};

assign ap_return_4 = {{mul_ln1118_4_fu_388_p2[25:10]}};

assign exp_sum_V_fu_245_p2 = (add_ln703_2_fu_239_p2 + add_ln703_fu_227_p2);

assign exp_table1_address0 = zext_ln251_fu_162_p1;

assign exp_table1_address1 = zext_ln251_1_fu_177_p1;

assign exp_table1_address2 = zext_ln251_2_fu_192_p1;

assign exp_table1_address3 = zext_ln251_3_fu_207_p1;

assign exp_table1_address4 = zext_ln251_4_fu_222_p1;

assign invert_table2_address0 = zext_ln259_fu_261_p1;

assign mul_ln1118_1_fu_367_p0 = sext_ln1116_fu_266_p1;

assign mul_ln1118_2_fu_374_p0 = sext_ln1116_fu_266_p1;

assign mul_ln1118_3_fu_381_p0 = sext_ln1116_fu_266_p1;

assign mul_ln1118_4_fu_388_p0 = sext_ln1116_fu_266_p1;

assign mul_ln1118_fu_360_p0 = sext_ln1116_fu_266_p1;

assign sext_ln1116_fu_266_p1 = $signed(invert_table2_q0);

assign y_V_1_fu_167_p4 = {{data_1_V_read[15:6]}};

assign y_V_2_fu_182_p4 = {{data_2_V_read[15:6]}};

assign y_V_3_fu_197_p4 = {{data_3_V_read[15:6]}};

assign y_V_4_fu_212_p4 = {{data_4_V_read[15:6]}};

assign y_V_5_fu_251_p4 = {{exp_sum_V_fu_245_p2[17:8]}};

assign y_V_fu_152_p4 = {{data_0_V_read[15:6]}};

assign zext_ln251_1_fu_177_p1 = y_V_1_fu_167_p4;

assign zext_ln251_2_fu_192_p1 = y_V_2_fu_182_p4;

assign zext_ln251_3_fu_207_p1 = y_V_3_fu_197_p4;

assign zext_ln251_4_fu_222_p1 = y_V_4_fu_212_p4;

assign zext_ln251_fu_162_p1 = y_V_fu_152_p4;

assign zext_ln259_fu_261_p1 = y_V_5_fu_251_p4;

endmodule //softmax_latency_ap_fixed_ap_fixed_softmax_config13_s