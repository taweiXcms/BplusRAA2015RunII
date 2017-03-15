#!/bin/bash
#source clean.sh
CENTPbPbMIN=0
CENTPbPbMAX=100
#Central point of the analysis

DOANALYSISPP_FONLL=0
DOANALYSISPP_FITNP=0
DOANALYSISPP_FIT=0
DOANALYSISPP_MCSTUDY=0
DOANALYSISPP_CROSS=1

DOANALYSISPbPb_FONLL=0
DOANALYSISPbPb_FITNP=0
DOANALYSISPbPb_FIT=0
DOANALYSISPbPb_MCSTUDY=0
DOANALYSISPbPb_CROSS=1
DORAA=1

#Rapidity RAA
DOANALYSISPP_FIT_Y=0
DOANALYSISPP_MCSTUDY_Y=0
DOANALYSISPbPb_FIT_Y=0
DOANALYSISPbPb_MCSTUDY_Y=0
DORAA_Y=0

#CENTRALITY RAA
DOANALYSISPP_FIT_INC=0
DOANALYSISPP_MCSTUDY_INC=0
DOANALYSISPbPb_FIT_CENT=0
DOANALYSISPbPb_MCSTUDY_CENT=0
DORAA_CENT=0

DOANALYSISPP_MCSTUDY_FINE=0
DOANALYSISPP_EFFFIT=0
DOANALYSISPP_FIT_INC_EFFCOR=0
DOANALYSISPbPb_MCSTUDY_FINE_HIBIN=0
DOANALYSISPbPb_EFFFIT=0
DOANALYSISPbPb_FIT_CENT_EFFCOR=0
DORAA_CENT_EFFCOR=0
DOANALYSISPP_FIT_EFFCOR=0
DOANALYSISPP_CROSS_EFFCOR=0

#systematic section
DOCOMPARE=0
DOSAVEHISTPP=0
DOSAVEHISTPbPb=0
DOVARIATION=0
DOClosure=0
SAVEMVAPP=0
SAVEMVAPbPb=0
PLOTMVA=0


## PP MONTE CARLO
INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp_pthatweight_JingBDT.root" 
#INPUTMCPP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_Bpt0_Pthat5_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp_JingBDT.root"
## PP DATA 
INPUTDATAPP="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_pp_20160816_bPt0jpsiPt0tkPt0p5_Bp_JingBDT.root"

## PbPb MONTE CARLO
INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_pthatweight_JingBDT.root"
#INPUTMCPbPb="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_Bpt0_Pthat5_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root"
## PbPb DATA 
INPUTDATAPbPb="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_PbPb_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root"

## ANALYSIS PP TRIGGERED
FONLLDATINPUT="pp_Bplus_5p03TeV_y2p4"
FONLLOUTPUTFILE="ROOTfiles/fonllOutput_pp_Bplus_5p03TeV_y2p4.root"
OUTPUTFILERAA="ROOTfiles/outputRAA.root"

LABELPP="pp"
#LUMIPP=25.57 # PAS
#25.8*0.991
#LUMIPP=27.45 # paper
#27.7*0.991
LUMIPP=27.748 # paper 20170224
#28.0*0.991

