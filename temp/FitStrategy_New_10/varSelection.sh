DOSAVEHISTPP_All=0
DOSAVEHISTPP_PT7=0
DOSAVEHISTPP_PT10=0
DOSAVEHISTPP_PT15=0
DOSAVEHISTPP_PT20=0
DOSAVEHISTPP_PT30=0
DOSAVEHISTPbPb_All=1

DOFITPP=0
DOFITPbPb=1

LABELPP_ALL="PP_ALL"
LABELPP_PT7="PP_PT7"
LABELPP_PT10="PP_PT10"
LABELPP_PT15="PP_PT15"
LABELPP_PT20="PP_PT20"
LABELPP_PT30="PP_PT30"
LABELPbPb_ALL="PbPb_ALL"

#############
#pp
#############
INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp_pthatweight_JingBDT.root"
INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_pp_20160816_bPt0jpsiPt0tkPt0p5_Bp_JingBDT.root"
TRGPP="(HLT_HIL1DoubleMu0_v1)"
TRGPPMC="(HLT_HIL1DoubleMu0ForPPRef_v1)"
MATCHEDCUTPP="Bgen==23333"
ISMCPP=0
WEIGHTPP="pthatweight*(pow(10,-0.094152+0.008102*Bgenpt+Bgenpt*Bgenpt*0.000171+Bgenpt*Bgenpt*Bgenpt*-0.000005+Bgenpt*Bgenpt*Bgenpt*Bgenpt*-0.000000+Bgenpt*Bgenpt*Bgenpt*Bgenpt*Bgenpt*0.000000))"
NPFIT_PP="3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+2.11124e2*TMath::Erf(-(x-5.14397)/6.43194e-2) + 2.11124e2"
CUTPP_BASE="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.5 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5))"
CUTPP_D4PT7="(Bpt>7 && Bpt<10 && Btrk1Pt>0.748 && Bchi2cl>0.0322 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.989 && abs(Btrk1Eta)<2.4)"
CUTPP_D4PT10="(Bpt>10 && Bpt<15 && Btrk1Pt>0.878 && Bchi2cl>0.0014 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.971 && abs(Btrk1Eta)<2.39)"
CUTPP_D4PT15="(Bpt>15 && Bpt<20 && Btrk1Pt>0.818 && Bchi2cl>0.00838 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.959 && abs(Btrk1Eta)<2.42)"
CUTPP_D4PT20="(Bpt>20 && Bpt<30 && Btrk1Pt>0.84 && Bchi2cl>0.014 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.603 && abs(Btrk1Eta)<2.38)"
CUTPP_D4PT30="(Bpt>30 && Bpt<50 && Btrk1Pt>1.06 && Bchi2cl>0.0155 && (BsvpvDistance/BsvpvDisErr)>3.53 && cos(Bdtheta)>0.995 && abs(Btrk1Eta)<2.37)"
CUTPP_DOWNPT7="(Bpt>7 && Bpt<10 && Btrk1Pt>0.896 && Bchi2cl>0.004 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.991 && abs(Btrk1Eta)<2.38)"
CUTPP_DOWNPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.079 && Bchi2cl>0.042 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.965 && abs(Btrk1Eta)<2.37)"
CUTPP_DOWNPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.349 && Bchi2cl>0.023 && (BsvpvDistance/BsvpvDisErr)>1.88 && cos(Bdtheta)>0.934 && abs(Btrk1Eta)<2.4)"
CUTPP_DOWNPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>1.681 && Bchi2cl>0.0007 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.572 && abs(Btrk1Eta)<2.26)"
CUTPP_DOWNPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>1.857 && Bchi2cl>0.051 && (BsvpvDistance/BsvpvDisErr)>0.64 && cos(Bdtheta)>0.994 && abs(Btrk1Eta)<2.34)"
CUTPP_UPPT7="(Bpt>7 && Bpt<10 && Btrk1Pt>0.580 && Bchi2cl>0.022 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.989 && abs(Btrk1Eta)<2.37)"
CUTPP_UPPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>0.633 && Bchi2cl>0.011 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.883 && abs(Btrk1Eta)<2.39)"
CUTPP_UPPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>0.621 && Bchi2cl>0.0044 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>-0.499 && abs(Btrk1Eta)<2.42)"
CUTPP_UPPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>0.551 && Bchi2cl>0.014 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.217 && abs(Btrk1Eta)<2.39)"
CUTPP_UPPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>0.566 && Bchi2cl>0.0081 && (BsvpvDistance/BsvpvDisErr)>1.78 && cos(Bdtheta)>0.884 && abs(Btrk1Eta)<2.33)"

