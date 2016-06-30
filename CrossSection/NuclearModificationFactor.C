#include "uti.h"
#include "parameters.h"
#include "TLegendEntry.h"
#include "TColor.h"
#include "../Systematics/systematics.C"

void NuclearModificationFactor(TString inputPP="ROOTfiles/CrossSectionPP.root", TString inputPbPb="ROOTfiles/CrossSectionPbPb.root",TString label="PbPb",TString outputfile="RAAfile.root", Float_t centMin=0., Float_t centMax=100.)
{
  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetEndErrorSize(0);
  gStyle->SetMarkerStyle(20);


  gStyle->SetPadRightMargin(0.03);//###0.020
  gStyle->SetPadLeftMargin(0.12);
  gStyle->SetPadTopMargin(0.075);
  gStyle->SetPadBottomMargin(0.12);


  TFile *fpp=new TFile(inputPP.Data());
  TFile *fPbPb=new TFile(inputPbPb.Data());

  TH1D*hSigmaPPStat=(TH1D*)fpp->Get("hPtSigma");
  hSigmaPPStat->SetName("hSigmaPPStat");
  TH1D*hNuclearModification=(TH1D*)fPbPb->Get("hPtSigma");
  hNuclearModification->SetName("hNuclearModification");
  hNuclearModification->Divide(hSigmaPPStat);


  double apt[nBins];
  //bin half width
  double aptl[nBins];
  //number of every rebined bin
  double bin_num[nBins];


  for (int ibin=0; ibin<nBins; ibin++){
    apt[ibin]=(ptBins[ibin+1]+ptBins[ibin])/2.;
    aptl[ibin] = (ptBins[ibin+1]-ptBins[ibin])/2;
    bin_num[ibin]=aptl[ibin]/binsize*2;
  }

  Double_t xr[nBins], yr[nBins], xrlow[nBins], yrlow[nBins],xrhigh[nBins],yrhigh[nBins];
  for(int i=0;i<nBins;i++)
  {
    yr[i] = hNuclearModification->GetBinContent(i+1);
    double systematic=0.01*systematicsForRAA(hNuclearModification->GetBinCenter(i+1),centMin,centMax,0.,0.);
    yrlow[i] = hNuclearModification->GetBinContent(i+1)*systematic;
    yrhigh[i] =hNuclearModification->GetBinContent(i+1)*systematic;
  }


  TGraphAsymmErrors* gNuclearModification = new TGraphAsymmErrors(nBins,apt,yr,aptl,aptl,yrlow,yrhigh);
  gNuclearModification->SetName("gNuclearModification");
  gNuclearModification->SetMarkerStyle(20);
  gNuclearModification->SetMarkerSize(0.8);

  TCanvas*canvasRAA=new TCanvas("canvasRAA","canvasRAA",600,600);
  canvasRAA->cd();
  canvasRAA->SetLogx();
  TH2F* hemptyEff=new TH2F("hemptyEff","",50,ptBins[0]-5.,ptBins[nBins]+5.,10.,0,1.5);  
  hemptyEff->GetXaxis()->CenterTitle();
  hemptyEff->GetYaxis()->CenterTitle();
  hemptyEff->GetYaxis()->SetTitle("B^{+} R_{AA}");
  hemptyEff->GetXaxis()->SetTitle("p_{T} (GeV/c)");
  hemptyEff->GetXaxis()->SetTitleOffset(1.0);
  hemptyEff->GetYaxis()->SetTitleOffset(1.1);
  hemptyEff->GetXaxis()->SetTitleSize(0.05);
  hemptyEff->GetYaxis()->SetTitleSize(0.05);
  hemptyEff->GetXaxis()->SetTitleFont(42);
  hemptyEff->GetYaxis()->SetTitleFont(42);
  hemptyEff->GetXaxis()->SetLabelFont(42);
  hemptyEff->GetYaxis()->SetLabelFont(42);
  hemptyEff->GetXaxis()->SetLabelSize(0.04);
  hemptyEff->GetYaxis()->SetLabelSize(0.04);  
  hemptyEff->SetMaximum(2);
  hemptyEff->SetMinimum(0.);
  hemptyEff->Draw();
  gNuclearModification->SetFillColor(4);
  gNuclearModification->SetFillStyle(0); 
  gNuclearModification->SetLineWidth(3);
  gNuclearModification->SetLineColor(4);
  gNuclearModification->Draw("5same");
  hNuclearModification->SetLineWidth(3);
  hNuclearModification->Draw("same");
  
  if(1){
  
     Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");

   Double_t gNuclearModification_fx3001[1] = {
   8.5};
   Double_t gNuclearModification_fy3001[1] = {
   0.3527215};
   Double_t gNuclearModification_felx3001[1] = {
   1.5};
   Double_t gNuclearModification_fely3001[1] = {
   0.07759543};
   Double_t gNuclearModification_fehx3001[1] = {
   1.5};
   Double_t gNuclearModification_fehy3001[1] = {
   0.07759543};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(1,gNuclearModification_fx3001,gNuclearModification_fy3001,gNuclearModification_felx3001,gNuclearModification_fehx3001,gNuclearModification_fely3001,gNuclearModification_fehy3001);
   grae->SetName("gNuclearModification");
   grae->SetTitle("Graph");
   grae->SetFillColor(4);
   grae->SetFillStyle(0);
   grae->SetLineColor(4);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_gNuclearModification3001 = new TH1F("Graph_gNuclearModification3001","Graph",100,6.7,10.3);
   Graph_gNuclearModification3001->SetMinimum(0.259607);
   Graph_gNuclearModification3001->SetMaximum(0.445836);
   Graph_gNuclearModification3001->SetDirectory(0);
   Graph_gNuclearModification3001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gNuclearModification3001->SetLineColor(ci);
   Graph_gNuclearModification3001->SetMarkerStyle(20);
   Graph_gNuclearModification3001->GetXaxis()->SetLabelFont(42);
   Graph_gNuclearModification3001->GetXaxis()->SetLabelSize(0.035);
   Graph_gNuclearModification3001->GetXaxis()->SetTitleSize(0.035);
   Graph_gNuclearModification3001->GetXaxis()->SetTitleFont(42);
   Graph_gNuclearModification3001->GetYaxis()->SetLabelFont(42);
   Graph_gNuclearModification3001->GetYaxis()->SetLabelSize(0.035);
   Graph_gNuclearModification3001->GetYaxis()->SetTitleSize(0.035);
   Graph_gNuclearModification3001->GetYaxis()->SetTitleFont(42);
   Graph_gNuclearModification3001->GetZaxis()->SetLabelFont(42);
   Graph_gNuclearModification3001->GetZaxis()->SetLabelSize(0.035);
   Graph_gNuclearModification3001->GetZaxis()->SetTitleSize(0.035);
   Graph_gNuclearModification3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gNuclearModification3001);
   
   grae->Draw("5");
   Double_t xAxis1[2] = {7, 10}; 
   
   TH1D *hNuclearModification2 = new TH1D("hNuclearModification2","",1, xAxis1);
   hNuclearModification2->SetBinContent(1,0.3527215);
   hNuclearModification2->SetBinError(1,0.119697);
   hNuclearModification2->SetEntries(8.683556);
   hNuclearModification2->SetLineWidth(3);
   hNuclearModification2->SetMarkerStyle(20);
   hNuclearModification2->SetMarkerSize(1.2);
   hNuclearModification2->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification2->GetXaxis()->SetLabelFont(42);
   hNuclearModification2->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification2->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification2->GetXaxis()->SetTitleFont(42);
   hNuclearModification2->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification2->GetYaxis()->SetLabelFont(42);
   hNuclearModification2->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification2->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification2->GetYaxis()->SetTitleFont(42);
   hNuclearModification2->GetZaxis()->SetLabelFont(42);
   hNuclearModification2->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification2->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification2->GetZaxis()->SetTitleFont(42);
   hNuclearModification2->Draw("same");
   
}