ISMCPP=0
ISDOWEIGHTPP=0
SELGENPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
#SELGENPPACCPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1&&TMath::Abs(Gy)<2.4&& ((TMath::Abs(Gmu1eta)<1.2 && Gmu1pt>3.5) || (TMath::Abs(Gmu1eta)>1.2 && TMath::Abs(Gmu1eta)<2.1 && Gmu1pt>(5.77-1.8*TMath::Abs(Gmu1eta))) || (TMath::Abs(Gmu1eta)>2.1 && TMath::Abs(Gmu1eta)<2.4 && Gmu1pt>1.8)) && ((TMath::Abs(Gmu2eta)<1.2 && Gmu2pt>3.5) || (TMath::Abs(Gmu2eta)>1.2 && TMath::Abs(Gmu2eta)<2.1 && Gmu2pt>(5.77-1.8*TMath::Abs(Gmu2eta))) || (TMath::Abs(Gmu2eta)>2.1 && TMath::Abs(Gmu2eta)<2.4 && Gmu2pt>1.8)) && Gtk1pt>1. && TMath::Abs(Gtk1eta)<2.4"
SELGENPPACCPP="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1&&TMath::Abs(Gy)<2.4&& ((TMath::Abs(Gmu1eta)<1.2 && Gmu1pt>3.5) || (TMath::Abs(Gmu1eta)>1.2 && TMath::Abs(Gmu1eta)<2.1 && Gmu1pt>(5.77-1.8*TMath::Abs(Gmu1eta))) || (TMath::Abs(Gmu1eta)>2.1 && TMath::Abs(Gmu1eta)<2.4 && Gmu1pt>1.8)) && ((TMath::Abs(Gmu2eta)<1.2 && Gmu2pt>3.5) || (TMath::Abs(Gmu2eta)>1.2 && TMath::Abs(Gmu2eta)<2.1 && Gmu2pt>(5.77-1.8*TMath::Abs(Gmu2eta))) || (TMath::Abs(Gmu2eta)>2.1 && TMath::Abs(Gmu2eta)<2.4 && Gmu2pt>1.8)) && Gtk1pt>0.5 && TMath::Abs(Gtk1eta)<2.4"
#pre-approval + trg matching
#CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>1. && Bchi2cl>0.005 && cos(Bdtheta)>0.2 && ((Bpt>10 && (BsvpvDistance/BsvpvDisErr)>4.) || (Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5))"
#pp GA
CUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.5 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5)) && ((Bpt>7 && Bpt<10 && Btrk1Pt>0.748 && Bchi2cl>0.0322 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.989 && abs(Btrk1Eta)<2.4)|| (Bpt>10 && Bpt<15 && Btrk1Pt>0.878 && Bchi2cl>0.0014 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.971 && abs(Btrk1Eta)<2.39) || (Bpt>15 && Bpt<20 && Btrk1Pt>0.818 && Bchi2cl>0.00838 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.959 && abs(Btrk1Eta)<2.42) || (Bpt>20 && Bpt<30 && Btrk1Pt>0.84 && Bchi2cl>0.014 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.603 && abs(Btrk1Eta)<2.38) || (Bpt>30 && Bpt<50 && Btrk1Pt>1.06 && Bchi2cl>0.0155 && (BsvpvDistance/BsvpvDisErr)>3.53 && cos(Bdtheta)>0.995 && abs(Btrk1Eta)<2.37))"
BASECUTPP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4" # USED FOR MVA PREFILTER, UPDATE WITH CUTPP
RECOONLYPP=$CUTPP
TRGPP="(HLT_HIL1DoubleMu0_v1)"
TRGPPMC="(HLT_HIL1DoubleMu0ForPPRef_v1)"
#TRGPPMC="(1)"
OUTPUTFILEPP="ROOTfiles/hPtSpectrumBplusPP.root"
PREFIXPP="ROOTfiles/hPtSpectrumBplusPP" #IF YOU CHANGE OUTPUTFILEPP, CHANGE PREFIX PP ACCORDINGLY
OUTPUTFILEMCSTUDYPP="ROOTfiles/MCstudiesPP.root"
OUTPUTFILEPlotPP="ROOTfiles/CrossSectionPP.root"
OUTPUTFILEPPDATA="ROOTfiles/data_pp.root"
OUTPUTFILEPPMC="ROOTfiles/mc_pp.root"

#SETTING for NP fit
INPUTMCPP_NP="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160618_BJpsiMM_5p02TeV_TuneCUETP8M1.root"
CUTPP_NP="abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Btrk1Pt>1. && abs(Beta) < 2.4 && Bchi2cl > 0.005 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && cos(Bdtheta) > 0.2 && (BsvpvDistance/BsvpvDisErr)>4.&&Bgen!=23333"
OUTPUTFILEPP_NP="ROOTfiles/NPFitPP.root"
#NPFIT_PP="TMath::Erf((x-5.144224e+00)/-1.322908e-02)+1"
#NPFIT_PP="213.355334*TMath::Erf((x-5.139684)/-0.049768) + 213.355334 + 14.620639*(0.856020*Gaus(x,5.351676,0.198591)/(sqrt(2*3.14159)*0.198591)+(1-0.856020)*Gaus(x,5.351676,0.035974)/(sqrt(2*3.14159)*0.035974))"
#NPFIT_PP="3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+7.18255e1*TMath::Erf(-(x-5.14397)/6.43194e-2) + 7.18255e1"
NPFIT_PP="3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+2.11124e2*TMath::Erf(-(x-5.14397)/6.43194e-2) + 2.11124e2"

if [ $DOANALYSISPP_FONLL -eq 1 ]; then      
g++ Bplusdsigmadpt.cc $(root-config --cflags --libs) -g -o Bplusdsigmadpt.exe 
./Bplusdsigmadpt.exe "$FONLLDATINPUT"  "$FONLLOUTPUTFILE" "$LABELPP"
rm Bplusdsigmadpt.exe
fi 

if [ $DOANALYSISPP_FITNP -eq 1 ]; then      
g++ fitNP.C $(root-config --cflags --libs) -g -o fitNP.exe 
./fitNP.exe 0 "$INPUTMCPP_NP"  "$INPUTMCPP_NP"  "1" "$CUTPP_NP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPP_NP"
rm fitNP.exe
fi 

if [ $DOANALYSISPP_FIT -eq 1 ]; then      
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   "$ISMCPP"   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPP" "$NPFIT_PP" 0
rm fitB.exe
fi 