if [ $DOSAVEHISTPP_All -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_D4PT7||$CUTPP_D4PT10||$CUTPP_D4PT15||$CUTPP_D4PT20||$CUTPP_D4PT30)"                  "$ISMCPP" "1"   "${LABELPP_ALL}D4" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_D4PT7||$CUTPP_D4PT10||$CUTPP_D4PT15||$CUTPP_D4PT20||$CUTPP_D4PT30)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_ALL}D4" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_DOWNPT7||$CUTPP_DOWNPT10||$CUTPP_DOWNPT15||$CUTPP_DOWNPT20||$CUTPP_DOWNPT30)"                  "$ISMCPP" "1"   "${LABELPP_ALL}DOWN" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_DOWNPT7||$CUTPP_DOWNPT10||$CUTPP_DOWNPT15||$CUTPP_DOWNPT20||$CUTPP_DOWNPT30)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_ALL}DOWN" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_UPPT7||$CUTPP_UPPT10||$CUTPP_UPPT15||$CUTPP_UPPT20||$CUTPP_UPPT30)"                  "$ISMCPP" "1"   "${LABELPP_ALL}UP" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_UPPT7||$CUTPP_UPPT10||$CUTPP_UPPT15||$CUTPP_UPPT20||$CUTPP_UPPT30)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_ALL}UP" 
rm saveMasshisto.exe
fi

if [ $DOFITPP -eq 1 ]; then
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe
./fitB.exe "PP" "$LABELPP_ALL" "$NPFIT_PP"
./fitB.exe "PP" "$LABELPP_PT7" "$NPFIT_PP"
./fitB.exe "PP" "$LABELPP_PT10" "$NPFIT_PP"
./fitB.exe "PP" "$LABELPP_PT15" "$NPFIT_PP"
./fitB.exe "PP" "$LABELPP_PT20" "$NPFIT_PP"
./fitB.exe "PP" "$LABELPP_PT30" "$NPFIT_PP"
rm fitB.exe
fi


#############
#pp individual
#############
if [ $DOSAVEHISTPP_PT7 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_D4PT7)"                  "$ISMCPP" "1"   "${LABELPP_PT7}D4" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_D4PT7)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT7}D4" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_DOWNPT7)"                  "$ISMCPP" "1"   "${LABELPP_PT7}DOWN" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_DOWNPT7)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT7}DOWN" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_UPPT7)"                  "$ISMCPP" "1"   "${LABELPP_PT7}UP" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_UPPT7)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT7}UP" 
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_PT10 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_D4PT10)"                  "$ISMCPP" "1"   "${LABELPP_PT10}D4" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_D4PT10)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT10}D4" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_DOWNPT10)"                  "$ISMCPP" "1"   "${LABELPP_PT10}DOWN" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_DOWNPT10)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT10}DOWN" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_UPPT10)"                  "$ISMCPP" "1"   "${LABELPP_PT10}UP" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_UPPT10)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT10}UP" 
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_PT15 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_D4PT15)"                  "$ISMCPP" "1"   "${LABELPP_PT15}D4" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_D4PT15)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT15}D4" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_DOWNPT15)"                  "$ISMCPP" "1"   "${LABELPP_PT15}DOWN" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_DOWNPT15)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT15}DOWN" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_UPPT15)"                  "$ISMCPP" "1"   "${LABELPP_PT15}UP" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_UPPT15)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT15}UP" 
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_PT20 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_D4PT20)"                  "$ISMCPP" "1"   "${LABELPP_PT20}D4" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_D4PT20)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT20}D4" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_DOWNPT20)"                  "$ISMCPP" "1"   "${LABELPP_PT20}DOWN" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_DOWNPT20)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT20}DOWN" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_UPPT20)"                  "$ISMCPP" "1"   "${LABELPP_PT20}UP" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_UPPT20)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT20}UP" 
rm saveMasshisto.exe
fi

