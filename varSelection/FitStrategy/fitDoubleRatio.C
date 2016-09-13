using namespace std;
#include "uti.h"

TString collisionsystem;
TString infname;
TString varname;
TString vartex;
TFile *fout;
//Btrk1Pt, Bchi2cl, BsvpvDistance/BsvpvDisErr, Bdtheta, Btrk1Eta
double ppcutVal1[5] = {0.748, 0.0322, 5.5, 0.989, 2.4};
double ppcutVal2[5] = {0.878, 0.005, 3.5, 0.971, 2.39};
double ppcutVal3[5] = {0.818, 0.00838, 3.5, 0.959, 2.4};
double ppcutVal4[5] = {0.84, 0.014, 3.5, 0.603, 2.38};
double ppcutVal5[5] = {1.06, 0.0155, 3.53, 0.995, 2.37};
double pbpbcutVal2[5] = {1.38, 0.0796, 7.48, -0.415, 2.16};
double pbpbcutVal3[5] = {1.7, 0.0521, 4.96, -0.76, 2.3};
double pbpbcutVal4[5] = {2.02, 0.00859, 3.5, -0.349, 2.36};
double pbpbcutVal5[5] = {1.94, 0.0166, 4.25, 0.99, 2.33};
//Add BDT
double pbpbcutVal1[6] = {0.8, 0.005, 5.5, -1, 2.4, 0.08};

void fitDoubleRatio(TString collsyst="PP"){
//  collsyst = "PbPb";
  TF1* fit(TFile* f);

  collisionsystem = collsyst;
  TFile *f1 = new TFile(Form("outfDoubleratio/f%s_Btrk1Pt_DoubleRatio.root", collisionsystem.Data()));
  TFile *f2 = new TFile(Form("outfDoubleratio/f%s_Chi2_DoubleRatio.root", collisionsystem.Data()));
  TFile *f3 = new TFile(Form("outfDoubleratio/f%s_Decaylength_DoubleRatio.root", collisionsystem.Data()));
  TFile *f4 = new TFile(Form("outfDoubleratio/f%s_costheta_DoubleRatio.root", collisionsystem.Data()));
  TFile *f5 = new TFile(Form("outfDoubleratio/f%s_abs(Btrk1Eta)_DoubleRatio.root", collisionsystem.Data()));
  TFile *f6 = new TFile(Form("outfDoubleratio/f%s_BDT_DoubleRatio.root", collisionsystem.Data()));

  fout=new TFile(Form("outfDoubleratio/Fit%s_DoubleRatio.root", collisionsystem.Data()),"recreate");
  fout->cd();
  TF1* tf[6];
  //TF1 *fit1, *fit2, *fit3, *fit4, *fit5, *fit6;
  tf[0] = fit(f1);
  tf[1] = fit(f2);
  tf[2] = fit(f3);
  tf[3] = fit(f4);
  tf[4] = fit(f5);
  tf[5] = fit(f6);
  fout->Close();
  if(collisionsystem == "PP"){
    double sys = 0;
    double ppSys1 = 0;
    double ppSys2 = 0;
    double ppSys3 = 0;
    double ppSys4 = 0;
    double ppSys5 = 0;
    for(int i = 0 ; i < 5; i++){
      ppSys1 += (tf[i]->Eval(ppcutVal1[i])-1)*(tf[i]->Eval(ppcutVal1[i])-1);
      ppSys2 += (tf[i]->Eval(ppcutVal2[i])-1)*(tf[i]->Eval(ppcutVal2[i])-1);
      ppSys3 += (tf[i]->Eval(ppcutVal3[i])-1)*(tf[i]->Eval(ppcutVal3[i])-1);
      ppSys4 += (tf[i]->Eval(ppcutVal4[i])-1)*(tf[i]->Eval(ppcutVal4[i])-1);
      ppSys5 += (tf[i]->Eval(ppcutVal5[i])-1)*(tf[i]->Eval(ppcutVal5[i])-1);
    }
    ppSys1  = sqrt(ppSys1);
    ppSys2  = sqrt(ppSys2);
    ppSys3  = sqrt(ppSys3);
    ppSys4  = sqrt(ppSys4);
    ppSys5  = sqrt(ppSys5);
    printf("%e, %e, %e, %e, %e\n", ppSys1, ppSys2, ppSys3, ppSys4, ppSys5);
  }
  if(collisionsystem == "PbPb"){
    double sys = 0;
    double pbpbSys1 = 0;
    double pbpbSys2 = 0;
    double pbpbSys3 = 0;
    double pbpbSys4 = 0;
    double pbpbSys5 = 0;
    for(int i = 0 ; i < 5; i++){
      pbpbSys1 += (tf[i]->Eval(pbpbcutVal1[i])-1)*(tf[i]->Eval(pbpbcutVal1[i])-1);
      pbpbSys2 += (tf[i]->Eval(pbpbcutVal2[i])-1)*(tf[i]->Eval(pbpbcutVal2[i])-1);
      pbpbSys3 += (tf[i]->Eval(pbpbcutVal3[i])-1)*(tf[i]->Eval(pbpbcutVal3[i])-1);
      pbpbSys4 += (tf[i]->Eval(pbpbcutVal4[i])-1)*(tf[i]->Eval(pbpbcutVal4[i])-1);
      pbpbSys5 += (tf[i]->Eval(pbpbcutVal5[i])-1)*(tf[i]->Eval(pbpbcutVal5[i])-1);
      cout<<"bin1: "<<fabs(tf[i]->Eval(pbpbcutVal1[i])-1)<<endl;
      cout<<"bin2: "<<fabs(tf[i]->Eval(pbpbcutVal2[i])-1)<<endl;
      cout<<"bin3: "<<fabs(tf[i]->Eval(pbpbcutVal3[i])-1)<<endl;
      cout<<"bin4: "<<fabs(tf[i]->Eval(pbpbcutVal4[i])-1)<<endl;
      cout<<"bin5: "<<fabs(tf[i]->Eval(pbpbcutVal5[i])-1)<<endl;
      cout<<endl;
    }

    pbpbSys1 += (tf[5]->Eval(pbpbcutVal1[5])-1)*(tf[5]->Eval(pbpbcutVal1[5])-1);
    pbpbSys1  = sqrt(pbpbSys1);
    pbpbSys2  = sqrt(pbpbSys2);
    pbpbSys3  = sqrt(pbpbSys3);
    pbpbSys4  = sqrt(pbpbSys4);
    pbpbSys5  = sqrt(pbpbSys5);
    printf("%e, %e, %e, %e, %e\n", pbpbSys1, pbpbSys2, pbpbSys3, pbpbSys4, pbpbSys5);
  }
}

