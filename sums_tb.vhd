--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:52:28 02/03/2018
-- Design Name:   
-- Module Name:   C:/Users/HP/Desktop/University/Academics/Capstone/XXTEA/XXTEA/sums_tb.vhd
-- Project Name:  XXTEA
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sums
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY sums_tb IS
END sums_tb;
 
ARCHITECTURE behavior OF sums_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sums
    PORT(
         clk : IN  std_logic;
         en : IN  std_logic;
         sum_0 : OUT  std_logic_vector(31 downto 0);
         sum_1 : OUT  std_logic_vector(31 downto 0);
         sum_2 : OUT  std_logic_vector(31 downto 0);
         sum_3 : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal en : std_logic := '0';

 	--Outputs
   signal sum_0 : std_logic_vector(31 downto 0);
   signal sum_1 : std_logic_vector(31 downto 0);
   signal sum_2 : std_logic_vector(31 downto 0);
   signal sum_3 : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sums PORT MAP (
          clk => clk,
          en => en,
          sum_0 => sum_0,
          sum_1 => sum_1,
          sum_2 => sum_2,
          sum_3 => sum_3
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.

      wait for clk_period*10;

      en <= '1';

      wait;
   end process;

END;
