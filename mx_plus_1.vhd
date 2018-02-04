----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:17:23 02/03/2018 
-- Design Name: 
-- Module Name:    mx_plus_1 - Behavioral 
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

entity mx_plus_1 is
    Port ( sum : in  STD_LOGIC_VECTOR (31 downto 0);
           key : in  STD_LOGIC_VECTOR (31 downto 0);
           x : in  STD_LOGIC_VECTOR (8 downto 0);
           y : in  STD_LOGIC_VECTOR (8 downto 0);
           z : in  STD_LOGIC_VECTOR (8 downto 0);
           sigma : out  STD_LOGIC_VECTOR (31 downto 0));
end mx_plus_1;

architecture Behavioral of mx_plus_1 is

begin

end Behavioral;

