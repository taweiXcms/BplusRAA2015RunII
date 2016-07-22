
DOSAVEHISTPP_DECAYLENGTH=0
DOSAVEHISTPbPb_DECAYLENGTH=0
DOSAVEHISTPP_CHI2=0
DOSAVEHISTPbPb_CHI2=0
DOSAVEHISTPP_COSTHETA=0
DOSAVEHISTPbPb_COSTHETA=0

DOFITPP_DECAYLENGTH=1
DOFITPbPb_DECAYLENGTH=1
DOFITPP_CHI2=1
DOFITPbPb_CHI2=1
DOFITPP_COSTHETA=1
DOFITPbPb_COSTHETA=1

DORATIO_DECAYLENGTH=1
DORATIO_CHI2=1
DORATIO_COSTHETA=1

INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160608_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp.root"
INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160606_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
TRGPP="(HLT_HIL1DoubleMu0_v1)"
FILTERCUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && (BsvpvDistance/BsvpvDisErr) > 3.5 && Bchi2cl > 0.005"
ISMCPP=0
MATCHEDCUTPP="Bgen==23333"
LABELPP="PP"
WEIGHTPP="1"
PTTHRESHOLDPP=10
OUTPUTFILEPP_NP="NPFitPP.root"

VARBINS=5
#"((BsvpvDistance/BsvpvDisErr)>4. && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2)"
ADDCUTPP_DECAYLENGTH="(Bchi2cl > 0.005 && cos(Bdtheta) > 0.2)"
LABEL_DECAYLENGTH="Decaylength"
VAR_DECAYLENGTH="(BsvpvDistance/BsvpvDisErr)"
VARMIN_DECAYLENGTH=4.
VARMAX_DECAYLENGTH=8.
VARSIGN_DECAYLENGTH=1
TEX_DECAYLENGTH="Decay length sig"

ADDCUTPP_CHI2="((BsvpvDistance/BsvpvDisErr)>4. && cos(Bdtheta) > 0.2)"
LABEL_CHI2="Chi2"
VAR_CHI2="Bchi2cl"
VARMIN_CHI2=0.05
VARMAX_CHI2=0.45
VARSIGN_CHI2=1
TEX_CHI2="Vtx prob"

ADDCUTPP_COSTHETA="((BsvpvDistance/BsvpvDisErr)>4. && Bchi2cl > 0.005)"
LABEL_COSTHETA="costheta"
VAR_COSTHETA="cos(Bdtheta)"
VARMIN_COSTHETA=0.05
VARMAX_COSTHETA=0.45
VARSIGN_COSTHETA=1
TEX_COSTHETA="Cosine(#theta)"

INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160606_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160610_crab_BfinderData_PbPb_20160607_bPt5jpsiPt0tkPt0p8_Bp.root"
TRGPbPb="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
FILTERCUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && (BsvpvDistance/BsvpvDisErr) > 3.5 && Bchi2cl > 0.005"
ISMCPbPb=0
MATCHEDCUTPbPb="Bgen==23333"
LABELPbPb="PbPb"
WEIGHTPbPb="1"
PTTHRESHOLDPbPb=10
OUTPUTFILEPbPb_NP="NPFitPbPb.root"

#"((BsvpvDistance/BsvpvDisErr)>6. && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2)"
ADDCUTPbPb_DECAYLENGTH="(Bchi2cl > 0.2 && cos(Bdtheta) > 0.2)"
ADDCUTPbPb_CHI2="((BsvpvDistance/BsvpvDisErr)>6. && cos(Bdtheta) > 0.2)"
ADDCUTPbPb_COSTHETA="((BsvpvDistance/BsvpvDisErr)>6. && Bchi2cl > 0.2)"


#### Saving histograms
if [ $DOSAVEHISTPP_DECAYLENGTH -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${ADDCUTPP_DECAYLENGTH}" "$ISMCPP" "1" "$LABELPP" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "1" "${FILTERCUTPP}&&${MATCHEDCUTPP}&&${ADDCUTPP_DECAYLENGTH}" "1" "$WEIGHTPP" "$LABELPP" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_DECAYLENGTH -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${ADDCUTPbPb_DECAYLENGTH}" "$ISMCPbPb" "1" "$LABELPbPb" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "1" "${FILTERCUTPbPb}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_DECAYLENGTH}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_CHI2 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${ADDCUTPP_CHI2}" "$ISMCPP" "1" "$LABELPP" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "1" "${FILTERCUTPP}&&${MATCHEDCUTPP}&&${ADDCUTPP_CHI2}" "1" "$WEIGHTPP" "$LABELPP" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_CHI2 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${ADDCUTPbPb_CHI2}" "$ISMCPbPb" "1" "$LABELPbPb" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "1" "${FILTERCUTPbPb}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_CHI2}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_COSTHETA -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${ADDCUTPP_COSTHETA}" "$ISMCPP" "1" "$LABELPP" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "1" "${FILTERCUTPP}&&${MATCHEDCUTPP}&&${ADDCUTPP_COSTHETA}" "1" "$WEIGHTPP" "$LABELPP" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_COSTHETA -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${ADDCUTPbPb_COSTHETA}" "$ISMCPbPb" "1" "$LABELPbPb" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "1" "${FILTERCUTPbPb}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_COSTHETA}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

#### Fitting on saved histograms
if [ $DOFITPP_DECAYLENGTH -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$LABEL_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$TEX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$OUTPUTFILEPP_NP"
rm fitD.exe
fi

if [ $DOFITPbPb_DECAYLENGTH -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$LABEL_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$TEX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$OUTPUTFILEPbPb_NP"
rm fitD.exe
fi

if [ $DOFITPP_CHI2 -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$LABEL_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$TEX_CHI2" "$VARSIGN_CHI2" "$OUTPUTFILEPP_NP"
rm fitD.exe
fi

if [ $DOFITPbPb_CHI2 -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$LABEL_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$TEX_CHI2" "$VARSIGN_CHI2" "$OUTPUTFILEPbPb_NP"
rm fitD.exe
fi

if [ $DOFITPP_COSTHETA -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$LABEL_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$TEX_COSTHETA" "$VARSIGN_COSTHETA" "$OUTPUTFILEPP_NP"
rm fitD.exe
fi

if [ $DOFITPbPb_COSTHETA -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$LABEL_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$TEX_COSTHETA" "$VARSIGN_COSTHETA" "$OUTPUTFILEPbPb_NP"
rm fitD.exe
fi

#### Plotting the double ratio (PbPb/pp) of double ratio (data/mc)
if [ $DORATIO_DECAYLENGTH -eq 1 ]; then
g++ plotRatioDoubleratio.C $(root-config --cflags --libs) -g -o plotRatioDoubleratio.exe
./plotRatioDoubleratio.exe "$LABEL_DECAYLENGTH" "$TEX_DECAYLENGTH"
rm plotRatioDoubleratio.exe
fi

if [ $DORATIO_CHI2 -eq 1 ]; then
g++ plotRatioDoubleratio.C $(root-config --cflags --libs) -g -o plotRatioDoubleratio.exe
./plotRatioDoubleratio.exe "$LABEL_CHI2" "$TEX_CHI2"
rm plotRatioDoubleratio.exe
fi

if [ $DORATIO_COSTHETA -eq 1 ]; then
g++ plotRatioDoubleratio.C $(root-config --cflags --libs) -g -o plotRatioDoubleratio.exe
./plotRatioDoubleratio.exe "$LABEL_COSTHETA" "$TEX_COSTHETA"
rm plotRatioDoubleratio.exe
fi
