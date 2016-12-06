
DOSAVEHISTPP_DECAYLENGTH=1
DOSAVEHISTPbPb_DECAYLENGTH=0
DOSAVEHISTPP_CHI2=0
DOSAVEHISTPbPb_CHI2=0
DOSAVEHISTPP_COSTHETA=0
DOSAVEHISTPbPb_COSTHETA=0
DOSAVEHISTPP_TRKPT=0
DOSAVEHISTPbPb_TRKPT=0
DOSAVEHISTPP_TRKETA=0
DOSAVEHISTPbPb_TRKETA=0
DOSAVEHISTPP_BDT=0
DOSAVEHISTPbPb_BDT=0

DOFITPP_DECAYLENGTH=1
DOFITPbPb_DECAYLENGTH=0
DOFITPP_CHI2=0
DOFITPbPb_CHI2=0
DOFITPP_COSTHETA=0
DOFITPbPb_COSTHETA=0
DOFITPP_TRKPT=0
DOFITPbPb_TRKPT=0
DOFITPP_TRKETA=0
DOFITPbPb_TRKETA=0
DOFITPP_BDT=0
DOFITPbPb_BDT=0

DORATIO_DECAYLENGTH=0
DORATIO_CHI2=0
DORATIO_COSTHETA=0
DORATIO_TRKPT=0
DORATIO_TRKETA=0
DORATIO_BDT=0

#INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160606_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
#INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160608_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp.root"
#INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5_BDT.root"
#INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp_BDT.root"
INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp_pthatweight_JingBDT.root"
INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_pp_20160816_bPt0jpsiPt0tkPt0p5_Bp_JingBDT.root"
TRGPP="(HLT_HIL1DoubleMu0_v1)"
TRGPPMC="(HLT_HIL1DoubleMu0ForPPRef_v1)"
FILTERCUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0"
FILTERCUTPP_FIDUCIAL="Btrk1Pt>0.5 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && (BsvpvDistance/BsvpvDisErr) > 3.5 && Bchi2cl > 0.005 && Bpt>10 && Bpt<50"

ISMCPP=0
MATCHEDCUTPP="Bgen==23333"
LABELPP="PP"
WEIGHTPP="pthatweight*(pow(10,-0.094152+0.008102*Bgenpt+Bgenpt*Bgenpt*0.000171+Bgenpt*Bgenpt*Bgenpt*-0.000005+Bgenpt*Bgenpt*Bgenpt*Bgenpt*-0.000000+Bgenpt*Bgenpt*Bgenpt*Bgenpt*Bgenpt*0.000000))"
PTTHRESHOLDPP=0
OUTPUTFILEPP_NP="NPFitPP.root"
#NPFIT_PP="213.355334*TMath::Erf((x-5.139684)/-0.049768) + 213.355334 + 14.620639*(0.856020*Gaus(x,5.351676,0.198591)/(sqrt(2*3.14159)*0.198591)+(1-0.856020)*Gaus(x,5.351676,0.035974)/(sqrt(2*3.14159)*0.035974))"
NPFIT_PP="3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+7.18255e1*TMath::Erf(-(x-5.14397)/6.43194e-2) + 7.18255e1"

VARBINS=5
LABEL_DECAYLENGTH="Decaylength"
VAR_DECAYLENGTH="(BsvpvDistance/BsvpvDisErr)"
VARMIN_DECAYLENGTH=5.
VARMAX_DECAYLENGTH=7.
VARSIGN_DECAYLENGTH=1
TEX_DECAYLENGTH="Decay length sig"

LABEL_CHI2="Chi2"
VAR_CHI2="Bchi2cl"
#VARMIN_CHI2=0.05
#VARMAX_CHI2=0.45
VARMIN_CHI2=0.05
VARMAX_CHI2=0.35
VARSIGN_CHI2=1
TEX_CHI2="Vtx prob"

LABEL_COSTHETA="costheta"
VAR_COSTHETA="cos(Bdtheta)"
VARMIN_COSTHETA=-1
VARMAX_COSTHETA=0.8
VARSIGN_COSTHETA=1
TEX_COSTHETA="Cosine(#theta)"

LABEL_TRKPT="Btrk1Pt"
VAR_TRKPT="Btrk1Pt"
VARMIN_TRKPT=0.8
VARMAX_TRKPT=1.4
VARSIGN_TRKPT=1
TEX_TRKPT="trk pt"

