#!/usr/bin/perl

use strict;
use Math::Trig;

my $freq = shift || 2;

my @lut;

print "\ttype lut_t is array(0 to 255) of std_logic_vector(7 downto 0);\n";
print "\tconstant lut : lut_t := (\n";

for($a = 0; $a < 256; $a++){
	my $deg = (360/$freq) * $a;

	my $sin = (sin($deg * 0.0174));
	
	if($a == 0){
		print "\t\t";
	}elsif($a % 8 == 0){
		print "\n\t\t";
	}

	my ($whole, $frac) = sprintf("%0.3f", $sin) =~ /^([-\d]+)\.(\d+)/;
	my $a = int(($frac / 1000) * 32);
	my $neg = 0;
	if($whole =~ /-/){
		$neg = 1;
		$whole =~ s/-//g;
		$whole = (int($whole) & 0x03) ^ 0x03;
		$a = $a ^ 0xff;
	}

	print "\"".toSignedFixedPoint($sin)."\", ";
}

sub toSignedFixedPoint {
	my $number = shift;
	my $wholeBits = shift || 1;
	my $fracBits = shift || 6;

	my ($sign, $whole, $frac) = $number =~ /^(-*)(\d+)\.(\d+)/;
	
	$frac = sprintf("%f", ".".$frac);
	$frac *= (2 ** $fracBits);
	$frac = sprintf("%0${fracBits}b", $frac & ((2 ** $fracBits) - 1));

	$whole = sprintf("%0${wholeBits}b", $whole & (( 2 ** $wholeBits) - 1));
	my $combined = sprintf("$whole$frac", $whole, $frac);

	if($sign eq "-"){
		$combined =~ s/1/X/g;
		$combined =~ s/0/1/g;
		$combined =~ s/X/0/g;
		$combined = "1$combined";
	}else{
		$combined = "0$combined";
	}

	return $combined;
}


print "\n\t);\n";
