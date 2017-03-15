#include <iostream>
#include <branchStruct.h>
#include <TH1.h>
#include <TH2.h>
#include <TFile.h>
#include <TTree.h>
#include <TNtuple.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <TLorentzVector.h>
#include <TGraphAsymmErrors.h>
using namespace std;

bool ispp = 0;
TString inputmc;

void SkimBntuple(){
	string label = "";
	if(ispp){
		label = "pp"; 
		inputmc = "/data/HeavyFlavourRun2/MC2015/Bntuple/pp/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_pp_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt0jpsiPt0tkPt0p5_Bp_pthatweight_JingBDT.root";
    }
	else{
		label = "PbPb";
		inputmc = "/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160816_Bpt7svpv5p5Bpt10svpv3p5_BfinderMC_PbPb_Pythia8_BuToJpsiK_TuneCUEP8M1_20160816_bPt5jpsiPt0tkPt0p8_Bp_pthatweight_JingBDT.root";
	}
    TFile* infMC = new TFile(inputmc.Data());
    TTree* ntKp = (TTree*)infMC->Get("ntKp");
    TTree* ntHlt = (TTree*)infMC->Get("ntHlt");
    TTree* ntSkim = (TTree*)infMC->Get("ntSkim");
    TTree* ntHi = (TTree*)infMC->Get("ntHi");
    TTree* mvaTree = (TTree*)infMC->Get("mvaTree");
    TTree* ntGen = (TTree*)infMC->Get("ntGen");
	ntKp->AddFriend("ntSkim");
	ntKp->AddFriend("ntHlt");
	ntKp->AddFriend("ntGen");
	ntKp->AddFriend("mvaTree");
	setAddressTree(ntKp, ntHlt, ntSkim, ntHi, mvaTree, ntGen, ispp);
	int nevents_total = ntKp->GetEntries();

	TFile *fOut= new TFile(Form("results_%s.root", label.c_str()), "recreate"); 
	TTree* ExclBAna  = new TTree("ExclBAna","Skim Bntuple");
	double pt, y, weight;
	bool passAcc;
	double wAll = 0;
	double wPass = 0;
	ExclBAna->Branch("pt",&pt,"pt/D");
	ExclBAna->Branch("y",&y,"y/D");
	ExclBAna->Branch("weight",&weight,"weight/D");
	ExclBAna->Branch("passAcc",&passAcc,"passAcc/O");

    for(int entry=0; entry<nevents_total; entry++){
    	ntKp->GetEntry(entry);
    	ntHlt->GetEntry(entry);
    	ntSkim->GetEntry(entry);
    	ntHi->GetEntry(entry);
    	mvaTree->GetEntry(entry);
    	ntGen->GetEntry(entry);
	    for(int g=0; g<Gsize; g++){
			if(TMath::Abs(Gy[g])<2.4&&abs(GpdgId[g])==521&&GisSignal[g]==1&&Gpt[g]>=7&&Gpt[g]<=50){
				pt = Gpt[g];
				y = Gy[g];
				weight = 0;
				passAcc = 0;
				if(ispp){
					weight = pthatweight*(pow(10,-0.094152+0.008102*Gpt[g]+Gpt[g]*Gpt[g]*0.000171+Gpt[g]*Gpt[g]*Gpt[g]*-0.000005+Gpt[g]*Gpt[g]*Gpt[g]*Gpt[g]*-0.000000+Gpt[g]*Gpt[g]*Gpt[g]*Gpt[g]*Gpt[g]*0.000000));
				} 
				else{
					weight = pthatweight*(pow(10,-0.107832+0.010248*Gpt[g]+Gpt[g]*Gpt[g]*0.000079+Gpt[g]*Gpt[g]*Gpt[g]*-0.000003+Gpt[g]*Gpt[g]*Gpt[g]*Gpt[g]*-0.000000+Gpt[g]*Gpt[g]*Gpt[g]*Gpt[g]*Gpt[g]*0.000000));
				}		
				wAll += weight;

					if( ((TMath::Abs(Gmu1eta[g])<1.2 && Gmu1pt[g]>3.5) 
						|| (TMath::Abs(Gmu1eta[g])>1.2 && TMath::Abs(Gmu1eta[g])<2.1 && Gmu1pt[g]>(5.77-1.8*TMath::Abs(Gmu1eta[g]))) 
						|| (TMath::Abs(Gmu1eta[g])>2.1 && TMath::Abs(Gmu1eta[g])<2.4 && Gmu1pt[g]>1.8)) 
						&& ((TMath::Abs(Gmu2eta[g])<1.2 && Gmu2pt[g]>3.5) 
						|| (TMath::Abs(Gmu2eta[g])>1.2 && TMath::Abs(Gmu2eta[g])<2.1 && Gmu2pt[g]>(5.77-1.8*TMath::Abs(Gmu2eta[g]))) 
						|| (TMath::Abs(Gmu2eta[g])>2.1 && TMath::Abs(Gmu2eta[g])<2.4 && Gmu2pt[g]>1.8)) && Gtk1pt[g]>0.5 && TMath::Abs(Gtk1eta[g])<2.4)
					{
					passAcc = 1;
					wPass += weight;
					}
				ExclBAna->Fill();
			}
		}//Gsize loop
	}//Evt loop
	cout<<"wAll: "<<wAll<<endl;
	cout<<"wPass: "<<wPass<<endl;
    fOut->Write();
    fOut->Close();
}
