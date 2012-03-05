R. Tomas                                        November the 30th, 2005


            Minimal EMIT example for a light source
            ********************************************

Radiation is set to true. There is one RF cavity. The emittance
is firstly computed with the 1.4m long RBENDS, giving
a wrong result. The RBENDS are splitted into many
SBENDS (with the proper pole angles) in order to allow the
EMIT module to account for the variation of the lattice
functions inside the RBENDS, giving the correct result.
