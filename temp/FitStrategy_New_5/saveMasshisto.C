using namespace std;
#include "uti.h"

Double_t minhisto=5.;
Double_t maxhisto=6.;
Double_t nbinsmasshisto=50;
Double_t binwidthmass=(maxhisto-minhisto)/nbinsmasshisto;

TString weight;
TString seldata;
TString collisionsystem;

int saveMasshisto(TString inputdata="",
                  TString trgselection="",
                  TString cut="",
                  Int_t isMC=0,
                  TString weightdata="",
                  TString collsyst="",	
                  TString outputfile="outfMasshisto/mass")
{
  collisionsystem=collsyst;
  seldata = Form("%s&&%s",trgselection.Data(),cut.Data());
  weight = weightdata;

  TFile* inf = new TFile(inputdata.Data());

  TTree* nt = (TTree*) inf->Get("ntKp");
  nt->AddFriend("ntHlt");
  nt->AddFriend("ntHi");  
  nt->AddFriend("ntSkim");  
  nt->AddFriend("mvaTree");
  
  cout<<"  -- Filling histograms"<<endl;
  cout<<"     "<<inputdata<<endl;
  cout<<"     "<<collsyst<<endl;

  TH1D* h = new TH1D("h","",nbinsmasshisto,minhisto,maxhisto);
  nt->Project("h","Bmass",Form("%s*(%s)",weight.Data(),seldata.Data()));
  TString tMC;
  if(isMC==1) tMC="MC";
  else tMC="Data";
  TFile* outf = new TFile(Form("%s_%s_%s.root",outputfile.Data(),collisionsystem.Data(),tMC.Data()),"recreate");
  outf->cd();
  h->Write();
  outf->Close();
  delete h;
  delete outf;

  cout<<endl;
  return 1;
}

int main(int argc, char *argv[])
{
  if(argc!=7)
    {
      std::cout << "Wrong number of inputs" << std::endl;
      return 1;
    }
  else
    {
      saveMasshisto(argv[1], argv[2], argv[3], atoi(argv[4]), argv[5], argv[6]);
      return 0;
    }
}

