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
           ct : out  STD_LOGIC_VECTOR (127 downto 0));
end xxtea_encrypt;

architecture Behavioral of xxtea_encrypt is

COMPONENT sums is
    Port ( clk: in STD_LOGIC;
			  en : in  STD_LOGIC;
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
           key_0 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_1 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_2 : out  STD_LOGIC_VECTOR (31 downto 0);
           key_3 : out  STD_LOGIC_VECTOR (31 downto 0));
END COMPONENT key_module;

signal sum_0 : STD_LOGIC_VECTOR(31 downto 0);
signal sum_1 : STD_LOGIC_VECTOR(31 downto 0);
signal sum_2 : STD_LOGIC_VECTOR(31 downto 0);
signal sum_3 : STD_LOGIC_VECTOR(31 downto 0);

signal key_0 : STD_LOGIC_VECTOR(31 downto 0);
signal key_1 : STD_LOGIC_VECTOR(31 downto 0);
signal key_2 : STD_LOGIC_VECTOR(31 downto 0);
signal key_3 : STD_LOGIC_VECTOR(31 downto 0);

begin

	sums_comp : sums PORT MAP(clk, en, sum_0, sum_1, sum_2, sum_3);
	key_mod	 : key_module PORT MAP(clk, w, key, sum_0, sum_1, sum_2, sum_3, key_0, key_1, key_2, key_3);

	ct <= key_3 & key_2 & key_1 & key_0;
end Behavioral;