if [ $DOSAVEHISTPP_PT30 -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_D4PT30)"                  "$ISMCPP" "1"   "${LABELPP_PT30}D4" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_D4PT30)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT30}D4" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_DOWNPT30)"                  "$ISMCPP" "1"   "${LABELPP_PT30}DOWN" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_DOWNPT30)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT30}DOWN" 
./saveMasshisto.exe "$INPUTDATAPP" "$TRGPP" "${CUTPP_BASE}&&($CUTPP_UPPT30)"                  "$ISMCPP" "1"   "${LABELPP_PT30}UP" 
./saveMasshisto.exe "$INPUTMCPP" "$TRGPPMC" "${CUTPP_BASE}&&($CUTPP_UPPT30)&&${MATCHEDCUTPP}" "1" "$WEIGHTPP" "${LABELPP_PT30}UP" 
rm saveMasshisto.exe
fi

#############
#PbPb
#############
INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_pthatweight_JingBDT.root"
INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_PbPb_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root"
TRGPbPb="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
TRGPbPbMC="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
MATCHEDCUTPbPb="Bgen==23333"
ISMCPbPb=0
WEIGHTPbPb="pthatweight*(pow(10,-0.107832+0.010248*Bgenpt+Bgenpt*Bgenpt*0.000079+Bgenpt*Bgenpt*Bgenpt*-0.000003+Bgenpt*Bgenpt*Bgenpt*Bgenpt*-0.000000+Bgenpt*Bgenpt*Bgenpt*Bgenpt*Bgenpt*0.000000))*(6.08582+hiBin*(-0.155739)+hiBin*hiBin*(0.00149946)+hiBin*hiBin*hiBin*(-6.41629e-06)+hiBin*hiBin*hiBin*hiBin*(1.02726e-08))"
NPFIT_PbPb="3.39711e1*Gaus(x,5.35002e0,3.87952e-2)*(x<5.35002e0)+(x>=5.35002e0)*3.39711e1*Gaus(x,5.35002e0,1.14232e-1)+2.16376e2*TMath::Erf(-(x-5.14189)/8.66243e-2) + 2.16376e2"
CUTPbPb_BASE="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.8 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5))"

CUTPbPb_D4PT7="(Bpt>7 && Bpt<10 && BDT>0.08)"
CUTPbPb_D4PT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.38 && Bchi2cl>0.0796 && (BsvpvDistance/BsvpvDisErr)>7.48 && cos(Bdtheta)>-0.415 && abs(Btrk1Eta)<2.16)"
CUTPbPb_D4PT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.7 && Bchi2cl>0.0521 && (BsvpvDistance/BsvpvDisErr)>4.96 && cos(Bdtheta)>-0.76 && abs(Btrk1Eta)<2.3)"
CUTPbPb_D4PT20="(Bpt>20 && Bpt<30 && Btrk1Pt>2.02 && Bchi2cl>0.00859 && (BsvpvDistance/BsvpvDisErr)>2.03 && cos(Bdtheta)>-0.349 && abs(Btrk1Eta)<2.36)"
CUTPbPb_D4PT30="(Bpt>30 && Bpt<50 && Btrk1Pt>1.94 && Bchi2cl>0.0166 && (BsvpvDistance/BsvpvDisErr)>4.25 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.33)"