TF1* fit(TFile* f){
  static Int_t count=0;
  TH1D* h = (TH1D*)f->Get("hDoubleRatio");
  h->SetName(Form("hDoubleRatio_%d",count));
  double rangeLow = h->GetBinLowEdge(1);
  double rangeHigh = h->GetBinLowEdge(h->GetNbinsX())+h->GetBinWidth(h->GetNbinsX());
  TF1 *myfit = new TF1(Form("myfit_%d", count),"[0]+[1]*x", rangeLow, rangeHigh);
  h->Fit(Form("myfit_%d", count),"L q","",rangeLow, rangeHigh);
  h->Fit(Form("myfit_%d", count),"L q","",rangeLow, rangeHigh);
  h->Fit(Form("myfit_%d", count),"L q","",rangeLow, rangeHigh);
  h->Fit(Form("myfit_%d", count),"L m","",rangeLow, rangeHigh);
  double par0=myfit->GetParameter(0);
  double par1=myfit->GetParameter(1);
  double par2=myfit->GetParameter(2);
  h->Write();
  myfit->Write();
  count++;
  TCanvas* cRatio = new TCanvas(Form("cRatio_%d", count),"",600,600);
  cRatio->cd();
  h->SetMaximum(2);
  h->SetMinimum(0);
  h->Draw();
  cRatio->SaveAs(Form("plotRatios/cFit_%s_%d.pdf",collisionsystem.Data(),count));
  return myfit;
}

int main(int argc, char *argv[])
{
  if(argc!=2)
    {
      std::cout << "Wrong number of inputs" << std::endl;
      return 1;
    }
  else
    {
      fitDoubleRatio(argv[1]);
      return 0;
    }
}
