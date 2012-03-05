# GNUPLOT script to plot particle end distribution
# PLOT POUR 10000 PARTICULES / sinon, changer /every ::10055:0::0/

# general settings
set size square;
set xrange[-0.0015:0.0015];
set yrange[-0.0015:0.0015];
set grid;
set xlabel "x [m]";
set ylabel "y [m]";

set terminal postscript enhanced color;
set output "out_tstTrack_ap_lhcscreen.ps"; 
set multiplot

set title "Aperture Test LHCSCREEN (vertical), Real Space X/Y";


# plot data
plot "out_tstTrack_ap_lhcscreen_done" every ::10055:0::0 u 3:5 notitle;

# additional plots
set arrow 1 from  -.000707,-.000707 to   .000707,-.000707  nohead lt -1;
set arrow 2 from  -.000707,.000707  to   .000707,.000707   nohead lt -1;

set samples 300;

plot [-.0015:.0015]  sqrt(.001*.001-x*x) notitle w l lt -1;
plot [-.0015:.0015] -sqrt(.001*.001-x*x) notitle w l lt -1;

#unset multiplot;
replot;
set multiplot;
set noarrow;

set title "Aperture Test LHC beam screen (horizontal + alignment error), Real Space X/Y";


# plot data
plot "out_tstTrack_ap_lhcscreen_fone" every ::10055:0::0 u 3:5 notitle;

# additional plots
set arrow 1 from -.000707,-.000707 to  -.000707,.000707  nohead lt 2;
set arrow 2 from  .000707,-.000707 to   .000707,.000707  nohead lt 2;
set arrow 3 from -.000507,-.000707 to  -.000507,.000707  nohead lt -1;
set arrow 4 from  .000907,-.000707 to   .000907,.000707  nohead lt -1;

set samples 300;

plot [-.0015:.0015]  sqrt(.001*.001-x*x) notitle w l lt 2;
plot [-.0015:.0015] -sqrt(.001*.001-x*x) notitle w l lt 2;
plot [-.0015:.0015]  sqrt(.001*.001-(x-0.0002)*(x-0.0002)) notitle w l lt -1;
plot [-.0015:.0015] -sqrt(.001*.001-(x-0.0002)*(x-0.0002)) notitle w l lt -1;
