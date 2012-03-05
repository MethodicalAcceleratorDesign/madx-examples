# GNUPLOT script to plot particle end distribution
# PLOT POUR 10000 PARTICULES / sinon, changer /every ::10055:0::0/

# general settings
set size square;
#set xrange[-0.0015:0.0015];
#set yrange[-0.0015:0.0015];
set grid;
set xlabel "T [m]";
set ylabel "PT [1]";

set terminal postscript enhanced color;
set output "out_tstTrack_syn.ps"; 
#set multiplot

set title "Synchrotron Oscillation Test";


# plot data
plot "track.obs0002.p0001" every ::7:0::0 u 7:8 notitle  w p 1,\
     "track.obs0002.p0002" every ::7:0::0 u 7:8 notitle  w p 2,\
     "track.obs0002.p0003" every ::7:0::0 u 7:8 notitle  w p 3;


# additional plots
#set arrow 1 from  -.000707,-.000707 to   .000707,-.000707  nohead lt -1;
#set arrow 2 from  -.000707,.000707  to   .000707,.000707   nohead lt -1;

#set samples 300;

#plot [-.0015:.0015]  sqrt(.001*.001-x*x) notitle w l lt -1;
#plot [-.0015:.0015] -sqrt(.001*.001-x*x) notitle w l lt -1;

#unset multiplot;
#replot;
#set multiplot;
#set noarrow;
