#include "TFile.h"
#include "TTree.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TString.h"
void draw(){
//	TFile *inf = new TFile("/data/twang/HeavyFlavor_20131030/Bmeson_PbPbAna/Samples/BntupleData_BfinderData_RECO_HIDiMuon_L2DoubleMu3Skim_v10_JpsiFilter_v1_CMSSW740pre8_20150428_20150604_20150608.root");
//	TFile *inf = new TFile("/data/wangj/Data2015/Bntuple/PbPb/Bntuple_BfinderData_PbPb_20160406_bPt5jpsiPt0tkPt0p8_BpB0BsX_skimhlt.root");
//	TFile *inf = new TFile("/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160605_BfinderData_PbPb_20160406_bPt5jpsiPt0tkPt0p8_BpB0BsX.root");//pbpb
//	TFile *inf = new TFile("/data/wangj/Data2015/Bntuple/pp/ntB_EvtBase_20160420_BfinderData_pp_20160419_bPt0jpsiPt0tkPt0p5.root");//pp
	TFile *inf = new TFile("/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160608_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp.root");//pp
//	TFile *inf = new TFile("/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160606_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root");//pbpb mc
//	TFile *inf = new TFile("/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160606_pp_Pythia8_BuToJpsiK_Bpt5p0_Pthat5.root");//pp mc
    TTree* nt = (TTree*) inf->Get("ntKp");
    TTree* HltTree= (TTree*) inf->Get("ntHlt");
    HltTree->AddFriend(nt);
    nt->AddFriend(HltTree);
	TCanvas* c =  new TCanvas("c","",600,600);
	c->cd();
//	TString muAcc = Form("((abs(Bmu1eta)<1.0 && Bmu1pt>3.4) || (abs(Bmu1eta)>1.0 && abs(Bmu1eta)<1.5 && Bmu1pt>(5.8-2.4*abs(Bmu1eta))) || (abs(Bmu1eta)>1.5 && abs(Bmu1eta)<2.4 && Bmu1pt>(3.4-0.78*abs(Bmu1eta))))&&((abs(Bmu2eta)<1.0 && Bmu2pt>3.4) || (abs(Bmu2eta)>1.0 && abs(Bmu2eta)<1.5 && Bmu2pt>(5.8-2.4*abs(Bmu2eta))) || (abs(Bmu2eta)>1.5 && abs(Bmu2eta)<2.4 && Bmu2pt>(3.4-0.78*abs(Bmu2eta))))");//2011
//	TString muAcc = Form(" ((abs(Bmu1eta)<1.3 && Bmu1pt>3.3) || (abs(Bmu1eta)>1.3 && abs(Bmu1eta)<2.2 && Bmu1p>2.9) || (abs(Bmu1eta)>2.2 && abs(Bmu1eta)<2.4 && Bmu1pt>0.8)) && ((abs(Bmu2eta)<1.3 && Bmu2pt>3.3) || (abs(Bmu2eta)>1.3 && abs(Bmu2eta)<2.2 && Bmu2p>2.9) || (abs(Bmu2eta)>2.2 && abs(Bmu2eta)<2.4 && Bmu2pt>0.8))");//statdard
	TString muAcc = Form("((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8))");//2015

//	TString muID = Form("((abs(Bmu1eta)<1.0 && Bmu1pt>3.4) || (abs(Bmu1eta)>1.0 && abs(Bmu1eta)<1.5 && Bmu1pt>(5.8-2.4*abs(Bmu1eta))) || (abs(Bmu1eta)>1.5 && abs(Bmu1eta)<2.4 && Bmu1pt>(3.4-0.78*abs(Bmu1eta))))&&((abs(Bmu2eta)<1.0 && Bmu2pt>3.4) || (abs(Bmu2eta)>1.0 && abs(Bmu2eta)<1.5 && Bmu2pt>(5.8-2.4*abs(Bmu2eta))) || (abs(Bmu2eta)>1.5 && abs(Bmu2eta)<2.4 && Bmu2pt>(3.4-0.78*abs(Bmu2eta))))&&Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1InPixelLayer>1 && Bmu2InPixelLayer>1 && Bmu1normchi2<1.8 && Bmu2normchi2<1.8 && Bmu1dxyPV<3 && Bmu2dxyPV<3 && Bmu1dzPV<30 && Bmu2dzPV<30 && Bmumupt>3 && Btrk1Pt>1 && abs(By)<2.4 && Bchi2cl > 0.004345 && cos(Bdtheta) > 0.256418 && Bd0/Bd0Err > 6.679356");
//	TString muID = Form("Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1InPixelLayer>1 && Bmu2InPixelLayer>1 && Bmu1normchi2<1.8 && Bmu2normchi2<1.8 && Bmu1dxyPV<3 && Bmu2dxyPV<3 && Bmu1dzPV<30 && Bmu2dzPV<30 && %s", muAcc.Data());//2011
//	TString muID = Form("Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && %s", muAcc.Data());//2015 soft
	TString muID = Form("Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && %s", muAcc.Data());//2015 hybrid mu ID


//	TString cut = Form("");
//    TString cut="((abs(mu1eta)<1.0 && mu1pt>3.4) || (abs(mu1eta)>1.0 && abs(mu1eta)<1.5 && mu1pt>(5.8-2.4*abs(mu1eta))) || (abs(mu1eta)>1.5 && abs(mu1eta)<2.4 && mu1pt>(3.4-0.78*abs(mu1eta))))&&((abs(mu2eta)<1.0 && mu2pt>3.4) || (abs(mu2eta)>1.0 && abs(mu2eta)<1.5 && mu2pt>(5.8-2.4*abs(mu2eta))) || (abs(mu2eta)>1.5 && abs(mu2eta)<2.4 && mu2pt>(3.4-0.78*abs(mu2eta))))&&mu1TMOneStationTight && mu2TMOneStationTight && mu1isGlobalMuon && mu2isGlobalMuon && mu1trackerhit>10 && mu2trackerhit>10 && mu1InPixelLayer>1 && mu2InPixelLayer>1 && mu1normchi2<1.8 && mu2normchi2<1.8 && mu1dxyPV<3 && mu2dxyPV<3 && mu1dzPV<30 && mu2dzPV<30 && mumupt>3 && trk1Pt>1 && pt>10 && pt < 60 && mass>5&&mass<6 && abs(y)<2.4 && abs(mumumass-3.096916)<0.15 && isbestchi2 && chi2cl > 0.004345 && cos(dtheta) > 0.256418 && d0/d0Err > 6.679356";//pt10, acc muon, hp tk, SA
//	TString cut = Form("((abs(Bmu1eta)<1.0 && Bmu1pt>3.4) || (abs(Bmu1eta)>1.0 && abs(Bmu1eta)<1.5 && Bmu1pt>(5.8-2.4*abs(Bmu1eta))) || (abs(Bmu1eta)>1.5 && abs(Bmu1eta)<2.4 && Bmu1pt>(3.4-0.78*abs(Bmu1eta))))&&((abs(Bmu2eta)<1.0 && Bmu2pt>3.4) || (abs(Bmu2eta)>1.0 && abs(Bmu2eta)<1.5 && Bmu2pt>(5.8-2.4*abs(Bmu2eta))) || (abs(Bmu2eta)>1.5 && abs(Bmu2eta)<2.4 && Bmu2pt>(3.4-0.78*abs(Bmu2eta))))&&Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1trackerhit>10 && Bmu2trackerhit>10 && Bmu1InPixelLayer>1 && Bmu2InPixelLayer>1 && Bmu1normchi2<1.8 && Bmu2normchi2<1.8 && Bmu1dxyPV<3 && Bmu2dxyPV<3 && Bmu1dzPV<30 && Bmu2dzPV<30 && Bmumupt>3 && Btrk1Pt>1 && Bmass>5&&Bmass<6 && abs(By)<2.4 && abs(Bmumumass-3.096916)<0.15 && Bisbestchi2 && Bchi2cl > 0.004345 && cos(Bdtheta) > 0.256418 && Bd0/Bd0Err > 6.679356 && Bpt > 10 && Bpt < 60 && Btrk1highPurity");//2011
// 	TString cut = Form("((abs(Bmu1eta)<1.0 && Bmu1pt>3.4) || (abs(Bmu1eta)>1.0 && abs(Bmu1eta)<1.5 && Bmu1pt>(5.8-2.4*abs(Bmu1eta))) || (abs(Bmu1eta)>1.5 && abs(Bmu1eta)<2.4 && Bmu1pt>(3.4-0.78*abs(Bmu1eta))))&&((abs(Bmu2eta)<1.0 && Bmu2pt>3.4) || (abs(Bmu2eta)>1.0 && abs(Bmu2eta)<1.5 && Bmu2pt>(5.8-2.4*abs(Bmu2eta))) || (abs(Bmu2eta)>1.5 && abs(Bmu2eta)<2.4 && Bmu2pt>(3.4-0.78*abs(Bmu2eta))))&&Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1trackerhit>10 && Bmu2trackerhit>10 && Bmu1InPixelLayer>1 && Bmu2InPixelLayer>1 && Bmu1normchi2<1.8 && Bmu2normchi2<1.8 && Bmu1dxyPV<3 && Bmu2dxyPV<3 && Bmu1dzPV<30 && Bmu2dzPV<30 && Bmumupt>3 && Btrk1Pt>1 && Bmass>5&&Bmass<6 && abs(By)<2.4 && abs(Bmumumass-3.096916)<0.15 && Bisbestchi2 && Bchi2cl > 0.004345 && cos(Bdtheta) > 0.256418 && Bd0/Bd0Err > 6.679356 && Bpt > 10 && Bpt < 60 && Btrk1highPurity && (BsvpvDistance/BsvpvDisErr)>5");//2011, oldcut

//	TString cut = Form("%s && Bmumupt>3 && Btrk1Pt>1 && Bmass>5&&Bmass<6 && abs(By)<2.4 && abs(Bmumumass-3.096916)<0.15 && Bisbestchi2 && Bchi2cl > 0.004345 && cos(Bdtheta) > 0.256418 && Bd0/Bd0Err > 6.679356 && Bpt > 10 && Bpt < 60 && Btrk1highPurity && (BsvpvDistance/BsvpvDisErr)>5", muID.Data());//2011
	TString cut = Form("%s && (BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4", muID.Data());
//	TString cut = Form("%s && (BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1. && Bpt > 10 && Bpt < 15 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Bmass_unfitted>5. && Bmass_unfitted<6.", muID.Data());
//	TString cut = Form("%s && (BsvpvDistance/BsvpvDisErr)>5. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 15 && Bpt < 20 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4", muID.Data());
//	TString cut = Form("%s && (BsvpvDistance/BsvpvDisErr)>4. && Bmumupt>3 && Btrk1Pt>1.5 && Bpt > 20 && Bpt < 100 && abs(By) < 2.4 && Bchi2cl > 0.005 && cos(Bdtheta) > 0.2 && Btrk1highPurity && abs(Btrk1Eta)<2.4", muID.Data());

	//TH1D* Bmass = new TH1D("Bmass","Bmass",50, 5.15, 5.41);
	TH1D* Bmass = new TH1D("Bmass","Bmass",50, 5., 6.);
	nt->Project("Bmass","Bmass",Form("abs(Bmumumass-3.096916)<0.15 && %s", cut.Data()));
	Bmass->SetMinimum(0);

	TH1D* Bmumumass = new TH1D("Bmumumass","Bmumumass",50, 2.8, 3.4);
	nt->Project("Bmumumass","Bmumumass",Form("%s && Bmumupt>3 && Bmumupt<12",muID.Data()));
	Bmumumass->SetMinimum(0);

	TH1D* Bmumupt = new TH1D("Bmumupt","Bmumupt",50, 0, 50);
	nt->Project("Bmumupt","Bmumupt",Form("%s",muID.Data()));
	Bmumupt->SetMinimum(0);

	Bmass->SetMaximum(Bmass->GetMaximum()*1.5);
	Bmass->Draw("pe");
	c->SaveAs("Bmass.png");

	Bmumumass->Draw("pe");
	c->SaveAs("Bmumumass.png");

	Bmumupt->Draw("pe");
	c->SaveAs("Bmumupt.png");
	
}
