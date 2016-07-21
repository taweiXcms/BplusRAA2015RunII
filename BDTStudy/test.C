#include "Bmeson_BDT.class.C"
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>
#include <vector>
#include <iostream>

#include <TString.h>

using namespace std;

//void test(char *infname="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160628_Bpt7To10_Pythia8_BuToJpsiK_pthatweight.root",
//void test(char *infname="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_PbPb_20160607_bPt5jpsiPt0tkPt0p8_Bp.root",char *outfile = "BDT.root")
//void test(char *infname="/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_Pythia8_BuToJpsiK_pthatweight.root",char *outfile = "BDT_PbPb_MC.root")
//void test(char *infname="/data/HeavyFlavourRun2/Data2015/Bntuple/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_crab_BfinderData_pp_20160606_bPt0jpsiPt0tkPt0p5_Bp.root",char *outfile = "BDT_pp_DATA.root")
//void test(char *infname="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_pthatweight.root",char *outfile = "BDT_pp_MC.root")
void test(TString infname="/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160629_Bpt7svpv5p5Bpt10svpv3p5_pp_Pythia8_BuToJpsiK_pthatweight.root",TString outfile = "BDT_pp_MC.root")
{
   TFile *inf = new TFile(infname.Data());
   TTree *t = (TTree*)inf->Get("ntKp");
   
   Int_t           Bsize;
   Float_t         BsvpvDistance[1000];   //[Bsize]
   Float_t         BsvpvDisErr[1000];   //[Bsize]
   Float_t         Bmumupt[1000];   //[Bsize]
   Float_t         Btrk1Pt[1000];   //[Bsize]
   Float_t         By[1000];   //[Bsize]
   Float_t         Btrk1Eta[1000];   //[Bsize]
   Float_t         Bchi2cl[1000];   //[Bsize]
   Float_t         Bdtheta[1000];   //[Bsize]

   t->SetBranchAddress("Bsize", &Bsize);
   t->SetBranchAddress("BsvpvDistance", BsvpvDistance);
   t->SetBranchAddress("BsvpvDisErr", BsvpvDisErr);
   t->SetBranchAddress("Bmumupt", Bmumupt);
   t->SetBranchAddress("Btrk1Pt", Btrk1Pt);
   t->SetBranchAddress("By", By);
   t->SetBranchAddress("Btrk1Eta", Btrk1Eta);
   t->SetBranchAddress("Bchi2cl", Bchi2cl);
   t->SetBranchAddress("Bdtheta", Bdtheta);
   
  
   std::vector<std::string> theInputVars;
   std::string a1="(BsvpvDistance/BsvpvDisErr)";
   std::string a2="Bmumupt";
   std::string a3="Btrk1Pt";
   std::string a4="abs(By)";
   std::string a5="abs(Btrk1Eta)";
   std::string a6="Bchi2cl";
   std::string a7="(cos(Bdtheta))";
   theInputVars.push_back(a1);
   theInputVars.push_back(a2);
   theInputVars.push_back(a3);
   theInputVars.push_back(a4); 
   theInputVars.push_back(a5);
   theInputVars.push_back(a6);
   theInputVars.push_back(a7);

   vector<double> inputValues;

   ReadBDT bdt(theInputVars);
  
   TFile *outf = new TFile(outfile.Data(),"recreate");
   TTree *bdtTree = new TTree("bdtTree","BDT");

   double BDT[1000];
   bdtTree->Branch("Bsize",&Bsize,"Bsize/I");
   bdtTree->Branch("BDT",BDT,"BDT[Bsize]/D");
   
   for (int i=0;i<t->GetEntries();i++){
      t->GetEntry(i);
      if (i%1000==0) cout <<i<<" / "<<t->GetEntries()<<endl;
      for (int j=0;j<Bsize;j++) {
         //cout <<i<<" "<<i<<" "<<Bsize<<endl;
         inputValues.clear();
         inputValues.push_back(BsvpvDistance[j]/BsvpvDisErr[j]);
         inputValues.push_back(Bmumupt[j]);
         inputValues.push_back(Btrk1Pt[j]);
         inputValues.push_back(fabs(By[j]));
         inputValues.push_back(fabs(Btrk1Eta[j]));
         inputValues.push_back(Bchi2cl[j]);
         inputValues.push_back(cos(Bdtheta[j]));
         BDT[j]=bdt.GetMvaValue(inputValues);      
      }
      bdtTree->Fill();
   }
   outf->Write();
   
}

int main(int argc, char *argv[])
{
	if(argc==3)
	{
		test(argv[1], argv[2]);
		return 0;
	}
	else
	{
		std::cout << "Wrong number of inputs" << std::endl;
      return 1;
   }
}
