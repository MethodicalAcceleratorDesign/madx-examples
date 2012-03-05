set terminal x11
set border 31 lw 1
set size square
set grid
#
set key right bottom box
set title "{X-X'} - plane"
#set xrange [-0.003:0.003]
#set yrange [-0.003:0.003]
plot   'track.obs0001.p0001' u 3:4 pt 2 ps 0.2
replot 'track.obs0001.p0002' u 3:4 pt 4 ps 0.2
replot 'track.obs0001.p0003' u 3:4 pt 9 ps 0.2
set terminal postscript eps colour
set output "obs1_XX1.eps"
replot
set output "empty.ps"
#
clear
set terminal x11
#
set key right top box
set title "{Y-Y'} - plane"
#set xrange [-0.004:0.004]
#set yrange [-0.004:0.004]
plot   'track.obs0001.p0001' u 5:6 pt 2 ps 0.2
replot 'track.obs0001.p0002' u 5:6 pt 4 ps 0.2
replot 'track.obs0001.p0003' u 5:6 pt 9 ps 0.2
replot
set terminal postscript eps colour
set output "obs1_YY1.eps"
replot
#
set output "empty.ps"
# restore defaults
set terminal x11
quit
