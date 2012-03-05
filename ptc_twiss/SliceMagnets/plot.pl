#!/usr/bin/perl

# plot s,beta at two resolutions: magnet (coarse-level), and slice (fine-level)


open INFILE1, "<twiss_ptc_ring";
open OUTFILE1, ">twiss_ptc_ring.extract.tmp";

while(<INFILE1>){
    my $line = $_;
    if ($line =~  /^@.+/){ next; } # header
    if ($line =~ /^\s?\"[\w\._\d\$]+\"[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+).*/){
	print OUTFILE1 "$1 $2 $3 $4 $5 $6 $7\n"; # s betax beta12 beta21 betay disp1 disp3
    }
}

close INFILE1;
close OUTFILE1;

open INFILE2, "<twiss_ptc_ring_slices";
open OUTFILE2, ">twiss_ptc_ring_slices.extract.tmp";
while(<INFILE2>){
    my $line = $_;
    if ($line =~  /^@.+/){ next; } # header
    if ($line =~ /^\s?\"[\w\._\d\$]+\"[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+(\-?[\d\.]+)[\s\t]+([\d\.]+).*/){
	print OUTFILE2 "$1 $2 $3 $4 $5 $6 $7\n"; # s betax beta12 beta21 betay disp1 disp3
    }
}
close INFILE2;
close OUTFILE2;

# now invoke gnuplot
`gnuplot -persist plotCommands.gnuplot`;

# clean-up
`rm ./twiss_ptc_ring.extract.tmp`;
`rm ./twiss_ptc_ring_slices.extract.tmp`;
