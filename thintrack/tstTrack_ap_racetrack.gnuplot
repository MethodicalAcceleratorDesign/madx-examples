# GNUPLOT script to plot particle end distribution
# PLOT POUR 10000 PARTICULES / sinon, changer /every ::10055:0::0/

# general settings
set size square;
set xrange[-0.004:0.004];
set yrange[-0.004:0.004];
set grid;
set xlabel "x [m]";
set ylabel "y [m]";

set terminal postscript enhanced color solid;
set output "out_tstTrack_ap_racetrack.ps"; 
set multiplot

set title "Aperture Test Racetrack, Real Space X/Y";

set arrow 1 from  .003,-.0015    to  .003,.0015     nohead lt -1 lw 2;
set arrow 2 from -.003,-.0015    to -.003,.0015     nohead lt -1 lw 2;
set arrow 3 from -.003,.0015     to  .003,.0015     nohead lt -1 lw 2;
set arrow 4 from -.003,-.0015    to  .003,-.0015    nohead lt -1 lw 2;
# plot data
plot "out_tstTrack_ap_racetrack_done" every ::10055:0::0 u 3:5 notitle;

set parametric


set size square
plot [0:pi/2] sin(t)*0.001+0.002,cos(t)*0.001+0.0005 lt 3 lw 4 notitle
plot [pi/2:pi] sin(t)*0.001+0.002,cos(t)*0.001-0.0005 lt 3 lw 4 notitle
plot [pi:3*pi/2] sin(t)*0.001-0.002,cos(t)*0.001-0.0005 lt 3 lw 4 notitle
plot [3*pi/2:2*pi] sin(t)*0.001-0.002,cos(t)*0.001+0.0005 lt 3 lw 4 notitle
