--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:56:44 02/04/2018
-- Design Name:   
-- Module Name:   C:/Users/HP/Desktop/University/Academics/Capstone/XXTEA/XXTEA/xxtea_encrypt_tb.vhd
-- Project Name:  XXTEA
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: xxtea_encrypt
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
 
ENTITY xxtea_encrypt_tb IS
END xxtea_encrypt_tb;
 
ARCHITECTURE behavior OF xxtea_encrypt_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT xxtea_encrypt
    PORT(
         clk : IN  std_logic;
         en : IN  std_logic;
         w : IN  std_logic;
         key : IN  std_logic_vector(127 downto 0);
         pt : IN  std_logic_vector(127 downto 0);
         ct : OUT  std_logic_vector(127 downto 0);
			round: OUT STD_LOGIC_VECTOR(4 downto 0);
			sum : OUT STD_LOGIC_VECTOR(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal en : std_logic := '0';
   signal w : std_logic := '0';
   signal key : std_logic_vector(127 downto 0) := (others => '0');
   signal pt : std_logic_vector(127 downto 0) := (others => '0');

 	--Outputs
   signal ct : std_logic_vector(127 downto 0);
	signal round: STD_LOGIC_VECTOR(4 downto 0);
	signal sum : STD_LOGIC_VECTOR(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: xxtea_encrypt PORT MAP (
          clk => clk,
          en => en,
          w => w,
          key => key,
          pt => pt,
          ct => ct,
			 round => round,
			 sum => sum
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

      w <= '1';
		key <= x"31323334353637383837363534333231";
		
		wait for clk_period;
		
		en <= '1';
		w <= '0';
		pt <= x"31323334353637383837363534333231";

      wait;
   end process;

END;
