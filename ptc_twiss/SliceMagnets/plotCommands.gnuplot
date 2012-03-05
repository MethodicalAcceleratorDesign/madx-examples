# plots 4 quadrants
set size 1,1
set multiplot

set size 0.5,0.5
set origin 0,0
set title "beta_11 (beta_x)"
plot  "twiss_ptc_ring.extract.tmp" using 1:2 title 'at center (or end?)', \
"twiss_ptc_ring_slices.extract.tmp" using 1:2 title 'at inner slices'

#plot  "twiss_ptc_ring.extract.tmp" using 1:2

set origin 0.5,0
set size 0.5,0.5
set title "beta_22 (beta_y)"
plot  "twiss_ptc_ring.extract.tmp" using 1:5 title 'at center (or end?)', \
"twiss_ptc_ring_slices.extract.tmp" using 1:5 title 'at inner slices'

set origin 0,0.5
set size 0.5,0.5
set title "disp1"
plot  "twiss_ptc_ring.extract.tmp" using 1:6 title 'at center (or end?)', \
"twiss_ptc_ring_slices.extract.tmp" using 1:6 title 'at inner slices'

set origin 0.5,0.5
set size 0.5,0.5
set title "disp3"
plot  "twiss_ptc_ring.extract.tmp" using 1:7 title 'at center (or end?)', \
"twiss_ptc_ring_slices.extract.tmp" using 1:7 title 'at inner slices'
