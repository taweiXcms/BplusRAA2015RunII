#include "uti.h"
void plotJpsi(){
  TString inputdata;
  TString seldata;
  TString collisionsystem;
  TString cut;
  TString trgselection;
  TString outputf;
  collisionsystem = "PbPb";
//  collisionsystem = "pp";
  if (collisionsystem=="PbPb"){
    inputdata = "/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_PbPb_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root";
    cut = "pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&abs(PVz)<15&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&&((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.8 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5)) && ((Bpt>7 && Bpt<10 && BDT>0.08)|| (Bpt>10 && Bpt<15 && Btrk1Pt>1.38 && Bchi2cl>0.0796 && (BsvpvDistance/BsvpvDisErr)>7.48 && cos(Bdtheta)>-0.415 && abs(Btrk1Eta)<2.16) || (Bpt>15 && Bpt<20 && Btrk1Pt>1.7 && Bchi2cl>0.0521 && (BsvpvDistance/BsvpvDisErr)>4.96 && cos(Bdtheta)>-0.76 && abs(Btrk1Eta)<2.3) || (Bpt>20 && Bpt<30 && Btrk1Pt>2.02 && Bchi2cl>0.00859 && (BsvpvDistance/BsvpvDisErr)>2.03 && cos(Bdtheta)>-0.349 && abs(Btrk1Eta)<2.36) || (Bpt>30 && Bpt<50 && Btrk1Pt>1.94 && Bchi2cl>0.0166 && (BsvpvDistance/BsvpvDisErr)>4.25 && cos(Bdtheta)>0.99 && abs(Btrk1Eta)<2.33))";
    trgselection="(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)";
  }
  if (collisionsystem=="pp"){
    inputdata = "/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_pp_20160816_bPt0jpsiPt0tkPt0p5_Bp_JingBDT.root";
    cut = "abs(PVz)<15&&pBeamScrapingFilter&&pPAprimaryVertexFilter&&TMath::Abs(By)<2.4&&TMath::Abs(Bmumumass-3.096916)<0.15&&Bmass>5&&Bmass<6&& ((abs(Bmu1eta)<1.2 && Bmu1pt>3.5) || (abs(Bmu1eta)>1.2 && abs(Bmu1eta)<2.1 && Bmu1pt>(5.77-1.8*abs(Bmu1eta))) || (abs(Bmu1eta)>2.1 && abs(Bmu1eta)<2.4 && Bmu1pt>1.8)) && ((abs(Bmu2eta)<1.2 && Bmu2pt>3.5) || (abs(Bmu2eta)>1.2 && abs(Bmu2eta)<2.1 && Bmu2pt>(5.77-1.8*abs(Bmu2eta))) || (abs(Bmu2eta)>2.1 && abs(Bmu2eta)<2.4 && Bmu2pt>1.8)) && Bmu1TMOneStationTight && Bmu2TMOneStationTight && Bmu1InPixelLayer > 0 && (Bmu1InPixelLayer+Bmu1InStripLayer) > 5 && Bmu2InPixelLayer > 0 && (Bmu2InPixelLayer+Bmu2InStripLayer) > 5 && Bmu1dxyPV< 0.3 && Bmu2dxyPV< 0.3 && Bmu1dzPV<20 && Bmu2dzPV<20 && Bmu1isGlobalMuon && Bmu2isGlobalMuon && Bmu1TrgMatchFilterE>0 && Bmu2TrgMatchFilterE>0 && Btrk1highPurity && abs(Btrk1Eta)<2.4 && Btrk1Pt>0.5 && Bchi2cl>0.005 && ((Bpt<10 && (BsvpvDistance/BsvpvDisErr)>5.5) || (Bpt>10 && (BsvpvDistance/BsvpvDisErr)>3.5)) && ((Bpt>7 && Bpt<10 && Btrk1Pt>0.748 && Bchi2cl>0.0322 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.989 && abs(Btrk1Eta)<2.4)|| (Bpt>10 && Bpt<15 && Btrk1Pt>0.878 && Bchi2cl>0.0014 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.971 && abs(Btrk1Eta)<2.39) || (Bpt>15 && Bpt<20 && Btrk1Pt>0.818 && Bchi2cl>0.00838 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.959 && abs(Btrk1Eta)<2.42) || (Bpt>20 && Bpt<30 && Btrk1Pt>0.84 && Bchi2cl>0.014 && (BsvpvDistance/BsvpvDisErr)>0 && cos(Bdtheta)>0.603 && abs(Btrk1Eta)<2.38) || (Bpt>30 && Bpt<50 && Btrk1Pt>1.06 && Bchi2cl>0.0155 && (BsvpvDistance/BsvpvDisErr)>3.53 && cos(Bdtheta)>0.995 && abs(Btrk1Eta)<2.37))";
    trgselection = "(HLT_HIL1DoubleMu0_v1)";
  }
  seldata = Form("%s&&%s",trgselection.Data(),cut.Data());  
  outputf = Form("files/JpsiPt_%s.root", collisionsystem.Data());

  TFile* inf = new TFile(inputdata.Data());
  TTree* nt = (TTree*)inf->Get("ntKp");
  nt->AddFriend("ntHlt");
  nt->AddFriend("ntHi");
  nt->AddFriend("ntSkim");
  nt->AddFriend("mvaTree");

  TH1D* hPt = new TH1D("hPt","",100,0,50);
  nt->Project("hPt","Bmumupt",seldata.Data());

  TCanvas* cPt =  new TCanvas("cPt","",600,600);
  //cPt->SetLogy();
  hPt->SetXTitle("p_{T} (GeV/c)");
  hPt->Sumw2();

  hPt->GetXaxis()->SetTitleOffset(1.3);
  hPt->GetYaxis()->SetTitleOffset(1.8);
  hPt->GetXaxis()->SetLabelOffset(0.007);
  hPt->GetYaxis()->SetLabelOffset(0.007);
  hPt->GetXaxis()->SetTitleSize(0.045);
  hPt->GetYaxis()->SetTitleSize(0.045);
  hPt->GetXaxis()->SetTitleFont(42);
  hPt->GetYaxis()->SetTitleFont(42);
  hPt->GetXaxis()->SetLabelFont(42);
  hPt->GetYaxis()->SetLabelFont(42);
  hPt->GetXaxis()->SetLabelSize(0.04);
  hPt->GetYaxis()->SetLabelSize(0.04);
  hPt->SetMarkerSize(0.8);
  hPt->SetMarkerStyle(20);
  hPt->SetStats(0);
  hPt->Draw();
  cPt->SaveAs(Form("plots/JpsiPt_%s.pdf",collisionsystem.Data()));

  TFile* outf = new TFile(outputf.Data(),"recreate");
  outf->cd();
  hPt->Write();
}
