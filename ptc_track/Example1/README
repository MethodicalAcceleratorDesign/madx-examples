Example 1:
   Input in standard coordinates; 6 particles;
   icase=4; closed_orbit; turns=1000;
   Output in standard_coordinates at beginning of the ring (i.e., at START)


Initial files for running the example 1 are
    Readme                - this file
    fv9_1.madx            - madX input data file
    fv9.opt               - madX input data file
    fv9.seq               - madX input data file
    Makefile_1            - command-file example
    *.plt                 - scripts for running GNUPLOT

The example can be run with commands ("Makefile_1"):
=============================================================
# Run Example No.1 with "madxp" 
#     using the input "fv9_1.madx" and output "fv9_1.out" 
madxp < fv9_1.madx > fv9_1.out

# MAD-X creates plots in ps-files (e.g, fv9_1_START.ps)
# One may use "gv" to see plots 
  
# Similar plots can be drawn with GNUPLOT4.0
gnuplot make_plots1.plt

# clean temp files
rm empty.ps
==============================================================


The resuling files are

    fv9_1.out  - the output text-file of madx
 
    track.obs0001.p000* - output data-table for the n-th particle 
                          at observation point0001 (i.e., at START)
    fv9_1_START.ps       - phase spaces at START plottes by MAD-X
    obs1_XX1.eps        - X-X' phase spaces plotted by GNUPLOT
    obs1_YY1.eps        - Y-Y' phase spaces plotted by GNUPLOT 

    PDF_1 - directory with pdf-images derived from the above postscript files. 