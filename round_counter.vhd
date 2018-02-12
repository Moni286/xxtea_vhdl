----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:15:54 02/04/2018 
-- Design Name: 
-- Module Name:    round_counter - Behavioral 
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

entity round_counter is
    Port ( clk : in  STD_LOGIC;
			  en : in STD_LOGIC;
           round : out  STD_LOGIC_VECTOR (4 downto 0);
			  start : out STD_LOGIC);
end round_counter;

architecture Behavioral of round_counter is

signal counter : STD_LOGIC_VECTOR(1 downto 0) := "00";
signal round_s : STD_LOGIC_VECTOR(4 downto 0) := "00000";
signal start_s : STD_LOGIC := '1';

begin

	round <= round_s;
	start <= start_s;

	PROCESS (clk)
	BEGIN 
	
		if rising_edge(clk) then
			if en = '1' then
				if counter = "11" then
					round_s <= STD_LOGIC_VECTOR(unsigned(round_s) + 1);
					counter <= "00";
					start_s <= '0';
				else
					counter <= STD_LOGIC_VECTOR(unsigned(counter) + 1);
				end if;
			else
				round_s <= "00000";
				counter <= "00";
				start_s <= '1';
			end if;
		end if;
	
	END PROCESS;

end Behavioral;

