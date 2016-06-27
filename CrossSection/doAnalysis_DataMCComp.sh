#!/bin/bash

## PP MONTE CARLO
INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160606_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
## PP DATA 
#INPUTDATAPP="/data/wangj/Data2015/Bntuple/pp/ntB_EvtBase_20160420_BfinderData_pp_20160419_bPt0jpsiPt0tkPt0p5.root"
INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160608_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp.root"

## PbPb MONTE CARLO
INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160606_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
## PbPb DATA 
#INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160605_BfinderData_PbPb_20160406_bPt5jpsiPt0tkPt0p8_BpB0BsX.root"
INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160610_crab_BfinderData_PbPb_20160607_bPt5jpsiPt0tkPt0p8_Bp.root"

## ANALYSIS PP TRIGGERED
FONLLDATINPUT="pp_Bplus_5p03TeV_y2p4"
FONLLOUTPUTFILE="ROOTfiles/fonllOutput_pp_Bplus_5p03TeV_y2p4.root"
OUTPUTFILERAA="ROOTfiles/outputRAA.root"

LABELPP="pp"
#LUMIPP=25.8
LUMIPP=27.7
ISMCPP=0
ISDOWEIGHTPP=0
SELGENPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
SELGENPPACCPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
RECOONLYPP="1"
#CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&Btrk1Pt>0.9&&Bchi2cl>1.32e-02&&(Bd0/Bd0Err)>3.41&&cos(Bdtheta)>-3.46e-01&&Bmu1pt>1.5&&Bmu2pt>1.5&&Blxy>0.025"
CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4."
TRGPP="(HLT_HIL1DoubleMu0_v1)"
TRGPPMC="(1)"
OUTPUTFILEPP="ROOTfiles/hPtSpectrumBplusPP.root"
OUTPUTFILEMCSTUDYPP="ROOTfiles/MCstudiesPP.root"
OUTPUTFILEPlotPP="ROOTfiles/CrossSectionPP.root"
OUTPUTFILEPPDATA="ROOTfiles/data_pp.root"
OUTPUTFILEPPMC="ROOTfiles/mc_pp.root"

#SETTING for NP fit
INPUTMCPP_NP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160618_BJpsiMM_5p02TeV_TuneCUETP8M1.root"
CUTPP_NP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4.&&Bgen!=23333"
OUTPUTFILEPP_NP="ROOTfiles/NPFitPP.root"

LABELPbPb="PbPb"
#LUMIPbPb=15.5665
LUMIPbPb=15.17
#350.68(ub-1)*208*208/1000000=15.17
ISMCPbPb=0
ISDOWEIGHTPbPb=0
SELGENPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
SELGENPbPbACCPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
RECOONLYPbPb="1"
#CUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
CUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
TRGPbPb="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
TRGPbPbMC="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
OUTPUTFILEPbPb="ROOTfiles/hPtSpectrumBplusPbPb.root"
OUTPUTFILEMCSTUDYPbPb="ROOTfiles/MCstudiesPbPb.root"
OUTPUTFILEPlotPbPb="ROOTfiles/CrossSectionPbPb.root"
OUTPUTFILEPbPbDATA="ROOTfiles/data_PbPb.root"
OUTPUTFILEPbPbMC="ROOTfiles/mc_PbPb.root"

#SETTING for NP fit
INPUTMCPbPb_NP="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160618_Pythia8_BJpsiMM_ptJpsi_all_Hydjet_MB.root"
CUTPbPb_NP="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))&&Bgen!=23333"
OUTPUTFILEPbPb_NP="ROOTfiles/NPFitPbPb.root"

##################### Get the fitting results from MC and data ###########

####### PbPb DATA #########

ISMCPbPb=0
ISDOWEIGHTPbPb=0
CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.95
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_base_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_cosBdtheta"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"  "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.95
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_opt_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_cosBdtheta"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_base_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_pvDis"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_opt_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_pvDis"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=0.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_base_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Btrk1Pt"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=0.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_opt_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Btrk1Pt"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_base_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Bchi2cl"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"

comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPb_opt_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Bchi2cl"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

###### PP DATA ######

INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160608_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp.root"

CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.9
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_base_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
RMKNAME="test3_base_cosBdtheta"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && (BsvpvDistance/BsvpvDisErr)>4."
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.9
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_opt_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_cosBdtheta"
g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_base_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_pvDis"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_opt_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_pvDis"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe


CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=1.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_base_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Btrk1Pt"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4."
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=1.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_opt_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Btrk1Pt"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_base_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Bchi2cl"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe



CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4."
comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPP_opt_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Bchi2cl"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

###### PbPb MC #######

