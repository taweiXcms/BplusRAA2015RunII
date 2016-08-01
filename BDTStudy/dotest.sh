#!/bin/bash
##void test(char *INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_pthatweight.root",char *OUTFILE = "BDT_pp_MC.root")

INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt15p0_Pthat15.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt15p0_Pthat15__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt30p0_Pthat30.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt30p0_Pthat30__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt50p0_Pthat50.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt50p0_Pthat50__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt5p0_Pthat5__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_pthatweight.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_pthatweight__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_PbPb_20160607_bPt5jpsiPt0tkPt0p8_Bp.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_PbPb_20160607_bPt5jpsiPt0tkPt0p8_Bp__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe

INFNAME="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe

INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe

INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt15p0_Pthat15.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt15p0_Pthat15__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt30p0_Pthat30.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt30p0_Pthat30__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe

INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt50p0_Pthat50.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt50p0_Pthat50__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe

INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe


INFNAME="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_pthatweight.root"
OUTFILE="BDT_Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_pthatweight__data_yjlee_bmeson_bdt.root"

g++ test.C $(root-config --cflags --libs) -g -o test.exe
./test.exe "$INFNAME" "$OUTFILE"
rm test.exe

#INFNAME=""
#OUTFILE=""

#g++ test.C $(root-config --cflags --libs) -g -o test.exe
#./test.exe "$INFNAME" "$OUTFILE"
#rm test.exe
