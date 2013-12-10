#!/usr/bin/perl

use strict;
use Math::Trig;

my @lut;

print "\ttype lut_t is array(0 to 254) of std_logic_vector(7 downto 0);\n";
print "\tconstant lut : lut_t := (\n";

for($a = 0; $a < 256; $a++){
	my $deg = (360/256) * $a;

	my $sin = (sin($deg * 0.0174) + 1) * (256/2);
	
	if($a == 0){
		print "\t\t";
	}elsif($a % 8 == 0){
		print "\n\t\t";
	}

	printf("\"%08b\", ",$sin); 
}

print "\n\t);\n";
