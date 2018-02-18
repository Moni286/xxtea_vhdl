----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:35:35 02/03/2018 
-- Design Name: 
-- Module Name:    key_module - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity key_module is
    Port ( clk   : in STD_LOGIC;
			  w : in  STD_LOGIC;
			  key_in : in STD_LOGIC_VECTOR(127 downto 0);
           sum_0 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_1 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_2 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_3 : in  STD_LOGIC_VECTOR (31 downto 0);
           key_0 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (31 downto 0));
end key_module;

architecture Behavioral of key_module is

COMPONENT key_RAM is
    Port ( w : in  STD_LOGIC;
           clk : in  STD_LOGIC;
			  key_in : in  STD_LOGIC_VECTOR (127 downto 0);
			  index_0 : in STD_LOGIC_VECTOR(1 downto 0);
			  index_1 : in STD_LOGIC_VECTOR(1 downto 0);
			  index_2 : in STD_LOGIC_VECTOR(1 downto 0);
			  index_3 : in STD_LOGIC_VECTOR(1 downto 0);
           key_0 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (31 downto 0));
END COMPONENT key_RAM;

COMPONENT key_scheduler is
    Port ( sum_0 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_1 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_2 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_3 : in  STD_LOGIC_VECTOR (31 downto 0);
           index_0 : out  STD_LOGIC_VECTOR (1 downto 0);
           index_1 : out  STD_LOGIC_VECTOR (1 downto 0);
           index_2 : out  STD_LOGIC_VECTOR (1 downto 0);
           index_3 : out  STD_LOGIC_VECTOR (1 downto 0));
END COMPONENT key_scheduler;

alias e0 : STD_LOGIC_VECTOR(1 downto 0) is sum_0(3 downto 2);
alias e1 : STD_LOGIC_VECTOR(1 downto 0) is sum_1(3 downto 2);
alias e2 : STD_LOGIC_VECTOR(1 downto 0) is sum_2(3 downto 2);
alias e3 : STD_LOGIC_VECTOR(1 downto 0) is sum_3(3 downto 2);

signal index0 : STD_LOGIC_VECTOR(1 downto 0);
signal index1 : STD_LOGIC_VECTOR(1 downto 0);
signal index2 : STD_LOGIC_VECTOR(1 downto 0);
signal index3 : STD_LOGIC_VECTOR(1 downto 0);

begin
	
	index0 <= e0;
	index1 <= e1(1) & NOT e1(0);
	index2 <= NOT e2(1) & e2(0);
	index3 <= NOT e3;
	
	with index0 select key_0 <=
		key_in(31 downto 0) when "11",
		key_in(63 downto 32) when "10",
		key_in(95 downto 64) when "01",
		key_in(127 downto 96) when "00";
	
	with index1 select key_1 <=
		key_in(31 downto 0) when "11",
		key_in(63 downto 32) when "10",
		key_in(95 downto 64) when "01",
		key_in(127 downto 96) when "00";
		
	with index2 select key_2 <=
		key_in(31 downto 0) when "11",
		key_in(63 downto 32) when "10",
		key_in(95 downto 64) when "01",
		key_in(127 downto 96) when "00";
		
	with index3 select key_3 <=
		key_in(31 downto 0) when "11",
		key_in(63 downto 32) when "10",
		key_in(95 downto 64) when "01",
		key_in(127 downto 96) when "00";
	
	--key_sched : key_scheduler PORT MAP(sum_0, sum_1, sum_2, sum_3, index0, index1, index2, index3);
	--key_stor : key_RAM PORT MAP(w, clk, key_in, index0, index1, index2, index3, key_0, key_1, key_2, key_3);

end Behavioral;