LABEL_TRKETA="abs(Btrk1Eta)"
VAR_TRKETA="abs(Btrk1Eta)"
VARMIN_TRKETA=2.1
VARMAX_TRKETA=2.4
VARSIGN_TRKETA=0
TEX_TRKETA="trk eta"

LABEL_BDT="BDT"
VAR_BDT="BDT"
VARMIN_BDT=0.06
VARMAX_BDT=0.1
VARSIGN_BDT=1
TEX_BDT="BDT"

#"((BsvpvDistance/BsvpvDisErr)>4. && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2)"
ADDCUTPP_DECAYLENGTH="(Bchi2cl > 0.05 && cos(Bdtheta) > 0.2)"
ADDCUTPP_CHI2="((BsvpvDistance/BsvpvDisErr)>4. && cos(Bdtheta) > 0.2)"
ADDCUTPP_COSTHETA="((BsvpvDistance/BsvpvDisErr)>4. && Bchi2cl > 0.005)"
ADDCUTPP_TRKPT="((BsvpvDistance/BsvpvDisErr)>4. && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2)"
ADDCUTPP_TRKETA="((BsvpvDistance/BsvpvDisErr)>4. && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2)"
ADDCUTPP_BDT="((BsvpvDistance/BsvpvDisErr)>4. && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2)"
NOMINALPP_DECAYLENGTH="(BsvpvDistance/BsvpvDisErr)>4."
NOMINALPP_CHI2="Bchi2cl > 0.2"
NOMINALPP_COSTHETA="cos(Bdtheta) > 0.2"
NOMINALPP_TRKPT="Btrk1Pt>1."
NOMINALPP_TRKETA="abs(Btrk1Eta)<2.4"
NOMINALPP_BDT="BDT>0.08"

#INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160606_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root"
#INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160610_crab_BfinderData_PbPb_20160607_bPt5jpsiPt0tkPt0p8_Bp.root"
#INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_Bpt5p0_Pthat5_BDT.root"
#INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_PbPb_20160607_bPt5jpsiPt0tkPt0p8_Bp_BDT.root"
INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_pthatweight_JingBDT.root"
INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_PbPb_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root"
TRGPbPb="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
TRGPbPbMC="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
FILTERCUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0"

FILTERCUTPbPb_FIDUCIAL="Btrk1Pt>0.8 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && (BsvpvDistance/BsvpvDisErr) > 3.5 && Bchi2cl > 0.005 && Bpt>10 && Bpt<50"
ISMCPbPb=0
MATCHEDCUTPbPb="Bgen==23333"
LABELPbPb="PbPb"
WEIGHTPbPb="pthatweight*(pow(10,-0.107832+0.010248*Bgenpt+Bgenpt*Bgenpt*0.000079+Bgenpt*Bgenpt*Bgenpt*-0.000003+Bgenpt*Bgenpt*Bgenpt*Bgenpt*-0.000000+Bgenpt*Bgenpt*Bgenpt*Bgenpt*Bgenpt*0.000000))*(6.08582+hiBin*(-0.155739)+hiBin*hiBin*(0.00149946)+hiBin*hiBin*hiBin*(-6.41629e-06)+hiBin*hiBin*hiBin*hiBin*(1.02726e-08))"
PTTHRESHOLDPbPb=0
OUTPUTFILEPbPb_NP="NPFitPbPb.root"
#NPFIT_PbPb="199.353547*TMath::Erf((x-5.140255)/-0.039233) + 199.353547 + 26.393491*(0.613544*Gaus(x,5.354664,0.448306)/(sqrt(2*3.14159)*0.448306)+(1-0.613544)*Gaus(x,5.354664,0.111947)/(sqrt(2*3.14159)*0.111947))"
NPFIT_PbPb="3.39711e1*Gaus(x,5.35002e0,3.87952e-2)*(x<5.35002e0)+(x>=5.35002e0)*3.39711e1*Gaus(x,5.35002e0,1.14232e-1)+6.89441e1*TMath::Erf(-(x-5.14189)/8.66243e-2) + 6.89441e1"

