#!/bin/bash
#source clean.sh

VariableOption=$1

INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5_BDT.root" 
INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp_BDT.root"

OUTPUTFILEPP_NP="ROOTfiles/NPFitPP.root"
NPFIT_PP="3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+7.18255e1*TMath::Erf(-(x-5.14397)/6.43194e-2) + 7.18255e1"

if [ $VariableOption -eq 0 ]; then      

cp config/parametersVariablesDecay.h parameters.h 

VARIABLE="BsvpvDistance/BsvpvDisErr";
VARIABLEPLOT="d_{xy}/#sigma(d_{xy})"
VARIABLENAME="decay"
OUTPUTFILEPPVariablePromptMC="MCCutVariablePromptDecay.root"
OUTPUTFILEPPVariableData="DataCutVariableDecay.root"
LABELPPData="DecayData"
LABELPPMC="DecayMC"
LIMITLOW=3
LIMITHIGH=12
fi

if [ $VariableOption -eq 1 ]; then      

cp config/parametersVariablesCosTheta.h parameters.h 

VARIABLE="cos(Bdtheta) "
VARIABLEPLOT="cosine (#theta)"
VARIABLENAME="cosine"
OUTPUTFILEPPVariablePromptMC="MCCutVariablePromptCosine.root"
OUTPUTFILEPPVariableData="DataCutVariableCosine.root"
LABELPPData="CosineData"
LABELPPMC="CosineMC"
LIMITLOW=0.99
LIMITHIGH=1
fi

if [ $VariableOption -eq 2 ]; then      

cp config/parametersVariablesChi2.h parameters.h 

VARIABLE="Bchi2cl"
VARIABLEPLOT="chi2"
VARIABLENAME="chi2"
OUTPUTFILEPPVariablePromptMC="MCCutVariablePromptChi2.root"
OUTPUTFILEPPVariableData="DataCutVariableChi2.root"
LABELPPData="Chi2Data"
LABELPPMC="Chi2MC"
LIMITLOW=0.
LIMITHIGH=1
fi

if [ $VariableOption -eq 3 ]; then      

cp config/parametersVariablesBDT.h parameters.h 

VARIABLE="BDT"
VARIABLEPLOT="BDT"
VARIABLENAME="BDT"
OUTPUTFILEPPVariablePromptMC="MCCutVariableBDT.root"
OUTPUTFILEPPVariableData="DataCutVariableBDT.root"
LABELPPData="BDTData"
LABELPPMC="BDTMC"
LIMITLOW=-1
LIMITHIGH=2
fi

if [ $VariableOption -eq 4 ]; then      

cp config/parametersVariablesrapidity.h parameters.h 

VARIABLE="By"
VARIABLEPLOT="rapidity"
VARIABLENAME="rapidity"
OUTPUTFILEPPVariablePromptMC="MCCutVariablerapidity.root"
OUTPUTFILEPPVariableData="DataCutVariablerapidity.root"
LABELPPData="rapidityData"
LABELPPMC="rapidityTMC"
LIMITLOW=-1.5
LIMITHIGH=1.5
fi


LUMIPP=1
ISMCPP=0
ISMCPPData=0
ISDOWEIGHTPP=0
SELGENPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
SELGENPPACCPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4."
TRGPPMC="(1)"
TRGPPData="HLT_HIL1DoubleMu0_v1"


g++ fitBvariable.C $(root-config --cflags --libs) -g -o fitBvariable.exe 
#./fitBvariable.exe "$VARIABLE" "$VARIABLEPLOT" 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPPData" "$CUTPP"   "$SELGENPP"   "$ISMCPP"          1   "$ISDOWEIGHTPP"   "$LABELPPData"  "$OUTPUTFILEPPVariableData" "$OUTPUTFILEPP_NP"
#./fitBvariable.exe "$VARIABLE" "$VARIABLEPLOT" 0 "$INPUTMCPP"      "$INPUTMCPP"  "$TRGPPMC"   "$CUTPP"   "$SELGENPP"   "$ISMCPPData"   1   "$ISDOWEIGHTPP"   "$LABELPPMC"  "$OUTPUTFILEPPVariablePromptMC" "$OUTPUTFILEPP_NP"
./fitBvariable.exe "$VARIABLE" "$VARIABLEPLOT" 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPPData" "$CUTPP"   "$SELGENPP"   "$ISMCPP"          1   "$ISDOWEIGHTPP"   "$LABELPPData"  "$OUTPUTFILEPPVariableData" "$NPFIT_PP"
./fitBvariable.exe "$VARIABLE" "$VARIABLEPLOT" 0 "$INPUTMCPP"      "$INPUTMCPP"  "$TRGPPMC"   "$CUTPP"   "$SELGENPP"   "$ISMCPPData"   1   "$ISDOWEIGHTPP"   "$LABELPPMC"  "$OUTPUTFILEPPVariablePromptMC" "$NPFIT_PP"

g++ compareMCdataVariables.C $(root-config --cflags --libs) -g -o compareMCdataVariables.exe 
./compareMCdataVariables.exe "$OUTPUTFILEPPVariablePromptMC" "$OUTPUTFILEPPVariableData" "$VARIABLEPLOT" "$VARIABLENAME" "$LIMITLOW" "$LIMITHIGH"
