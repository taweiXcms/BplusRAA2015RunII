
#include "format.h"
#include "BfinderAna.h"

Bool_t istest = true;
void printDa(GenInfoBranches *GenInfo, int idx, int space);
int getBAncestor(GenInfoBranches *GenInfo, int idx, int BancestorId);
int matcher(BInfoBranches *BInfo, TrackInfoBranches *TrackInfo, MuonInfoBranches *MuonInfo, GenInfoBranches *GenInfo, int j, float BId, float MId, float tk1Id, float tk2Id, bool twoTks);
int BfinderAna(
		TString infile="/data/twang/BfinderRun2/DoubleMu/BfinderData_pp_20151130/finder_pp_merged.root", 
		TString outfile="test.root", 
		Bool_t REAL=false, 
		Bool_t isPbPb=false, 
		Int_t startEntries=0, 
		Int_t endEntries=-1,  
		Bool_t skim=true, 
		Bool_t gskim=true, 
		Bool_t checkMatching=true, 
		Bool_t iseos=false, 
		Bool_t SkimHLTtree=true)
{
	if(istest)
	{
//		infile="/data/HeavyFlavourRun2/BfinderRun2/MC/crab_BfinderMC_pp_BJpsiMM_5p02TeV_TuneCUETP8M1_20160613_bPt0jpsiPt0tkPt0p5_Bp.root";
		infile="/data/HeavyFlavourRun2/BfinderRun2/MC/crab_BfinderMC_PbPb_Pythia8_BJpsiMM_ptJpsi_0_inf_Hydjet_MB_20160613_bPt5jpsiPt0tkPt0p8_Bp.root";
		outfile="test.root";
		REAL=false;
		isPbPb=false;
		skim=false;
		checkMatching=true;
		iseos=false;
	}

	cout<<endl;
	if(REAL) cout<<"--- Processing - REAL DATA";
	else cout<<"--- Processing - MC";
	if(isPbPb) cout<<" - PbPb";
	else cout<<" - pp";
	cout<<endl;

	TString ifname;
	if(iseos) ifname = Form("root://eoscms.cern.ch//eos/cms%s",infile.Data());
	else ifname = infile;
	TFile* f = TFile::Open(ifname);
	TTree* root = (TTree*)f->Get("Bfinder/root");
	TTree* hltroot = (TTree*)f->Get("hltanalysis/HltTree");
	TTree* skimroot = (TTree*)f->Get("skimanalysis/HltTree");
	TTree* hiroot = (TTree*)f->Get("hiEvtAnalyzer/HiTree");

	EvtInfoBranches     *EvtInfo = new EvtInfoBranches;
	VtxInfoBranches     *VtxInfo = new VtxInfoBranches;
	MuonInfoBranches    *MuonInfo = new MuonInfoBranches;
	TrackInfoBranches   *TrackInfo = new TrackInfoBranches;
	BInfoBranches       *BInfo = new BInfoBranches;
	GenInfoBranches     *GenInfo = new GenInfoBranches;

	setHltBranch(hltroot);
	setHiTreeBranch(hiroot);

	EvtInfo->setbranchadd(root);
	VtxInfo->setbranchadd(root);
	MuonInfo->setbranchadd(root);
	TrackInfo->setbranchadd(root);
	BInfo->setbranchadd(root);
	GenInfo->setbranchadd(root);

	Long64_t nentries = root->GetEntries();
	if(endEntries>nentries || endEntries == -1) endEntries = nentries;
	TFile *outf = TFile::Open(Form("%s", outfile.Data()),"recreate");

	cout<<"--- Check the number of events for four trees"<<endl;
	cout<<root->GetEntries()<<" "<<hltroot->GetEntries()<<" "<<hiroot->GetEntries();
	cout<<" "<<skimroot->GetEntries()<<endl;
	cout<<endl;

	//
	double min = 4.6;
	double max = 6.0;
	int nbin = (max-min)*50;
	TH1D* Bmass = new TH1D("Bmass","Bmass", nbin, min, max);
	TH1D* Bmass_nosig = new TH1D("Bmass_nosig","Bmass_nosig", nbin, min, max);
	TH1D* BmassBpPi = new TH1D("BmassBpPi","BmassBpPi", nbin, min, max);
	TH1D* BmassBpXPi = new TH1D("BmassBpXPi","BmassBpXPi", nbin, min, max);
	TH1D* BmassBpK = new TH1D("BmassBpK","BmassBpK", nbin, min, max);
	TH1D* BmassB0K = new TH1D("BmassB0K","BmassB0K", nbin, min, max);
	TH1D* BmassBpK_tkmatch = new TH1D("BmassBpK_tkmatch","BmassBpK_tkmatch", nbin, min, max);
	TH1D* BmassB0K_tkmatch = new TH1D("BmassB0K_tkmatch","BmassB0K_tkmatch", nbin, min, max);
	TH1D* BmassBpK_tknotmatch = new TH1D("BmassBpK_tknotmatch","BmassBpK_tknotmatch", nbin, min, max);
	TH1D* BmassB0K_tknotmatch = new TH1D("BmassB0K_tknotmatch","BmassB0K_tknotmatch", nbin, min, max);
	Bmass->SetMinimum(0);
	Bmass_nosig->SetMinimum(0); 
	BmassBpPi->SetMinimum(0); 
	BmassBpXPi->SetMinimum(0);
	BmassBpK->SetMinimum(0);
	BmassB0K->SetMinimum(0);
	BmassBpK_tkmatch->SetMinimum(0);
	BmassB0K_tkmatch->SetMinimum(0);
	BmassBpK_tknotmatch->SetMinimum(0);
	BmassB0K_tknotmatch->SetMinimum(0);

	std::map<int,int> BtypeCountBpK;
	std::map<int,int> BtypeCountB0K;
	cout<<"--- Processing events"<<endl;
	for(Int_t i=startEntries;i<endEntries;i++)
	{
		root->GetEntry(i);
		hltroot->GetEntry(i);
		skimroot->GetEntry(i);
		hiroot->GetEntry(i);

		if(i%100000==0) cout<<setw(7)<<i<<" / "<<endEntries<<endl;
		if(checkMatching)
		{
			if(((int)Bf_HLT_Event!=EvtInfo->EvtNo||(int)Bf_HLT_Run!=EvtInfo->RunNo||(int)Bf_HLT_LumiBlock!=EvtInfo->LumiNo) || 
					((int)Bf_HiTree_Evt!=EvtInfo->EvtNo||(int)Bf_HiTree_Run!=EvtInfo->RunNo||(int)Bf_HiTree_Lumi!=EvtInfo->LumiNo))
			{
				cout<<"Error: not matched "<<i<<" | (Hlt,Bfr,Hi) | ";
				cout<<"EvtNo("<<Bf_HLT_Event<<","<<EvtInfo->EvtNo<<","<<Bf_HiTree_Evt<<") ";
				cout<<"RunNo("<<Bf_HLT_Run<<","<<EvtInfo->RunNo<<","<<Bf_HiTree_Run<<") ";
				cout<<"LumiNo("<<Bf_HLT_LumiBlock<<","<<EvtInfo->LumiNo<<","<<Bf_HiTree_Lumi<<")"<<endl;
				continue;
			}
		}
		//Do oyur analysis here
		//example: checking GenInfo
	    for(int j=0;j<GenInfo->size;j++){
			if( int(GenInfo->pdgId[j]/100)%100 == 5){
//				cout<<GenInfo->pdgId[j]<<endl;
//				if(abs(GenInfo->pdgId[GenInfo->da1[j]]) == 443 || abs(GenInfo->pdgId[GenInfo->da2[j]]) == 443){
//					printDa(GenInfo, j, 1);
//				}
				if(abs(GenInfo->pdgId[j])==521)
				if(GenInfo->da1[j] != -1)
				if(abs(GenInfo->pdgId[GenInfo->da1[j]]) == 443)
				if(abs(GenInfo->pdgId[GenInfo->da2[j]]) == 211)
				{
					//printDa(GenInfo, j, 1);
				}

				if(abs(GenInfo->pdgId[j])==521)
				if(GenInfo->da1[j] != -1)
				if(abs(GenInfo->pdgId[GenInfo->da1[j]]) == 443)
				if((abs(GenInfo->pdgId[GenInfo->da2[j]])/100)%100 == 3)
				{
					//printDa(GenInfo, j, 1);
				}

				if(abs(GenInfo->pdgId[j])==511)
				if(GenInfo->da1[j] != -1)
				if(abs(GenInfo->pdgId[GenInfo->da1[j]]) == 443)
				if((abs(GenInfo->pdgId[GenInfo->da2[j]])/100)%100 == 3)
				{
					//printDa(GenInfo, j, 1);
				}
				
			}
		}

		bool isBsig = false;
		for(int j=0;j<BInfo->size;j++){
			int rtk1idx = BInfo->rftk1_index[j];
			int rtk2idx = BInfo->rftk2_index[j];
			int rmu1idx = BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]];
			int rmu2idx = BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]];
			int gtk1idx =  TrackInfo->geninfo_index[BInfo->rftk1_index[j]];
			int gtk2idx =  TrackInfo->geninfo_index[BInfo->rftk2_index[j]];
			int gmu1idx =  MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]];
			int gmu2idx =  MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]];

			//some recon cut
			bool cut = false;

			if(
			BInfo->mass[j] > min && BInfo->mass[j] < max && BInfo->pt[j] > 10 && BInfo->pt[j] < 1000
			&& fabs(BInfo->eta[j]) < 2.4
			){
				cut = true;
			}

