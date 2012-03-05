set terminal postscript color
set pointsize 0.48
set output 'tmpplot.ps'
set title "no-title                                                                       MAD-X 4.01.34  15/11/10 16.40.15"
set xlabel 's'
set ylabel 'e'
plot 'track.obs0001.p0001' using 9:10 title 'particle 1' with points 1 , \
     'track.obs0001.p0002' using 9:10 title 'particle 2' with points 2 , \
     'track.obs0001.p0003' using 9:10 title 'particle 3' with points 3 , \
     'track.obs0001.p0004' using 9:10 title 'particle 4' with points 4 , \
     'track.obs0001.p0005' using 9:10 title 'particle 5' with points 5 , \
     'track.obs0001.p0006' using 9:10 title 'particle 6' with points 6 