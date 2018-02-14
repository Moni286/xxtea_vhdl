----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:14:23 02/04/2018 
-- Design Name: 
-- Module Name:    mx_add - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mx_add is
    Port ( dec : in STD_LOGIC;
			  z : in  STD_LOGIC_VECTOR (31 downto 0);
           y : in  STD_LOGIC_VECTOR (31 downto 0);
           addend : in  STD_LOGIC_VECTOR (31 downto 0);
           sum : in  STD_LOGIC_VECTOR (31 downto 0);
           key : in  STD_LOGIC_VECTOR (31 downto 0);
           sigma : out  STD_LOGIC_VECTOR (31 downto 0));
end mx_add;

architecture Behavioral of mx_add is

signal x1 : STD_LOGIC_VECTOR(31 downto 0);
signal x2 : STD_LOGIC_VECTOR(31 downto 0);

signal a1 : STD_LOGIC_VECTOR(31 downto 0);
signal a2 : STD_LOGIC_VECTOR(31 downto 0);

signal x : STD_LOGIC_VECTOR(31 downto 0);
signal a : STD_LOGIC_VECTOR(31 downto 0);

signal after_mx : STD_LOGIC_VECTOR(31 downto 0);
signal after_add : STD_LOGIC_VECTOR(32 downto 0);

--signal twos_comp : STD_LOGIC_VECTOR(32 downto 0);

--signal addend2 : STD_LOGIC_VECTOR(32 downto 0);

begin

	x1 <= ("00000" & z(31 downto 5)) XOR (y(29 downto 0) & "00");
	x2 <= ("000" & y(31 downto 3)) XOR (z(27 downto 0) & "0000");
	
	a1 <= sum XOR y;
	a2 <= key XOR z;
	
	x <= STD_LOGIC_VECTOR(unsigned(x1) + unsigned(x2));
	a <= STD_LOGIC_VECTOR(unsigned(a1) + unsigned(a2));

	after_mx <= x XOR a;
	
	with dec select sigma <=
		STD_LOGIC_VECTOR(unsigned(addend) + unsigned(after_mx)) when '0',
		STD_LOGIC_VECTOR(unsigned(addend) - unsigned(after_mx)) when others;
	
end Behavioral;