//			if(
//			BInfo->mass[j] > min && BInfo->mass[j] < max && BInfo->pt[j] > 10 && BInfo->pt[j] < 1000
//			&&	((fabs(MuonInfo->eta[rmu1idx]) < 1.2 && MuonInfo->pt[rmu1idx] > 3.5) || (fabs(MuonInfo->eta[rmu1idx]) > 1.2 && fabs(MuonInfo->eta[rmu1idx]) < 2.1 && MuonInfo->pt[rmu1idx] > (5.77-1.8*fabs(MuonInfo->eta[rmu1idx]))) || (fabs(MuonInfo->eta[rmu1idx]) > 2.1 && fabs(MuonInfo->eta[rmu1idx]) < 2.4 && MuonInfo->pt[rmu1idx] > 1.8))
//			&&  MuonInfo->TMOneStationTight[rmu1idx] &&  MuonInfo->i_nPixelLayer[rmu1idx] > 0 && (MuonInfo->i_nPixelLayer[rmu1idx] + MuonInfo->i_nStripLayer[rmu1idx]) > 5 && MuonInfo->dxyPV[rmu1idx] < 0.3 && MuonInfo->dzPV[rmu1idx] < 20 && MuonInfo->isGlobalMuon[rmu1idx]
//			&&	((fabs(MuonInfo->eta[rmu2idx]) < 1.2 && MuonInfo->pt[rmu2idx] > 3.5) || (fabs(MuonInfo->eta[rmu2idx]) > 1.2 && fabs(MuonInfo->eta[rmu2idx]) < 2.1 && MuonInfo->pt[rmu2idx] > (5.77-1.8*fabs(MuonInfo->eta[rmu2idx]))) || (fabs(MuonInfo->eta[rmu2idx]) > 2.1 && fabs(MuonInfo->eta[rmu2idx]) < 2.4 && MuonInfo->pt[rmu2idx] > 1.8))
//			&&  MuonInfo->TMOneStationTight[rmu2idx] &&  MuonInfo->i_nPixelLayer[rmu2idx] > 0 && (MuonInfo->i_nPixelLayer[rmu2idx] + MuonInfo->i_nStripLayer[rmu2idx]) > 5 && MuonInfo->dxyPV[rmu2idx] < 0.3 && MuonInfo->dzPV[rmu2idx] < 20 && MuonInfo->isGlobalMuon[rmu2idx]
//			&& TrackInfo->highPurity[rtk1idx]
//			&& TrackInfo->pt[rtk1idx] > 1.0
//			&& fabs(TrackInfo->eta[rtk1idx]) < 2.4
//			&& fabs(BInfo->eta[j]) < 2.4
//			&& TMath::Prob(BInfo->vtxchi2[j],BInfo->vtxdof[j]) > 0.005
//			){
//				cut = true;
//			}
//
//			if(!cut) continue;
		
		
			//identify B sig
			Bmass->Fill(BInfo->mass[j]);
			bool isBsig = false;
			if(gmu1idx != -1 && gmu2idx != -1)
			if(abs(GenInfo->pdgId[gmu1idx]) == 13 && abs(GenInfo->pdgId[gmu2idx]) == 13)
			if((GenInfo->mo1[gmu1idx]) != -1 && (GenInfo->mo1[gmu2idx]) != -1 && GenInfo->mo1[gmu1idx] == GenInfo->mo1[gmu2idx])
			if(abs(GenInfo->pdgId[GenInfo->mo1[gmu1idx]]) == 443 && abs(GenInfo->pdgId[GenInfo->mo1[gmu2idx]]) == 443)
			if(GenInfo->mo1[GenInfo->mo1[gmu1idx]] != -1)
			if(gtk1idx != -1)
			if(GenInfo->mo1[gtk1idx] != -1)
			if(GenInfo->mo1[gtk1idx] == GenInfo->mo1[GenInfo->mo1[gmu1idx]] && abs(GenInfo->pdgId[GenInfo->mo1[gtk1idx]]) == 521 && abs(GenInfo->pdgId[gtk1idx]) == 321)
				isBsig = true;
			if(!isBsig) Bmass_nosig->Fill(BInfo->mass[j]);

			//identify jpsi + ?
			if(gmu1idx != -1 && gmu2idx != -1)
				if(abs(GenInfo->pdgId[gmu1idx]) == 13 && abs(GenInfo->pdgId[gmu2idx]) == 13)
					if((GenInfo->mo1[gmu1idx]) != -1 && (GenInfo->mo1[gmu2idx]) != -1 && GenInfo->mo1[gmu1idx] == GenInfo->mo1[gmu2idx])
						if(abs(GenInfo->pdgId[GenInfo->mo1[gmu1idx]]) == 443 && abs(GenInfo->pdgId[GenInfo->mo1[gmu2idx]]) == 443)
						{
							int mmu1idx = GenInfo->mo1[gmu1idx];
							int mmu2idx = GenInfo->mo1[gmu2idx];
							int mjpsiidx = GenInfo->mo1[mmu1idx];
							//B+ to jpsi pi+
							if(gtk1idx != -1){
								int mtk1idx = GenInfo->mo1[gtk1idx];
								if(mtk1idx != 1){
									int mtk1pdg = GenInfo->pdgId[mtk1idx];
									int tk1pdg = GenInfo->pdgId[gtk1idx];
									if(mtk1idx == mjpsiidx && abs(mtk1pdg) == 521 && abs(tk1pdg) == 211){
										if(gtk1idx == GenInfo->da2[mtk1idx]){
											//cout<<"-----"<<endl;
											//printDa(GenInfo, mtk1idx, 1);
											//cout<<"-----"<<endl;
											//printDa(GenInfo, mtk1idx, 1);
											//cout<<"Bmass: "<<BInfo->mass[j]<<endl;
											BmassBpPi->Fill(BInfo->mass[j]);
										}
										else{
											//printDa(GenInfo, mtk1idx, 1);
											//cout<<"Bmass: "<<BInfo->mass[j]<<endl;
											BmassBpXPi->Fill(BInfo->mass[j]);
										}
									}
								}
								//B+ to jpsi K 
								if(abs(GenInfo->pdgId[GenInfo->mo1[mmu1idx]]) == 521){
									int bidx = GenInfo->mo1[mmu1idx];
									int bda2idx = GenInfo->da2[bidx]; 
									int bda2pdg = GenInfo->pdgId[bda2idx];
									int tkancestor = getBAncestor(GenInfo, gtk1idx, 521);
									/*
									if(tkancestor != -1){
									cout<<"tk1 pt: "<<GenInfo->pt[gtk1idx]<<endl;
									cout<<"tk1anc: "<<tkancestor<<endl;
									cout<<"tk1anc pdg: "<<GenInfo->pdgId[tkancestor]<<endl;
									cout<<"bidx: "<<bidx<<endl;
                                    printDa(GenInfo, tkancestor, 1);
									}*/
									if((abs(bda2pdg)/100)%100==3
									&& abs(bda2pdg) != 321 
									){
										//printDa(GenInfo, bidx, 1);
										//cout<<"Bmass: "<<BInfo->mass[j]<<endl;
										BmassBpK->Fill(BInfo->mass[j]);
										if(tkancestor == bidx){
											BmassBpK_tkmatch->Fill(BInfo->mass[j]);
										}
										else{BmassBpK_tknotmatch->Fill(BInfo->mass[j]);}

										if(BtypeCountBpK.find(abs(bda2pdg)) == BtypeCountBpK.end()){
											BtypeCountBpK[abs(bda2pdg)] = 1;
										}
										else{
											BtypeCountBpK[abs(bda2pdg)] += 1;
										}
									}
								}

								//B0 to jpsi K 
								if(abs(GenInfo->pdgId[GenInfo->mo1[mmu1idx]]) == 511){
									int bidx = GenInfo->mo1[mmu1idx];
									int bda2idx = GenInfo->da2[bidx]; 
									int bda2pdg = GenInfo->pdgId[bda2idx];
									int tkancestor = getBAncestor(GenInfo, gtk1idx, 511);
									if((abs(bda2pdg)/100)%100==3){
										//printDa(GenInfo, bidx, 1);
										//cout<<"Bmass: "<<BInfo->mass[j]<<endl;
										BmassB0K->Fill(BInfo->mass[j]);
										if(tkancestor == bidx){
											BmassB0K_tkmatch->Fill(BInfo->mass[j]);
										}
										else{BmassB0K_tknotmatch->Fill(BInfo->mass[j]);}

										if(BtypeCountB0K.find(abs(bda2pdg)) == BtypeCountB0K.end()){
											BtypeCountB0K[abs(bda2pdg)] = 1;
										}
										else{
											BtypeCountB0K[abs(bda2pdg)] += 1;
										}
									}
								}
							}

						}
		}
		//

	}
	cout<<"Bp + K type count========="<<endl;
	std::map<int,int>::iterator BtypeCountBpKIt;
	for(BtypeCountBpKIt = BtypeCountBpK.begin(); BtypeCountBpKIt != BtypeCountBpK.end(); BtypeCountBpKIt++){
		cout<<"Ktype: "<<BtypeCountBpKIt->first<<" Count: "<<BtypeCountBpKIt->second<<endl;
	}

	cout<<"B0 + K type count========="<<endl;
	std::map<int,int>::iterator BtypeCountB0KIt;
	for(BtypeCountB0KIt = BtypeCountB0K.begin(); BtypeCountB0KIt != BtypeCountB0K.end(); BtypeCountB0KIt++){
		cout<<"Ktype: "<<BtypeCountB0KIt->first<<" Count: "<<BtypeCountB0KIt->second<<endl;
	}
	outf->Write();
	cout<<"--- Writing finished"<<endl;
	outf->Close();

	cout<<"--- In/Output files"<<endl;
	cout<<ifname<<endl;
	cout<<outfile<<endl;
	cout<<endl;

	return 1;
}

