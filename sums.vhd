----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:47:47 02/03/2018 
-- Design Name: 
-- Module Name:    sums - Behavioral 
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

entity sums is
    Port ( clk: in STD_LOGIC;
			  en : in  STD_LOGIC;
			  start : in STD_LOGIC;
			  dec : in STD_LOGIC;
           sum_0 : out  STD_LOGIC_VECTOR (31 downto 0);
           sum_1 : out  STD_LOGIC_VECTOR (31 downto 0);
           sum_2 : out  STD_LOGIC_VECTOR (31 downto 0);
           sum_3 : out  STD_LOGIC_VECTOR (31 downto 0)
			  );
end sums;

architecture Behavioral of sums is

constant DELTA : STD_LOGIC_VECTOR(31 downto 0) := x"9e3779b9";
constant DELTA19 : STD_LOGIC_VECTOR(31 downto 0) := x"5c558274";


signal sum_0s : STD_LOGIC_VECTOR(31 downto 0);
signal sum_1s : STD_LOGIC_VECTOR(31 downto 0);
signal sum_2s : STD_LOGIC_VECTOR(31 downto 0);
signal sum_3s : STD_LOGIC_VECTOR(31 downto 0);

signal counter : STD_LOGIC_VECTOR(2 downto 0);

signal curr_delta : STD_LOGIC_VECTOR(31 downto 0);

begin

	with dec select curr_delta <=
		DELTA when '0',
		DELTA19 when others;
	
	PROCESS(clk)
	
	BEGIN
		if rising_edge(clk) then
		
			if (en = '0') then
				sum_0s <= curr_delta;
				sum_1s <= x"00000000";
				sum_2s <= x"00000000";
				sum_3s <= x"00000000";
				
			else
				if (dec = '0') then 
				
					sum_1s <= sum_0s;
					sum_2s <= sum_1s;
					sum_3s <= sum_2s;
					sum_0s <= STD_LOGIC_VECTOR(unsigned(sum_3s) + unsigned(DELTA));
				else
					sum_1s <= sum_0s;
					sum_2s <= sum_1s;
					sum_3s <= sum_2s;
					sum_0s <= STD_LOGIC_VECTOR(unsigned(sum_3s) - unsigned(DELTA));
				end if;
			end if;
			
		end if;
	END PROCESS;
	
	sum_0 <= sum_0s;
	sum_1 <= sum_1s;
	sum_2 <= sum_2s;
	sum_3 <= sum_3s;
	
end Behavioral;








