#include "TFile.h"
#include "TTree.h"
#include "TChain.h"
#include "iostream"
#include "iomanip"
#define MAX_XB       20000
using namespace std;
bool isData = true;
//bool isData = false;

string inFileNames[] = {
  "Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_PbPb_20160816_bPt5jpsiPt0tkPt0p8_Bp.root"
//  "Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderData_pp_20160816_bPt0jpsiPt0tkPt0p5_Bp.root"
//  "Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_pthatweight.root"
//  "Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp_pthatweight.root"
//  "Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_Bpt0_Pthat5_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp.root"
//  "Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_Bpt0_Pthat5_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp.root"
};
int nFiles = sizeof(inFileNames)/sizeof(string);

void addtochain(TChain* root){
  for (int i=0; i<nFiles; i++) {
    root->Add(inFileNames[i].c_str());
  }	    
}

string inFileNames_MVA[] = {
"BDTtrees/BDT_PbPb_7_10_DATA_Pthat5train.root",
"BDTtrees/BDT_PbPb_10_15_DATA_Pthat5train.root",
"BDTtrees/BDT_PbPb_15_20_DATA_Pthat5train.root",
"BDTtrees/BDT_PbPb_20_30_DATA_Pthat5train.root",

//"BDTtrees/BDT_PbPb_7_10_MC_Pthat5_Pthat5train.root",
//"BDTtrees/BDT_PbPb_10_15_MC_Pthat5_Pthat5train.root",
//"BDTtrees/BDT_PbPb_15_20_MC_Pthat5_Pthat5train.root",
//"BDTtrees/BDT_PbPb_20_30_MC_Pthat5_Pthat5train.root",
};

int nFiles_BDT = sizeof(inFileNames_MVA)/sizeof(string);

