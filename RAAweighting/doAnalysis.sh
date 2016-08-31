#!/bin/bash
#source clean.sh
CENTPbPbMIN=0
CENTPbPbMAX=100
#Central point of the analysis

DOANALYSISPbPb_MCSTUDY=1
DOANALYSISPbPb_MCSTUDY_NEW=1
DOPNNP=1

## PbPb MONTE CARLO
INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_pthatweight_JingBDT.root"
#INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_Bpt0_Pthat5_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root"

LABELPbPb="PbPb"
ISDOWEIGHTPbPb=1
SELGENPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
SELGENPbPbACCPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1&&TMath::Abs(Gy)<2.4&& ((TMath::Abs(Gmu1eta)<1.2 && Gmu1pt>3.5) || (TMath::Abs(Gmu1eta)>1.2 && TMath::Abs(Gmu1eta)<2.1 && Gmu1pt>(5.77-1.8*TMath::Abs(Gmu1eta))) || (TMath::Abs(Gmu1eta)>2.1 && TMath::Abs(Gmu1eta)<2.4 && Gmu1pt>1.8)) && ((TMath::Abs(Gmu2eta)<1.2 && Gmu2pt>3.5) || (TMath::Abs(Gmu2eta)>1.2 && TMath::Abs(Gmu2eta)<2.1 && Gmu2pt>(5.77-1.8*TMath::Abs(Gmu2eta))) || (TMath::Abs(Gmu2eta)>2.1 && TMath::Abs(Gmu2eta)<2.4 && Gmu2pt>1.8)) && Gtk1pt>0.5 && TMath::Abs(Gtk1eta)<2.4"
RECOONLYPbPb="1"
#GA
CUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.8 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5)) && ((Bpt>7 && Bpt<10 && BDT>0.08)|| (Bpt>10 && Bpt<15 && Btrk1Pt>1.38 && Bchi2cl>0.0796 && (BsvpvDistance/BsvpvDisErr)>7.48 && cos(Bdtheta)>-0.415 && abs(Btrk1Eta)<2.16) || (Bpt>15 && Bpt<20 && Btrk1Pt>1.7 && Bchi2cl>0.0521 && (BsvpvDistance/BsvpvDisErr)>4.96 && cos(Bdtheta)>-0.76 && abs(Btrk1Eta)<2.3) || (Bpt>20 && Bpt<30 && Btrk1Pt>2.02 && Bchi2cl>0.00859 && (BsvpvDistance/BsvpvDisErr)>2.03 && cos(Bdtheta)>-0.349 && abs(Btrk1Eta)<2.36) || (Bpt>30 && Bpt<50 && Btrk1Pt>1.94 && Bchi2cl>0.0166 && (BsvpvDistance/BsvpvDisErr)>4.25 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.33))"

TRGPbPb="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
TRGPbPbMC="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
#TRGPbPbMC="(1)"
OUTPUTFILEMCSTUDYPbPb="ROOTfiles/MCstudiesPbPb.root"
OUTPUTFILEMCSTUDYPbPbNew="ROOTfiles/MCstudiesPbPbNew.root"

if [ $DOANALYSISPbPb_MCSTUDY -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe 
./MCefficiency.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb" "$SELGENPbPbACCPbPb"  "$RECOONLYPbPb" "$CUTPbPb&&$TRGPbPbMC"  "$LABELPbPb" "$OUTPUTFILEMCSTUDYPbPb" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiency.exe
fi

if [ $DOANALYSISPbPb_MCSTUDY_NEW -eq 1 ]; then      
g++ MCefficiencyNew.C $(root-config --cflags --libs) -g -o MCefficiencyNew.exe 
./MCefficiencyNew.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb" "$SELGENPbPbACCPbPb"  "$RECOONLYPbPb" "$CUTPbPb&&$TRGPbPbMC"  "$LABELPbPb" "$OUTPUTFILEMCSTUDYPbPbNew" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiencyNew.exe
fi

if [ $DOPNNP -eq 1 ]; then      
g++ plotPnNP.C $(root-config --cflags --libs) -g -o plotPnNP.exe 
./plotPnNP.exe "$LABELPbPb" "$OUTPUTFILEMCSTUDYPbPb" "$OUTPUTFILEMCSTUDYPbPbNew" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm plotPnNP.exe
fi