ISMCPbPb=1
INPUTDATAPbPb="/afs/cern.ch/work/h/hckim/cms758_Bana_v3/src/BBB/Bplus_PbPb_Pthat5_Bfinder_add.root"

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.9
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_base_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_cosBdtheta_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.9
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_cosBdtheta_MC"
g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_base_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_pvDis_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_pvDis_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=0.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_base_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Btrk1Pt_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=0.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Btrk1Pt_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( (Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_base_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Bchi2cl_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe



CUTPbPb_comp="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"

comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Bchi2cl_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb_comp"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPbPb_NP_comp" "$CENTPbPbMIN" "$CENTPbPbMAX" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe


###### PP MC #########

INPUTMCPP="/afs/cern.ch/work/h/hckim/cms758_Bana_v3/src/Bfinder/Bfinder/Bntuple/Pthat5_PP/ntuple_finder_PP.root"

CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.9
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_base_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
RMKNAME="test3_base_cosBdtheta_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && (BsvpvDistance/BsvpvDisErr)>4."
comp_value="cos(Bdtheta)"
comp_nBin=1
comp_min=0.9
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_opt_cosBdtheta.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3__opt_cosBdtheta_MC"
g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_base_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_pvDis_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2"
comp_value="(BsvpvDistance/BsvpvDisErr)"
comp_nBin=1
comp_min=0.0
comp_max=15.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_opt_pvDis.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_pvDis_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe


CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=1.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_base_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Btrk1Pt_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4."
comp_value="Btrk1Pt"
comp_nBin=1
comp_min=1.0
comp_max=2.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_opt_Btrk1Pt.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Btrk1Pt_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe

CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4"
comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_base_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_base_Bchi2cl_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe



CUTPP="abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4."
comp_value="Bchi2cl"
comp_nBin=1
comp_min=0.0
comp_max=1.0
OUTPUTFILEPbPb_comp="ROOTfiles/hPtSpectrumBplusPPMC_opt_Bchi2cl.root"
OUTPUTFILEPbPb_NP_comp="ROOTfiles/NPFitPbPb.root"
LABELPbPb="PbPb"
RMKNAME="test3_opt_Bchi2cl_MC"

g++ fitB_comp.C $(root-config --cflags --libs) -g -o fitB_comp.exe
./fitB_comp.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPbPb_comp" "$OUTPUTFILEPP_NP" "$comp_value" "$comp_nBin" "$comp_min" "$comp_max" "$RMKNAME"
rm fitB_comp.exe


##################### For drawing Data/MC Conparison #####################

#void CompareDataMC(TString inputdata="", TString inputmc="", TString labelname="", int usePbPb=1, int isOpt=1, double xmin=0.0, double xmax=100.0, int isLog=0, TString rmkname="test")

RMKNAME="20160628_test"

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_base_Bchi2cl.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_base_Bchi2cl.root"
VAR="Bchi2cl"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 0 0.0 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_opt_Bchi2cl.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_Bchi2cl.root"
VAR="Bchi2cl"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 1 0.0 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_base_Bchi2cl.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_base_Bchi2cl.root"
VAR="Bchi2cl"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 0 0.0 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_opt_Bchi2cl.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_opt_Bchi2cl.root"
VAR="Bchi2cl"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 1 0.0 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

############################

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_base_Btrk1Pt.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_base_Btrk1Pt.root"
VAR="Btrk1Pt"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 0 1.0 2.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_opt_Btrk1Pt.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_Btrk1Pt.root"
VAR="Btrk1Pt"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 1 1.0 2.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_base_Btrk1Pt.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_base_Btrk1Pt.root"
VAR="Btrk1Pt"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 0 1.0 2.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_opt_Btrk1Pt.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_opt_Btrk1Pt.root"
VAR="Btrk1Pt"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 1 1.0 2.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

############################

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_base_cosBdtheta.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_base_cosBdtheta.root"
VAR="cosBdtheta"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 0 0.9 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_opt_cosBdtheta.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_cosBdtheta.root"
VAR="cosBdtheta"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 1 0.9 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_base_cosBdtheta.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_base_cosBdtheta.root"
VAR="cosBdtheta"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 0 0.9 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_opt_cosBdtheta.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_opt_cosBdtheta.root"
VAR="cosBdtheta"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 1 0.9 1.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

############################

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_base_pvDis.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_base_pvDis.root"
#VAR="(BsvpvDistance/BsvpvDisErr)"
VAR="pvDis"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 0 0.0 15.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPbPb_opt_pvDis.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPbPbMC_opt_pvDis.root"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 1 1 0.0 15.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_base_pvDis.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_base_pvDis.root"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 0 0.0 15.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe

INPUTDATA="ROOTfiles/hPtSpectrumBplusPP_opt_pvDis.root"
INPUTMC="ROOTfiles/hPtSpectrumBplusPPMC_opt_pvDis.root"

g++ CompareDataMC.C $(root-config --cflags --libs) -g -o Draw_DataMCComp.exe
./Draw_DataMCComp.exe "$INPUTDATA" "$INPUTMC" "$VAR" 0 1 0.0 15.0 0 "$RMKNAME"
rm Draw_DataMCComp.exe
