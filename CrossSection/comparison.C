#include "TROOT.h"
#include "TTree.h"
#include "TH1.h"
#include "TF1.h"
#include "iostream"
#include "iomanip"
#include "utility"
#include "TFile.h"
#include "TDirectoryFile.h"
#include "TDirectory.h"
#include "TNtuple.h"
#include "TGraph.h"
#include "TGraphAsymmErrors.h"
#include "TCanvas.h"
#include "TPad.h"
#include "TLatex.h"
#include "TLegend.h"
#include "TLine.h"
#include "TBox.h"
#include "TCut.h"
#include "TMath.h"
#include "TRandom.h"
#include "TRandom3.h"
#include "TStyle.h"
#include "TProfile.h"

void comparison()
{
  TFile* data_pp = new TFile("/afs/cern.ch/user/a/aturner/B_Meson/CMSSW_7_5_5_patch4/src/BntupleRunII/CrossSection/ROOTfiles/data_pp.root");
  TFile* mc_pp = new TFile("/afs/cern.ch/user/a/aturner/B_Meson/CMSSW_7_5_5_patch4/src/BntupleRunII/CrossSection/ROOTfiles/mc_pp.root");
  TFile* data_PP = new TFile("/afs/cern.ch/user/a/aturner/B_Meson/CMSSW_7_5_5_patch4/src/BntupleRunII/CrossSection/ROOTfiles/data_PbPb.root");
  TFile* mc_PP = new TFile("/afs/cern.ch/user/a/aturner/B_Meson/CMSSW_7_5_5_patch4/src/BntupleRunII/CrossSection/ROOTfiles/mc_PbPb.root");

  TH1F* h_data_pp = (TH1F*)data_pp->Get("hMean");
  TH1F* h_mc_pp = (TH1F*)mc_pp->Get("hMean");
  TH1F* h_data_PP = (TH1F*)data_PP->Get("hMean");
  TH1F* h_mc_PP = (TH1F*)mc_PP->Get("hMean");

  h_data_pp->SetMarkerStyle(25);
  h_mc_pp->SetMarkerStyle(8);
  h_data_PP->SetMarkerStyle(25);
  h_mc_PP->SetMarkerStyle(8);

  TF1* bmass = new TF1("bmass","[0]",10,100);
  bmass->SetParameter(0,5.279);
  bmass->SetLineWidth(1);
  bmass->SetLineColor(kRed);
  bmass->SetLineStyle(2);
  
  TLegend* leg_pp = new TLegend(0.2,0.76,0.34,0.9,NULL,"brNDC");
  leg_pp->SetBorderSize(0);
  leg_pp->SetTextSize(0.04);
  leg_pp->SetTextFont(42);
  leg_pp->SetFillStyle(0);
  leg_pp->AddEntry(h_data_pp, "pp Data", "pl");
  leg_pp->AddEntry(h_mc_pp,"Monte Carlo","pl");
  leg_pp->AddEntry(bmass,"B^{+} Mass","l");

  TLegend* leg_PP = new TLegend(0.2,0.76,0.34,0.9,NULL,"brNDC");
  leg_PP->SetBorderSize(0);
  leg_PP->SetTextSize(0.04);
  leg_PP->SetTextFont(42);
  leg_PP->SetFillStyle(0);
  leg_PP->AddEntry(h_data_PP, "PbPb Data", "pl");
  leg_PP->AddEntry(h_mc_PP,"Monte Carlo","pl");
  leg_PP->AddEntry(bmass,"B^{+} Mass","l");

  TLatex* Title_pp = new TLatex(0.18,0.97, "Mean of fitted gaussians in pp collision");
  Title_pp->SetNDC();
  Title_pp->SetTextAlign(12);
  Title_pp->SetTextSize(0.04);
  Title_pp->SetTextFont(42);

  TLatex* Title_PP = new TLatex(0.18,0.97, "Mean of fitted gaussians in PbPb collision");
  Title_PP->SetNDC();
  Title_PP->SetTextAlign(12);
  Title_PP->SetTextSize(0.04);
  Title_PP->SetTextFont(42);

  h_data_pp->SetTitle(";B^{+} p_{T} (GeV/c);m_{#piK} (GeV/c^{2})");
  h_data_pp->GetXaxis()->SetTitleOffset(1.3);
  h_data_pp->GetYaxis()->SetTitleOffset(1.8);
  h_data_pp->GetXaxis()->SetLabelOffset(0.007);
  h_data_pp->GetYaxis()->SetLabelOffset(0.007);
  h_data_pp->GetXaxis()->SetTitleSize(0.045);
  h_data_pp->GetYaxis()->SetTitleSize(0.045);
  h_data_pp->GetXaxis()->SetTitleFont(42);
  h_data_pp->GetYaxis()->SetTitleFont(42);
  h_data_pp->GetXaxis()->SetLabelFont(42);
  h_data_pp->GetYaxis()->SetLabelFont(42);
  h_data_pp->GetXaxis()->SetLabelSize(0.04);
  h_data_pp->GetYaxis()->SetLabelSize(0.04);
  
  h_data_pp->Sumw2();

  h_data_PP->SetTitle(";B^{+} p_{T} (GeV/c);m_{#piK} (GeV/c^{2})");
  h_data_PP->GetXaxis()->SetTitleOffset(1.3);
  h_data_PP->GetYaxis()->SetTitleOffset(1.8);
  h_data_PP->GetXaxis()->SetLabelOffset(0.007);
  h_data_PP->GetYaxis()->SetLabelOffset(0.007);
  h_data_PP->GetXaxis()->SetTitleSize(0.045);
  h_data_PP->GetYaxis()->SetTitleSize(0.045);
  h_data_PP->GetXaxis()->SetTitleFont(42);
  h_data_PP->GetYaxis()->SetTitleFont(42);
  h_data_PP->GetXaxis()->SetLabelFont(42);
  h_data_PP->GetYaxis()->SetLabelFont(42);
  h_data_PP->GetXaxis()->SetLabelSize(0.04);
  h_data_PP->GetYaxis()->SetLabelSize(0.04);
  
  h_data_PP->Sumw2();

  TCanvas* cMean = new TCanvas("cMean","",1500,700);
  cMean->Divide(2,1,0.02,0.02);

  cMean->cd(1);
  h_data_pp->SetMinimum(5.24);
  h_data_pp->SetMaximum(5.3);
  h_data_pp->DrawClone();
  h_mc_pp->DrawClone("Same");
  bmass->DrawClone("Same");
  leg_pp->DrawClone("Same");
  Title_pp->DrawClone("Same");

  cMean->cd(2);
  h_data_PP->SetMinimum(5.24);
  h_data_PP->SetMaximum(5.3);
  h_data_PP->DrawClone();
  h_mc_PP->DrawClone("Same");
  bmass->DrawClone("Same");
  leg_PP->DrawClone("Same");
  Title_PP->DrawClone("Same");

  cMean->SaveAs("allFits/mean_comp.pdf");  

  TCanvas* cpp = new TCanvas("cpp","",600,600);
  h_data_pp->SetMinimum(5.265);
  h_data_pp->SetMaximum(5.287);
  h_data_pp->DrawClone();
  h_mc_pp->DrawClone("Same");
  bmass->DrawClone("Same");
  leg_pp->DrawClone("Same");
  Title_pp->DrawClone("Same");
  cpp->SaveAs("allFits/mean_pp.pdf");  

  TCanvas* cPP = new TCanvas("cPP","",600,600);
  h_data_PP->SetMinimum(5.24);
  h_data_PP->SetMaximum(5.3);
  h_data_PP->DrawClone();
  h_mc_PP->DrawClone("Same");
  bmass->DrawClone("Same");
  leg_PP->DrawClone("Same");
  Title_PP->DrawClone("Same");
  cPP->SaveAs("allFits/mean_PbPb.pdf");
} 

int main()
{
    comparison();
    return 0;
}
 




