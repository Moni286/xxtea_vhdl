----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:48:03 02/03/2018 
-- Design Name: 
-- Module Name:    xxtea_encrypt - Behavioral 
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

entity xxtea_encrypt is
    Port ( clk : in  STD_LOGIC;
           en : in  STD_LOGIC;
           w : in  STD_LOGIC;
           key : in  STD_LOGIC_VECTOR (127 downto 0);
           pt : in  STD_LOGIC_VECTOR (127 downto 0);
			  dec : in STD_LOGIC;
           ct : out  STD_LOGIC_VECTOR (127 downto 0);
			  round: out STD_LOGIC_VECTOR(4 downto 0);
			  sum : out STD_LOGIC_VECTOR(31 downto 0)
			  );
end xxtea_encrypt;

architecture Behavioral of xxtea_encrypt is

COMPONENT sums is
    Port ( clk: in STD_LOGIC;
			  en : in  STD_LOGIC;
			  start : in STD_LOGIC;
			  dec : in STD_LOGIC;
           sum_0 : out  STD_LOGIC_VECTOR (31 downto 0);
           sum_1 : out  STD_LOGIC_VECTOR (31 downto 0);
           sum_2 : out  STD_LOGIC_VECTOR (31 downto 0);
           sum_3 : out  STD_LOGIC_VECTOR (31 downto 0)
			  );
END COMPONENT sums;

COMPONENT key_module is
    Port ( clk   : in STD_LOGIC;
			  w : in  STD_LOGIC;
			  key_in : in STD_LOGIC_VECTOR(127 downto 0);
           sum_0 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_1 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_2 : in  STD_LOGIC_VECTOR (31 downto 0);
           sum_3 : in  STD_LOGIC_VECTOR (31 downto 0);
			  dec : in STD_LOGIC;
           key_0 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (31 downto 0));
END COMPONENT key_module;

COMPONENT feistel_net is
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
END COMPONENT feistel_net;

COMPONENT round_counter is
    Port ( clk : in  STD_LOGIC;
			  en : in STD_LOGIC;
           round : out  STD_LOGIC_VECTOR (4 downto 0);
			  start : out STD_LOGIC);
END COMPONENT round_counter;

signal feistel_input : STD_LOGIC_VECTOR(127 downto 0);
signal round_s : STD_LOGIC_VECTOR(4 downto 0);

signal sum_0 : STD_LOGIC_VECTOR(31 downto 0);
signal sum_1 : STD_LOGIC_VECTOR(31 downto 0);
signal sum_2 : STD_LOGIC_VECTOR(31 downto 0);
signal sum_3 : STD_LOGIC_VECTOR(31 downto 0);

signal key_0 : STD_LOGIC_VECTOR(31 downto 0);
signal key_1 : STD_LOGIC_VECTOR(31 downto 0);
signal key_2 : STD_LOGIC_VECTOR(31 downto 0);
signal key_3 : STD_LOGIC_VECTOR(31 downto 0);

signal next_state : STD_LOGIC_VECTOR(127 downto 0);

signal start : STD_LOGIC;

begin

	sums_comp : sums PORT MAP(clk, en, start, dec, sum_0, sum_1, sum_2, sum_3);
	key_mod	 : key_module PORT MAP(clk, w, key, sum_0, sum_1, sum_2, sum_3, dec, key_0, key_1, key_2, key_3);
	
	feistel 	 : feistel_net PORT MAP(clk, en, feistel_input, sum_0, sum_1, sum_2, sum_3, key_0, key_1, key_2, key_3, dec, next_state);
	
	round_count : round_counter PORT MAP(clk, en, round_s, start);
	
	ct <= next_state;
	
	round <= round_s;
	sum <= sum_0;
	
	with start select feistel_input <=
		pt when '1',
		next_state when others;
end Behavioral;