#"((BsvpvDistance/BsvpvDisErr)>6. && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2)"
ADDCUTPbPb_DECAYLENGTH="(Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1Pt>1.2)"
ADDCUTPbPb_CHI2="((BsvpvDistance/BsvpvDisErr)>6. && cos(Bdtheta) > 0.2 && Btrk1Pt>1.)"
ADDCUTPbPb_COSTHETA="((BsvpvDistance/BsvpvDisErr)>6. && Bchi2cl > 0.2)"
ADDCUTPbPb_TRKPT="((BsvpvDistance/BsvpvDisErr)>6. && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2)"
ADDCUTPbPb_TRKETA="((BsvpvDistance/BsvpvDisErr)>6. && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2)"
ADDCUTPbPb_BDT="( (BsvpvDistance/BsvpvDisErr)>6. && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 )"
NOMINALPbPb_DECAYLENGTH="(BsvpvDistance/BsvpvDisErr)>6."
NOMINALPbPb_CHI2="Bchi2cl > 0.2"
NOMINALPbPb_COSTHETA="cos(Bdtheta) > 0.2"
NOMINALPbPb_TRKPT="Btrk1Pt>1."
NOMINALPbPb_TRKETA="abs(Btrk1Eta)<2.4"
NOMINALPbPb_BDT="BDT>0.08"