if [ $DOANALYSISPP_MCSTUDY -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe 
./MCefficiency.exe  0 "$INPUTMCPP"  "$SELGENPP" "$SELGENPPACCPP"  "$RECOONLYPP" "$CUTPP&&$TRGPPMC"  "$LABELPP" "$OUTPUTFILEMCSTUDYPP" "$ISDOWEIGHTPP" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiency.exe
fi

if [ $DOANALYSISPP_CROSS -eq 1 ]; then      
g++ CrossSectionRatio.C $(root-config --cflags --libs) -g -o CrossSectionRatio.exe 
./CrossSectionRatio.exe "$FONLLOUTPUTFILE"  "$OUTPUTFILEPP" "$OUTPUTFILEMCSTUDYPP" "$OUTPUTFILEPlotPP" 0 "$LABELPP" 0 "$LUMIPP"
rm CrossSectionRatio.exe
fi

LABELPbPb="PbPb"

#LUMIPbPb=15.5665
#LUMIPbPb=15.17
#350.68(ub-1)*208*208/1000000=15.17

#N_MB = 148356846 lumi_MB_BrilCalc = 7.213*3 lumi_dimuon_BrilCalc = 345.1 TAA = 392.4/(70.*1e9)
#148356846*345.1/(7.213*3) = 2.366003e+09, 2.366003e+09*392.4/(70.*1e9) = 1.326314e+01

#LUMIPbPb=13.14 #PAS
#3.153359e+09*345.1/467.112 = 2329685794.627413, 2329685794.627413*392.4/(70.*1e9) = 13.06
#13.06/0.99*0.996 = 13.14

#NEW TAA = 5.607 20170224
#2329685794.627413*5.607/1e9 = 13.06 same results

LUMIPbPb=13.1983052423 #paper 20170227
#NEW NMB from https://twiki.cern.ch/twiki/pub/CMS/HINUpsilonRaa2016/Jason_MinBiasCounting_2017-02-02.pdf
#2339717742. 2339717742*5.607/1e9 = 13.1187973794
#13.1187973794/0.99*0.996 = 13.1983052423

NMBEVT=2329685794.627413
ISMCPbPb=0
ISDOWEIGHTPbPb=1
SELGENPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1"
#SELGENPbPbACCPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1&&TMath::Abs(Gy)<2.4&& ((TMath::Abs(Gmu1eta)<1.2 && Gmu1pt>3.5) || (TMath::Abs(Gmu1eta)>1.2 && TMath::Abs(Gmu1eta)<2.1 && Gmu1pt>(5.77-1.8*TMath::Abs(Gmu1eta))) || (TMath::Abs(Gmu1eta)>2.1 && TMath::Abs(Gmu1eta)<2.4 && Gmu1pt>1.8)) && ((TMath::Abs(Gmu2eta)<1.2 && Gmu2pt>3.5) || (TMath::Abs(Gmu2eta)>1.2 && TMath::Abs(Gmu2eta)<2.1 && Gmu2pt>(5.77-1.8*TMath::Abs(Gmu2eta))) || (TMath::Abs(Gmu2eta)>2.1 && TMath::Abs(Gmu2eta)<2.4 && Gmu2pt>1.8)) && ((Gpt>7. && Gpt<10. && Gtk1pt>0.8) || (Gpt>10. && Gpt<15. && Gtk1pt>1.) || (Gpt>15. && Gpt<100. && Gtk1pt>1.5)) && TMath::Abs(Gtk1eta)<2.4"
SELGENPbPbACCPbPb="TMath::Abs(Gy)<2.4&&abs(GpdgId)==521&&GisSignal==1&&TMath::Abs(Gy)<2.4&& ((TMath::Abs(Gmu1eta)<1.2 && Gmu1pt>3.5) || (TMath::Abs(Gmu1eta)>1.2 && TMath::Abs(Gmu1eta)<2.1 && Gmu1pt>(5.77-1.8*TMath::Abs(Gmu1eta))) || (TMath::Abs(Gmu1eta)>2.1 && TMath::Abs(Gmu1eta)<2.4 && Gmu1pt>1.8)) && ((TMath::Abs(Gmu2eta)<1.2 && Gmu2pt>3.5) || (TMath::Abs(Gmu2eta)>1.2 && TMath::Abs(Gmu2eta)<2.1 && Gmu2pt>(5.77-1.8*TMath::Abs(Gmu2eta))) || (TMath::Abs(Gmu2eta)>2.1 && TMath::Abs(Gmu2eta)<2.4 && Gmu2pt>1.8)) && Gtk1pt>0.5 && TMath::Abs(Gtk1eta)<2.4"
RECOONLYPbPb="1"
#GA
CUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.8 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5)) && ((Bpt>7 && Bpt<10 && BDT>0.08)|| (Bpt>10 && Bpt<15 && Btrk1Pt>1.38 && Bchi2cl>0.0796 && (BsvpvDistance/BsvpvDisErr)>7.48 && cos(Bdtheta)>-0.415 && abs(Btrk1Eta)<2.16) || (Bpt>15 && Bpt<20 && Btrk1Pt>1.7 && Bchi2cl>0.0521 && (BsvpvDistance/BsvpvDisErr)>4.96 && cos(Bdtheta)>-0.76 && abs(Btrk1Eta)<2.3) || (Bpt>20 && Bpt<30 && Btrk1Pt>2.02 && Bchi2cl>0.00859 && (BsvpvDistance/BsvpvDisErr)>2.03 && cos(Bdtheta)>-0.349 && abs(Btrk1Eta)<2.36) || (Bpt>30 && Bpt<50 && Btrk1Pt>1.94 && Bchi2cl>0.0166 && (BsvpvDistance/BsvpvDisErr)>4.25 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.33))"
#SA
#CUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.8 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5)) && ((Bpt>7 && Bpt<10 && BDT>0.08)|| (Bpt>10 && Bpt<15 && Btrk1Pt>1.39 && Bchi2cl>0.0643 && (BsvpvDistance/BsvpvDisErr)>8.34 && cos(Bdtheta)>0.619 && abs(Btrk1Eta)<2.12) || (Bpt>15 && Bpt<20 && Btrk1Pt>1.61 && Bchi2cl>0.0342 && (BsvpvDistance/BsvpvDisErr)>5.22 && cos(Bdtheta)>0.572 && abs(Btrk1Eta)<2.23) || (Bpt>20 && Bpt<30 && Btrk1Pt>2.03 && Bchi2cl>0.00265 && (BsvpvDistance/BsvpvDisErr)>2.31 && cos(Bdtheta)>0.758 && abs(Btrk1Eta)<2.4) || (Bpt>30 && Bpt<50 && Btrk1Pt>1.71 && Bchi2cl>0.0117 && (BsvpvDistance/BsvpvDisErr)>4.24 && cos(Bdtheta)>0.991 && abs(Btrk1Eta)<2.33))"
BASECUTPbPb="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ( Bpt > 7 && Bpt < 10 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4 &&BDT>-0.1) || ( Bmumupt>3 && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || (Bmumupt>3 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Btrk1highPurity && abs(Btrk1Eta)<2.4))"
TRGPbPb="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
TRGPbPbMC="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)"
#TRGPbPbMC="(1)"
OUTPUTFILEPbPb="ROOTfiles/hPtSpectrumBplusPbPb.root"
PREFIXPbPb="ROOTfiles/hPtSpectrumBplusPbPb" #IF YOU CHANGE OUTPUTFILEPbPb, CHANGE PREFIXPbPb ACCORDINGLY
OUTPUTFILEMCSTUDYPbPb="ROOTfiles/MCstudiesPbPb.root"
OUTPUTFILEPlotPbPb="ROOTfiles/CrossSectionPbPb.root"
OUTPUTFILEPbPbDATA="ROOTfiles/data_PbPb.root"
OUTPUTFILEPbPbMC="ROOTfiles/mc_PbPb.root"