void printDa(GenInfoBranches *GenInfo, int idx, int space){
	if(idx != -1){
		int indent = space;
		while(indent != 0){
			printf("   ");
			indent -= 1;
		}
		printf("%d %f\n",GenInfo->pdgId[idx], GenInfo->pt[idx]);
		if(GenInfo->da1[idx]!=-1){
		 printDa(GenInfo, GenInfo->da1[idx], space+1);
		}
		if(GenInfo->da2[idx]!=-1){
		 printDa(GenInfo, GenInfo->da2[idx], space+1);
		}
		if(GenInfo->da3[idx]!=-1){
		 printDa(GenInfo, GenInfo->da3[idx], space+1);
		}
		if(GenInfo->da4[idx]!=-1){
		 printDa(GenInfo, GenInfo->da4[idx], space+1);
		}
	}
}
int getBAncestor(GenInfoBranches *GenInfo, int idx, int BancestorId){
	if(GenInfo->mo1[idx] == -1) return -1;
	else if(abs(GenInfo->pdgId[GenInfo->mo1[idx]]) == BancestorId) return GenInfo->mo1[idx];
	else return getBAncestor(GenInfo, GenInfo->mo1[idx], BancestorId);
}

int matcher(BInfoBranches *BInfo, TrackInfoBranches *TrackInfo, MuonInfoBranches *MuonInfo, GenInfoBranches *GenInfo, int j, float BId, float MId, float tk1Id, float tk2Id, bool twoTks){
    int mGenIdxTk1=-1;
    int mGenIdxTk2=-1;
    int bGenIdxTk1=-1;
    int bGenIdxTk2=-1;
    int bGenIdxMu1=-1;
    int bGenIdxMu2=-1;
	int Bgen = -1;
	// tk1
	if(TrackInfo->geninfo_index[BInfo->rftk1_index[j]]>-1)
	{
		int level =0;
		if(abs(GenInfo->pdgId[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]])==tk1Id)
		{
			level = 1;
			if(GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]]>-1)
			{
				if(!twoTks)//one trk channel
				{
					mGenIdxTk1=0;
					if(abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]]])==BId)
					{
						level = 3;
						bGenIdxTk1=GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]];
					}
				}
				else//two trk channel
				{
					if(abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]]])==MId)
					{
						level = 2;
						if(GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]]]>-1)
						{
							if(abs(GenInfo->pdgId[GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]]]])==BId)
							{
								level = 3;
								bGenIdxTk1=GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]]];
							}
						}
						mGenIdxTk1=GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk1_index[j]]];
					}
				}
			}
		}
		Bgen=level;
	}

	//tk2
	if(!twoTks)//one trk channel
	{
		Bgen+=30;
		mGenIdxTk2=0;
		bGenIdxTk2=0;
	}
	else//two trk channel
	{
		if(TrackInfo->geninfo_index[BInfo->rftk2_index[j]]>-1)
		{
			int level =0;
			if(abs(GenInfo->pdgId[TrackInfo->geninfo_index[BInfo->rftk2_index[j]]])==tk2Id)
			{
				level = 1;
				if(GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk2_index[j]]]>-1)
				{
					if(abs(GenInfo->pdgId[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk2_index[j]]]])==MId)
					{
						level = 2;
						if(GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk2_index[j]]]]>-1)
						{
							if(abs(GenInfo->pdgId[GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk2_index[j]]]]])==BId)
							{
								level = 3;
								bGenIdxTk2 = GenInfo->mo1[GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk2_index[j]]]];
							}
						}
						mGenIdxTk2 = GenInfo->mo1[TrackInfo->geninfo_index[BInfo->rftk2_index[j]]];
					}
				}
			}
			Bgen+=(level*10);
		}
	}

	//mu1
	//cout<<MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]<<endl;
	if(MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]>-1)
	{
		int level =0;
		if(abs(GenInfo->pdgId[MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]])==13)
		{
			level=1;
			if(GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]]>-1)
			{
				if(GenInfo->pdgId[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]]]==443)
				{
					//ujGenIdxMu1 = GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]];
					level=2;
					if(GenInfo->mo1[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]]]>-1)
					{
						if(abs(GenInfo->pdgId[GenInfo->mo1[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]]]])==BId)
						{
							//nonprompt=1;
							level = 3;
							bGenIdxMu1=GenInfo->mo1[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu1_index[BInfo->rfuj_index[j]]]]];
						}
					}
					else
					{
						//prompt=1;
					}
				}
			}
		}
		Bgen+=(level*100);
	}


	//mu2
	if(MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]>-1)
	{
		int level =0;
		if(abs(GenInfo->pdgId[MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]])==13)
		{
			level = 1;
			if(GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]]>-1)
			{
				if(GenInfo->pdgId[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]]]==443)
				{
					//ujGenIdxMu2 = GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]];
					level = 2;
					if(GenInfo->mo1[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]]]>-1)
					{
						if(abs(GenInfo->pdgId[GenInfo->mo1[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]]]])==BId)
						{
							level = 3;
							bGenIdxMu2=GenInfo->mo1[GenInfo->mo1[MuonInfo->geninfo_index[BInfo->uj_rfmu2_index[BInfo->rfuj_index[j]]]]];
						}
					}
				}
			}
		}
		Bgen+=(level*1000);
	}
	int level=0;
	if(mGenIdxTk1!=-1 && mGenIdxTk2!=-1)
	{
		if(!twoTks) level=1;
		else
		{
			if(mGenIdxTk1==mGenIdxTk2) level=1;
		}
	}
	if(bGenIdxMu1!=-1 && bGenIdxMu1==bGenIdxMu2 && bGenIdxMu1==bGenIdxTk1)
	{
		if(!twoTks)
		{
			level=2;
		}
		else if(bGenIdxMu1==bGenIdxTk2)
		{
			level=2;
		}
	}
	Bgen+=(level*10000);
	return Bgen;
}

int main(int argc, char *argv[])
{
	if(argc==3)
	{
		BfinderAna(argv[1], argv[2]);
	}
	else
	{
		std::cout << "Usage: mergeForest <input_collection> <output_file>" << std::endl;
		return 0;
	}
	return 1;
}


using namespace std;
