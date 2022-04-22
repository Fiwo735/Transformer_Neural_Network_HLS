-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_unsigned.all;

entity myproject_top is
    generic (
        RESET_ACTIVE_LOW :  integer := 1
    );
    port (
        data_in_V_Clk_A : out  std_logic;
        data_in_V_Rst_A : out  std_logic;
        data_in_V_EN_A : out  std_logic;
        data_in_V_WEN_A : out  std_logic_vector(8 - 1 downto 0);
        data_in_V_Addr_A : out  std_logic_vector(32 - 1 downto 0);
        data_in_V_Dout_A : out  std_logic_vector(64 - 1 downto 0);
        data_in_V_Din_A : in  std_logic_vector(64 - 1 downto 0);
        data_in_V_Clk_B : out  std_logic;
        data_in_V_Rst_B : out  std_logic;
        data_in_V_EN_B : out  std_logic;
        data_in_V_WEN_B : out  std_logic_vector(8 - 1 downto 0);
        data_in_V_Addr_B : out  std_logic_vector(32 - 1 downto 0);
        data_in_V_Dout_B : out  std_logic_vector(64 - 1 downto 0);
        data_in_V_Din_B : in  std_logic_vector(64 - 1 downto 0);
        data_out_V_Clk_A : out  std_logic;
        data_out_V_Rst_A : out  std_logic;
        data_out_V_EN_A : out  std_logic;
        data_out_V_WEN_A : out  std_logic_vector(8 - 1 downto 0);
        data_out_V_Addr_A : out  std_logic_vector(32 - 1 downto 0);
        data_out_V_Dout_A : out  std_logic_vector(64 - 1 downto 0);
        data_out_V_Din_A : in  std_logic_vector(64 - 1 downto 0);
        data_out_V_Clk_B : out  std_logic;
        data_out_V_Rst_B : out  std_logic;
        data_out_V_EN_B : out  std_logic;
        data_out_V_WEN_B : out  std_logic_vector(8 - 1 downto 0);
        data_out_V_Addr_B : out  std_logic_vector(32 - 1 downto 0);
        data_out_V_Dout_B : out  std_logic_vector(64 - 1 downto 0);
        data_out_V_Din_B : in  std_logic_vector(64 - 1 downto 0);
        aresetn : in  std_logic;
        aclk : in  std_logic;
        const_size_in_1 : out  std_logic_vector(16 - 1 downto 0);
        const_size_in_1_ap_vld : out  std_logic;
        const_size_out_1 : out  std_logic_vector(16 - 1 downto 0);
        const_size_out_1_ap_vld : out  std_logic;
        ap_start : in  std_logic;
        ap_ready : out  std_logic;
        ap_done : out  std_logic;
        ap_idle : out  std_logic
    );

-- attributes begin
-- attributes end
end entity;

