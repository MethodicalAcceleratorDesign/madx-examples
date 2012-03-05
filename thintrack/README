# ############################################################
# THINTRACK test files
# 
# A.Koschik (originally from A.Verdier)
# ------------------------------------------------------------
#
# WARNING: some gnuplot commands are provided to help the tests. If they
#          are used for another MADX version, the gnuplot command has to
#          be checked first if the results are inconsistent.
#
# 2006-03-09: Bug in aperture check of type rectellipse found
#             trrun.F fixe and examples adopted accordingly
# 2006-03-06: Renamed original files from A.Verdier
#             plus some cleaning 
#
# ############################################################


tstTrack_ap_rectellipse: test of aperture rectellipse. 
-----------------------------------------
   execution   : madx < tstTrack_ap_rectellipse.madx
   information : Inspect output out_tstTrack_ap_rectellipse.ps and 
                 compare to reference
   reference   : refout_tstTrack_ap_rectellipse.ps 


tstTrack_ap_lhcscreen: test of aperture lhcscreen. 
-----------------------------------------
   execution   : madx < tstTrack_ap_lhcscreen.madx
   information : Output files are generated 
                 - out_tstTrack_ap_lhcscreen_d with horizontal 
                   limits and horizontal misalignment
                 - out_tstTrack_ap_lhcscreen_f with vertical limits
                 - out_tstTrack_ap_lhcscreen.ps
   reference   : refout_tstTrack_ap_lhcscreen.ps
   

tstTrack_syn: test of tracking with synchrotron oscillations with FODO
--------------------------------------------------------------------
   execution   : madx < tstTrack_syn.madx
   information : 3 particles are tracked with increasing initial 
                 momenta, from centre of bucket to outside the bucket.
                 3 files are created, which are plotted via
                 gnuplot.
   reference   : refout_tstTrack_syn.ps


tstTrack_matrix: geometric tracking with FODO and matrix 10m long.
-----------------------------------------------------------
   execution   : madx < tstTrack_matrix.madx
   information : Two particles are tracked with different 
                 amplitudes to observe the geometric non-linearity.
                 The particles are also tracked with TWISS to show 
                 the identity of results.
   reference   : refout_tstTrack_matrix.tfs

tstTrack_synchr_LHC: test of tracking with synchrotron oscillations in LHC
-----------------------------------------------------------------------
   execution   : madx < tstTrack_synchr_LHC.madx
   information : 3 particles are tracked with increasing initial 
                 momenta, from centre of bucket to just outside 
                 the bucket (pt=0.001004). The tracking files 
                 created are plotted with gnuplot.
   reference   : refout_tstTrack_synchr_LHC.ps

# ############################################################
# THINTRACK two more test files
# 
# Yipeng SUN (originally from A.Koschik and A.Verdier)
# ------------------------------------------------------------
#
# 2008-10-20: Add new aperture type 'Racetrack', one more example
#              'tstTrack_ap_racetrack.madx'
# 2008-12-20: Add one new subroutine 'trclor' to search for the
#              correct 6-D closed orbit, one more example
#              'tstTrack_6D_orbit_LHC.madx'
#
# ############################################################

tstTrack_ap_racetrack: test of aperture racetrack. 
-----------------------------------------
   execution   : madx < tstTrack_ap_racetrack.madx
   information : Check output out_tstTrack_ap_racetrack.ps and 
                 compare to reference
   reference   : refout_tstTrack_ap_racetrack.ps
   
tstTrack_6D_orbit_LHC: test of 6-D closed orbit search with LHC
--------------------------------------------------------------------
   execution   : madx < tstTrack_6D_orbit_LHC.madx
   information : Find 6-D closed orbit by new subroutine 'trclor',
                 and check it with 10 turns tracking
   reference   : track.obs0001.p0001-6Dorbit
