--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:28:08 02/04/2018
-- Design Name:   
-- Module Name:   C:/Users/HP/Desktop/University/Academics/Capstone/XXTEA/XXTEA/feistel_net_tb.vhd
-- Project Name:  XXTEA
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: feistel_net
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
 
ENTITY feistel_net_tb IS
END feistel_net_tb;
 
ARCHITECTURE behavior OF feistel_net_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT feistel_net
    PORT(
         clk : IN  std_logic;
         en : IN  std_logic;
         state : IN  std_logic_vector(127 downto 0);
         sum_0 : IN  std_logic_vector(31 downto 0);
         sum_1 : IN  std_logic_vector(31 downto 0);
         sum_2 : IN  std_logic_vector(31 downto 0);
         sum_3 : IN  std_logic_vector(31 downto 0);
         key_0 : IN  std_logic_vector(31 downto 0);
         key_1 : IN  std_logic_vector(31 downto 0);
         key_2 : IN  std_logic_vector(31 downto 0);
         key_3 : IN  std_logic_vector(31 downto 0);
         next_state : OUT  std_logic_vector(127 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal en : std_logic := '0';
   signal state : std_logic_vector(127 downto 0) := (others => '0');
   signal sum_0 : std_logic_vector(31 downto 0) := (others => '0');
   signal sum_1 : std_logic_vector(31 downto 0) := (others => '0');
   signal sum_2 : std_logic_vector(31 downto 0) := (others => '0');
   signal sum_3 : std_logic_vector(31 downto 0) := (others => '0');
   signal key_0 : std_logic_vector(31 downto 0) := (others => '0');
   signal key_1 : std_logic_vector(31 downto 0) := (others => '0');
   signal key_2 : std_logic_vector(31 downto 0) := (others => '0');
   signal key_3 : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal next_state : std_logic_vector(127 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: feistel_net PORT MAP (
          clk => clk,
          en => en,
          state => state,
          sum_0 => sum_0,
          sum_1 => sum_1,
          sum_2 => sum_2,
          sum_3 => sum_3,
          key_0 => key_0,
          key_1 => key_1,
          key_2 => key_2,
          key_3 => key_3,
          next_state => next_state
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
      wait for 100 ns;	

      wait for clk_period*10;
		
		en <= '1';
	
      state <= x"31323334353637383837363534333231";
		
		sum_0 <= x"9e3779b9";
		sum_1 <= x"9e3779b9";
		sum_2 <= x"9e3779b9";
		sum_3 <= x"9e3779b9";
		
		key_0 <= x"38373635";
		key_1 <= x"34333231";
		key_2 <= x"31323334";
		key_3 <= x"35363738";

      wait;
   end process;

END;
