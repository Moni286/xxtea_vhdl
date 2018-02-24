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

entity feistel_net is
    Port ( 	clk : in STD_LOGIC;
				en : in STD_LOGIC;
				state : in  STD_LOGIC_VECTOR(127 downto 0);
				sum_0 : in STD_LOGIC_VECTOR(31 downto 0);
				sum_1 : in STD_LOGIC_VECTOR(31 downto 0);
				sum_2 : in STD_LOGIC_VECTOR(31 downto 0);
				sum_3 : in STD_LOGIC_VECTOR(31 downto 0);
				key_0 : in STD_LOGIC_VECTOR(31 downto 0);
				key_1 : in STD_LOGIC_VECTOR(31 downto 0);
				key_2 : in STD_LOGIC_VECTOR(31 downto 0);
				key_3 : in STD_LOGIC_VECTOR(31 downto 0);
				dec : in STD_LOGIC;
				next_state : out STD_LOGIC_VECTOR(127 downto 0)
			);
end feistel_net;

architecture Behavioral of feistel_net is

COMPONENT mx_add is
    Port ( dec : in STD_LOGIC;
			  z : in  STD_LOGIC_VECTOR (31 downto 0);
           y : in  STD_LOGIC_VECTOR (31 downto 0);
           addend : in  STD_LOGIC_VECTOR (31 downto 0);
           sum : in  STD_LOGIC_VECTOR (31 downto 0);
           key : in  STD_LOGIC_VECTOR (31 downto 0);
           sigma : out  STD_LOGIC_VECTOR (31 downto 0));
END COMPONENT mx_add;

signal w0 : STD_LOGIC_VECTOR(31 downto 0);
signal w1 : STD_LOGIC_VECTOR(31 downto 0);
signal w2 : STD_LOGIC_VECTOR(31 downto 0);
signal w3 : STD_LOGIC_VECTOR(31 downto 0);

signal pl_reg0 : STD_LOGIC_VECTOR(127 downto 0);
signal pl_reg1 : STD_LOGIC_VECTOR(127 downto 0);
signal pl_reg2 : STD_LOGIC_VECTOR(127 downto 0);
signal pl_reg3 : STD_LOGIC_VECTOR(127 downto 0);

signal sigma_0 : STD_LOGIC_VECTOR(31 downto 0);
signal sigma_1 : STD_LOGIC_VECTOR(31 downto 0);
signal sigma_2 : STD_LOGIC_VECTOR(31 downto 0);
signal sigma_3 : STD_LOGIC_VECTOR(31 downto 0);


-- input signals for MUX
signal x0_in : STD_LOGIC_VECTOR(31 downto 0);
signal x1_in : STD_LOGIC_VECTOR(31 downto 0);
signal x2_in : STD_LOGIC_VECTOR(31 downto 0);
signal x3_in : STD_LOGIC_VECTOR(31 downto 0);

signal y0_in : STD_LOGIC_VECTOR(31 downto 0);
signal y1_in : STD_LOGIC_VECTOR(31 downto 0);
signal y2_in : STD_LOGIC_VECTOR(31 downto 0);
signal y3_in : STD_LOGIC_VECTOR(31 downto 0);

signal SIGMA0_in : STD_LOGIC_VECTOR(31 downto 0);
signal SIGMA1_in : STD_LOGIC_VECTOR(31 downto 0);
signal SIGMA2_in : STD_LOGIC_VECTOR(31 downto 0);
signal SIGMA3_in : STD_LOGIC_VECTOR(31 downto 0);
--

begin
	with dec select x0_in <=
		state(31 downto 0) when '0',
		state(127 downto 96) when others;
		
	with dec select x1_in <=
		pl_reg0(127 downto 96) when '0',
		pl_reg0(31 downto 0) when others;

	with dec select x2_in <=
		pl_reg1(95 downto 64) when '0',
		pl_reg1(63 downto 32) when others;
		
	with dec select x3_in <=
		pl_reg2(63 downto 32) when '0',
		pl_reg2(95 downto 64) when others;
		
		
		
	with dec select y0_in <=
		state(95 downto 64) when '0',
		state(63 downto 32) when others;
		
	with dec select y1_in <=
		pl_reg0(63 downto 32) when '0',
		pl_reg0(95 downto 64) when others;

	with dec select y2_in <=
		pl_reg1(31 downto 0) when '0',
		pl_reg1(127 downto 96) when others;
		
	with dec select y3_in <=
		pl_reg2(127 downto 96) when '0',
		pl_reg2(31 downto 0) when others;
		
		
		
		
		
	with dec select SIGMA0_in <=
		state(127 downto 96) when '0',
		state(31 downto 0) when others;
		
	with dec select SIGMA1_in <=
		pl_reg0(95 downto 64) when '0',
		pl_reg0(63 downto 32) when others;

	with dec select SIGMA2_in <=
		pl_reg1(63 downto 32) when '0',
		pl_reg1(95 downto 64) when others;
		
	with dec select SIGMA3_in <=
		pl_reg2(31 downto 0) when '0',
		pl_reg2(127 downto 96) when others;

	
	mx_0 : mx_add PORT MAP(dec, x0_in, y0_in, SIGMA0_in, sum_0, key_0, sigma_0);
	mx_1 : mx_add PORT MAP(dec, x1_in, y1_in, SIGMA1_in, sum_1, key_1, sigma_1);
	mx_2 : mx_add PORT MAP(dec, x2_in, y2_in, SIGMA2_in, sum_2, key_2, sigma_2);
	mx_3 : mx_add PORT MAP(dec, x3_in, y3_in, SIGMA3_in, sum_3, key_3, sigma_3);
	
	next_state <= pl_reg3;
	
	PROCESS(clk)
	
	BEGIN
		if rising_edge(clk) then
			if en = '1' then
				if dec = '0' then
					pl_reg0 <= sigma_0 & state(95 downto 0);
					pl_reg1 <= pl_reg0(127 downto 96) & sigma_1 & pl_reg0(63 downto 0);
					pl_reg2 <= pl_reg1(127 downto 64) & sigma_2 & pl_reg1(31 downto 0);
					pl_reg3 <= pl_reg2(127 downto 32) & sigma_3;
				else
					pl_reg0 <= state(127 downto 32) & sigma_0;
					pl_reg1 <= pl_reg0(127 downto 64) & sigma_1 & pl_reg0(31 downto 0);
					pl_reg2 <= pl_reg1(127 downto 96) & sigma_2 & pl_reg1(63 downto 0);
					pl_reg3 <= sigma_3 & pl_reg2(95 downto 0);
				end if;
			end if;
		end if;
	END PROCESS;
	
end Behavioral;





