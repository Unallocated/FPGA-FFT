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

my $max = 0;
my %values;

for($a = 0; $a < 256; $a++){
	my $real = $reals{$a};
	my ($one, $two) = $real =~ /^(\d{8})(\d+)/;
	
	if($one =~ /^1/){
		$one =~ s/0/a/g;
		$one =~ s/1/0/g;
		$one =~ s/a/1/g;

		$real =~ s/0/a/g;
		$real =~ s/1/0/g;
		$real =~ s/a/1/g;
	}

	if($two =~ /^1/){
		$two =~ s/0/a/g;
		$two =~ s/1/0/g;
		$two =~ s/a/1/g;
	}
	
	$real = oct("0b".$real);
	$values{$a} = $real;
	if($real > $max){
		$max = $real;
	}
	#printf("%05d ", $real);
	#print '=' x int((log($real+1)/log(10)) * 10);
	#print ">\n";
	#print "$a => Real: $real One: $one  Two: $two\n";
}

for($a = 0; $a < 256; $a++){
	printf("%03d %04d ", $a, $values{$a});
	print '=' x (($values{$a} / $max) * 128);
	print "\n";
}
