#include "uti.h"
#include "parameters.h"
#include "TF1.h"

void EfficiencyFit(TString inputdata="ROOTfiles/MCstudiesPP_Fine.root", TString label="PP_Fine"){

  gStyle->SetTextSize(0.05);
  gStyle->SetTextFont(42);
  gStyle->SetPadRightMargin(0.043);
  gStyle->SetPadLeftMargin(0.18);
  gStyle->SetPadTopMargin(0.1);
  gStyle->SetPadBottomMargin(0.145);
  gStyle->SetTitleX(.0f);

  TFile* inf = new TFile(inputdata.Data());
  TH1D* hEff = (TH1D*)inf->Get("hEff");
  TCanvas* c= new TCanvas(Form("c"),"",600,600);
  hEff->Draw();


  TF1 *myfit = new TF1("myfit","[0]+[1]*x+x*x*[2]+x*x*x*[3]+x*x*x*x*[4]", 7, 50);
  //TF1 *myfit = new TF1("myfit","[0]+[1]*x+x*x*[2]+x*x*x*[3]", 7, 50);
  //TF1 *myfit = new TF1("myfit","[0]+[1]*x+x*x*[2]", 7, 50);
  hEff->Fit("myfit","L q","",7,50);
  hEff->Fit("myfit","L q","",7,50);
  hEff->Fit("myfit","L q","",7,50);
  hEff->Fit("myfit","L m","",7,50);
  double par0=myfit->GetParameter(0);
  double par1=myfit->GetParameter(1);
  double par2=myfit->GetParameter(2);
  double par3=myfit->GetParameter(3);
  double par4=myfit->GetParameter(4);
  TString myEffWeight=Form("(%e+%e*Bpt+Bpt*Bpt*%e+Bpt*Bpt*Bpt*%e+Bpt*Bpt*Bpt*Bpt*%e)",par0,par1,par2,par3,par4);
  std::cout<<myEffWeight<<std::endl;

  c->SaveAs(Form("plotEffFit/%s.png", label.Data()));
  TFile *fout=new TFile(Form("plotEffFit/%s.root", label.Data()),"recreate");
  fout->cd();
  hEff->Write();
  myfit->Write();
  fout->Close();
}

int main(int argc, char *argv[])
{
  if((argc !=3))
  {
    std::cout << "Wrong number of inputs" << std::endl;
    return 1;
  }

  if(argc == 3)
    EfficiencyFit(argv[1],argv[2]);
  return 0;
}