int BntupleMerger()
{
  TChain* ntKp= new TChain("ntKp");
  TChain* ntGen = new TChain("ntGen");
  TChain* ntHlt = new TChain("ntHlt");
  TChain* ntHi = new TChain("ntHi");
  TChain* ntSkim = new TChain("ntSkim");
  addtochain(ntKp);
  addtochain(ntGen);
  addtochain(ntHlt);
  addtochain(ntHi);
  addtochain(ntSkim);

  TChain* BDT7 = new TChain("mvaTree");
  BDT7->Add(inFileNames_MVA[0].c_str());
  TChain* BDT10 = new TChain("mvaTree");
  BDT10->Add(inFileNames_MVA[1].c_str());
  TChain* BDT15 = new TChain("mvaTree");
  BDT15->Add(inFileNames_MVA[2].c_str());
  TChain* BDT20 = new TChain("mvaTree");
  BDT20->Add(inFileNames_MVA[3].c_str());
  //TChain* MLPBNN7 = new TChain("mvaTree");
  //MLPBNN7->Add(inFileNames_MVA[4].c_str());
  //TChain* MLPBNN10 = new TChain("mvaTree");
  //MLPBNN10->Add(inFileNames_MVA[5].c_str());
  //TChain* MLPBNN15 = new TChain("mvaTree");
  //MLPBNN15->Add(inFileNames_MVA[6].c_str());
  //TChain* MLPBNN20 = new TChain("mvaTree");
  //MLPBNN20->Add(inFileNames_MVA[7].c_str());
  
  cout<<" -- Check evt no. for three trees"<<endl;
  cout<<"    "<<ntKp->GetEntries()<<", "<<ntGen->GetEntries()<<", "<<ntHlt->GetEntries()<<", "<<ntHi->GetEntries()<<", "<<ntSkim->GetEntries()<<endl;
  if(ntKp->GetEntries()!=ntHlt->GetEntries())
    {
      cout<<"    Error: Event numbers are different in three trees."<<endl;
      return 0;
    }

  int      Bsize;
  int      RunNo;
  int      EvtNo;
  int      LumiNo;
  ntKp->SetBranchAddress("Bsize",&Bsize);
  ntKp->SetBranchAddress("RunNo",&RunNo);
  ntKp->SetBranchAddress("EvtNo",&EvtNo);
  ntKp->SetBranchAddress("LumiNo",&LumiNo);
  Bool_t skimevents=false;
  
  TString ofname="test.root";
  TFile* outf = TFile::Open(ofname,"recreate");
  TTree* ntKp_new = ntKp->CloneTree(0);
  TTree* ntGen_new = ntGen->CloneTree(0);
  TTree* ntHlt_new = ntHlt->CloneTree(0);
  TTree* ntHi_new = ntHi->CloneTree(0);
  TTree* ntSkim_new = ntSkim->CloneTree(0);
  
  double BDTval7[MAX_XB] ;
  double BDTval10[MAX_XB];
  double BDTval15[MAX_XB];
  double BDTval20[MAX_XB];
  double MLPBNNval7[MAX_XB] ;
  double MLPBNNval10[MAX_XB];
  double MLPBNNval15[MAX_XB];
  double MLPBNNval20[MAX_XB];
  BDT7->SetBranchAddress("BDT",  BDTval7);
  BDT10->SetBranchAddress("BDT", BDTval10);
  BDT15->SetBranchAddress("BDT", BDTval15);
  BDT20->SetBranchAddress("BDT", BDTval20);
  //MLPBNN7->SetBranchAddress("MLPBNN",  MLPBNNval7);
  //MLPBNN10->SetBranchAddress("MLPBNN", MLPBNNval10);
  //MLPBNN15->SetBranchAddress("MLPBNN", MLPBNNval15);
  //MLPBNN20->SetBranchAddress("MLPBNN", MLPBNNval20);

  int BDT_Bsize7;
  int BDT_Bsize10;
  int BDT_Bsize15;
  int BDT_Bsize20;
  int MLPBNN_Bsize7;
  int MLPBNN_Bsize10;
  int MLPBNN_Bsize15;
  int MLPBNN_Bsize20;
  BDT7->SetBranchAddress("Bsize",  &BDT_Bsize7);
  BDT10->SetBranchAddress("Bsize", &BDT_Bsize10);
  BDT15->SetBranchAddress("Bsize", &BDT_Bsize15);
  BDT20->SetBranchAddress("Bsize", &BDT_Bsize20);
  //MLPBNN7->SetBranchAddress("Bsize",  &MLPBNN_Bsize7);
  //MLPBNN10->SetBranchAddress("Bsize", &MLPBNN_Bsize10);
  //MLPBNN15->SetBranchAddress("Bsize", &MLPBNN_Bsize15);
  //MLPBNN20->SetBranchAddress("Bsize", &MLPBNN_Bsize20);

  TTree* mvaTree =  new TTree("mvaTree","");
  mvaTree->Branch("Bsize", &Bsize, "Bsize/I");
  mvaTree->Branch("BDTval7", BDTval7, "BDTval7[Bsize]/D");
  mvaTree->Branch("BDTval10", BDTval10, "BDTval10[Bsize]/D");
  mvaTree->Branch("BDTval15", BDTval15, "BDTval15[Bsize]/D");
  mvaTree->Branch("BDTval20", BDTval20, "BDTval20[Bsize]/D");
  //mvaTree->Branch("MLPBNNval7",  MLPBNNval7,  "MLPBNNval7[Bsize]/D");
  //mvaTree->Branch("MLPBNNval10", MLPBNNval10, "MLPBNNval10[Bsize]/D");
  //mvaTree->Branch("MLPBNNval15", MLPBNNval15, "MLPBNNval15[Bsize]/D");
  //mvaTree->Branch("MLPBNNval20", MLPBNNval20, "MLPBNNval20[Bsize]/D");
  
  Int_t fCurrent = -1;
  map< pair<int, int>, int> eList;
  map< pair<int, int>, int>::iterator it;
  int nDuplicate = 0;

  Long64_t nentries = ntKp->GetEntries();
  cout<<" -- Event reading"<<endl;
  if(nentries != BDT7->GetEntries() || BDT7->GetEntries() != BDT10->GetEntries() || BDT10->GetEntries() != BDT15->GetEntries() || BDT15->GetEntries() != BDT20->GetEntries()) {cout<<"Entry number inconsistent, exit"<<endl; return 0;}
  //if(nentries != MLPBNN7->GetEntries() || MLPBNN7->GetEntries() != MLPBNN10->GetEntries() || MLPBNN10->GetEntries() != MLPBNN15->GetEntries() || MLPBNN15->GetEntries() != MLPBNN20->GetEntries()) {cout<<"Entry number inconsistent, exit"<<endl; return 0;}
  //else cout<<"Safe"<<endl;
  for(Long64_t i=0;i<nentries;i++)
  //for(Long64_t i=0;i<1000;i++)
    {
      if(i%100000==0) cout<<setiosflags(ios::left)<<"    "<<setw(8)<<i<<" / "<<nentries<<endl;

      Long64_t centry = ntKp->LoadTree(i);
      if (centry < 0) break;
      if (ntKp->GetTreeNumber() != fCurrent) {
        fCurrent = ntKp->GetTreeNumber();
        cout << "[INFO] Changed to Tree number: " << inFileNames[fCurrent] << endl;
      }

      ntKp->GetEntry(i);
      ntGen->GetEntry(i);
      ntHlt->GetEntry(i);
      ntHi->GetEntry(i);
      ntSkim->GetEntry(i);
      BDT7->GetEntry(i);
      BDT10->GetEntry(i);
      BDT15->GetEntry(i);
      BDT20->GetEntry(i);
      //MLPBNN7->GetEntry(i);
      //MLPBNN10->GetEntry(i);
      //MLPBNN15->GetEntry(i);
      //MLPBNN20->GetEntry(i);

      //check Bsize
      if(Bsize != BDT_Bsize7 || BDT_Bsize7 != BDT_Bsize10 || BDT_Bsize10 != BDT_Bsize15 || BDT_Bsize15 != BDT_Bsize20){ cout<<"Bsize inconsistent, exit"<<endl; return 0;}
      //if(Bsize != MLPBNN_Bsize7 || MLPBNN_Bsize7 != MLPBNN_Bsize10 || MLPBNN_Bsize10 != MLPBNN_Bsize15 || MLPBNN_Bsize15 != MLPBNN_Bsize20){ cout<<"Bsize inconsistent, exit"<<endl; return 0;}
      //else cout<<"Safe: "<<Bsize<<endl;

      //if ((HLTriggers&(ULong64_t)pow(2,0))==(ULong64_t)pow(2,0)) {
      bool isDuplicate = false;
      //pair<int, int> element = make_pair(EvtNo, RunNo);
      //pair<pair<int, int>, int> element2 = make_pair(element, i);
      //pair<map<pair<int, int>, int>::iterator, bool> result = eList.insert(element2);
      //if (result.second == 0) {
      //  cout << " Duplicated event in File " << inFileNames[fCurrent] << " : " << RunNo << " " << EvtNo << endl;
	  //  isDuplicate = true;
      //  nDuplicate += 1;
      //}
      //}
      //cout << " Duplicated event: " << runNb << " " << eventNb << endl;

	  bool flag = false;
	  if(Bsize > 0){
        flag = true;
      }
      if(!isDuplicate && (!skimevents || flag))
	  {
	    ntKp_new->Fill();
	    ntHlt_new->Fill(); 
	    ntHi_new->Fill(); 
	    ntSkim_new->Fill(); 
		if(!isData) ntGen_new->Fill();
        mvaTree->Fill();
	  } 
    }
  outf->Write();
  cout<<"# of duplicate: "<<nDuplicate<<endl;
  cout<<" -- Writing new trees done"<<endl;
  outf->Close();

  return 1;  
}
