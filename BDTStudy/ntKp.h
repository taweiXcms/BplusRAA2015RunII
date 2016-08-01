//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jun 29 16:20:08 2016 by ROOT version 6.02/10
// from TTree ntKp/
// found on file: /data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160628_Bpt7To10_Pythia8_BuToJpsiK_pthatweight.root
//////////////////////////////////////////////////////////

#ifndef ntKp_h
#define ntKp_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class ntKp {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Int_t           RunNo;
   Int_t           EvtNo;
   Int_t           LumiNo;
   Int_t           Bsize;
   Float_t         PVx;
   Float_t         PVy;
   Float_t         PVz;
   Float_t         PVxE;
   Float_t         PVyE;
   Float_t         PVzE;
   Float_t         PVnchi2;
   Float_t         PVchi2;
   Float_t         BSx;
   Float_t         BSy;
   Float_t         BSz;
   Float_t         BSxErr;
   Float_t         BSyErr;
   Float_t         BSzErr;
   Float_t         BSdxdz;
   Float_t         BSdydz;
   Float_t         BSdxdzErr;
   Float_t         BSdydzErr;
   Float_t         BSWidthX;
   Float_t         BSWidthXErr;
   Float_t         BSWidthY;
   Float_t         BSWidthYErr;
   Int_t           Bindex[398];   //[Bsize]
   Int_t           Btype[398];   //[Bsize]
   Float_t         Bmass[398];   //[Bsize]
   Float_t         Bmass_unfitted[398];   //[Bsize]
   Float_t         Bpt[398];   //[Bsize]
   Float_t         Beta[398];   //[Bsize]
   Float_t         Bphi[398];   //[Bsize]
   Float_t         By[398];   //[Bsize]
   Float_t         BvtxX[398];   //[Bsize]
   Float_t         BvtxY[398];   //[Bsize]
   Float_t         Bd0[398];   //[Bsize]
   Float_t         Bd0Err[398];   //[Bsize]
   Float_t         Bdxyz[398];   //[Bsize]
   Float_t         BdxyzErr[398];   //[Bsize]
   Float_t         Bchi2ndf[398];   //[Bsize]
   Float_t         Bchi2cl[398];   //[Bsize]
   Float_t         Bdtheta[398];   //[Bsize]
   Float_t         Blxy[398];   //[Bsize]
   Float_t         BlxyBS[398];   //[Bsize]
   Float_t         BlxyBSErr[398];   //[Bsize]
   Float_t         Balpha[398];   //[Bsize]
   Float_t         BsvpvDistance[398];   //[Bsize]
   Float_t         BsvpvDisErr[398];   //[Bsize]
   Float_t         BsvpvDistance_2D[398];   //[Bsize]
   Float_t         BsvpvDisErr_2D[398];   //[Bsize]
   Float_t         BMaxDoca[398];   //[Bsize]
   Int_t           Bisbestchi2[398];   //[Bsize]
   Int_t           Btrk1Idx[398];   //[Bsize]
   Int_t           Btrk2Idx[398];   //[Bsize]
   Float_t         Btrk1Pt[398];   //[Bsize]
   Float_t         Btrk2Pt[398];   //[Bsize]
   Float_t         Btrk1Eta[398];   //[Bsize]
   Float_t         Btrk2Eta[398];   //[Bsize]
   Float_t         Btrk1Phi[398];   //[Bsize]
   Float_t         Btrk2Phi[398];   //[Bsize]
   Float_t         Btrk1PtErr[398];   //[Bsize]
   Float_t         Btrk2PtErr[398];   //[Bsize]
   Float_t         Btrk1EtaErr[398];   //[Bsize]
   Float_t         Btrk2EtaErr[398];   //[Bsize]
   Float_t         Btrk1PhiErr[398];   //[Bsize]
   Float_t         Btrk2PhiErr[398];   //[Bsize]
   Float_t         Btrk1Y[398];   //[Bsize]
   Float_t         Btrk2Y[398];   //[Bsize]
   Float_t         Btrk1Dz[398];   //[Bsize]
   Float_t         Btrk2Dz[398];   //[Bsize]
   Float_t         Btrk1Dxy[398];   //[Bsize]
   Float_t         Btrk2Dxy[398];   //[Bsize]
   Float_t         Btrk1D0[398];   //[Bsize]
   Float_t         Btrk2D0[398];   //[Bsize]
   Float_t         Btrk1D0Err[398];   //[Bsize]
   Float_t         Btrk2D0Err[398];   //[Bsize]
   Float_t         Btrk1PixelHit[398];   //[Bsize]
   Float_t         Btrk2PixelHit[398];   //[Bsize]
   Float_t         Btrk1StripHit[398];   //[Bsize]
   Float_t         Btrk2StripHit[398];   //[Bsize]
   Float_t         Btrk1nPixelLayer[398];   //[Bsize]
   Float_t         Btrk2nPixelLayer[398];   //[Bsize]
   Float_t         Btrk1nStripLayer[398];   //[Bsize]
   Float_t         Btrk2nStripLayer[398];   //[Bsize]
   Float_t         Btrk1Chi2ndf[398];   //[Bsize]
   Float_t         Btrk2Chi2ndf[398];   //[Bsize]
   Float_t         Btrk1MVAVal[398];   //[Bsize]
   Float_t         Btrk2MVAVal[398];   //[Bsize]
   Int_t           Btrk1Algo[398];   //[Bsize]
   Int_t           Btrk2Algo[398];   //[Bsize]
   Bool_t          Btrk1highPurity[398];   //[Bsize]
   Bool_t          Btrk2highPurity[398];   //[Bsize]
   Int_t           Btrk1Quality[398];   //[Bsize]
   Int_t           Btrk2Quality[398];   //[Bsize]
   Float_t         Btktkmass[398];   //[Bsize]
   Float_t         BtktkmassKK[398];   //[Bsize]
   Float_t         BtktkvProb[398];   //[Bsize]
   Float_t         Btktkpt[398];   //[Bsize]
   Float_t         Btktketa[398];   //[Bsize]
   Float_t         Btktkphi[398];   //[Bsize]
   Float_t         Btktky[398];   //[Bsize]
   Float_t         Bdoubletmass[398];   //[Bsize]
   Float_t         Bdoubletpt[398];   //[Bsize]
   Float_t         Bdoubleteta[398];   //[Bsize]
   Float_t         Bdoubletphi[398];   //[Bsize]
   Float_t         Bdoublety[398];   //[Bsize]
   Float_t         Bmu1pt[398];   //[Bsize]
   Float_t         Bmu2pt[398];   //[Bsize]
   Float_t         Bmu1p[398];   //[Bsize]
   Float_t         Bmu2p[398];   //[Bsize]
   Float_t         Bmu1eta[398];   //[Bsize]
   Float_t         Bmu2eta[398];   //[Bsize]
   Float_t         Bmu1phi[398];   //[Bsize]
   Float_t         Bmu2phi[398];   //[Bsize]
   Float_t         Bmu1y[398];   //[Bsize]
   Float_t         Bmu2y[398];   //[Bsize]
   Float_t         Bmu1dzPV[398];   //[Bsize]
   Float_t         Bmu2dzPV[398];   //[Bsize]
   Float_t         Bmu1dxyPV[398];   //[Bsize]
   Float_t         Bmu2dxyPV[398];   //[Bsize]
   Float_t         Bmu1normchi2[398];   //[Bsize]
   Float_t         Bmu2normchi2[398];   //[Bsize]
   Float_t         Bmu1Chi2ndf[398];   //[Bsize]
   Float_t         Bmu2Chi2ndf[398];   //[Bsize]
   Int_t           Bmu1muqual[398];   //[Bsize]
   Int_t           Bmu1muqual[398];   //[Bsize]
   Bool_t          Bmu1TrackerMuArbitrated[398];   //[Bsize]
   Bool_t          Bmu2TrackerMuArbitrated[398];   //[Bsize]
   Bool_t          Bmu1isTrackerMuon[398];   //[Bsize]
   Bool_t          Bmu2isTrackerMuon[398];   //[Bsize]
   Bool_t          Bmu1isGlobalMuon[398];   //[Bsize]
   Bool_t          Bmu2isGlobalMuon[398];   //[Bsize]
   Bool_t          Bmu1TMOneStationTight[398];   //[Bsize]
   Bool_t          Bmu2TMOneStationTight[398];   //[Bsize]
   Int_t           Bmu1striphit[398];   //[Bsize]
   Int_t           Bmu2striphit[398];   //[Bsize]
   Int_t           Bmu1pixelhit[398];   //[Bsize]
   Int_t           Bmu2pixelhit[398];   //[Bsize]
   Int_t           Bmu1trackerhit[398];   //[Bsize]
   Int_t           Bmu2trackerhit[398];   //[Bsize]
   Int_t           Bmu1InPixelLayer[398];   //[Bsize]
   Int_t           Bmu2InPixelLayer[398];   //[Bsize]
   Int_t           Bmu1InStripLayer[398];   //[Bsize]
   Int_t           Bmu2InStripLayer[398];   //[Bsize]
   Int_t           Bmu1InTrackerLayer[398];   //[Bsize]
   Int_t           Bmu2InTrackerLayer[398];   //[Bsize]
   Int_t           Bmu1TrkQuality[398];   //[Bsize]
   Int_t           Bmu2TrkQuality[398];   //[Bsize]
   Float_t         Bmumumass[398];   //[Bsize]
   Float_t         Bmumueta[398];   //[Bsize]
   Float_t         Bmumuphi[398];   //[Bsize]
   Float_t         Bmumuy[398];   //[Bsize]
   Float_t         Bmumupt[398];   //[Bsize]
   Float_t         Bujmass[398];   //[Bsize]
   Float_t         BujvProb[398];   //[Bsize]
   Float_t         Bujpt[398];   //[Bsize]
   Float_t         Bujeta[398];   //[Bsize]
   Float_t         Bujphi[398];   //[Bsize]
   Float_t         Bujy[398];   //[Bsize]
   Float_t         Bujlxy[398];   //[Bsize]
   Float_t         Bgen[398];   //[Bsize]
   Int_t           BgenIndex[398];   //[Bsize]
   Float_t         Bgenpt[398];   //[Bsize]
   Float_t         Bgeny[398];   //[Bsize]
   Float_t         Bgeneta[398];   //[Bsize]
   Float_t         Bgenphi[398];   //[Bsize]

   // List of branches
   TBranch        *b_RunNo;   //!
   TBranch        *b_EvtNo;   //!
   TBranch        *b_LumiNo;   //!
   TBranch        *b_Bsize;   //!
   TBranch        *b_PVx;   //!
   TBranch        *b_PVy;   //!
   TBranch        *b_PVz;   //!
   TBranch        *b_PVxE;   //!
   TBranch        *b_PVyE;   //!
   TBranch        *b_PVzE;   //!
   TBranch        *b_PVnchi2;   //!
   TBranch        *b_PVchi2;   //!
   TBranch        *b_BSx;   //!
   TBranch        *b_BSy;   //!
   TBranch        *b_BSz;   //!
   TBranch        *b_BSxErr;   //!
   TBranch        *b_BSyErr;   //!
   TBranch        *b_BSzErr;   //!
   TBranch        *b_BSdxdz;   //!
   TBranch        *b_BSdydz;   //!
   TBranch        *b_BSdxdzErr;   //!
   TBranch        *b_BSdydzErr;   //!
   TBranch        *b_BSWidthX;   //!
   TBranch        *b_BSWidthXErr;   //!
   TBranch        *b_BSWidthY;   //!
   TBranch        *b_BSWidthYErr;   //!
   TBranch        *b_Bindex;   //!
   TBranch        *b_Btype;   //!
   TBranch        *b_Bmass;   //!
   TBranch        *b_Bmass_unfitted;   //!
   TBranch        *b_Bpt;   //!
   TBranch        *b_Beta;   //!
   TBranch        *b_Bphi;   //!
   TBranch        *b_By;   //!
   TBranch        *b_BvtxX;   //!
   TBranch        *b_BvtxY;   //!
   TBranch        *b_Bd0;   //!
   TBranch        *b_Bd0Err;   //!
   TBranch        *b_Bdxyz;   //!
   TBranch        *b_BdxyzErr;   //!
   TBranch        *b_Bchi2ndf;   //!
   TBranch        *b_Bchi2cl;   //!
   TBranch        *b_Bdtheta;   //!
   TBranch        *b_Blxy;   //!
   TBranch        *b_BlxyBS;   //!
   TBranch        *b_BlxyBSErr;   //!
   TBranch        *b_Balpha;   //!
   TBranch        *b_BsvpvDistance;   //!
   TBranch        *b_BsvpvDisErr;   //!
   TBranch        *b_BsvpvDistance_2D;   //!
   TBranch        *b_BsvpvDisErr_2D;   //!
   TBranch        *b_BMaxDoca;   //!
   TBranch        *b_Bisbestchi2;   //!
   TBranch        *b_Btrk1Idx;   //!
   TBranch        *b_Btrk2Idx;   //!
   TBranch        *b_Btrk1Pt;   //!
   TBranch        *b_Btrk2Pt;   //!
   TBranch        *b_Btrk1Eta;   //!
   TBranch        *b_Btrk2Eta;   //!
   TBranch        *b_Btrk1Phi;   //!
   TBranch        *b_Btrk2Phi;   //!
   TBranch        *b_Btrk1PtErr;   //!
   TBranch        *b_Btrk2PtErr;   //!
   TBranch        *b_Btrk1EtaErr;   //!
   TBranch        *b_Btrk2EtaErr;   //!
   TBranch        *b_Btrk1PhiErr;   //!
   TBranch        *b_Btrk2PhiErr;   //!
   TBranch        *b_Btrk1Y;   //!
   TBranch        *b_Btrk2Y;   //!
   TBranch        *b_Btrk1Dz;   //!
   TBranch        *b_Btrk2Dz;   //!
   TBranch        *b_Btrk1Dxy;   //!
   TBranch        *b_Btrk2Dxy;   //!
   TBranch        *b_Btrk1D0;   //!
   TBranch        *b_Btrk2D0;   //!
   TBranch        *b_Btrk1D0Err;   //!
   TBranch        *b_Btrk2D0Err;   //!
   TBranch        *b_Btrk1PixelHit;   //!
   TBranch        *b_Btrk2PixelHit;   //!
   TBranch        *b_Btrk1StripHit;   //!
   TBranch        *b_Btrk2StripHit;   //!
   TBranch        *b_Btrk1nPixelLayer;   //!
   TBranch        *b_Btrk2nPixelLayer;   //!
   TBranch        *b_Btrk1nStripLayer;   //!
   TBranch        *b_Btrk2nStripLayer;   //!
   TBranch        *b_Btrk1Chi2ndf;   //!
   TBranch        *b_Btrk2Chi2ndf;   //!
   TBranch        *b_Btrk1MVAVal;   //!
   TBranch        *b_Btrk2MVAVal;   //!
   TBranch        *b_Btrk1Algo;   //!
   TBranch        *b_Btrk2Algo;   //!
   TBranch        *b_Btrk1highPurity;   //!
   TBranch        *b_Btrk2highPurity;   //!
   TBranch        *b_Btrk1Quality;   //!
   TBranch        *b_Btrk2Quality;   //!
   TBranch        *b_Btktkmass;   //!
   TBranch        *b_BtktkmassKK;   //!
   TBranch        *b_BtktkvProb;   //!
   TBranch        *b_Btktkpt;   //!
   TBranch        *b_Btktketa;   //!
   TBranch        *b_Btktkphi;   //!
   TBranch        *b_Btktky;   //!
   TBranch        *b_Bdoubletmass;   //!
   TBranch        *b_Bdoubletpt;   //!
   TBranch        *b_Bdoubleteta;   //!
   TBranch        *b_Bdoubletphi;   //!
   TBranch        *b_Bdoublety;   //!
   TBranch        *b_Bmu1pt;   //!
   TBranch        *b_Bmu2pt;   //!
   TBranch        *b_Bmu1p;   //!
   TBranch        *b_Bmu2p;   //!
   TBranch        *b_Bmu1eta;   //!
   TBranch        *b_Bmu2eta;   //!
   TBranch        *b_Bmu1phi;   //!
   TBranch        *b_Bmu2phi;   //!
   TBranch        *b_Bmu1y;   //!
   TBranch        *b_Bmu2y;   //!
   TBranch        *b_Bmu1dzPV;   //!
   TBranch        *b_Bmu2dzPV;   //!
   TBranch        *b_Bmu1dxyPV;   //!
   TBranch        *b_Bmu2dxyPV;   //!
   TBranch        *b_Bmu1normchi2;   //!
   TBranch        *b_Bmu2normchi2;   //!
   TBranch        *b_Bmu1Chi2ndf;   //!
   TBranch        *b_Bmu2Chi2ndf;   //!
   TBranch        *b_Bmu1muqual;   //!
   TBranch        *b_Bmu1muqual;   //!
   TBranch        *b_Bmu1TrackerMuArbitrated;   //!
   TBranch        *b_Bmu2TrackerMuArbitrated;   //!
   TBranch        *b_Bmu1isTrackerMuon;   //!
   TBranch        *b_Bmu2isTrackerMuon;   //!
   TBranch        *b_Bmu1isGlobalMuon;   //!
   TBranch        *b_Bmu2isGlobalMuon;   //!
   TBranch        *b_Bmu1TMOneStationTight;   //!
   TBranch        *b_Bmu2TMOneStationTight;   //!
   TBranch        *b_Bmu1striphit;   //!
   TBranch        *b_Bmu2striphit;   //!
   TBranch        *b_Bmu1pixelhit;   //!
   TBranch        *b_Bmu2pixelhit;   //!
   TBranch        *b_Bmu1trackerhit;   //!
   TBranch        *b_Bmu2trackerhit;   //!
   TBranch        *b_Bmu1InPixelLayer;   //!
   TBranch        *b_Bmu2InPixelLayer;   //!
   TBranch        *b_Bmu1InStripLayer;   //!
   TBranch        *b_Bmu2InStripLayer;   //!
   TBranch        *b_Bmu1InTrackerLayer;   //!
   TBranch        *b_Bmu2InTrackerLayer;   //!
   TBranch        *b_Bmu1TrkQuality;   //!
   TBranch        *b_Bmu2TrkQuality;   //!
   TBranch        *b_Bmumumass;   //!
   TBranch        *b_Bmumueta;   //!
   TBranch        *b_Bmumuphi;   //!
   TBranch        *b_Bmumuy;   //!
   TBranch        *b_Bmumupt;   //!
   TBranch        *b_Bujmass;   //!
   TBranch        *b_BujvProb;   //!
   TBranch        *b_Bujpt;   //!
   TBranch        *b_Bujeta;   //!
   TBranch        *b_Bujphi;   //!
   TBranch        *b_Bujy;   //!
   TBranch        *b_Bujlxy;   //!
   TBranch        *b_Bgen;   //!
   TBranch        *b_BgenIndex;   //!
   TBranch        *b_Bgenpt;   //!
   TBranch        *b_Bgeny;   //!
   TBranch        *b_Bgeneta;   //!
   TBranch        *b_Bgenphi;   //!

   ntKp(TTree *tree=0);
   virtual ~ntKp();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef ntKp_cxx
