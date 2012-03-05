# GNUPLOT script to plot particle end distribution
# PLOT POUR 10000 PARTICULES / sinon, changer /every ::10055:0::0/

# general settings
set xrange[-0.002:0.002];
set yrange[-0.002:0.002];
set grid;
set xlabel "x [m]";
set ylabel "y [m]";
set title "Aperture Test COLLIMATOR, Real Space X/Y";

set terminal postscript enhanced color;
set output "out_tstTrack_ap_collimator.ps"; 
set multiplot

# plot data
plot "out_tstTrack_ap_collimatorone" every ::10055:0::0 u 3:5 notitle;

# additional plots
set arrow 1 from  .00175,-.00155 to  .00175,.00155  nohead lt -1;
set arrow 2 from -.00175,-.00155 to -.00175,.00155  nohead lt -1;
set arrow 3 from -.00175,.00155  to  .00175,.00155  nohead lt -1;
set arrow 4 from -.00175,-.00155 to  .00175,-.00155 nohead lt -1;

plot  .0017*sqrt(1-x*x/.002/.002) notitle w l lt -1;
plot -.0017*sqrt(1-x*x/.002/.002) notitle w l lt -1;

#unset multiplot;
