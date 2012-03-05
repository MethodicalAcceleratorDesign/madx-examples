set terminal postscript color
set pointsize 0.48
set output 'tmpplot.ps'
set title "no-title                                                                       MAD-X 4.01.29  22/09/10 11.58.02"
set xlabel 'y'
set ylabel 'py'
plot 'track.obs0001.p0001' using 5:6 title 'particle 1' with points 1 , \
     'track.obs0001.p0002' using 5:6 title 'particle 2' with points 2 , \
     'track.obs0001.p0003' using 5:6 title 'particle 3' with points 3 