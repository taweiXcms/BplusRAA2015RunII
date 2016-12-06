#!/bin/bash
#source clean.sh

VariableOption=6

ISPbPb=0
ISDOWEIGHTPP=1

INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp_pthatweight_JingBDT.root" 
INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_pp_20160816_bPt0jpsiPt0tkPt0p5_Bp_JingBDT.root"

##

OUTPUTFILEMC="outfilesVariable/Variable_MC"
OUTPUTFILEData="outfilesVariable/Variable_Data"

NPFIT_PP="3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+7.18255e1*TMath::Erf(-(x-5.14397)/6.43194e-2) + 7.18255e1"

##

if [ $VariableOption -eq 0 ]; then
cp config/parametersVariablesDecay.h parameters.h 
VARIABLE="(BsvpvDistance/BsvpvDisErr)";
VARIABLEPLOT="d_{0}/#sigma(d_{0})"
VARIABLENAME="decay"
fi

if [ $VariableOption -eq 1 ]; then
cp config/parametersVariablesCosTheta.h parameters.h 
VARIABLE="cos(Bdtheta) "
VARIABLEPLOT="cos#theta"
VARIABLENAME="cosine"
fi

if [ $VariableOption -eq 2 ]; then
cp config/parametersVariablesChi2.h parameters.h 
VARIABLE="Bchi2cl"
VARIABLEPLOT="#chi^{2} prob"
VARIABLENAME="chi2"
fi

if [ $VariableOption -eq 3 ]; then
cp config/parametersVariablesRapidity.h parameters.h 
VARIABLE="By"
VARIABLEPLOT="y^{B}"
VARIABLENAME="rapidity"
fi

if [ $VariableOption -eq 4 ]; then
cp config/parametersVariablesTracketa.h parameters.h
VARIABLE="Btrk1Eta"
VARIABLEPLOT="#eta^{track}"
VARIABLENAME="trketa"
fi

if [ $VariableOption -eq 5 ]; then
cp config/parametersVariablesTrackpt.h parameters.h
VARIABLE="Btrk1Pt"
VARIABLEPLOT="p_{T}^{track} (GeV/c)"
VARIABLENAME="trkpt"
fi

if [ $VariableOption -eq 6 ]; then
cp config/parametersVariablesBDT.h parameters.h 
VARIABLE="BDT"
VARIABLEPLOT="BDT"
VARIABLENAME="BDT"
fi


TRGPPMC="(1)"
TRGPPData="HLT_HIL1DoubleMu0_v1"
CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.5 && Bchi2cl>0.005 && (BsvpvDistance/BsvpvDisErr)>4."



g++ fitBvariable.C $(root-config --cflags --libs) -g -o fitBvariable.exe 
./fitBvariable.exe "$VARIABLE" "$VARIABLEPLOT" "$VARIABLENAME" "$ISPbPb" 0 "$INPUTDATAPP" "$INPUTMCPP" "$TRGPPData" "$CUTPP" "$ISDOWEIGHTPP" "$OUTPUTFILEData" "$NPFIT_PP"
./fitBvariable.exe "$VARIABLE" "$VARIABLEPLOT" "$VARIABLENAME" "$ISPbPb" 1 "$INPUTMCPP" "$INPUTMCPP" "$TRGPPMC" "$CUTPP" "$ISDOWEIGHTPP" "$OUTPUTFILEMC" "$NPFIT_PP"

g++ compareMCdataVariables.C $(root-config --cflags --libs) -g -o compareMCdataVariables.exe 
./compareMCdataVariables.exe "$OUTPUTFILEMC" "$OUTPUTFILEData" "$VARIABLEPLOT" "$VARIABLENAME" "$ISPbPb"

rm fitBvariable.exe
rm compareMCdataVariables.exe
rm parameters.h