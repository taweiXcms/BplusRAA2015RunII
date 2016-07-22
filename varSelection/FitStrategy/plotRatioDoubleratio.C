using namespace std;
#include "uti.h"

TString varname;
TString vartex;
void plotRatioDoubleratio(TString varname_="", TString vartex_="")
{
  gStyle->SetTextSize(0.05);
  gStyle->SetTextFont(42);
  gStyle->SetPadRightMargin(0.05);
  gStyle->SetPadLeftMargin(0.15);
  gStyle->SetPadTopMargin(0.1);
  gStyle->SetPadBottomMargin(0.145);
  gStyle->SetTitleX(.0f);
  gStyle->SetOptStat(0);
  gStyle->SetMarkerStyle(20);
  gStyle->SetMarkerSize(0.8);

  varname=varname_;
  vartex=vartex_;
  
  TFile* infPP = new TFile(Form("outfDoubleratio/fPP_%s_DoubleRatio.root",varname.Data()));
  TH1D* hPP = (TH1D*)infPP->Get("hDoubleRatio");
  hPP->SetName(Form("hPP_%.0f",varname.Data()));
  TFile* infPbPb = new TFile(Form("outfDoubleratio/fPbPb_%s_DoubleRatio.root",varname.Data()));
  TH1D* hPbPb = (TH1D*)infPbPb->Get("hDoubleRatio");
  hPbPb->SetName(Form("hPbPb_%.0f",varname.Data()));

  TH1F* hRatio = (TH1F*)hPbPb->Clone("hRatio");
  hRatio->Divide(hPP);

  Int_t varbins = hRatio->GetNbinsX();
  Float_t varstep = hRatio->GetBinWidth(1);
  Float_t varmin = hRatio->GetBinCenter(1)-0.5*varstep;
  Float_t varmax = hRatio->GetBinCenter(varbins)-0.5*varstep;
  Float_t aRatio[varbins],aRatioErr[varbins];
  Float_t aX[varbins],aZero[varbins];
  for(int i=0;i<varbins;i++)
    {
      aX[i] = hRatio->GetBinCenter(i+1)-0.5*varstep;
      aZero[i] = 0;
      aRatio[i] = hRatio->GetBinContent(i+1);
      aRatioErr[i] = hRatio->GetBinError(i+1);
    }

  TGraphErrors* gRatio = new TGraphErrors(varbins,aX,aRatio,aZero,aRatioErr);
  TH2F* hemptyRatio = new TH2F("hemptyRatio","",20,varmin-0.5*varstep,varmax+0.5*varstep,10.,0.0,2.0);
  hemptyRatio->GetXaxis()->SetTitle(Form("%s",vartex.Data()));
  hemptyRatio->GetYaxis()->SetTitle("DoubleRatio^{PbPb} / DoubleRatio^{PP}");
  hemptyRatio->GetXaxis()->SetTitleOffset(1.);
  hemptyRatio->GetYaxis()->SetTitleOffset(1.4);
  hemptyRatio->GetXaxis()->SetTitleSize(0.045);
  hemptyRatio->GetYaxis()->SetTitleSize(0.045);
  hemptyRatio->GetXaxis()->SetTitleFont(42);
  hemptyRatio->GetYaxis()->SetTitleFont(42);
  hemptyRatio->GetXaxis()->SetLabelFont(42);
  hemptyRatio->GetYaxis()->SetLabelFont(42);
  hemptyRatio->GetXaxis()->SetLabelSize(0.04);
  hemptyRatio->GetYaxis()->SetLabelSize(0.04);
  TCanvas* cRatio = new TCanvas("cRatio","",600,600);
  hemptyRatio->Draw();
  gRatio->Draw("psame");
  cRatio->SaveAs(Form("plotRatios/cRatio_%s.pdf",varname.Data()));

}

int main(int argc, char *argv[])
{
  if(argc!=3)
    {
      std::cout << "Wrong number of inputs" << std::endl;
      return 1;
    }
  else
    {
      plotRatioDoubleratio(argv[1],argv[2]);
      return 0;
    }
}

