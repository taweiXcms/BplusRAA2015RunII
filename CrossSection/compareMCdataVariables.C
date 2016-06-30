#include <TTree.h>
#include <TH1D.h>
#include <TFile.h>
#include <TString.h>
#include <TCut.h>
#include <TCanvas.h>
#include <TF1.h>
#include <TLegend.h>
#include <TLegendEntry.h>
#include "uti.h"
#include "parameters.h"

void compareMCdataVariables(TString promptfile="MCCutVariablePromptPt.root",TString datafile="DataCutVariablePt.root",TString cutvariable="Dpt",TString label="Dpt", double limitlow=0, double limitup=100){

  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetEndErrorSize(0);
  gStyle->SetMarkerStyle(20);


  TFile* infMCprompt = new TFile(promptfile.Data());
  TH1F* hPtprompt = (TH1F*)infMCprompt->Get("hPt");
  TFile* infData = new TFile(datafile.Data());
  TH1F* hPtData= (TH1F*)infData->Get("hPt");

  hPtprompt->Scale(1./hPtprompt->Integral(1,nBins));
  hPtData->Scale(1./hPtData->Integral(1,nBins));    


  TH2F* hempty=new TH2F("hempty","",100,limitlow,limitup,10,0.01,5);  
  hempty->GetXaxis()->CenterTitle();
  hempty->GetYaxis()->CenterTitle();
  hempty->GetYaxis()->SetTitle("Yield / GeV/c^{2}");
  hempty->GetXaxis()->SetTitle(cutvariable.Data());
  hempty->GetXaxis()->SetTitleOffset(0.9);
  hempty->GetYaxis()->SetTitleOffset(1.1);
  hempty->GetXaxis()->SetTitleSize(0.045);
  hempty->GetYaxis()->SetTitleSize(0.045);
  hempty->GetXaxis()->SetTitleFont(42);
  hempty->GetYaxis()->SetTitleFont(42);
  hempty->GetXaxis()->SetLabelFont(42);
  hempty->GetYaxis()->SetLabelFont(42);
  hempty->GetXaxis()->SetLabelSize(0.035);
  hempty->GetYaxis()->SetLabelSize(0.035);  

  TCanvas *canvas = new TCanvas("canvas","",600,600);
  canvas->cd(1);
  gPad->SetLogy();
  hempty->Draw();
  hPtprompt->SetLineColor(2);
  hPtprompt->SetLineWidth(2);
  hPtprompt->Draw("same");
  hPtData->SetLineColor(1);
  hPtData->SetLineWidth(2);
  hPtData->Draw("same");
  TLegend *legendOrig=new TLegend(0.2958166,0.6558707,0.5949297,0.8299148,"");
  legendOrig->SetBorderSize(0);
  legendOrig->SetLineColor(0);
  legendOrig->SetFillColor(0);
  legendOrig->SetFillStyle(1001);
  legendOrig->SetTextFont(42);
  legendOrig->SetTextSize(0.045);
  TLegendEntry *ent_DataOrig=legendOrig->AddEntry(hPtData,"Data (norm=1)","pf");
  ent_DataOrig->SetTextFont(42);
  ent_DataOrig->SetLineColor(1);
  TLegendEntry *ent_MCP=legendOrig->AddEntry(hPtprompt,"MC prompt (norm=1)","pf");
  ent_MCP->SetTextFont(42);
  ent_MCP->SetLineColor(2);
  legendOrig->Draw("same");
  canvas->SaveAs(Form("canvasMCDataComp_%s.pdf",label.Data()));

}


int main(int argc, char *argv[])
{
  if((argc != 7))
  {
    std::cout << "Wrong number of inputs" << std::endl;
    return 1;
  }

  if(argc ==7)
    compareMCdataVariables(argv[1],argv[2],argv[3],argv[4], atof(argv[5]),atof(argv[6]));
  return 0;
}



