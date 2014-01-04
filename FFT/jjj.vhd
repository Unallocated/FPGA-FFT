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
		"00000000", "00111111", "00000000", "11000000", "11111110", "00111111", "00000001", "11000000", 
		"11111101", "00111111", "00000011", "11000000", "11111100", "00111111", "00000100", "11000000", 
		"11111011", "00111111", "00000101", "11000000", "11111001", "00111111", "00000110", "11000000", 
		"11111000", "00111111", "00000111", "11000000", "11110111", "00111111", "00001001", "11000000", 
		"11110110", "00111111", "00001010", "11000000", "11110101", "00111110", "00001011", "11000001", 
		"11110011", "00111110", "00001100", "11000001", "11110010", "00111110", "00001110", "11000001", 
		"11110001", "00111110", "00001111", "11000001", "11110000", "00111101", "00010000", "11000010", 
		"11101111", "00111101", "00010001", "11000010", "11101101", "00111101", "00010010", "11000010", 
		"11101100", "00111100", "00010011", "11000011", "11101011", "00111100", "00010101", "11000011", 
		"11101010", "00111100", "00010110", "11000100", "11101001", "00111011", "00010111", "11000100", 
		"11101000", "00111011", "00011000", "11000101", "11100110", "00111010", "00011001", "11000101", 
		"11100101", "00111010", "00011010", "11000101", "11100100", "00111001", "00011011", "11000110", 
		"11100011", "00111001", "00011100", "11000111", "11100010", "00111000", "00011110", "11000111", 
		"11100001", "00111000", "00011111", "11001000", "11100000", "00110111", "00100000", "11001000", 
		"11011111", "00110110", "00100001", "11001001", "11011110", "00110110", "00100010", "11001010", 
		"11011101", "00110101", "00100011", "11001010", "11011100", "00110100", "00100100", "11001011", 
		"11011011", "00110100", "00100101", "11001100", "11011010", "00110011", "00100110", "11001100", 
		"11011001", "00110010", "00100111", "11001101", "11011000", "00110001", "00101000", "11001110", 
		"11010111", "00110001", "00101001", "11001111", "11010110", "00110000", "00101010", "11010000", 
		"11010101", "00101111", "00101011", "11010000", "11010100", "00101110", "00101011", "11010001", 
		"11010011", "00101101", "00101100", "11010010", "11010010", "00101100", "00101101", "11010011", 
		"11010001", "00101100", "00101110", "11010100", "11010000", "00101011", "00101111", "11010101", 
		"11010000", "00101010", "00110000", "11010110", "11001111", "00101001", "00110001", "11010111", 
		"11001110", "00101000", "00110001", "11011000", "11001101", "00100111", "00110010", "11011001", 
		"11001101", "00100110", "00110011", "11011010", "11001100", "00100101", "00110100", "11011011", 
		"11001011", "00100100", "00110100", "11011100", "11001010", "00100011", "00110101", "11011101", 
		"11001010", "00100010", "00110110", "11011110", "11001001", "00100001", "00110110", "11011111", 
		"11001000", "00100000", "00110111", "11100000", "11001000", "00011111", "00110111", "11100001", 
		"11000111", "00011110", "00111000", "11100010", "11000111", "00011101", "00111001", "11100011", 
		"11000110", "00011100", "00111001", "11100100", "11000110", "00011010", "00111010", "11100101", 
		"11000101", "00011001", "00111010", "11100110", "11000101", "00011000", "00111011", "11100111", 
		"11000100", "00010111", "00111011", "11101001", "11000100", "00010110", "00111100", "11101010"
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