architecture behav of myproject_top is
    component myproject is
        port (
            data_in_V_address0 : out  std_logic_vector(4 - 1 downto 0);
            data_in_V_ce0 : out  std_logic;
            data_in_V_q0 : in  std_logic_vector(35 - 1 downto 0);
            data_in_V_address1 : out  std_logic_vector(4 - 1 downto 0);
            data_in_V_ce1 : out  std_logic;
            data_in_V_q1 : in  std_logic_vector(35 - 1 downto 0);
            data_out_V_address0 : out  std_logic_vector(3 - 1 downto 0);
            data_out_V_ce0 : out  std_logic;
            data_out_V_we0 : out  std_logic;
            data_out_V_d0 : out  std_logic_vector(35 - 1 downto 0);
            data_out_V_address1 : out  std_logic_vector(3 - 1 downto 0);
            data_out_V_ce1 : out  std_logic;
            data_out_V_we1 : out  std_logic;
            data_out_V_d1 : out  std_logic_vector(35 - 1 downto 0);
            ap_rst : in  std_logic;
            ap_clk : in  std_logic;
            const_size_in_1 : out  std_logic_vector(16 - 1 downto 0);
            const_size_in_1_ap_vld : out  std_logic;
            const_size_out_1 : out  std_logic_vector(16 - 1 downto 0);
            const_size_out_1_ap_vld : out  std_logic;
            ap_start : in  std_logic;
            ap_ready : out  std_logic;
            ap_done : out  std_logic;
            ap_idle : out  std_logic
        );
    end component;

    component myproject_data_in_V_if is
        port (
            clk :  in std_logic;
            reset :  in std_logic;
            data_in_V_address0 :  in std_logic_vector(4 - 1 downto 0);
            data_in_V_ce0 :  in std_logic;
            data_in_V_q0 :  out std_logic_vector(35 - 1 downto 0);
            data_in_V_address1 :  in std_logic_vector(4 - 1 downto 0);
            data_in_V_ce1 :  in std_logic;
            data_in_V_q1 :  out std_logic_vector(35 - 1 downto 0);
            Clk_A :  out std_logic;
            Rst_A :  out std_logic;
            EN_A :  out std_logic;
            WEN_A :  out std_logic_vector(8 - 1 downto 0);
            Addr_A :  out std_logic_vector(32 - 1 downto 0);
            Dout_A :  out std_logic_vector(64 - 1 downto 0);
            Din_A :  in std_logic_vector(64 - 1 downto 0);
            Clk_B :  out std_logic;
            Rst_B :  out std_logic;
            EN_B :  out std_logic;
            WEN_B :  out std_logic_vector(8 - 1 downto 0);
            Addr_B :  out std_logic_vector(32 - 1 downto 0);
            Dout_B :  out std_logic_vector(64 - 1 downto 0);
            Din_B :  in std_logic_vector(64 - 1 downto 0));
    end component;

    component myproject_data_out_V_if is
        port (
            clk :  in std_logic;
            reset :  in std_logic;
            data_out_V_address0 :  in std_logic_vector(3 - 1 downto 0);
            data_out_V_ce0 :  in std_logic;
            data_out_V_we0 :  in std_logic;
            data_out_V_d0 :  in std_logic_vector(35 - 1 downto 0);
            data_out_V_address1 :  in std_logic_vector(3 - 1 downto 0);
            data_out_V_ce1 :  in std_logic;
            data_out_V_we1 :  in std_logic;
            data_out_V_d1 :  in std_logic_vector(35 - 1 downto 0);
            Clk_A :  out std_logic;
            Rst_A :  out std_logic;
            EN_A :  out std_logic;
            WEN_A :  out std_logic_vector(8 - 1 downto 0);
            Addr_A :  out std_logic_vector(32 - 1 downto 0);
            Dout_A :  out std_logic_vector(64 - 1 downto 0);
            Din_A :  in std_logic_vector(64 - 1 downto 0);
            Clk_B :  out std_logic;
            Rst_B :  out std_logic;
            EN_B :  out std_logic;
            WEN_B :  out std_logic_vector(8 - 1 downto 0);
            Addr_B :  out std_logic_vector(32 - 1 downto 0);
            Dout_B :  out std_logic_vector(64 - 1 downto 0);
            Din_B :  in std_logic_vector(64 - 1 downto 0));
    end component;

    component myproject_ap_rst_if is
        generic (
            RESET_ACTIVE_LOW :  integer);
        port (
            dout :  out std_logic;
            din :  in std_logic);
    end component;

    signal sig_myproject_data_in_V_address0 :  std_logic_vector(4 - 1 downto 0);
    signal sig_myproject_data_in_V_ce0 :  std_logic;
    signal sig_myproject_data_in_V_q0 :  std_logic_vector(35 - 1 downto 0);
    signal sig_myproject_data_in_V_address1 :  std_logic_vector(4 - 1 downto 0);
    signal sig_myproject_data_in_V_ce1 :  std_logic;
    signal sig_myproject_data_in_V_q1 :  std_logic_vector(35 - 1 downto 0);
    signal sig_myproject_data_out_V_address0 :  std_logic_vector(3 - 1 downto 0);
    signal sig_myproject_data_out_V_ce0 :  std_logic;
    signal sig_myproject_data_out_V_we0 :  std_logic;
    signal sig_myproject_data_out_V_d0 :  std_logic_vector(35 - 1 downto 0);
    signal sig_myproject_data_out_V_address1 :  std_logic_vector(3 - 1 downto 0);
    signal sig_myproject_data_out_V_ce1 :  std_logic;
    signal sig_myproject_data_out_V_we1 :  std_logic;
    signal sig_myproject_data_out_V_d1 :  std_logic_vector(35 - 1 downto 0);
    signal sig_myproject_ap_rst :  std_logic;

