-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity myproject_value1_rom is 
    generic(
             DWIDTH     : integer := 15; 
             AWIDTH     : integer := 5; 
             MEM_SIZE    : integer := 30
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of myproject_value1_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "001000000000000", 1 => "010000000000000", 2 => "011000000000000", 
    3 => "100000000000000", 4 => "101000000000000", 5 => "001000000000000", 
    6 => "010000000000000", 7 => "011000000000000", 8 => "100000000000000", 
    9 => "101000000000000", 10 => "001000000000000", 11 => "010000000000000", 
    12 => "011000000000000", 13 => "100000000000000", 14 => "101000000000000", 
    15 => "001000000000000", 16 => "010000000000000", 17 => "011000000000000", 
    18 => "100000000000000", 19 => "101000000000000", 20 => "001000000000000", 
    21 => "010000000000000", 22 => "011000000000000", 23 => "100000000000000", 
    24 => "101000000000000", 25 => "001000000000000", 26 => "010000000000000", 
    27 => "011000000000000", 28 => "100000000000000", 29 => "101000000000000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity myproject_value1 is
    generic (
        DataWidth : INTEGER := 15;
        AddressRange : INTEGER := 30;
        AddressWidth : INTEGER := 5);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of myproject_value1 is
    component myproject_value1_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    myproject_value1_rom_U :  component myproject_value1_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


