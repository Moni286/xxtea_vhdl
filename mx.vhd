----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:48:37 02/03/2018 
-- Design Name: 
-- Module Name:    mx - Behavioral 
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

entity mx is
    Port ( 	sum : in  STD_LOGIC_VECTOR(31 downto 0);
				key : in STD_LOGIC_VECTOR(31 downto 0);
				word : in STD_LOGIC_VECTOR(127 downto 0);
				result : out  STD_LOGIC_VECTOR (127 downto 0)
			);
end mx;

architecture Behavioral of mx is

COMPONENT mx_plus_1 is
	Port ( 	sum : in STD_LOGIC_VECTOR(31 downto 0);
				key : in STD_LOGIC_VECTOR(31 downto 0);
				x : in STD_LOGIC_VECTOR(31 downto 0);
				y : in STD_LOGIC_VECTOR(31 downto 0);
				z : in STD_LOGIC_VECTOR(31 downto 0);
				sigma : out STD_LOGIC_VECTOR(31 downto 0)
			);
END COMPONENT mx_plus_1;

signal x : STD_LOGIC_VECTOR(31 downto 0);
signal y : STD_LOGIC_VECTOR(31 downto 0);
signal z : STD_LOGIC_VECTOR(31 downto 0);
signal result : STD_LOGIC_VECTOR(31 downto 0);

begin

	mx_1 : mx_plus_1 PORT MAP(sum, key, x, y, z, result);

end Behavioral;