begin
    myproject_U  : component myproject
        port map (
            data_in_V_address0 => sig_myproject_data_in_V_address0,
            data_in_V_ce0 => sig_myproject_data_in_V_ce0,
            data_in_V_q0 => sig_myproject_data_in_V_q0,
            data_in_V_address1 => sig_myproject_data_in_V_address1,
            data_in_V_ce1 => sig_myproject_data_in_V_ce1,
            data_in_V_q1 => sig_myproject_data_in_V_q1,
            data_out_V_address0 => sig_myproject_data_out_V_address0,
            data_out_V_ce0 => sig_myproject_data_out_V_ce0,
            data_out_V_we0 => sig_myproject_data_out_V_we0,
            data_out_V_d0 => sig_myproject_data_out_V_d0,
            data_out_V_address1 => sig_myproject_data_out_V_address1,
            data_out_V_ce1 => sig_myproject_data_out_V_ce1,
            data_out_V_we1 => sig_myproject_data_out_V_we1,
            data_out_V_d1 => sig_myproject_data_out_V_d1,
            ap_rst => sig_myproject_ap_rst,
            ap_clk => aclk,
            const_size_in_1 => const_size_in_1,
            const_size_in_1_ap_vld => const_size_in_1_ap_vld,
            const_size_out_1 => const_size_out_1,
            const_size_out_1_ap_vld => const_size_out_1_ap_vld,
            ap_start => ap_start,
            ap_ready => ap_ready,
            ap_done => ap_done,
            ap_idle => ap_idle
        );

    myproject_data_in_V_if_U : component myproject_data_in_V_if
        port map (
            clk => aclk,
            reset => sig_myproject_ap_rst_n,
            data_in_V_address0 => sig_myproject_data_in_V_address0,
            data_in_V_ce0 => sig_myproject_data_in_V_ce0,
            data_in_V_q0 => sig_myproject_data_in_V_q0,
            data_in_V_address1 => sig_myproject_data_in_V_address1,
            data_in_V_ce1 => sig_myproject_data_in_V_ce1,
            data_in_V_q1 => sig_myproject_data_in_V_q1,
            Clk_A => data_in_V_Clk_A,
            Rst_A => data_in_V_Rst_A,
            EN_A => data_in_V_EN_A,
            WEN_A => data_in_V_WEN_A,
            Addr_A => data_in_V_Addr_A,
            Dout_A => data_in_V_Dout_A,
            Din_A => data_in_V_Din_A,
            Clk_B => data_in_V_Clk_B,
            Rst_B => data_in_V_Rst_B,
            EN_B => data_in_V_EN_B,
            WEN_B => data_in_V_WEN_B,
            Addr_B => data_in_V_Addr_B,
            Dout_B => data_in_V_Dout_B,
            Din_B => data_in_V_Din_B);

    myproject_data_out_V_if_U : component myproject_data_out_V_if
        port map (
            clk => aclk,
            reset => sig_myproject_ap_rst_n,
            data_out_V_address0 => sig_myproject_data_out_V_address0,
            data_out_V_ce0 => sig_myproject_data_out_V_ce0,
            data_out_V_we0 => sig_myproject_data_out_V_we0,
            data_out_V_d0 => sig_myproject_data_out_V_d0,
            data_out_V_address1 => sig_myproject_data_out_V_address1,
            data_out_V_ce1 => sig_myproject_data_out_V_ce1,
            data_out_V_we1 => sig_myproject_data_out_V_we1,
            data_out_V_d1 => sig_myproject_data_out_V_d1,
            Clk_A => data_out_V_Clk_A,
            Rst_A => data_out_V_Rst_A,
            EN_A => data_out_V_EN_A,
            WEN_A => data_out_V_WEN_A,
            Addr_A => data_out_V_Addr_A,
            Dout_A => data_out_V_Dout_A,
            Din_A => data_out_V_Din_A,
            Clk_B => data_out_V_Clk_B,
            Rst_B => data_out_V_Rst_B,
            EN_B => data_out_V_EN_B,
            WEN_B => data_out_V_WEN_B,
            Addr_B => data_out_V_Addr_B,
            Dout_B => data_out_V_Dout_B,
            Din_B => data_out_V_Din_B);

    ap_rst_if_U : component myproject_ap_rst_if
        generic map (
            RESET_ACTIVE_LOW => RESET_ACTIVE_LOW)
        port map (
            dout => sig_myproject_ap_rst,
            din => aresetn);

end architecture;

