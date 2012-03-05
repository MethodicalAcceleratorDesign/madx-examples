16.07.2003
aperture values in V6.4.aperture.seq converted from mm to metres.



19.03.2003
added missing alice + lhcb magnets + compensators in some thin strength files



26.03.2003
APERTURE and APERTYPE values added (by hand) in new sequence file
"V6.4.aperture.seq", based on JBJ's tables


06.02.2003
Defined K0 values of all dipoles inside sequence file as being equal to ANGLE
(presently not used in MAD-X calculations)



02.02.2003
Added sequence and strength files for V6.4 with Q3 moved by 0.3 m towards IP
(directory 'Q3_moved')



23.01.2003
Added Totem and Alignment strength files for IR5, Beam 1  (matching by A.V.)



17.01.2003

All strength files (THICK and THIN) have been updated.  The files have been
cleaned up, multiple entries removed and obsolete parameters suppressed.

The crossing angles and separation bumps have been rematched with tighter
tolerance values, and a few polarity errors were corrected.

THICK and THIN files were created for the following beta* configurations:

   configuration      IP1        IP2        IP5        IP8         name
   ______________________________________________________________________

   injection          18.        10.        18.        10.         .inj

   nominal            0.5        10.        0.5        10.         .coll

   Pb collision       18.        0.5        0.5        10.         .ions

   early collision    0.5        10.        0.5        1.0         .ecol

   low-beta           0.5        0.5        0.5        1.0         .lowb




17.10.2002
Status of links before the changes of 17 Jan 2003  9:27
in directory /afs/cern.ch/eng/lhc/optics/V6.4 :

lrwxr-xr-x   1 riss     si             34 Jan 14 15:08 V6.4.thin.lowb.str -> archives/V6.4.thin.lowb.str.140103
lrwxr-xr-x   1 riss     si             34 Jan 14 15:08 V6.4.thin.ecol.str -> archives/V6.4.thin.ecol.str.140103
lrwxr-xr-x   1 riss     si             34 Jan 14 15:07 V6.4.thin.ions.str -> archives/V6.4.thin.ions.str.140103
lrwxr-xr-x   1 riss     si             34 Jan 14 15:07 V6.4.thin.coll.str -> archives/V6.4.thin.coll.str.140103
lrwxr-xr-x   1 riss     si             33 Jan 14 15:06 V6.4.thin.inj.str -> archives/V6.4.thin.inj.str.140103
lrwxr-xr-x   1 riss     si             28 Jan 13 09:59 V6.4.inj.str -> archives/V6.4.inj.str.130103
lrwxr-xr-x   1 riss     si             29 Jan 10 16:31 V6.4.coll.str -> archives/V6.4.coll.str.100103
lrwxr-xr-x   1 riss     si             24 Nov 15 14:53 V6.4.seq -> archives/V6.4.seq.241002
lrwxr-xr-x   1 riss     si             29 Nov 15 14:53 V6.4.thin.col.str -> archives/V6.4.thin.col.120902
-rwxrwxrwx   1 riss     si           3852 Oct 23 17:23 D1-D4_lead_return_ends



24.10.2002
Status of links before the CLEAN-UP of 24 Oct 2002  9:27
in directory /afs/cern.ch/eng/lhc/optics/V6.4 :

drwxr-xr-x   2 riss     si           4096 Oct 23 18:17 archives
drwxr-xr-x   6 riss     si           2048 Oct 23 11:39 .
drwxr-xr-x   2 riss     si           6144 Oct 22 14:33 toolkit
drwxr-xr-x   2 riss     si           2048 Oct 18 15:59 errors
lrwxr-xr-x   1 riss     si             29 Oct 14 16:55 V6.4.thin.inj.str -> archives/V6.4.thin.inj.141002
-rwxrwxrwx   1 riss     si           2242 Oct  8 16:36 README
lrwxr-xr-x   1 riss     si             26 Oct  8 15:24 V6.401.seq -> archives/V6.401.seq.081002
lrwxr-xr-x   1 riss     si             24 Oct  8 15:24 V6.4.seq -> archives/V6.4.seq.081002
-rwxrwxrwx   1 riss     si           3004 Oct  7 16:48 crossingIP1IP5.col.thin.str
drwxrwxrwx  21 root     root         2048 Oct  3 15:20 ..
lrwxr-xr-x   1 riss     si             28 Sep 17 15:05 V6.4.col.str -> archives/V6.4.col.str.170902
lrwxr-xr-x   1 riss     si             28 Sep 17 15:05 V6.4.inj.str -> archives/V6.4.inj.str.170902
lrwxr-xr-x   1 riss     si             29 Sep 12 18:04 V6.4.thin.col.str -> archives/V6.4.thin.col.120902
lrwxr-xr-x   1 riss     si             24 Aug 28 16:32 V6.4.inj -> archives/V6.4.inj.110702
lrwxr-xr-x   1 riss     si             29 Aug 21 10:34 V6.4.thin.inj.110702 -> archives/V6.4.thin.inj.110702
lrwxr-xr-x   1 riss     si             24 Aug 21 10:34 V6.4.inj.110702 -> archives/V6.4.inj.110702
lrwxr-xr-x   1 riss     si             29 Aug 20 17:42 V6.4.thin.inj -> archives/V6.4.thin.inj.030702
lrwxr-xr-x   1 riss     si             24 Aug 20 17:41 V6.4.col -> archives/V6.4.col.190602
-rwxrwxrwx   1 riss     si           7946 Jul 19 16:53 job.V6.4.allerrors.madx
drwxr-xr-x   2 riss     si           2048 Jul  3 15:04 samples
-rw-r--r--   1 riss     si           3494 May 15 16:10 job_sample_V6.4.madx



08.10.2002
The SURVEY module of the MAD-X program has been modified in such a way
that the presence of the SU parameter is no longer required.  The
polarity of the SHARED SEPARATION MAGNETS (i.e. D1) is now
automatically reversed by MAD-X for Beam 2, both in TWISS and in
SURVEY calculations. The multiplication by SU of the ANGLE values of
these magnets has been removed from the sequence files in the AFS
DataBase.


