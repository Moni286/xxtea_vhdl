----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:21:10 02/03/2018 
-- Design Name: 
-- Module Name:    key_scheduler - Behavioral 
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

entity key_scheduler is
    Port ( sum_0 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_1 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_2 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_3 : in  STD_LOGIC_VECTOR (31 downto 0);
           index_0 : out  STD_LOGIC_VECTOR (1 downto 0);
           index_1 : out  STD_LOGIC_VECTOR (1 downto 0);
           index_2 : out  STD_LOGIC_VECTOR (1 downto 0);
           index_3 : out  STD_LOGIC_VECTOR (1 downto 0));
end key_scheduler;

architecture Behavioral of key_scheduler is

signal e0 : STD_LOGIC_VECTOR(1 downto 0);
signal e1 : STD_LOGIC_VECTOR(1 downto 0);
signal e2 : STD_LOGIC_VECTOR(1 downto 0);
signal e3 : STD_LOGIC_VECTOR(1 downto 0);

begin
	
	e0 <= sum_0(3 downto 2);
	e1 <= sum_1(3 downto 2);
	e2 <= sum_2(3 downto 2);
	e3 <= sum_3(3 downto 2);

	index_0 <= e0;
	index_1 <= e1(1) & NOT e1(0);
	index_2 <= NOT e2(1) & e2(0);
	index_3 <= NOT e3;
	
end Behavioral;