/*
  TLatex * tlatexeff=new TLatex(0.1612903,0.8525793,"CMS Preliminary     PbPb #sqrt{s}= 5.02 TeV");
  tlatexeff->SetNDC();
  tlatexeff->SetTextColor(1);
  tlatexeff->SetTextFont(42);
  tlatexeff->SetTextSize(0.038);
  tlatexeff->Draw();
*/
  TLatex * tlatexeff2=new TLatex(0.60,0.77,"Centrality 0-100%");
  tlatexeff2->SetNDC();
  tlatexeff2->SetTextColor(1);
  tlatexeff2->SetTextFont(42);
  tlatexeff2->SetTextSize(0.050);
  tlatexeff2->Draw();
/*
  TLatex * tlatexeff3=new TLatex(0.1612903,0.7325793,"L^{PbPb}_{int} = 350.68 #mub^{-1}");
  tlatexeff3->SetNDC();
  tlatexeff3->SetTextColor(1);
  tlatexeff3->SetTextFont(42);
  tlatexeff3->SetTextSize(0.038);
  tlatexeff3->Draw();
*/
  TLatex* texlumi = new TLatex(0.15,0.936,"25.8 pb^{-1} (5.02 TeV pp) + 404 #mub^{-1} (5.02 TeV PbPb)");
  texlumi->SetNDC();
  //texlumi->SetTextAlign(31);
  texlumi->SetTextFont(42);
  texlumi->SetTextSize(0.040);
  texlumi->SetLineWidth(2);
  texlumi->Draw();
  TLatex* texcms = new TLatex(0.15,0.90,"CMS");
  texcms->SetNDC();
  texcms->SetTextAlign(13);
  texcms->SetTextFont(62);//61
  texcms->SetTextSize(0.06);
  texcms->SetLineWidth(2);
  texcms->Draw();
  TLatex* texpre = new TLatex(0.15,0.84,"Preliminary");
  texpre->SetNDC();
  texpre->SetTextAlign(13);
  texpre->SetTextFont(52);
  texpre->SetTextSize(0.05);
  texpre->SetLineWidth(2);
  texpre->Draw();


  TLegend *legendSigma=new TLegend(0.40,0.6168644,0.8084677,0.7605932,"");
  legendSigma->SetBorderSize(0);
  legendSigma->SetLineColor(0);
  legendSigma->SetFillColor(0);
  legendSigma->SetFillStyle(1001);
  legendSigma->SetTextFont(42);
  legendSigma->SetTextSize(0.045);

  TLegendEntry *ent_SigmaPP=legendSigma->AddEntry(hNuclearModification,"R_{AA} stat. unc.","pf");
  ent_SigmaPP->SetTextFont(42);
  ent_SigmaPP->SetLineColor(1);
  ent_SigmaPP->SetMarkerColor(1);
  ent_SigmaPP->SetTextSize(0.045);


  TLegendEntry *ent_Sigmapp=legendSigma->AddEntry(gNuclearModification,"R_{AA} syst.","f");
  ent_Sigmapp->SetTextFont(42);
  ent_Sigmapp->SetLineColor(5);
  ent_Sigmapp->SetMarkerColor(1);
  ent_Sigmapp->SetTextSize(0.045);

  legendSigma->Draw("same");

  canvasRAA->SaveAs(Form("plotRAA/canvasRAA%s_%.0f_%.0f.pdf",label.Data(),centMin,centMax));
  TFile *fRAA=new TFile(outputfile.Data(),"recreate");
  fRAA->cd();
  gNuclearModification->Write();
  hNuclearModification->Write();
}


int main(int argc, char *argv[])
{
  if(argc==7)
    {
      NuclearModificationFactor(argv[1], argv[2], argv[3], argv[4], atof(argv[5]), atof(argv[6]));
      return 0;
    }
  else
    {
      std::cout << "Wrong number of inputs" << std::endl;
      return 1;
    }
}


