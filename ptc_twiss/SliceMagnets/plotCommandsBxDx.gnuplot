set xrange [0.0:110.0]
set yrange[0.0:200]
set y2range [0.0:2.5]
set y2tics border # to show the scale on the right
set y2label 'Dispersion (m)'
set ylabel 'Beta (m)'
set ytics nomirror
set title "beta_11 (beta_x) and Disp_1 (D_x)"
plot  "twiss_ptc_ring" using 2:3 with linespoints title 'Betax: ptc_twiss at end' axis x1y1, \
"twiss_ptc_ring_slices" using 2:3 with linespoints pointtype 4 title 'Betax: ptc_twiss at inner slices' axis x1y1, \
"twiss_madx_ring" using 2:3 with linespoints title 'Betax: twiss at middle' axis x1y1,\
"twiss_ptc_ring" using 2:7 with linespoints title 'Dx: ptc_twiss at end' axis x1y2, \
"twiss_ptc_ring_slices" using 2:7 with linespoints pointtype 4 title 'Dx: ptc_twiss at inner slices' axis x1y2, \
"twiss_madx_ring" using 2:5 with linespoints title 'Dx: twiss at middle' axis x1y2