#### Saving histograms
if [ $DOSAVEHISTPP_DECAYLENGTH -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${ADDCUTPP_DECAYLENGTH}" "$ISMCPP" "1" "$LABELPP" "$NOMINALPP_DECAYLENGTH" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "$TRGPPMC" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${MATCHEDCUTPP}&&${ADDCUTPP_DECAYLENGTH}" "1" "$WEIGHTPP" "$LABELPP" "$NOMINALPP_DECAYLENGTH" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_DECAYLENGTH -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${ADDCUTPbPb_DECAYLENGTH}" "$ISMCPbPb" "1" "$LABELPbPb" "$NOMINALPbPb_DECAYLENGTH" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "$TRGPbPbMC" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_DECAYLENGTH}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$NOMINALPbPb_DECAYLENGTH" "$LABEL_DECAYLENGTH" "$VAR_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_CHI2 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${ADDCUTPP_CHI2}" "$ISMCPP" "1" "$LABELPP" "$NOMINALPP_CHI2" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "$TRGPPMC" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${MATCHEDCUTPP}&&${ADDCUTPP_CHI2}" "1" "$WEIGHTPP" "$LABELPP" "$NOMINALPP_CHI2" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_CHI2 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${ADDCUTPbPb_CHI2}" "$ISMCPbPb" "1" "$LABELPbPb" "$NOMINALPbPb_CHI2" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "$TRGPbPbMC" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_CHI2}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$NOMINALPbPb_CHI2" "$LABEL_CHI2" "$VAR_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$VARSIGN_CHI2" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_COSTHETA -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${ADDCUTPP_COSTHETA}" "$ISMCPP" "1" "$LABELPP" "$NOMINALPP_COSTHETA" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "$TRGPPMC" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${MATCHEDCUTPP}&&${ADDCUTPP_COSTHETA}" "1" "$WEIGHTPP" "$LABELPP" "$NOMINALPP_COSTHETA" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_COSTHETA -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${ADDCUTPbPb_COSTHETA}" "$ISMCPbPb" "1" "$LABELPbPb" "$NOMINALPbPb_COSTHETA" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "$TRGPbPbMC" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_COSTHETA}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$NOMINALPbPb_COSTHETA" "$LABEL_COSTHETA" "$VAR_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$VARSIGN_COSTHETA" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_TRKPT -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${ADDCUTPP_TRKPT}" "$ISMCPP" "1" "$LABELPP" "$NOMINALPP_TRKPT" "$LABEL_TRKPT" "$VAR_TRKPT" "$VARBINS" "$VARMIN_TRKPT" "$VARMAX_TRKPT" "$VARSIGN_TRKPT" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "$TRGPPMC" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${MATCHEDCUTPP}&&${ADDCUTPP_TRKPT}" "1" "$WEIGHTPP" "$LABELPP" "$NOMINALPP_TRKPT" "$LABEL_TRKPT" "$VAR_TRKPT" "$VARBINS" "$VARMIN_TRKPT" "$VARMAX_TRKPT" "$VARSIGN_TRKPT" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_TRKPT -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${ADDCUTPbPb_TRKPT}" "$ISMCPbPb" "1" "$LABELPbPb" "$NOMINALPbPb_TRKPT" "$LABEL_TRKPT" "$VAR_TRKPT" "$VARBINS" "$VARMIN_TRKPT" "$VARMAX_TRKPT" "$VARSIGN_TRKPT" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "$TRGPbPbMC" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_TRKPT}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$NOMINALPbPb_TRKPT" "$LABEL_TRKPT" "$VAR_TRKPT" "$VARBINS" "$VARMIN_TRKPT" "$VARMAX_TRKPT" "$VARSIGN_TRKPT" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_TRKETA -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${ADDCUTPP_TRKETA}" "$ISMCPP" "1" "$LABELPP" "$NOMINALPP_TRKETA" "$LABEL_TRKETA" "$VAR_TRKETA" "$VARBINS" "$VARMIN_TRKETA" "$VARMAX_TRKETA" "$VARSIGN_TRKETA" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "$TRGPPMC" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${MATCHEDCUTPP}&&${ADDCUTPP_TRKETA}" "1" "$WEIGHTPP" "$LABELPP" "$NOMINALPP_TRKETA" "$LABEL_TRKETA" "$VAR_TRKETA" "$VARBINS" "$VARMIN_TRKETA" "$VARMAX_TRKETA" "$VARSIGN_TRKETA" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_TRKETA -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${ADDCUTPbPb_TRKETA}" "$ISMCPbPb" "1" "$LABELPbPb" "$NOMINALPbPb_TRKETA" "$LABEL_TRKETA" "$VAR_TRKETA" "$VARBINS" "$VARMIN_TRKETA" "$VARMAX_TRKETA" "$VARSIGN_TRKETA" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "$TRGPbPbMC" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_TRKETA}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$NOMINALPbPb_TRKETA" "$LABEL_TRKETA" "$VAR_TRKETA" "$VARBINS" "$VARMIN_TRKETA" "$VARMAX_TRKETA" "$VARSIGN_TRKETA" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_BDT -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${ADDCUTPP_BDT}" "$ISMCPP" "1" "$LABELPP" "$NOMINALPP_BDT" "$LABEL_BDT" "$VAR_BDT" "$VARBINS" "$VARMIN_BDT" "$VARMAX_BDT" "$VARSIGN_BDT" "$PTTHRESHOLDPP"
./saveMasshisto.exe "$INPUTMCPP" "$INPUTMCPP" "$TRGPPMC" "${FILTERCUTPP}&&${FILTERCUTPP_FIDUCIAL}&&${MATCHEDCUTPP}&&${ADDCUTPP_BDT}" "1" "$WEIGHTPP" "$LABELPP" "$NOMINALPP_BDT" "$LABEL_BDT" "$VAR_BDT" "$VARBINS" "$VARMIN_BDT" "$VARMAX_BDT" "$VARSIGN_BDT" "$PTTHRESHOLDPP"
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPbPb_BDT -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${ADDCUTPbPb_BDT}" "$ISMCPbPb" "1" "$LABELPbPb" "$NOMINALPbPb_BDT" "$LABEL_BDT" "$VAR_BDT" "$VARBINS" "$VARMIN_BDT" "$VARMAX_BDT" "$VARSIGN_BDT" "$PTTHRESHOLDPbPb"
./saveMasshisto.exe "$INPUTMCPbPb" "$INPUTMCPbPb" "$TRGPbPbMC" "${FILTERCUTPbPb}&&${FILTERCUTPbPb_FIDUCIAL}&&${MATCHEDCUTPbPb}&&${ADDCUTPbPb_BDT}" "1" "$WEIGHTPbPb" "$LABELPbPb" "$NOMINALPbPb_BDT" "$LABEL_BDT" "$VAR_BDT" "$VARBINS" "$VARMIN_BDT" "$VARMAX_BDT" "$VARSIGN_BDT" "$PTTHRESHOLDPbPb"
rm saveMasshisto.exe
fi

