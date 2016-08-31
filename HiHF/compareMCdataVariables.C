using namespace std;
#include "uti.h"

int compareMCdataVariables()
{
  gStyle->SetTextSize(0.05);
  gStyle->SetTextFont(42);
  gStyle->SetPadRightMargin(0.043);
  gStyle->SetPadLeftMargin(0.18);
  gStyle->SetPadTopMargin(0.1);
  gStyle->SetPadBottomMargin(0.145);
  gStyle->SetTitleX(.0f);
  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetEndErrorSize(0);
  gStyle->SetMarkerStyle(20);

  //TString inputMCPbPb = "/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_Bpt0_Pthat5_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root"; TString pthatweight = "1";
  TString inputMCPbPb = "/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_pthatweight_JingBDT.root"; TString pthatweight = "pthatweight";
  TString inputDataPbPb = "/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_PbPb_20160816_bPt5jpsiPt0tkPt0p8_Bp_JingBDT.root";

  TFile* infMC = new TFile(inputMCPbPb);
  TTree* ntHiMC = (TTree*)infMC->Get("ntHi");
  ntHiMC->AddFriend("ntHlt");
  ntHiMC->AddFriend("ntSkim");
  ntHiMC->AddFriend("ntKp");
  TFile* infData = new TFile(inputDataPbPb);
  TTree* ntHiData = (TTree*)infData->Get("ntHi");
  ntHiData->AddFriend("ntHlt");
  ntHiData->AddFriend("ntSkim");
  ntHiData->AddFriend("ntKp");

  TH1F* hPtprompt = new TH1F("hPtprompt","",9000,0,9000);
  ntHiMC->Project("hPtprompt","hiHF",Form("%s*(abs(PVz)<15&&pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1))",pthatweight.Data()));
  hPtprompt->Scale(1./hPtprompt->Integral());
  TH1F* hPtData = new TH1F("hPtData","",9000,0,9000);
  ntHiData->Project("hPtData","hiHF","abs(PVz)<15&&pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)");
  hPtData->Scale(1./hPtData->Integral());


  TH1F* hPtprompthiBin = new TH1F("hPtprompthiBin","",9000,0,9000);
  ntHiMC->Project("hPtprompthiBin","hiHF",Form("%s*((6.08582+hiBin*(-0.155739)+hiBin*hiBin*(0.00149946)+hiBin*hiBin*hiBin*(-6.41629e-06)+hiBin*hiBin*hiBin*hiBin*(1.02726e-08))*(abs(PVz)<15&&pclusterCompatibilityFilter&&pprimaryVertexFilter&&phfCoincFilter3&&(HLT_HIL1DoubleMu0_v1 || HLT_HIL1DoubleMu0_part1_v1 || HLT_HIL1DoubleMu0_part2_v1 || HLT_HIL1DoubleMu0_part3_v1)))",pthatweight.Data()));
  hPtprompthiBin->Scale(1./hPtprompthiBin->Integral());

  TH2F* hempty = new TH2F("hempty","",9000,0,9000,10,1.e-6,1.e-1);
  hempty->GetXaxis()->CenterTitle();
  hempty->GetYaxis()->CenterTitle();
  hempty->GetYaxis()->SetTitle("Probability");
  hempty->GetXaxis()->SetTitle("hiHF");
  hempty->GetXaxis()->SetTitleOffset(0.9);
  hempty->GetYaxis()->SetTitleOffset(1.3);
  hempty->GetXaxis()->SetTitleSize(0.045);
  hempty->GetYaxis()->SetTitleSize(0.045);
  hempty->GetXaxis()->SetTitleFont(42);
  hempty->GetYaxis()->SetTitleFont(42);
  hempty->GetXaxis()->SetLabelFont(42);
  hempty->GetYaxis()->SetLabelFont(42);
  hempty->GetXaxis()->SetLabelSize(0.035);
  hempty->GetYaxis()->SetLabelSize(0.035);  

  hPtprompt->SetMarkerStyle(20);
  hPtprompt->SetMarkerColor(kRed);
  hPtprompt->SetMarkerSize(1.1);
  hPtprompt->SetLineColor(kRed);
  hPtprompt->SetLineWidth(1);
  hPtData->SetMarkerStyle(20);
  hPtData->SetMarkerColor(kBlue+1);
  hPtData->SetMarkerSize(1.1);
  hPtData->SetLineColor(kBlue+1);
  hPtData->SetLineWidth(1);
  hPtprompthiBin->SetMarkerStyle(20);
  hPtprompthiBin->SetMarkerColor(kRed);
  hPtprompthiBin->SetMarkerSize(1.1);
  hPtprompthiBin->SetLineColor(kRed);
  hPtprompthiBin->SetLineWidth(1);

  TLegend* legPtY = new TLegend(0.08,0.80,0.60,0.86);
  legPtY->SetTextSize(0.045);
  legPtY->SetBorderSize(0);
  legPtY->SetFillStyle(0);
  legPtY->AddEntry((TObject*)0,"w/o Cent. weight",NULL);

  TLegend* legPtYhiBin = new TLegend(0.08,0.80,0.60,0.86);
  legPtYhiBin->SetTextSize(0.045);
  legPtYhiBin->SetBorderSize(0);
  legPtYhiBin->SetFillStyle(0);
  legPtYhiBin->AddEntry((TObject*)0,"w/ Cent. weight",NULL);

  TLegend* leg = new TLegend(0.62,0.75,0.95,0.86);
  leg->SetTextSize(0.045);
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);
  leg->AddEntry(hPtprompt,"Monte-Carlo","pl");
  leg->AddEntry(hPtData,"Data","pl");

  TLatex* texCms = new TLatex(0.18,0.93, "#scale[1.25]{CMS} Preliminary");
  texCms->SetNDC();
  texCms->SetTextAlign(12);
  texCms->SetTextSize(0.04);
  texCms->SetTextFont(42);

  TLatex* texCol = new TLatex(0.96,0.93, Form("%s #sqrt{s_{NN}} = 5.02 TeV","PbPb"));
  texCol->SetNDC();
  texCol->SetTextAlign(32);
  texCol->SetTextSize(0.04);
  texCol->SetTextFont(42);

  TCanvas* canvas = new TCanvas("canvas","",600,600);
  canvas->cd(1);
  gPad->SetLogy();
  hempty->Draw();
  hPtprompt->Draw("same");
  hPtData->Draw("same");
  legPtY->Draw("same");
  leg->Draw("same");
  texCms->Draw();
  texCol->Draw();
  canvas->SaveAs("plots/hiHF.pdf");

  TCanvas* canvashiBin = new TCanvas("canvashiBin","",600,600);
  canvashiBin->cd(1);
  gPad->SetLogy();
  hempty->Draw();
  hPtprompthiBin->Draw("same");
  hPtData->Draw("same");
  legPtYhiBin->Draw("same");
  leg->Draw("same");
  texCms->Draw();
  texCol->Draw();
  canvashiBin->SaveAs("plots/hiHFhiBin.pdf");

  return 0;
}
