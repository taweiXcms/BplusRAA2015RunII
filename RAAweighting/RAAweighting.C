using namespace std;
#include "RAAweighting.h"

int RAAweighting()
{
  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0000);
  gStyle->SetEndErrorSize(0);
  gStyle->SetTextSize(0.05);
  gStyle->SetTextFont(42);
  gStyle->SetPadRightMargin(0.043);
  gStyle->SetPadLeftMargin(0.18);
  gStyle->SetPadTopMargin(0.1);
  gStyle->SetPadBottomMargin(0.145);
  gStyle->SetTitleX(.0f);

  ifstream getdata("theoryRAA/Magdalena.dat");
  if(!getdata.is_open())
    {
      cout<<"  ERROR: Opening the file fails"<<endl;
      return 1;
    }
  Int_t nbin=0;
  while(!getdata.eof())
    {
      getdata>>fpt[nbin]>>fRAA[nbin];
      cout<<fpt[nbin]<<" "<<fRAA[nbin]<<endl;
      nbin++;
    }
  TGraph* gRAA = new TGraph(nbin,fpt,fRAA);
  gRAA->SetMarkerSize(0.8);
  gRAA->SetMarkerStyle(20);
  gRAA->SetMarkerColor(kBlack);

  TCanvas* cRAA = new TCanvas("cRAA","",600,600);
  TH2F* hempty = new TH2F("hempty","",20,0.,55.,10.,0.3,0.8);  
  hempty->GetXaxis()->SetTitle("B^{+} p_{T} (GeV/c)");
  hempty->GetYaxis()->SetTitle("R_{AA}");
  hempty->GetXaxis()->CenterTitle();
  hempty->GetYaxis()->CenterTitle();
  hempty->GetXaxis()->SetTitleOffset(1.3);
  hempty->GetYaxis()->SetTitleOffset(1.8);
  hempty->GetXaxis()->SetTitleSize(0.045);
  hempty->GetYaxis()->SetTitleSize(0.045);
  hempty->GetXaxis()->SetTitleFont(42);
  hempty->GetYaxis()->SetTitleFont(42);
  hempty->GetXaxis()->SetLabelFont(42);
  hempty->GetYaxis()->SetLabelFont(42);
  hempty->GetXaxis()->SetLabelSize(0.04);
  hempty->GetYaxis()->SetLabelSize(0.04);
  hempty->Draw();
  gRAA->Draw("samep");
  TF1* fRAA = new TF1("fRAA","exp([0]+[1]*x+[2]*x*x+[3]*x*x*x)+[4]");
  fRAA->SetLineWidth(2);
  gRAA->Fit("fRAA","","",4.8,50.5);
  gRAA->Fit("fRAA","","",4.8,50.5);

  cout<<endl;
  cout<<"  exp("<<fRAA->GetParameter(0)<<"+"<<fRAA->GetParameter(1)<<"*x+"<<fRAA->GetParameter(2)<<"*x*x+"<<fRAA->GetParameter(3)<<"*x*x*x)+"<<fRAA->GetParameter(4)<<endl;
  cout<<endl;

  TLatex* texCms = new TLatex(0.18,0.93, "#scale[1.25]{CMS} #bf{#it{Preliminary}}");
  texCms->SetNDC();
  texCms->SetTextAlign(12);
  texCms->SetTextSize(0.04);
  texCms->SetTextFont(42);
  texCms->Draw();

  TLatex* texCol = new TLatex(0.96,0.93, Form("%s #sqrt{s_{NN}} = 5.02 TeV","PbPb"));
  texCol->SetNDC();
  texCol->SetTextAlign(32);
  texCol->SetTextSize(0.04);
  texCol->SetTextFont(42);
  texCol->Draw();

  TLatex* texTheory = new TLatex(0.55,0.80, "Theory");
  texTheory->SetNDC();
  texTheory->SetTextAlign(12);
  texTheory->SetTextSize(0.04);
  texTheory->SetTextFont(42);
  texTheory->Draw();

  TLatex* texArxiv = new TLatex(0.55,0.75, "arXiv:1601.07852");
  texArxiv->SetNDC();
  texArxiv->SetTextAlign(12);
  texArxiv->SetTextSize(0.04);
  texArxiv->SetTextFont(42);
  texArxiv->Draw();

  TString tper = "%";
  TLatex* texCent = new TLatex(0.55,0.70, Form("Cent. 0-10%s",tper.Data()));
  texCent->SetNDC();
  texCent->SetTextAlign(12);
  texCent->SetTextSize(0.04);
  texCent->SetTextFont(42);
  texCent->Draw();

  cRAA->SaveAs("plots/RAAweighting.pdf");

  return 0;
}
