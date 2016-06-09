#!/bin/bash
#source clean.sh
CENTPbPbMIN=0
CENTPbPbMAX=100
#Central point of the analysis

DOANALYSISPP_FONLL=1
DOANALYSISPP_FIT=1
DOANALYSISPP_MCSTUDY=1
DOANALYSISPP_CROSS=1

DOANALYSISPbPb_FONLL=0
DOANALYSISPbPb_FIT=0
DOANALYSISPbPb_CROSS=0
DOANALYSISPbPb_MCSTUDY=0

DOANALYSISPP_MCSTUDYCombine=0
DOANALYSISPbPb_MCSTUDYCombine=0

DORAA=0
DORAAMB=0

#systematic section


## PP MONTE CARLO
INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160606_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root" 
## PP DATA 
INPUTDATAPP="/data/wangj/Data2015/Bntuple/pp/ntB_EvtBase_20160420_BfinderData_pp_20160419_bPt0jpsiPt0tkPt0p5.root"

## PbPb MONTE CARLO
INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160606_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root" 
## PbPb DATA 
INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160605_BfinderData_PbPb_20160406_bPt5jpsiPt0tkPt0p8_BpB0BsX.root"

## ANALYSIS PP TRIGGERED
FONLLDATINPUT="pp_Bplus_5p03TeV_y2p4"
FONLLOUTPUTFILE="ROOTfiles/fonllOutput_pp_Bplus_5p03TeV_y2p4.root"
LABELPP="pp"
OUTPUTFILEPP="ROOTfiles/hPtSpectrumBplusPP.root"
OUTPUTFILEMCSTUDYPP="ROOTfiles/MCstudiesPP.root"
OUTPUTFILEPlotPP="ROOTfiles/CrossSectionPP.root"

LUMIPP=25.8
ISMCPP=0
ISDOWEIGHTPP=0
SELGENPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
SELGENPPACCPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
RECOONLYPP="1"
CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&Btrk1Pt>0.9&&Bchi2cl>1.32e-02&&(Bd0/Bd0Err)>3.41&&cos(Bdtheta)>-3.46e-01&&Bmu1pt>1.5&&Bmu2pt>1.5&&Blxy>0.025"
TRGPP="1"


if [ $DOANALYSISPP_FONLL -eq 1 ]; then      
g++ Bplusdsigmadpt.cc $(root-config --cflags --libs) -g -o Bplusdsigmadpt.exe 
./Bplusdsigmadpt.exe "$FONLLDATINPUT"  "$FONLLOUTPUTFILE" "$LABELPP"
rm Bplusdsigmadpt.exe
fi 

if [ $DOANALYSISPP_FIT -eq 1 ]; then      
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   "$ISMCPP"   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPP"
rm fitB.exe
fi 

if [ $DOANALYSISPP_MCSTUDY -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe 
./MCefficiency.exe  0 "$INPUTMCPP"  "$SELGENPP" "$SELGENPPACCPP"  "$RECOONLYPP" "$CUTPP"  "$LABELPP" "$OUTPUTFILEMCSTUDYPP" "$ISDOWEIGHTPP" "$CENTPbPbMIN" "$CENTPbPbMAX"
fi

if [ $DOANALYSISPP_CROSS -eq 1 ]; then      
g++ CrossSectionRatio.C $(root-config --cflags --libs) -g -o CrossSectionRatio.exe 
./CrossSectionRatio.exe "$FONLLOUTPUTFILE"  "$OUTPUTFILEPP" "$OUTPUTFILEMCSTUDYPP" "$OUTPUTFILEPlotPP" 0 "$LABELPP" "$LUMIPP"
rm CrossSectionRatio.exe
fi


LUMIPbPb=25.8
ISMCPbPb=0
ISDOWEIGHTPbPb=0
SELGENPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
SELGENPPACCPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
RECOONLYPbPb="1"
CUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&Btrk1Pt>0.9&&Bchi2cl>1.32e-02&&(Bd0/Bd0Err)>3.41&&cos(Bdtheta)>-3.46e-01&&Bmu1pt>1.5&&Bmu2pt>1.5&&Blxy>0.025"
TRGPbPb="1"

OUTPUTFILEPbPb="ROOTfiles/hPtSpectrumBplusPbPb.root"
OUTPUTFILEMCSTUDYPbPb="ROOTfiles/MCstudiesPbPb.root"
OUTPUTFILEPlotPbPb="ROOTfiles/CrossSectionPbPb.root"


if [ $DOANALYSISPbPb_FIT -eq 1 ]; then      
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   "$ISMCPP"   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPP"
rm fitB.exe
fi 

if [ $DOANALYSISPbPb_MCSTUDY -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe 
./MCefficiency.exe  0 "$INPUTMCPP"  "$SELGENPP" "$SELGENPPACCPP"  "$RECOONLYPP" "$CUTPP"  "$LABELPP" "$OUTPUTFILEMCSTUDYPP" "$ISDOWEIGHTPP" "$CENTPbPbMIN" "$CENTPbPbMAX"
fi

if [ $DOANALYSISPbPb_CROSS -eq 1 ]; then      
g++ CrossSectionRatio.C $(root-config --cflags --libs) -g -o CrossSectionRatio.exe 
./CrossSectionRatio.exe "$FONLLOUTPUTFILE"  "$OUTPUTFILEPP" "$OUTPUTFILEMCSTUDYPP" "$OUTPUTFILEPlotPP" 0 "$LABELPP" "$LUMIPP"
rm CrossSectionRatio.exe
fi


