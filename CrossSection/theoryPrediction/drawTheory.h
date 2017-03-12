#include <iostream>
#include <fstream>
#include "TGraph.h"
const int n = 1000;
Float_t aCx[n],aCy[n],aCyl[n],aCyh[n];
Int_t nbin=0;
Float_t temp;
Float_t bCx[n],bCy[n],bCye[n],bDummy[n];
Float_t cCx[n],cCy[n],cCye[n],cDummy[n];
using namespace std;
void plotTheory()
{

  TGraph* gMagdalenaB5TeV = new TGraph("theoryPrediction/theorypre/Magdalena.dat");
  gMagdalenaB5TeV->SetName("gMagdalenaB5TeV");
  gMagdalenaB5TeV->SetLineColor(kGreen+4);
  gMagdalenaB5TeV->SetLineWidth(3);
  gMagdalenaB5TeV->SetLineStyle(6);
  //gMagdalenaB5TeV->SetFillColor(kGreen+4);
  //gMagdalenaB5TeV->SetFillStyle(3004);
  //gMagdalenaB5TeV->Draw("f same");
  gMagdalenaB5TeV->Draw("c same");

  //

  ifstream getdata("theoryPrediction/theorypre/TAMUminbiasB.txt");
  if(!getdata.is_open()) cout<<"Opening the file fails: TAMU"<<endl;
  nbin=0;
  while(!getdata.eof())
    {
      getdata>>aCx[nbin]>>aCyh[nbin]>>aCyl[nbin];
      nbin++;
    }
  Float_t* aTAMUB5TeVx = new Float_t[nbin];
  Float_t* aTAMUB5TeVxe = new Float_t[nbin];
  Float_t* aTAMUB5TeVy = new Float_t[nbin];
  Float_t* aTAMUB5TeVye = new Float_t[nbin];
  for(int i=0;i<nbin;i++)
    {
      aTAMUB5TeVx[i] = aCx[i];
      aTAMUB5TeVxe[i] = 0;
      aTAMUB5TeVy[i] = (aCyh[i]+aCyl[i])/2.;
      aTAMUB5TeVye[i] = abs(aCyh[i]-aCyl[i])/2.;
    }
  TGraphErrors* gTAMUB5TeV = new TGraphErrors(nbin, aTAMUB5TeVx, aTAMUB5TeVy, aTAMUB5TeVxe, aTAMUB5TeVye);
  gTAMUB5TeV->SetName("gTAMUB5TeV");
  //gTAMUB5TeV->SetLineColor(kViolet-6);
  //gTAMUB5TeV->SetFillColor(kViolet-6);
  gTAMUB5TeV->SetLineColor(kOrange+8);
  gTAMUB5TeV->SetFillColor(kOrange+8);
  gTAMUB5TeV->SetFillStyle(1001);
  gTAMUB5TeV->Draw("4 same");

  //

  ifstream getcujet("theoryPrediction/theorypre/CUJET3_RAA-pT_0-20.dat");
  if(!getcujet.is_open()) cout<<"Opening the file fails: CUJET"<<endl;
  nbin=0;
  while(!getcujet.eof())
    {
      getcujet>>aCx[nbin]>>temp>>temp>>aCy[nbin]>>temp>>temp>>temp;
      nbin++;
    }
  TGraph* gCUJETB5TeV = new TGraph(nbin,aCx,aCy);
  //gCUJETB5TeV->SetLineColor(4); // PAS color
  //gCUJETB5TeV->SetMarkerColor(4); // PAS color
  gCUJETB5TeV->SetLineColor(kRed-4); //paper color 20170224
  gCUJETB5TeV->SetMarkerColor(kRed-4); //paper color 20170224
  gCUJETB5TeV->SetLineWidth(3);
  gCUJETB5TeV->SetLineStyle(2);
  gCUJETB5TeV->SetMarkerSize(0.15);
  gCUJETB5TeV->Draw("c same");

  //

  ifstream getadscft1("theoryPrediction/theorypre/ADSCFT_20170310/RAA_5TeV_0080_B0_DiffusionConstant_band.dat");
  if(!getadscft1.is_open()) cout<<"Opening the file fails: ADS/CFT DiffusionConstant"<<endl;
  nbin=0;
  while(!getadscft1.eof())
    {
      getadscft1>>bCx[nbin]>>bCy[nbin]>>bDummy[nbin]>>bCye[nbin];
      nbin++;
    }
  bCx[nbin] = bCx[nbin-1];
  bCy[nbin] = bCy[nbin-1];
  bCye[nbin] = bCye[nbin-1];
  nbin++;
  Float_t* aADSCFT1B5TeVx = new Float_t[nbin];
  Float_t* aADSCFT1B5TeVxe = new Float_t[nbin];
  Float_t* aADSCFT1B5TeVy = new Float_t[nbin];
  Float_t* aADSCFT1B5TeVye = new Float_t[nbin];
  for(int i=0;i<nbin;i++)
    {
      aADSCFT1B5TeVx[i] = bCx[i];
      aADSCFT1B5TeVxe[i] = 0;
      aADSCFT1B5TeVy[i] = bCy[i];
      aADSCFT1B5TeVye[i] = bCye[i];
    }
  TGraphErrors* gADSCFT1B5TeV = new TGraphErrors(nbin, aADSCFT1B5TeVx, aADSCFT1B5TeVy, aADSCFT1B5TeVxe, aADSCFT1B5TeVye);
  gADSCFT1B5TeV->SetName("gADSCFT1B5TeV");
  gADSCFT1B5TeV->SetLineColor(kGreen-2);
  gADSCFT1B5TeV->SetFillColor(kGreen-2);
  gADSCFT1B5TeV->SetFillColorAlpha(kGreen-2,0.5);
  gADSCFT1B5TeV->SetFillStyle(1001);
  gADSCFT1B5TeV->Draw("4 same");

  ifstream getadscft2("theoryPrediction/theorypre/ADSCFT_20170310/RAA_5TeV_0080_B0_DiffusionDynamic_band.dat");
  if(!getadscft2.is_open()) cout<<"Opening the file fails: ADS/CFT DiffusionDynamic"<<endl;
  nbin=0;
  while(!getadscft2.eof())
    {
      getadscft2>>cCx[nbin]>>cCy[nbin]>>bDummy[nbin]>>cCye[nbin];
      nbin++;
    }
  cCx[nbin] = cCx[nbin-1];
  cCy[nbin] = cCy[nbin-1];
  cCye[nbin] = cCye[nbin-1];
  nbin++;
  Float_t* aADSCFT2B5TeVx = new Float_t[nbin];
  Float_t* aADSCFT2B5TeVxe = new Float_t[nbin];
  Float_t* aADSCFT2B5TeVy = new Float_t[nbin];
  Float_t* aADSCFT2B5TeVye = new Float_t[nbin];
  for(int i=0;i<nbin;i++)
    {
      aADSCFT2B5TeVx[i] = cCx[i];
      aADSCFT2B5TeVxe[i] = 0;
      aADSCFT2B5TeVy[i] = cCy[i];
      aADSCFT2B5TeVye[i] = cCye[i];
    }
  TGraphErrors* gADSCFT2B5TeV = new TGraphErrors(nbin, aADSCFT2B5TeVx, aADSCFT2B5TeVy, aADSCFT2B5TeVxe, aADSCFT2B5TeVye);
  gADSCFT2B5TeV->SetName("gADSCFT2B5TeV");
  gADSCFT2B5TeV->SetLineColor(kViolet-8);
  gADSCFT2B5TeV->SetFillColor(kViolet-8);
  gADSCFT2B5TeV->SetFillColorAlpha(kViolet-8,0.5);
  gADSCFT2B5TeV->SetFillStyle(1001);
  gADSCFT2B5TeV->Draw("4 same");

}
