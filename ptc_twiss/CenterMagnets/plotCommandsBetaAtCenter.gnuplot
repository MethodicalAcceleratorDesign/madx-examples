set xrange [0.0:110.0]
set title "beta_11 (beta_x)"
plot  "twiss_ptc_ring" using 2:3 with linespoints title 'ptc_twiss at end', \
"twiss_ptc_ring_centers" using 2:3 with linespoints pointtype 4 title 'ptc_twiss at at center of magnets', \
"twiss_madx_ring" using 2:3 with linespoints title 'twiss samples (middle)'