#down 10%
CUTPbPb_DOWNPT7="(Bpt>7 && Bpt<10 && BDT>0.15)"
CUTPbPb_DOWNPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.24 && Bchi2cl>0.0731 && (BsvpvDistance/BsvpvDisErr)>13.00 && cos(Bdtheta)>0.86 && abs(Btrk1Eta)<2.40)"
CUTPbPb_DOWNPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.73 && Bchi2cl>0.110 && (BsvpvDistance/BsvpvDisErr)>6.53 && cos(Bdtheta)>-0.807 && abs(Btrk1Eta)<2.26)"
CUTPbPb_DOWNPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>2.88 && Bchi2cl>0.00859 && (BsvpvDistance/BsvpvDisErr)>1.85 && cos(Bdtheta)>-0.406 && abs(Btrk1Eta)<2.39)"
CUTPbPb_DOWNPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>1.86 && Bchi2cl>0.00456 && (BsvpvDistance/BsvpvDisErr)>6.0 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.30)"
#down 5%
#CUTPbPb_DOWNPT7="(Bpt>7 && Bpt<10 && BDT>0.11)"
#CUTPbPb_DOWNPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.68 && Bchi2cl>0.10 && (BsvpvDistance/BsvpvDisErr)>6.93 && cos(Bdtheta)>0.86 && abs(Btrk1Eta)<2.41)"
#CUTPbPb_DOWNPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.62 && Bchi2cl>0.097 && (BsvpvDistance/BsvpvDisErr)>5.97 && cos(Bdtheta)>-0.051 && abs(Btrk1Eta)<2.28)"
#CUTPbPb_DOWNPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>2.52 && Bchi2cl>0.0037 && (BsvpvDistance/BsvpvDisErr)>3.5 && cos(Bdtheta)>0.070 && abs(Btrk1Eta)<2.40)"
#CUTPbPb_DOWNPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>1.78 && Bchi2cl>0.020 && (BsvpvDistance/BsvpvDisErr)>4.60 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.29)"
# *0.9
#CUTPbPb_DOWNPT7="(Bpt>7 && Bpt<10 && BDT>0.13)"
#CUTPbPb_DOWNPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.07 && Bchi2cl>0.074 && (BsvpvDistance/BsvpvDisErr)>12.5 && cos(Bdtheta)>0.63 && abs(Btrk1Eta)<2.38)"
#CUTPbPb_DOWNPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.70 && Bchi2cl>0.091 && (BsvpvDistance/BsvpvDisErr)>6.17 && cos(Bdtheta)>0.86 && abs(Btrk1Eta)<2.28)"
#CUTPbPb_DOWNPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>2.82 && Bchi2cl>0.0092 && (BsvpvDistance/BsvpvDisErr)>3.50 && cos(Bdtheta)>0.091 && abs(Btrk1Eta)<2.41)"
#CUTPbPb_DOWNPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>1.78 && Bchi2cl>0.0046 && (BsvpvDistance/BsvpvDisErr)>5.88 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.29)"

#up 10%
CUTPbPb_UPPT7="(Bpt>7 && Bpt<10 && BDT>0.02)"
CUTPbPb_UPPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.11 && Bchi2cl>0.0567 && (BsvpvDistance/BsvpvDisErr)>7.80 && cos(Bdtheta)>0.91 && abs(Btrk1Eta)<2.40)"
CUTPbPb_UPPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.18 && Bchi2cl>0.0173 && (BsvpvDistance/BsvpvDisErr)>5.66 && cos(Bdtheta)>0.127 && abs(Btrk1Eta)<2.36)"
CUTPbPb_UPPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>1.06 && Bchi2cl>0.0129 && (BsvpvDistance/BsvpvDisErr)>2.85 && cos(Bdtheta)>-0.302 && abs(Btrk1Eta)<2.39)"
CUTPbPb_UPPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>0.92 && Bchi2cl>0.0132 && (BsvpvDistance/BsvpvDisErr)>2.18 && cos(Bdtheta)>0.988 && abs(Btrk1Eta)<2.34)"
#up 5%
#CUTPbPb_UPPT7="(Bpt>7 && Bpt<10 && BDT>0.05)"
#CUTPbPb_UPPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.42 && Bchi2cl>0.063 && (BsvpvDistance/BsvpvDisErr)>6.56 && cos(Bdtheta)>0.42 && abs(Btrk1Eta)<2.24)"
#CUTPbPb_UPPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.62 && Bchi2cl>0.0095 && (BsvpvDistance/BsvpvDisErr)>5.39 && cos(Bdtheta)>-0.0046 && abs(Btrk1Eta)<2.28)"
#CUTPbPb_UPPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>1.39 && Bchi2cl>0.0052 && (BsvpvDistance/BsvpvDisErr)>3.85 && cos(Bdtheta)>-0.12 && abs(Btrk1Eta)<2.38)"
#CUTPbPb_UPPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>1.01 && Bchi2cl>0.013 && (BsvpvDistance/BsvpvDisErr)>2.45 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.34)"
# *1.1
#CUTPbPb_UPPT7="(Bpt>7 && Bpt<10 && BDT>0.037)"
#CUTPbPb_UPPT10="(Bpt>10 && Bpt<15 && Btrk1Pt>1.21 && Bchi2cl>0.080 && (BsvpvDistance/BsvpvDisErr)>7.68 && cos(Bdtheta)>0.20 && abs(Btrk1Eta)<2.31)"
#CUTPbPb_UPPT15="(Bpt>15 && Bpt<20 && Btrk1Pt>1.58 && Bchi2cl>0.0035 && (BsvpvDistance/BsvpvDisErr)>5.12 && cos(Bdtheta)>-0.29 && abs(Btrk1Eta)<2.40)"
#CUTPbPb_UPPT20="(Bpt>20 && Bpt<30 && Btrk1Pt>1.16 && Bchi2cl>0.0046 && (BsvpvDistance/BsvpvDisErr)>3.50 && cos(Bdtheta)>0.50 && abs(Btrk1Eta)<2.35)"
#CUTPbPb_UPPT30="(Bpt>30 && Bpt<50 && Btrk1Pt>0.92 && Bchi2cl>0.0132 && (BsvpvDistance/BsvpvDisErr)>2.18 && cos(Bdtheta)>0.988 && abs(Btrk1Eta)<2.34)"