ntKp::ntKp(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160628_Bpt7To10_Pythia8_BuToJpsiK_pthatweight.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/data/HeavyFlavourRun2/MC2015/Bntuple/PbPb/Bntuple20160628_Bpt7To10_Pythia8_BuToJpsiK_pthatweight.root");
      }
      f->GetObject("ntKp",tree);

   }
   Init(tree);
}

ntKp::~ntKp()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t ntKp::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t ntKp::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void ntKp::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNo", &RunNo, &b_RunNo);
   fChain->SetBranchAddress("EvtNo", &EvtNo, &b_EvtNo);
   fChain->SetBranchAddress("LumiNo", &LumiNo, &b_LumiNo);
   fChain->SetBranchAddress("Bsize", &Bsize, &b_Bsize);
   fChain->SetBranchAddress("PVx", &PVx, &b_PVx);
   fChain->SetBranchAddress("PVy", &PVy, &b_PVy);
   fChain->SetBranchAddress("PVz", &PVz, &b_PVz);
   fChain->SetBranchAddress("PVxE", &PVxE, &b_PVxE);
   fChain->SetBranchAddress("PVyE", &PVyE, &b_PVyE);
   fChain->SetBranchAddress("PVzE", &PVzE, &b_PVzE);
   fChain->SetBranchAddress("PVnchi2", &PVnchi2, &b_PVnchi2);
   fChain->SetBranchAddress("PVchi2", &PVchi2, &b_PVchi2);
   fChain->SetBranchAddress("BSx", &BSx, &b_BSx);
   fChain->SetBranchAddress("BSy", &BSy, &b_BSy);
   fChain->SetBranchAddress("BSz", &BSz, &b_BSz);
   fChain->SetBranchAddress("BSxErr", &BSxErr, &b_BSxErr);
   fChain->SetBranchAddress("BSyErr", &BSyErr, &b_BSyErr);
   fChain->SetBranchAddress("BSzErr", &BSzErr, &b_BSzErr);
   fChain->SetBranchAddress("BSdxdz", &BSdxdz, &b_BSdxdz);
   fChain->SetBranchAddress("BSdydz", &BSdydz, &b_BSdydz);
   fChain->SetBranchAddress("BSdxdzErr", &BSdxdzErr, &b_BSdxdzErr);
   fChain->SetBranchAddress("BSdydzErr", &BSdydzErr, &b_BSdydzErr);
   fChain->SetBranchAddress("BSWidthX", &BSWidthX, &b_BSWidthX);
   fChain->SetBranchAddress("BSWidthXErr", &BSWidthXErr, &b_BSWidthXErr);
   fChain->SetBranchAddress("BSWidthY", &BSWidthY, &b_BSWidthY);
   fChain->SetBranchAddress("BSWidthYErr", &BSWidthYErr, &b_BSWidthYErr);
   fChain->SetBranchAddress("Bindex", Bindex, &b_Bindex);
   fChain->SetBranchAddress("Btype", Btype, &b_Btype);
   fChain->SetBranchAddress("Bmass", Bmass, &b_Bmass);
   fChain->SetBranchAddress("Bmass_unfitted", Bmass_unfitted, &b_Bmass_unfitted);
   fChain->SetBranchAddress("Bpt", Bpt, &b_Bpt);
   fChain->SetBranchAddress("Beta", Beta, &b_Beta);
   fChain->SetBranchAddress("Bphi", Bphi, &b_Bphi);
   fChain->SetBranchAddress("By", By, &b_By);
   fChain->SetBranchAddress("BvtxX", BvtxX, &b_BvtxX);
   fChain->SetBranchAddress("BvtxY", BvtxY, &b_BvtxY);
   fChain->SetBranchAddress("Bd0", Bd0, &b_Bd0);
   fChain->SetBranchAddress("Bd0Err", Bd0Err, &b_Bd0Err);
   fChain->SetBranchAddress("Bdxyz", Bdxyz, &b_Bdxyz);
   fChain->SetBranchAddress("BdxyzErr", BdxyzErr, &b_BdxyzErr);
   fChain->SetBranchAddress("Bchi2ndf", Bchi2ndf, &b_Bchi2ndf);
   fChain->SetBranchAddress("Bchi2cl", Bchi2cl, &b_Bchi2cl);
   fChain->SetBranchAddress("Bdtheta", Bdtheta, &b_Bdtheta);
   fChain->SetBranchAddress("Blxy", Blxy, &b_Blxy);
   fChain->SetBranchAddress("BlxyBS", BlxyBS, &b_BlxyBS);
   fChain->SetBranchAddress("BlxyBSErr", BlxyBSErr, &b_BlxyBSErr);
   fChain->SetBranchAddress("Balpha", Balpha, &b_Balpha);
   fChain->SetBranchAddress("BsvpvDistance", BsvpvDistance, &b_BsvpvDistance);
   fChain->SetBranchAddress("BsvpvDisErr", BsvpvDisErr, &b_BsvpvDisErr);
   fChain->SetBranchAddress("BsvpvDistance_2D", BsvpvDistance_2D, &b_BsvpvDistance_2D);
   fChain->SetBranchAddress("BsvpvDisErr_2D", BsvpvDisErr_2D, &b_BsvpvDisErr_2D);
   fChain->SetBranchAddress("BMaxDoca", BMaxDoca, &b_BMaxDoca);
   fChain->SetBranchAddress("Bisbestchi2", Bisbestchi2, &b_Bisbestchi2);
   fChain->SetBranchAddress("Btrk1Idx", Btrk1Idx, &b_Btrk1Idx);
   fChain->SetBranchAddress("Btrk2Idx", Btrk2Idx, &b_Btrk2Idx);
   fChain->SetBranchAddress("Btrk1Pt", Btrk1Pt, &b_Btrk1Pt);
   fChain->SetBranchAddress("Btrk2Pt", Btrk2Pt, &b_Btrk2Pt);
   fChain->SetBranchAddress("Btrk1Eta", Btrk1Eta, &b_Btrk1Eta);
   fChain->SetBranchAddress("Btrk2Eta", Btrk2Eta, &b_Btrk2Eta);
   fChain->SetBranchAddress("Btrk1Phi", Btrk1Phi, &b_Btrk1Phi);
   fChain->SetBranchAddress("Btrk2Phi", Btrk2Phi, &b_Btrk2Phi);
   fChain->SetBranchAddress("Btrk1PtErr", Btrk1PtErr, &b_Btrk1PtErr);
   fChain->SetBranchAddress("Btrk2PtErr", Btrk2PtErr, &b_Btrk2PtErr);
   fChain->SetBranchAddress("Btrk1EtaErr", Btrk1EtaErr, &b_Btrk1EtaErr);
   fChain->SetBranchAddress("Btrk2EtaErr", Btrk2EtaErr, &b_Btrk2EtaErr);
   fChain->SetBranchAddress("Btrk1PhiErr", Btrk1PhiErr, &b_Btrk1PhiErr);
   fChain->SetBranchAddress("Btrk2PhiErr", Btrk2PhiErr, &b_Btrk2PhiErr);
   fChain->SetBranchAddress("Btrk1Y", Btrk1Y, &b_Btrk1Y);
   fChain->SetBranchAddress("Btrk2Y", Btrk2Y, &b_Btrk2Y);
   fChain->SetBranchAddress("Btrk1Dz", Btrk1Dz, &b_Btrk1Dz);
   fChain->SetBranchAddress("Btrk2Dz", Btrk2Dz, &b_Btrk2Dz);
   fChain->SetBranchAddress("Btrk1Dxy", Btrk1Dxy, &b_Btrk1Dxy);
   fChain->SetBranchAddress("Btrk2Dxy", Btrk2Dxy, &b_Btrk2Dxy);
   fChain->SetBranchAddress("Btrk1D0", Btrk1D0, &b_Btrk1D0);
   fChain->SetBranchAddress("Btrk2D0", Btrk2D0, &b_Btrk2D0);
   fChain->SetBranchAddress("Btrk1D0Err", Btrk1D0Err, &b_Btrk1D0Err);
   fChain->SetBranchAddress("Btrk2D0Err", Btrk2D0Err, &b_Btrk2D0Err);
   fChain->SetBranchAddress("Btrk1PixelHit", Btrk1PixelHit, &b_Btrk1PixelHit);
   fChain->SetBranchAddress("Btrk2PixelHit", Btrk2PixelHit, &b_Btrk2PixelHit);
   fChain->SetBranchAddress("Btrk1StripHit", Btrk1StripHit, &b_Btrk1StripHit);
   fChain->SetBranchAddress("Btrk2StripHit", Btrk2StripHit, &b_Btrk2StripHit);
   fChain->SetBranchAddress("Btrk1nPixelLayer", Btrk1nPixelLayer, &b_Btrk1nPixelLayer);
   fChain->SetBranchAddress("Btrk2nPixelLayer", Btrk2nPixelLayer, &b_Btrk2nPixelLayer);
   fChain->SetBranchAddress("Btrk1nStripLayer", Btrk1nStripLayer, &b_Btrk1nStripLayer);
   fChain->SetBranchAddress("Btrk2nStripLayer", Btrk2nStripLayer, &b_Btrk2nStripLayer);
   fChain->SetBranchAddress("Btrk1Chi2ndf", Btrk1Chi2ndf, &b_Btrk1Chi2ndf);
   fChain->SetBranchAddress("Btrk2Chi2ndf", Btrk2Chi2ndf, &b_Btrk2Chi2ndf);
   fChain->SetBranchAddress("Btrk1MVAVal", Btrk1MVAVal, &b_Btrk1MVAVal);
   fChain->SetBranchAddress("Btrk2MVAVal", Btrk2MVAVal, &b_Btrk2MVAVal);
   fChain->SetBranchAddress("Btrk1Algo", Btrk1Algo, &b_Btrk1Algo);
   fChain->SetBranchAddress("Btrk2Algo", Btrk2Algo, &b_Btrk2Algo);
   fChain->SetBranchAddress("Btrk1highPurity", Btrk1highPurity, &b_Btrk1highPurity);
   fChain->SetBranchAddress("Btrk2highPurity", Btrk2highPurity, &b_Btrk2highPurity);
   fChain->SetBranchAddress("Btrk1Quality", Btrk1Quality, &b_Btrk1Quality);
   fChain->SetBranchAddress("Btrk2Quality", Btrk2Quality, &b_Btrk2Quality);
   fChain->SetBranchAddress("Btktkmass", Btktkmass, &b_Btktkmass);
   fChain->SetBranchAddress("BtktkmassKK", BtktkmassKK, &b_BtktkmassKK);
   fChain->SetBranchAddress("BtktkvProb", BtktkvProb, &b_BtktkvProb);
   fChain->SetBranchAddress("Btktkpt", Btktkpt, &b_Btktkpt);
   fChain->SetBranchAddress("Btktketa", Btktketa, &b_Btktketa);
   fChain->SetBranchAddress("Btktkphi", Btktkphi, &b_Btktkphi);
   fChain->SetBranchAddress("Btktky", Btktky, &b_Btktky);
   fChain->SetBranchAddress("Bdoubletmass", Bdoubletmass, &b_Bdoubletmass);
   fChain->SetBranchAddress("Bdoubletpt", Bdoubletpt, &b_Bdoubletpt);
   fChain->SetBranchAddress("Bdoubleteta", Bdoubleteta, &b_Bdoubleteta);
   fChain->SetBranchAddress("Bdoubletphi", Bdoubletphi, &b_Bdoubletphi);
   fChain->SetBranchAddress("Bdoublety", Bdoublety, &b_Bdoublety);
   fChain->SetBranchAddress("Bmu1pt", Bmu1pt, &b_Bmu1pt);
   fChain->SetBranchAddress("Bmu2pt", Bmu2pt, &b_Bmu2pt);
   fChain->SetBranchAddress("Bmu1p", Bmu1p, &b_Bmu1p);
   fChain->SetBranchAddress("Bmu2p", Bmu2p, &b_Bmu2p);
   fChain->SetBranchAddress("Bmu1eta", Bmu1eta, &b_Bmu1eta);
   fChain->SetBranchAddress("Bmu2eta", Bmu2eta, &b_Bmu2eta);
   fChain->SetBranchAddress("Bmu1phi", Bmu1phi, &b_Bmu1phi);
   fChain->SetBranchAddress("Bmu2phi", Bmu2phi, &b_Bmu2phi);
   fChain->SetBranchAddress("Bmu1y", Bmu1y, &b_Bmu1y);
   fChain->SetBranchAddress("Bmu2y", Bmu2y, &b_Bmu2y);
   fChain->SetBranchAddress("Bmu1dzPV", Bmu1dzPV, &b_Bmu1dzPV);
   fChain->SetBranchAddress("Bmu2dzPV", Bmu2dzPV, &b_Bmu2dzPV);
   fChain->SetBranchAddress("Bmu1dxyPV", Bmu1dxyPV, &b_Bmu1dxyPV);
   fChain->SetBranchAddress("Bmu2dxyPV", Bmu2dxyPV, &b_Bmu2dxyPV);
   fChain->SetBranchAddress("Bmu1normchi2", Bmu1normchi2, &b_Bmu1normchi2);
   fChain->SetBranchAddress("Bmu2normchi2", Bmu2normchi2, &b_Bmu2normchi2);
   fChain->SetBranchAddress("Bmu1Chi2ndf", Bmu1Chi2ndf, &b_Bmu1Chi2ndf);
   fChain->SetBranchAddress("Bmu2Chi2ndf", Bmu2Chi2ndf, &b_Bmu2Chi2ndf);
   fChain->SetBranchAddress("Bmu1muqual", Bmu1muqual, &b_Bmu1muqual);
