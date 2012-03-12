Example 5:   The turn-by-turn multiturn tracking with 
             the data output at several observation points

   Input in standard coordinates; 3 particles;
   icase=4; closed_orbit; turns=1000; 
   Output in standard_coordinates 
             
Initial files for running the example 5 are
    Readme                - this file
    fv9_5.madx            - madX input data file
    fv9.opt               - madX input data file
    fv9.seq               - madX input data file
    Makefile_5            - command file 
    *.plt                 - scripts for running GNUPLOT

The example can be run with commands ("Makefile_5"):
=============================================================
# Run Example No. 5 with "madxp" 
#     using the input "fv9_5.madx" and output "fv9_5.out" 
madxp < fv9_5.madx > fv9_5.out

# Plot with GNUPLOT4.0 at different observation points
gnuplot make_plots5_obs1.plt
............................
gnuplot make_plots5_obs4.plt

# clean temp files
rm empty.ps
==============================================================

The resulting files are

    fv9_5.out  - the output text-file of madx
 
    track.obs000m.p000n - output data-table for the n-th particle 
                          at the m-th observation (m=1 at START)
    fv9_5_START_obs1.ps - phase spaces at START
    OBSm_XX1.eps        - X-X' phase spaces plotted by GNUPLOT
    OBSm_YY1.eps        - Y-Y' phase spaces plotted by GNUPLOT 


    <observ1>...<observ4> - 
                        - directories with results at 
                          the corresponding observation points. 
                          PDF-images derived from the corresponding 
                          postscript files are also posted there. 