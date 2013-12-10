-- TestBench Template 

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
use ieee.std_logic_unsigned.conv_integer;

use std.textio.all;
use ieee.std_logic_textio.all; -- if you're saving this type of signal

ENTITY testbench IS
END testbench;

ARCHITECTURE behavior OF testbench IS

	-- Component Declaration
	COMPONENT fft
		PORT (
		    clk : IN STD_LOGIC;
		    start : IN STD_LOGIC;
		    xn_re : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
		    xn_im : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
		    fwd_inv : IN STD_LOGIC;
		    fwd_inv_we : IN STD_LOGIC;
		    rfd : OUT STD_LOGIC;
		    xn_index : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		    busy : OUT STD_LOGIC;
		    edone : OUT STD_LOGIC;
		    done : OUT STD_LOGIC;
		    dv : OUT STD_LOGIC;
		    xk_index : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
		    xk_re : OUT STD_LOGIC_VECTOR(16 DOWNTO 0);
		    xk_im : OUT STD_LOGIC_VECTOR(16 DOWNTO 0)
		  );
	END COMPONENT;
	
	constant clk_period : time := 10ns;

	signal clk : std_logic := '0';
	
	signal start : std_logic := '0';
	signal fwd_inv : std_logic := '0';
	signal fwd_inv_we : std_logic := '0';
	signal rfd : std_logic := '0';
	signal busy : std_logic := '0';
	signal edone : std_logic := '0';
	signal done : std_logic := '0';
	signal dv : std_logic := '0';
	signal xn_re : std_logic_vector(7 downto 0) := (others => '0');
	signal xn_im : std_logic_vector(7 downto 0) := (others => '0');
	signal xn_index : std_logic_vector(7 downto 0) := (others => '0');
	signal xk_index : std_logic_vector(7 downto 0) := (others => '0');
	signal xk_re : std_logic_vector(16 downto 0) := (others => '0');
	signal xk_im : std_logic_vector(16 downto 0) := (others => '0');

	type lut_t is array(0 to 255) of std_logic_vector(7 downto 0);
	constant lut : lut_t := (
		"10000000", "10000011", "10000110", "10001001", "10001100", "10001111", "10010010", "10010101", 
		"10011000", "10011011", "10011111", "10100010", "10100101", "10101000", "10101010", "10101101", 
		"10110000", "10110011", "10110110", "10111001", "10111100", "10111110", "11000001", "11000100", 
		"11000110", "11001001", "11001100", "11001110", "11010000", "11010011", "11010101", "11011000", 
		"11011010", "11011100", "11011110", "11100000", "11100010", "11100100", "11100110", "11101000", 
		"11101010", "11101011", "11101101", "11101111", "11110000", "11110010", "11110011", "11110100", 
		"11110110", "11110111", "11111000", "11111001", "11111010", "11111011", "11111100", "11111100", 
		"11111101", "11111110", "11111110", "11111110", "11111111", "11111111", "11111111", "11111111", 
		"11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "11111110", "11111110", 
		"11111101", "11111101", "11111100", "11111011", "11111010", "11111001", "11111000", "11110111", 
		"11110110", "11110101", "11110100", "11110010", "11110001", "11101111", "11101110", "11101100", 
		"11101010", "11101001", "11100111", "11100101", "11100011", "11100001", "11011111", "11011101", 
		"11011011", "11011000", "11010110", "11010100", "11010001", "11001111", "11001101", "11001010", 
		"11000111", "11000101", "11000010", "10111111", "10111101", "10111010", "10110111", "10110100", 
		"10110001", "10101111", "10101100", "10101001", "10100110", "10100011", "10100000", "10011101", 
		"10011010", "10010111", "10010011", "10010000", "10001101", "10001010", "10000111", "10000100", 
		"10000001", "01111110", "01111010", "01110111", "01110100", "01110001", "01101110", "01101011", 
		"01101000", "01100101", "01100010", "01011111", "01011100", "01011001", "01010110", "01010011", 
		"01010000", "01001101", "01001010", "01000111", "01000100", "01000010", "00111111", "00111100", 
		"00111010", "00110111", "00110100", "00110010", "00101111", "00101101", "00101011", "00101000", 
		"00100110", "00100100", "00100010", "00100000", "00011110", "00011100", "00011010", "00011000", 
		"00010110", "00010100", "00010011", "00010001", "00001111", "00001110", "00001101", "00001011", 
		"00001010", "00001001", "00001000", "00000111", "00000110", "00000101", "00000100", "00000011", 
		"00000010", "00000010", "00000001", "00000001", "00000000", "00000000", "00000000", "00000000", 
		"00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000001", "00000001", 
		"00000010", "00000010", "00000011", "00000100", "00000100", "00000101", "00000110", "00000111", 
		"00001000", "00001010", "00001011", "00001100", "00001110", "00001111", "00010001", "00010010", 
		"00010100", "00010110", "00010111", "00011001", "00011011", "00011101", "00011111", "00100001", 
		"00100011", "00100110", "00101000", "00101010", "00101101", "00101111", "00110001", "00110100", 
		"00110111", "00111001", "00111100", "00111110", "01000001", "01000100", "01000111", "01001010", 
		"01001100", "01001111", "01010010", "01010101", "01011000", "01011011", "01011110", "01100001", 
		"01100100", "01100111", "01101010", "01101101", "01110001", "01110100", "01110111", "01111010"
	);

	file output : text open write_mode is "/tmp/test";

BEGIN

	-- Component Instantiation
	uut : fft
		PORT MAP(
			clk          => clk,
			start        => start,
			xn_re        => xn_re,
			xn_im        => xn_im,
			fwd_inv      => fwd_inv,
			fwd_inv_we   => fwd_inv_we,
			rfd          => rfd,
			xn_index     => xn_index,
			busy         => busy,
			edone        => edone,
			done         => done,
			dv           => dv,
			xk_index     => xk_index,
			xk_re        => xk_re,
			xk_im        => xk_im
		);

	clk_gen : process
	begin
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
		clk <= '0';
	end process;
	xn_re <= lut(conv_integer(xn_index));
	
	
	process(clk)
		variable counter : integer range 0 to 255 := 0;
		variable l1 : line;
		
	begin
		if(rising_edge(clk)) then
			if(dv = '1') then
				write(l1, conv_integer(xk_index));
				write(l1, " ");
				write(l1, xk_re);
				write(l1, " ");
				write(l1, xk_im);
				writeline(output, l1);
			end if;
		end if;
	end process;
	
	--  Test Bench Statements
	tb : PROCESS
	BEGIN
		wait for 100 ns;                -- wait until global set/reset completes
		start <= '1';
		wait until done = '1';
		start <= '0';
		wait;                           -- will wait forever
	END PROCESS tb;
--  End Test Bench 

END;
