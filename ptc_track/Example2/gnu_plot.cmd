set terminal postscript color
set pointsize 0.48
set output 'tmpplot.ps'
set title "no-title                                                                       MAD-X 4.01.29  22/09/10 11.47.11"
set xlabel 'y'
set ylabel 'py'
plot 'track.obs0001.p0001' using 5:6 title 'particle 1' with points 1 , \
     'track.obs0001.p0002' using 5:6 title 'particle 2' with points 2 , \
     'track.obs0001.p0003' using 5:6 title 'particle 3' with points 3 , \
     'track.obs0001.p0004' using 5:6 title 'particle 4' with points 4 , \
     'track.obs0001.p0005' using 5:6 title 'particle 5' with points 5 , \
     'track.obs0001.p0006' using 5:6 title 'particle 6' with points 6 