#### Fitting on saved histograms
if [ $DOFITPP_DECAYLENGTH -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$NOMINALPP_DECAYLENGTH" "$LABEL_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$TEX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$NPFIT_PP"
rm fitD.exe
fi

if [ $DOFITPbPb_DECAYLENGTH -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$NOMINALPbPb_DECAYLENGTH" "$LABEL_DECAYLENGTH" "$VARBINS" "$VARMIN_DECAYLENGTH" "$VARMAX_DECAYLENGTH" "$TEX_DECAYLENGTH" "$VARSIGN_DECAYLENGTH" "$NPFIT_PbPb"
rm fitD.exe
fi

if [ $DOFITPP_CHI2 -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$NOMINALPP_CHI2" "$LABEL_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$TEX_CHI2" "$VARSIGN_CHI2" "$NPFIT_PP"
rm fitD.exe
fi

if [ $DOFITPbPb_CHI2 -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$NOMINALPbPb_CHI2" "$LABEL_CHI2" "$VARBINS" "$VARMIN_CHI2" "$VARMAX_CHI2" "$TEX_CHI2" "$VARSIGN_CHI2" "$NPFIT_PbPb"
rm fitD.exe
fi

if [ $DOFITPP_COSTHETA -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$NOMINALPP_COSTHETA" "$LABEL_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$TEX_COSTHETA" "$VARSIGN_COSTHETA" "$NPFIT_PP"
rm fitD.exe
fi

if [ $DOFITPbPb_COSTHETA -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$NOMINALPbPb_COSTHETA" "$LABEL_COSTHETA" "$VARBINS" "$VARMIN_COSTHETA" "$VARMAX_COSTHETA" "$TEX_COSTHETA" "$VARSIGN_COSTHETA" "$NPFIT_PbPb"
rm fitD.exe
fi

if [ $DOFITPP_TRKPT -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$NOMINALPP_TRKPT" "$LABEL_TRKPT" "$VARBINS" "$VARMIN_TRKPT" "$VARMAX_TRKPT" "$TEX_TRKPT" "$VARSIGN_TRKPT" "$NPFIT_PP"
rm fitD.exe
fi

if [ $DOFITPbPb_TRKPT -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$NOMINALPbPb_TRKPT" "$LABEL_TRKPT" "$VARBINS" "$VARMIN_TRKPT" "$VARMAX_TRKPT" "$TEX_TRKPT" "$VARSIGN_TRKPT" "$NPFIT_PbPb"
rm fitD.exe
fi

if [ $DOFITPP_TRKETA -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$NOMINALPP_TRKETA" "$LABEL_TRKETA" "$VARBINS" "$VARMIN_TRKETA" "$VARMAX_TRKETA" "$TEX_TRKETA" "$VARSIGN_TRKETA" "$NPFIT_PP"
rm fitD.exe
fi

if [ $DOFITPbPb_TRKETA -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$NOMINALPbPb_TRKETA" "$LABEL_TRKETA" "$VARBINS" "$VARMIN_TRKETA" "$VARMAX_TRKETA" "$TEX_TRKETA" "$VARSIGN_TRKETA" "$NPFIT_PbPb"
rm fitD.exe
fi

if [ $DOFITPP_BDT -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPP" "$NOMINALPP_BDT" "$LABEL_BDT" "$VARBINS" "$VARMIN_BDT" "$VARMAX_BDT" "$TEX_BDT" "$VARSIGN_BDT" "$NPFIT_PP"
rm fitD.exe
fi

if [ $DOFITPbPb_BDT -eq 1 ]; then
g++ fitD.C $(root-config --cflags --libs) -g -o fitD.exe
./fitD.exe "$LABELPbPb" "$NOMINALPbPb_BDT" "$LABEL_BDT" "$VARBINS" "$VARMIN_BDT" "$VARMAX_BDT" "$TEX_BDT" "$VARSIGN_BDT" "$NPFIT_PbPb"
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

if [ $DORATIO_TRKPT -eq 1 ]; then
g++ plotRatioDoubleratio.C $(root-config --cflags --libs) -g -o plotRatioDoubleratio.exe
./plotRatioDoubleratio.exe "$LABEL_TRKPT" "$TEX_TRKPT"
rm plotRatioDoubleratio.exe
fi

if [ $DORATIO_TRKETA -eq 1 ]; then
g++ plotRatioDoubleratio.C $(root-config --cflags --libs) -g -o plotRatioDoubleratio.exe
./plotRatioDoubleratio.exe "$LABEL_TRKETA" "$TEX_TRKETA"
rm plotRatioDoubleratio.exe
fi

if [ $DORATIO_BDT -eq 1 ]; then
g++ plotRatioDoubleratio.C $(root-config --cflags --libs) -g -o plotRatioDoubleratio.exe
./plotRatioDoubleratio.exe "$LABEL_BDT" "$TEX_BDT"
rm plotRatioDoubleratio.exe
fi
