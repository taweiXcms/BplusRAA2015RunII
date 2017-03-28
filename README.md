# Instructions for pp references
In this repository you can find the code to build the pp reference of the B meson measurements in pp collisions at 5.02 TeV starting from the FONLL calculations. 

The input files .dat were produced using http://www.lpthe.jussieu.fr/~cacciari/fonll/fonllform.html using the following parameters for the calculations:

Collider: LHC(pp, 5.5), Heavy quark: botton ,PDFs: CTEQ6.6

Perturbative order: FONLL, Final state:  B hadron, Further decay: -

Cross section type: dsigma/dpt (or dsigma/dy) uncertainty range from scales and masses

Include PDFs uncertainties: (missing for the moment)

The file fo_pp_Bmeson5_5TeV.dat was produced with the kinematic ranges:

pt min = 2 GeV
pt max = 200 GeV
y min= -2.4
y max= 2.4
Use y:check
npoints=793
