----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:07:32 02/03/2018 
-- Design Name: 
-- Module Name:    key_RAM - Behavioral 
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

entity key_RAM is
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
end key_RAM;

architecture Behavioral of key_RAM is


type t_key is array (0 to 3)
        of STD_LOGIC_VECTOR(31 downto 0);
		  
signal key_s : t_key;

begin
	PROCESS(clk)
	
	BEGIN
		
		if rising_edge(clk) then
			if w = '1' then
				key_s(3) <= key_in(31 downto 0);
				key_s(2) <= key_in(63 downto 32);
				key_s(1) <= key_in(95 downto 64);
				key_s(0) <= key_in(127 downto 96);
			end if;
		end if;
		
	END PROCESS;
	
	key_0 <= key_s(to_integer(unsigned(index_0)));
	key_1 <= key_s(to_integer(unsigned(index_1)));
	key_2 <= key_s(to_integer(unsigned(index_2)));
	key_3 <= key_s(to_integer(unsigned(index_3)));

end Behavioral;