#SETTING for NP fit
INPUTMCPbPb_NP="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160618_Pythia8_BJpsiMM_ptJpsi_all_Hydjet_MB.root"
CUTPbPb_NP="pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && ( ((BsvpvDistance/BsvpvDisErr)>6. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.2 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 50 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4) || ((BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 50 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4))&&Bgen!=23333"
OUTPUTFILEPbPb_NP="ROOTfiles/NPFitPbPb.root"
#NPFIT_PbPb="TMath::Erf((x-5.145404e+00)/-3.407053e-02)+1"
#NPFIT_PbPb="199.353547*TMath::Erf((x-5.140255)/-0.039233) + 199.353547 + 26.393491*(0.613544*Gaus(x,5.354664,0.448306)/(sqrt(2*3.14159)*0.448306)+(1-0.613544)*Gaus(x,5.354664,0.111947)/(sqrt(2*3.14159)*0.111947))"
#NPFIT_PbPb="3.39711e1*Gaus(x,5.35002e0,3.87952e-2)*(x<5.35002e0)+(x>=5.35002e0)*3.39711e1*Gaus(x,5.35002e0,1.14232e-1)+6.89441e1*TMath::Erf(-(x-5.14189)/8.66243e-2) + 6.89441e1"
NPFIT_PbPb="3.39711e1*Gaus(x,5.35002e0,3.87952e-2)*(x<5.35002e0)+(x>=5.35002e0)*3.39711e1*Gaus(x,5.35002e0,1.14232e-1)+2.16376e2*TMath::Erf(-(x-5.14189)/8.66243e-2) + 2.16376e2"

if [ $DOANALYSISPbPb_FITNP -eq 1 ]; then      
g++ fitNP.C $(root-config --cflags --libs) -g -o fitNP.exe 
./fitNP.exe 0 "$INPUTMCPbPb_NP"  "$INPUTMCPbPb_NP"  "1" "$CUTPbPb_NP"   "$SELGENPbPb"   1   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_NP"
rm fitNP.exe
fi 

if [ $DOANALYSISPbPb_FIT -eq 1 ]; then      
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb" "$NPFIT_PbPb" 0 "$CENTPbPbMIN" "$CENTPbPbMAX"
rm fitB.exe
fi 

