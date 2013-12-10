#!/usr/bin/perl

use strict;

my %reals;
my %imags;

while(<>){
	s/[\r\n]+//g;
	my ($pos, $real, $imag) = split(" ");
	$reals{$pos} = $real;
	$imags{$pos} = $imag;
}

for($a = 0; $a < 256; $a++){
	my $real = $reals{$a};
	my ($one, $two) = $real =~ /^(\d{8})(\d+)/;
	if($one =~ /^1/){
		$one =~ s/0/a/g;
		$one =~ s/1/0/g;
		$one =~ s/a/1/g;
	}
	if($two =~ /^1/){
		$two =~ s/0/a/g;
		$two =~ s/1/0/g;
		$two =~ s/a/1/g;
	}
		
	print "One: $one  Two: $two\n";
}