//    fChain->SetBranchAddress("Bmu1muqual", Bmu1muqual, &b_Bmu1muqual);
   fChain->SetBranchAddress("Bmu1TrackerMuArbitrated", Bmu1TrackerMuArbitrated, &b_Bmu1TrackerMuArbitrated);
   fChain->SetBranchAddress("Bmu2TrackerMuArbitrated", Bmu2TrackerMuArbitrated, &b_Bmu2TrackerMuArbitrated);
   fChain->SetBranchAddress("Bmu1isTrackerMuon", Bmu1isTrackerMuon, &b_Bmu1isTrackerMuon);
   fChain->SetBranchAddress("Bmu2isTrackerMuon", Bmu2isTrackerMuon, &b_Bmu2isTrackerMuon);
   fChain->SetBranchAddress("Bmu1isGlobalMuon", Bmu1isGlobalMuon, &b_Bmu1isGlobalMuon);
   fChain->SetBranchAddress("Bmu2isGlobalMuon", Bmu2isGlobalMuon, &b_Bmu2isGlobalMuon);
   fChain->SetBranchAddress("Bmu1TMOneStationTight", Bmu1TMOneStationTight, &b_Bmu1TMOneStationTight);
   fChain->SetBranchAddress("Bmu2TMOneStationTight", Bmu2TMOneStationTight, &b_Bmu2TMOneStationTight);
   fChain->SetBranchAddress("Bmu1striphit", Bmu1striphit, &b_Bmu1striphit);
   fChain->SetBranchAddress("Bmu2striphit", Bmu2striphit, &b_Bmu2striphit);
   fChain->SetBranchAddress("Bmu1pixelhit", Bmu1pixelhit, &b_Bmu1pixelhit);
   fChain->SetBranchAddress("Bmu2pixelhit", Bmu2pixelhit, &b_Bmu2pixelhit);
   fChain->SetBranchAddress("Bmu1trackerhit", Bmu1trackerhit, &b_Bmu1trackerhit);
   fChain->SetBranchAddress("Bmu2trackerhit", Bmu2trackerhit, &b_Bmu2trackerhit);
   fChain->SetBranchAddress("Bmu1InPixelLayer", Bmu1InPixelLayer, &b_Bmu1InPixelLayer);
   fChain->SetBranchAddress("Bmu2InPixelLayer", Bmu2InPixelLayer, &b_Bmu2InPixelLayer);
   fChain->SetBranchAddress("Bmu1InStripLayer", Bmu1InStripLayer, &b_Bmu1InStripLayer);
   fChain->SetBranchAddress("Bmu2InStripLayer", Bmu2InStripLayer, &b_Bmu2InStripLayer);
   fChain->SetBranchAddress("Bmu1InTrackerLayer", Bmu1InTrackerLayer, &b_Bmu1InTrackerLayer);
   fChain->SetBranchAddress("Bmu2InTrackerLayer", Bmu2InTrackerLayer, &b_Bmu2InTrackerLayer);
   fChain->SetBranchAddress("Bmu1TrkQuality", Bmu1TrkQuality, &b_Bmu1TrkQuality);
   fChain->SetBranchAddress("Bmu2TrkQuality", Bmu2TrkQuality, &b_Bmu2TrkQuality);
   fChain->SetBranchAddress("Bmumumass", Bmumumass, &b_Bmumumass);
   fChain->SetBranchAddress("Bmumueta", Bmumueta, &b_Bmumueta);
   fChain->SetBranchAddress("Bmumuphi", Bmumuphi, &b_Bmumuphi);
   fChain->SetBranchAddress("Bmumuy", Bmumuy, &b_Bmumuy);
   fChain->SetBranchAddress("Bmumupt", Bmumupt, &b_Bmumupt);
   fChain->SetBranchAddress("Bujmass", Bujmass, &b_Bujmass);
   fChain->SetBranchAddress("BujvProb", BujvProb, &b_BujvProb);
   fChain->SetBranchAddress("Bujpt", Bujpt, &b_Bujpt);
   fChain->SetBranchAddress("Bujeta", Bujeta, &b_Bujeta);
   fChain->SetBranchAddress("Bujphi", Bujphi, &b_Bujphi);
   fChain->SetBranchAddress("Bujy", Bujy, &b_Bujy);
   fChain->SetBranchAddress("Bujlxy", Bujlxy, &b_Bujlxy);
   fChain->SetBranchAddress("Bgen", Bgen, &b_Bgen);
   fChain->SetBranchAddress("BgenIndex", BgenIndex, &b_BgenIndex);
   fChain->SetBranchAddress("Bgenpt", Bgenpt, &b_Bgenpt);
   fChain->SetBranchAddress("Bgeny", Bgeny, &b_Bgeny);
   fChain->SetBranchAddress("Bgeneta", Bgeneta, &b_Bgeneta);
   fChain->SetBranchAddress("Bgenphi", Bgenphi, &b_Bgenphi);
   Notify();
}

Bool_t ntKp::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void ntKp::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t ntKp::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef ntKp_cxx