if [ $DOANALYSISPbPb_MCSTUDY -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe 
./MCefficiency.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb" "$SELGENPbPbACCPbPb"  "$RECOONLYPbPb" "$CUTPbPb&&$TRGPbPbMC"  "$LABELPbPb" "$OUTPUTFILEMCSTUDYPbPb" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiency.exe
fi

if [ $DOANALYSISPbPb_CROSS -eq 1 ]; then      
g++ CrossSectionRatio.C $(root-config --cflags --libs) -g -o CrossSectionRatio.exe 
./CrossSectionRatio.exe "$FONLLOUTPUTFILE"  "$OUTPUTFILEPbPb" "$OUTPUTFILEMCSTUDYPbPb" "$OUTPUTFILEPlotPbPb" 0 "$LABELPbPb" 0 "$LUMIPbPb"
rm CrossSectionRatio.exe
fi

if [ $DORAA -eq 1 ]; then
g++ NuclearModificationFactor.C $(root-config --cflags --libs) -g -o NuclearModificationFactor.exe
./NuclearModificationFactor.exe "$OUTPUTFILEPlotPP" "$OUTPUTFILEPlotPbPb"  "$LABELPbPb" "$OUTPUTFILERAA" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm NuclearModificationFactor.exe
fi


#######
#CENTRALITY RAPIDITY
#######
OUTPUTFILEPP_Y="ROOTfiles/hPtSpectrumBplusPP_Y.root"
if [ $DOANALYSISPP_FIT_Y -eq 1 ]; then
g++ fitBY.C $(root-config --cflags --libs) -g -o fitBY.exe
./fitBY.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP&&Bpt>7"  "$SELGENPP"   "$ISMCPP"   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPP_Y" "$NPFIT_PP" 0
rm fitBY.exe
fi

OUTPUTFILEPbPb_Y="ROOTfiles/hPtSpectrumBplusPbPb_Y.root"
if [ $DOANALYSISPbPb_FIT_Y -eq 1 ]; then      
g++ fitBY.C $(root-config --cflags --libs) -g -o fitBY.exe 
./fitBY.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb&&Bpt>7"  "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_Y" "$NPFIT_PbPb" 0 "$CENTPbPbMIN" "$CENTPbPbMAX"
rm fitBY.exe
fi 

OUTPUTFILEMCSTUDYPP_Y="ROOTfiles/MCstudiesPP_Y.root"
if [ $DOANALYSISPP_MCSTUDY_Y -eq 1 ]; then
g++ MCefficiencyY.C $(root-config --cflags --libs) -g -o MCefficiencyY.exe
./MCefficiencyY.exe  0 "$INPUTMCPP"  "$SELGENPP&&Gpt>7&&Gpt<50" "$SELGENPPACCPP&&Gpt>7&&Gpt<50"  "$RECOONLYPP" "$CUTPP&&$TRGPPMC"  "$LABELPP" "$OUTPUTFILEMCSTUDYPP_Y" "$ISDOWEIGHTPP" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiencyY.exe
fi

OUTPUTFILEMCSTUDYPbPb_Y="ROOTfiles/MCstudiesPbPb_Y.root"
if [ $DOANALYSISPbPb_MCSTUDY_Y -eq 1 ]; then
g++ MCefficiencyY.C $(root-config --cflags --libs) -g -o MCefficiencyY.exe
./MCefficiencyY.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb&&Gpt>7&&Gpt<50" "$SELGENPbPbACCPbPb&&Gpt>7&&Gpt<50"  "$RECOONLYPbPb" "$CUTPbPb&&$TRGPbPbMC"  "$LABELPbPb" "$OUTPUTFILEMCSTUDYPbPb_Y" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiencyY.exe
fi

OUTPUTFILERAA_Y="ROOTfiles/outputRAA_Y.root"
if [ $DORAA_Y -eq 1 ]; then
g++ NuclearModificationFactorY.C $(root-config --cflags --libs) -g -o NuclearModificationFactorY.exe
./NuclearModificationFactorY.exe "$OUTPUTFILEPP_Y" "$OUTPUTFILEPbPb_Y" "$OUTPUTFILEMCSTUDYPP_Y" "$OUTPUTFILEMCSTUDYPbPb_Y" "$LABELPbPb" "$OUTPUTFILERAA_Y" 0 "$LUMIPP" "$LUMIPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm NuclearModificationFactorY.exe
fi

#######
#CENTRALITY RAA
#######

OUTPUTFILEPP_INC="ROOTfiles/hPtSpectrumBplusPP_INC.root"
if [ $DOANALYSISPP_FIT_INC -eq 1 ]; then      
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   "$ISMCPP"   1   "$ISDOWEIGHTPP"   "ppInc"  "$OUTPUTFILEPP_INC" "$NPFIT_PP" 0
rm fitB.exe
fi 

OUTPUTFILEMCSTUDYPP_INC="ROOTfiles/MCstudiesPP_INC.root"
if [ $DOANALYSISPP_MCSTUDY_INC -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe 
./MCefficiency.exe  0 "$INPUTMCPP"  "$SELGENPP" "$SELGENPPACCPP"  "$RECOONLYPP" "$CUTPP&&$TRGPPMC"  "ppInc" "$OUTPUTFILEMCSTUDYPP_INC" "$ISDOWEIGHTPP" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiency.exe
fi

OUTPUTFILEPbPb_CENT="ROOTfiles/hPtSpectrumBplusPbPb_CENT.root"
if [ $DOANALYSISPbPb_FIT_CENT -eq 1 ]; then
g++ fitBCent.C $(root-config --cflags --libs) -g -o fitBCent.exe
./fitBCent.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb&&Bpt>7"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_CENT" "$NPFIT_PbPb" 0
rm fitBCent.exe
fi

OUTPUTFILEMCSTUDYPbPb_CENT="ROOTfiles/MCstudiesPbPb_CENT.root"
if [ $DOANALYSISPbPb_MCSTUDY_CENT -eq 1 ]; then      
g++ MCefficiencyCent.C $(root-config --cflags --libs) -g -o MCefficiencyCent.exe 
#./MCefficiencyCent.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb&&Gpt>7&&Gpt<50" "$SELGENPbPbACCPbPb&&Gpt>7&&Gpt<50"  "$RECOONLYPbPb" "$CUTPbPb&&$TRGPbPbMC"  "$LABELPbPb" "$OUTPUTFILEMCSTUDYPbPb_CENT" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
./MCefficiencyCent.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb&&Gpt>7&&Gpt<50" "$SELGENPbPbACCPbPb&&Gpt>7&&Gpt<50"  "$RECOONLYPbPb" "$CUTPbPb&&$TRGPbPbMC&&Bpt>7"  "$LABELPbPb" "$OUTPUTFILEMCSTUDYPbPb_CENT" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiencyCent.exe
fi

OUTPUTFILERAA_CENT="ROOTfiles/outputRAA_CENT.root"
if [ $DORAA_CENT -eq 1 ]; then
g++ NuclearModificationFactorCent.C $(root-config --cflags --libs) -g -o NuclearModificationFactorCent.exe
./NuclearModificationFactorCent.exe "$OUTPUTFILEPP_INC" "$OUTPUTFILEPbPb_CENT" "$OUTPUTFILEMCSTUDYPP_INC" "$OUTPUTFILEMCSTUDYPbPb_CENT" "$LABELPbPb" "$OUTPUTFILERAA_CENT" 0 "$LUMIPP" "$NMBEVT" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm NuclearModificationFactorCent.exe
fi

OUTPUTFILEMCSTUDYPP_FINE="ROOTfiles/MCstudiesPP_Fine.root"
if [ $DOANALYSISPP_MCSTUDY_FINE -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe
./MCefficiency.exe  0 "$INPUTMCPP"  "$SELGENPP" "$SELGENPPACCPP"  "$RECOONLYPP" "$CUTPP&&$TRGPPMC"  "ppFine" "$OUTPUTFILEMCSTUDYPP_FINE" "$ISDOWEIGHTPP" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiency.exe
fi

if [ $DOANALYSISPP_EFFFIT -eq 1 ]; then
g++ EfficiencyFit.C $(root-config --cflags --libs) -g -o EfficiencyFit.exe
./EfficiencyFit.exe  "$OUTPUTFILEMCSTUDYPP_FINE" "PP_Fine"
rm EfficiencyFit.exe
fi

OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN0to20="ROOTfiles/MCstudiesPbPb_Fine_hiBin0to20.root"
OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN20to60="ROOTfiles/MCstudiesPbPb_Fine_hiBin20to60.root"
OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN60to100="ROOTfiles/MCstudiesPbPb_Fine_hiBin60to100.root"
OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN100to200="ROOTfiles/MCstudiesPbPb_Fine_hiBin100to200.root"
if [ $DOANALYSISPbPb_MCSTUDY_FINE_HIBIN -eq 1 ]; then      
g++ MCefficiency.C $(root-config --cflags --libs) -g -o MCefficiency.exe
CentSel="hiBin>=0&&hiBin<20"
./MCefficiency.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb&&$CentSel" "$SELGENPbPbACCPbPb&&$CentSel"  "$RECOONLYPbPb&&$CentSel" "$CUTPbPb&&$TRGPbPbMC&&$CentSel"  "PbPbFine_hiBin0to20" "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN0to20" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
CentSel="hiBin>=20&&hiBin<60"
./MCefficiency.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb&&$CentSel" "$SELGENPbPbACCPbPb&&$CentSel"  "$RECOONLYPbPb&&$CentSel" "$CUTPbPb&&$TRGPbPbMC&&$CentSel"  "PbPbFine_hiBin20to60" "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN20to60" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
CentSel="hiBin>=60&&hiBin<100"
./MCefficiency.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb&&$CentSel" "$SELGENPbPbACCPbPb&&$CentSel"  "$RECOONLYPbPb&&$CentSel" "$CUTPbPb&&$TRGPbPbMC&&$CentSel"  "PbPbFine_hiBin60to100" "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN60to100" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
CentSel="hiBin>=100&&hiBin<=200"
./MCefficiency.exe 1 "$INPUTMCPbPb"  "$SELGENPbPb&&$CentSel" "$SELGENPbPbACCPbPb&&$CentSel"  "$RECOONLYPbPb&&$CentSel" "$CUTPbPb&&$TRGPbPbMC&&$CentSel"  "PbPbFine_hiBin100to200" "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN100to200" "$ISDOWEIGHTPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm MCefficiency.exe
fi

if [ $DOANALYSISPbPb_EFFFIT -eq 1 ]; then
g++ EfficiencyFit.C $(root-config --cflags --libs) -g -o EfficiencyFit.exe
./EfficiencyFit.exe  "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN0to20" "PbPb_Fine_HIBIN0to20"
./EfficiencyFit.exe  "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN20to60" "PbPb_Fine_HIBIN20to60"
./EfficiencyFit.exe  "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN60to100" "PbPb_Fine_HIBIN60to100"
./EfficiencyFit.exe  "$OUTPUTFILEMCSTUDYPbPb_FINE_HIBIN100to200" "PbPb_Fine_HIBIN100to200"
rm EfficiencyFit.exe
fi

OUTPUTFILEPP_INC_EFFCOR="ROOTfiles/hPtSpectrumBplusPP_INC_EFFCOR.root"
if [ $DOANALYSISPP_FIT_INC_EFFCOR -eq 1 ]; then      
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   "$ISMCPP"   1   "$ISDOWEIGHTPP"   "ppInc"  "$OUTPUTFILEPP_INC_EFFCOR" "$NPFIT_PP" 1
rm fitB.exe
fi 

OUTPUTFILEPbPb_CENT_EFFCOR="ROOTfiles/hPtSpectrumBplusPbPb_CENT_EFFCOR.root"
if [ $DOANALYSISPbPb_FIT_CENT_EFFCOR -eq 1 ]; then
g++ fitBCent.C $(root-config --cflags --libs) -g -o fitBCent.exe
./fitBCent.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb&&Bpt>7"   "$SELGENPbPb"   "$ISMCPbPb"   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPb_CENT_EFFCOR" "$NPFIT_PbPb" 1
rm fitBCent.exe
fi

OUTPUTFILERAA_CENT_EFFCOR="ROOTfiles/outputRAA_CENT_EFFCOR.root"
if [ $DORAA_CENT_EFFCOR -eq 1 ]; then
g++ NuclearModificationFactorCent.C $(root-config --cflags --libs) -g -o NuclearModificationFactorCent.exe
./NuclearModificationFactorCent.exe "$OUTPUTFILEPP_INC_EFFCOR" "$OUTPUTFILEPbPb_CENT_EFFCOR" "$OUTPUTFILEMCSTUDYPP_INC" "$OUTPUTFILEMCSTUDYPbPb_CENT" "$LABELPbPb" "$OUTPUTFILERAA_CENT_EFFCOR" 1 "$LUMIPP" "$NMBEVT" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm NuclearModificationFactorCent.exe
fi

###pp fit EFFCOR test
OUTPUTFILEPP_EFFCOR="ROOTfiles/hPtSpectrumBplusPP_EFFCOR.root"
if [ $DOANALYSISPP_FIT_EFFCOR -eq 1 ]; then      
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   "$ISMCPP"   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPP_EFFCOR" "$NPFIT_PP" 1
rm fitB.exe
fi 

OUTPUTFILEPlotPP_EFFCOR="ROOTfiles/CrossSectionPP_EFFCOR.root"
if [ $DOANALYSISPP_CROSS_EFFCOR -eq 1 ]; then      
g++ CrossSectionRatio.C $(root-config --cflags --libs) -g -o CrossSectionRatio.exe 
./CrossSectionRatio.exe "$FONLLOUTPUTFILE"  "$OUTPUTFILEPP_EFFCOR" "$OUTPUTFILEMCSTUDYPP" "$OUTPUTFILEPlotPP_EFFCOR" 0 "$LABELPP" 1 "$LUMIPP"
rm CrossSectionRatio.exe
fi

#MEAN COMPARISON

if [ $DOCOMPARE -eq 1 ]; then
g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 1 "$INPUTDATAPbPb"  "$INPUTMCPbPb"  "$TRGPbPb" "$CUTPbPb"   "$SELGENPbPb"   0   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPbDATA" "$NPFIT_PbPb" 0 "$CENTPbPbMIN" "$CENTPbPbMAX"
rm fitB.exe

g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 1 "$INPUTMCPbPb"  "$INPUTMCPbPb"  "$TRGPbPbMC" "$CUTPbPb"   "$SELGENPbPb"   1   1   "$ISDOWEIGHTPbPb"   "$LABELPbPb"  "$OUTPUTFILEPbPbMC" "$NPFIT_PbPb" 0 "$CENTPbPbMIN" "$CENTPbPbMAX"
rm fitB.exe

g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTDATAPP"  "$INPUTMCPP"  "$TRGPP" "$CUTPP"   "$SELGENPP"   0   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPPDATA" "$NPFIT_PP" 0
rm fitB.exe

g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMC" "$CUTPP"   "$SELGENPP"   1   1   "$ISDOWEIGHTPP"   "$LABELPP"  "$OUTPUTFILEPPMC" "$NPFIT_PP" 0
rm fitB.exe

g++ comparison.C $(root-config --cflags --libs) -g -o comparison.exe 
./comparison.exe 
rm comparison.exe
fi


#FIT VARIATION

if [ $DOSAVEHISTPP -eq 1 ]; then
g++ savehisto.C $(root-config --cflags --libs) -g -o savehisto.exe 
./savehisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "$CUTPP" "$ISMCPP" "$ISDOWEIGHTPP" "$LABELPP"
rm savehisto.exe
fi

if [ $DOSAVEHISTPbPb -eq 1 ]; then
g++ savehisto.C $(root-config --cflags --libs) -g -o savehisto.exe 
./savehisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "$CUTPbPb" "$ISMCPbPb" "$ISDOWEIGHTPbPb" "$LABELPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm savehisto.exe
fi

if [ $DOVARIATION -eq 1 ]; then
g++ fitBvar.C $(root-config --cflags --libs) -g -o fitBvar.exe 
./fitBvar.exe "$LABELPP" "$PREFIXPP" "$OUTPUTFILEPP_NP"
rm fitBvar.exe

g++ fitBvar.C $(root-config --cflags --libs) -g -o fitBvar.exe 
./fitBvar.exe "$LABELPbPb" "$PREFIXPbPb" "$OUTPUTFILEPbPb_NP" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm fitBvar.exe
fi

# MVA COMPARISON

if [ $SAVEMVAPP -eq 1 ]; then
g++ mvahisto.C $(root-config --cflags --libs) -g -o mvahisto.exe 
./mvahisto.exe "$INPUTDATAPP" "$INPUTMCPP" "$TRGPP" "$CUTPP" "$ISMCPP" "$ISDOWEIGHTPP" "$LABELPP"
rm mvahisto.exe
fi

if [ $SAVEMVAPbPb -eq 1 ]; then
g++ mvahisto.C $(root-config --cflags --libs) -g -o mvahisto.exe 
./mvahisto.exe "$INPUTDATAPbPb" "$INPUTMCPbPb" "$TRGPbPb" "$CUTPbPb" "$ISMCPbPb" "$ISDOWEIGHTPbPb" "$LABELPbPb" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm mvahisto.exe
fi

if [ $PLOTMVA -eq 1 ]; then
g++ fitBmva.C $(root-config --cflags --libs) -g -o fitBmva.exe 
./fitBmva.exe "$LABELPP" "$PREFIXPP" "$OUTPUTFILEPP_NP"
rm fitBmva.exe

g++ fitBmva.C $(root-config --cflags --libs) -g -o fitBmva.exe 
./fitBmva.exe "$LABELPbPb" "$PREFIXPbPb" "$OUTPUTFILEPbPb_NP" "$CENTPbPbMIN" "$CENTPbPbMAX"
rm fitBmva.exe
fi

if [ $DOClosure -eq 1 ]; then      

OUTPUTFILEPPMCClosure="ROOTfiles/hPtSpectrumBplusPPMCClosure.root"
LUMIPPMCClosure=1
ISMCPPMCClosure=1
ISDOWEIGHTPPMCClosure=0
TRGPPMCClosure="1"
LABELPPMCClosure="PPMCClosure"

g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 0 "$INPUTMCPP"  "$INPUTMCPP"  "$TRGPPMCClosure" "$CUTPP"   "$SELGENPP"   "$ISMCPPMCClosure"   "$LUMIPPMCClosure"   "$ISDOWEIGHTPPMCClosure"   "$LABELPPMCClosure"  "$OUTPUTFILEPPMCClosure" "$NPFIT_PP" 0
g++ ClosureTest.C $(root-config --cflags --libs) -g -o ClosureTest.exe 
./ClosureTest.exe "$OUTPUTFILEPPMCClosure" "$LABELPP"

OUTPUTFILEPbPbMCClosure="ROOTfiles/hPtSpectrumBplusPbPbMCClosure.root"
LUMIPbPbMCClosure=1
ISMCPbPbMCClosure=1
ISDOWEIGHTPbPbMCClosure=0
TRGPbPbMCClosure="1"
LABELPbPbMCClosure="PbPbMCClosure"

g++ fitB.C $(root-config --cflags --libs) -g -o fitB.exe 
./fitB.exe 1 "$INPUTMCPbPb"  "$INPUTMCPbPb"  "$TRGPbPbMCClosure" "$CUTPbPb"   "$SELGENPbPb"   "$ISMCPbPbMCClosure"   "$LUMIPbPbMCClosure"   "$ISDOWEIGHTPbPbMCClosure"   "$LABELPbPbMCClosure"  "$OUTPUTFILEPbPbMCClosure" "$NPFIT_PbPb" 0 "$CENTPbPbMIN" "$CENTPbPbMAX"
g++ ClosureTest.C $(root-config --cflags --libs) -g -o ClosureTest.exe 
./ClosureTest.exe "$OUTPUTFILEPbPbMCClosure" "$LABELPbPb"

fi