if [ $DOSAVEHISTPbPb_All -eq 1 ]; then
g++ saveMasshisto.C $(root-config --cflags --libs) -g -o saveMasshisto.exe
./saveMasshisto.exe "$INPUTDATAPbPb" "$TRGPbPb" "${CUTPbPb_BASE}&&($CUTPbPb_D4PT7||$CUTPbPb_D4PT10||$CUTPbPb_D4PT15||$CUTPbPb_D4PT20||$CUTPbPb_D4PT30)"                    "$ISMCPbPb" "1"   "${LABELPbPb_ALL}D4" 
./saveMasshisto.exe "$INPUTMCPbPb" "$TRGPbPbMC" "${CUTPbPb_BASE}&&($CUTPbPb_D4PT7||$CUTPbPb_D4PT10||$CUTPbPb_D4PT15||$CUTPbPb_D4PT20||$CUTPbPb_D4PT30)&&${MATCHEDCUTPbPb}" "1" "$WEIGHTPbPb" "${LABELPbPb_ALL}D4" 
./saveMasshisto.exe "$INPUTDATAPbPb" "$TRGPbPb" "${CUTPbPb_BASE}&&($CUTPbPb_DOWNPT7||$CUTPbPb_DOWNPT10||$CUTPbPb_DOWNPT15||$CUTPbPb_DOWNPT20||$CUTPbPb_DOWNPT30)"                    "$ISMCPbPb" "1"   "${LABELPbPb_ALL}DOWN" 
./saveMasshisto.exe "$INPUTMCPbPb" "$TRGPbPbMC" "${CUTPbPb_BASE}&&($CUTPbPb_DOWNPT7||$CUTPbPb_DOWNPT10||$CUTPbPb_DOWNPT15||$CUTPbPb_DOWNPT20||$CUTPbPb_DOWNPT30)&&${MATCHEDCUTPbPb}" "1" "$WEIGHTPbPb" "${LABELPbPb_ALL}DOWN" 
./saveMasshisto.exe "$INPUTDATAPbPb" "$TRGPbPb" "${CUTPbPb_BASE}&&($CUTPbPb_UPPT7||$CUTPbPb_UPPT10||$CUTPbPb_UPPT15||$CUTPbPb_UPPT20||$CUTPbPb_UPPT30)"                    "$ISMCPbPb" "1"   "${LABELPbPb_ALL}UP" 
./saveMasshisto.exe "$INPUTMCPbPb" "$TRGPbPbMC" "${CUTPbPb_BASE}&&($CUTPbPb_UPPT7||$CUTPbPb_UPPT10||$CUTPbPb_UPPT15||$CUTPbPb_UPPT20||$CUTPbPb_UPPT30)&&${MATCHEDCUTPbPb}" "1" "$WEIGHTPbPb" "${LABELPbPb_ALL}UP" 
rm saveMasshisto.exe
fi

if [ $DOFITPbPb -eq 1 ]; then
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe
./fitB.exe "PbPb" "$LABELPbPb_ALL" "$NPFIT_PbPb"
rm fitB.exe
fi
