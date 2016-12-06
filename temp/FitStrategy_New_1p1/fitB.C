using namespace std;
#include "uti.h"

Double_t setparam0=100.;
Double_t setparam1=5.28;
Double_t setparam2=0.05;
Double_t setparam3=0.03;
Double_t fixparam1=5.279;
Double_t minhisto=5.0;
Double_t maxhisto=6.0;
Double_t nbinsmasshisto=50;
Double_t binwidthmass=(maxhisto-minhisto)/nbinsmasshisto;

TString collisionsystem;
TString infname;
TString varname;
void fitB(
TString collsyst="PP",
TString vartype="PP_ALL",
TString npfit="0", 
TString outputfile="outfMasshisto/mass")
{
  gStyle->SetTextSize(0.05);
  gStyle->SetTextFont(42);
  gStyle->SetPadRightMargin(0.043);
  gStyle->SetPadLeftMargin(0.18);
  gStyle->SetPadTopMargin(0.1);
  gStyle->SetPadBottomMargin(0.145);
  gStyle->SetTitleX(.0f);
  gStyle->SetOptStat(0);
  gStyle->SetMarkerStyle(20);
  gStyle->SetMarkerSize(0.8);

  collisionsystem = collsyst;
  infname = outputfile;
  varname=vartype;

  TF1* fit(TString fpostfix, Int_t isMC, TString npfit);

  Int_t varbins=3;
  Float_t varmin=-15;
  Float_t varmax=15;
  TH1F* hMCCut = new TH1F("hMCCut","",varbins,varmin,varmax);
  TH1F* hMCNoCut = new TH1F("hMCNoCut","",varbins,varmin,varmax);
  TH1F* hDaCut = new TH1F("hDaCut","",varbins,varmin,varmax);
  TH1F* hDaNoCut = new TH1F("hDaNoCut","",varbins,varmin,varmax);

  Float_t yield,yieldErr;

  TF1* fMC = fit(Form("%sD4", varname.Data()), 1, npfit);
  yield = fMC->Integral(minhisto,maxhisto)/binwidthmass;
  yieldErr = fMC->Integral(minhisto,maxhisto)/binwidthmass*fMC->GetParError(0)/fMC->GetParameter(0);
  for(float i=0;i<varbins;i++)
  {
    hMCNoCut->SetBinContent(i+1,yield);
    hMCNoCut->SetBinError(i+1,yieldErr);
  }
  hMCCut->SetBinContent(2,yield);

  fMC = fit(Form("%sDOWN", varname.Data()), 1, npfit);
  yield = fMC->Integral(minhisto,maxhisto)/binwidthmass;
  yieldErr = fMC->Integral(minhisto,maxhisto)/binwidthmass*fMC->GetParError(0)/fMC->GetParameter(0);
  hMCCut->SetBinContent(1,yield);

  fMC = fit(Form("%sUP", varname.Data()), 1, npfit);
  yield = fMC->Integral(minhisto,maxhisto)/binwidthmass;
  yieldErr = fMC->Integral(minhisto,maxhisto)/binwidthmass*fMC->GetParError(0)/fMC->GetParameter(0);
  hMCCut->SetBinContent(3,yield);

  TF1* fDa = fit(Form("%sD4", varname.Data()), 0, npfit);
  yield = fDa->Integral(minhisto,maxhisto)/binwidthmass;
  yieldErr = fDa->Integral(minhisto,maxhisto)/binwidthmass*fDa->GetParError(0)/fDa->GetParameter(0);
  for(float i=0;i<varbins;i++)
  {
    hDaNoCut->SetBinContent(i+1,yield);
    hDaNoCut->SetBinError(i+1,yieldErr);
  }
  hDaCut->SetBinContent(2,yield);

  fDa = fit(Form("%sDOWN", varname.Data()), 0, npfit);
  yield = fDa->Integral(minhisto,maxhisto)/binwidthmass;
  yieldErr = fDa->Integral(minhisto,maxhisto)/binwidthmass*fDa->GetParError(0)/fDa->GetParameter(0);
  hDaCut->SetBinContent(1,yield);

  fDa = fit(Form("%sUP", varname.Data()), 0, npfit);
  yield = fDa->Integral(minhisto,maxhisto)/binwidthmass;
  yieldErr = fDa->Integral(minhisto,maxhisto)/binwidthmass*fDa->GetParError(0)/fDa->GetParameter(0);
  hDaCut->SetBinContent(3,yield);
  
/*
  for(float i=0;i<varbins+1;i++)
    {
      Float_t yield,yieldErr;
      Float_t ivar = varmin+(i-1)*varstep;
      TF1* fMC = fit(ivar,i,1, npfit);
      yield = fMC->Integral(minhisto,maxhisto)/binwidthmass;
      yieldErr = fMC->Integral(minhisto,maxhisto)/binwidthmass*fMC->GetParError(0)/fMC->GetParameter(0);
      if(i==0)
        {
          for(int j=0;j<varbins;j++)
            {
              hMCNoCut->SetBinContent(j+1,yield);
              hMCNoCut->SetBinError(j+1,yieldErr);
            }
        }
      else
        {
          hMCCut->SetBinContent(i,yield);
          hMCCut->SetBinError(i,yieldErr);
        }
      //TF1* fDa = fit(ivar,i,0, NPpar);
      TF1* fDa = fit(ivar,i,0, npfit);
      yield = fDa->Integral(minhisto,maxhisto)/binwidthmass;
      yieldErr = fDa->Integral(minhisto,maxhisto)/binwidthmass*fDa->GetParError(0)/fDa->GetParameter(0);
      if(i==0)
        {
          for(int j=0;j<varbins;j++)
            {
              hDaNoCut->SetBinContent(j+1,yield);
              hDaNoCut->SetBinError(j+1,yieldErr);
            }
        }
      else
        {
          hDaCut->SetBinContent(i,yield);
          hDaCut->SetBinError(i,yieldErr);
        }
    }
*/

  TCanvas* cMCRatio = new TCanvas("cMCRatio","",600,600);
  TH1F* hMCRatio = (TH1F*)hMCCut->Clone("hMCRatio");
  hMCRatio->SetTitle(Form(";%s;hMCRatio",vartype.Data()));
  hMCRatio->Divide(hMCNoCut);
  hMCRatio->Draw();

  TCanvas* cDaRatio = new TCanvas("cDaRatio","",600,600);
  TH1F* hDaRatio = (TH1F*)hDaCut->Clone("hDaRatio");
  hDaRatio->SetTitle(Form(";%s;hDaRatio",vartype.Data()));
  hDaRatio->Divide(hDaNoCut);
  hDaRatio->Draw();

  TCanvas* chDoubleRatio = new TCanvas("chDoubleRatio","",600,600);
  TH1F* hDoubleRatio = (TH1F*)hDaRatio->Clone("hDoubleRatio");
  hDoubleRatio->SetTitle(Form(";%s;hDoubleRatio",vartype.Data()));
  hDoubleRatio->Divide(hMCRatio);
  hDoubleRatio->Draw();

  Float_t aDoubleRatio[varbins],aDoubleRatioErr[varbins],aX[varbins],aZero[varbins];
  Float_t AbsMax = max(fabs(hDoubleRatio->GetMaximum()-1), fabs(hDoubleRatio->GetMinimum()-1));
  for(int i=0;i<varbins;i++)
    {
      aDoubleRatio[i] = hDoubleRatio->GetBinContent(i+1);
      aDoubleRatioErr[i] = hDoubleRatio->GetBinError(i+1);
      aX[i] = hMCCut->GetBinCenter(i+1);
      aZero[i] = 0;
    }
  TGraphErrors* gDoubleRatio = new TGraphErrors(varbins,aX,aDoubleRatio,aZero,aDoubleRatioErr);
  TH2F* hemptyDoubleRatio = new TH2F("hemptyDoubleRatio","",20,varmin,varmax,10.,0.,2.);
  hemptyDoubleRatio->GetXaxis()->SetTitle(Form("Efficiency Variation (\%)"));
  hemptyDoubleRatio->GetYaxis()->SetTitle("(Yield^{Data}_{Varied}/Yield^{Data}_{Nominal})/(Yield^{MC}_{Varied}/Yield^{MC}_{Nominal})");
  hemptyDoubleRatio->GetXaxis()->SetTitleOffset(1.);
  hemptyDoubleRatio->GetYaxis()->SetTitleOffset(1.4);
  hemptyDoubleRatio->GetXaxis()->SetTitleSize(0.045);
  hemptyDoubleRatio->GetYaxis()->SetTitleSize(0.045);
  hemptyDoubleRatio->GetXaxis()->SetTitleFont(42);
  hemptyDoubleRatio->GetYaxis()->SetTitleFont(42);
  hemptyDoubleRatio->GetXaxis()->SetLabelFont(42);
  hemptyDoubleRatio->GetYaxis()->SetLabelFont(42);
  hemptyDoubleRatio->GetXaxis()->SetLabelSize(0.04);
  hemptyDoubleRatio->GetYaxis()->SetLabelSize(0.04);
  TLine* lDoubleRatio = new TLine(varmin, 1., varmax, 1.);
  lDoubleRatio->SetLineWidth(1);
  lDoubleRatio->SetLineStyle(7);
  lDoubleRatio->SetLineColor(1);
  TLatex* texCms = new TLatex(0.18,0.93, "#scale[1.25]{CMS} Preliminary");
  texCms->SetNDC();
  texCms->SetTextAlign(12);
  texCms->SetTextSize(0.04);
  texCms->SetTextFont(42);
  TLatex* texCol = new TLatex(0.96,0.93, Form("%s #sqrt{s_{NN}} = 5.02 TeV",collisionsystem.Data()));
  texCol->SetNDC();
  texCol->SetTextAlign(32);
  texCol->SetTextSize(0.04);
  texCol->SetTextFont(42);
  TCanvas* cDoubleRatio = new TCanvas("cDoubleRatio","",600,600);
  hemptyDoubleRatio->Draw();
  gDoubleRatio->Draw("psame");
  lDoubleRatio->Draw();
  texCms->Draw();
  texCol->Draw();
  TLatex* texAbsMax = new TLatex(0.88,0.85, Form("max diff: %.3f",AbsMax));
  texAbsMax->SetNDC();
  texAbsMax->SetTextAlign(32);
  texAbsMax->SetTextSize(0.04);
  texAbsMax->SetTextFont(42);
  texAbsMax->Draw();
	
  cDoubleRatio->SaveAs(Form("plotRatios/%s_DoubleRatio.pdf",varname.Data()));

  TFile* outf = new TFile(Form("outfDoubleratio/f%s_DoubleRatio.root",varname.Data()),"recreate");
  outf->cd();
  hDoubleRatio->Write();
  outf->Close();
}

//TF1* fit(Float_t varval, Float_t ibin, Int_t isMC, float NPpar[])
TF1* fit(TString fpostfix, Int_t isMC, TString npfit)
{
  TString tMC;
  if(isMC==1) tMC="MC";
  else tMC="Data";
  TCanvas* c = new TCanvas(Form("c_%s_%s",tMC.Data(),fpostfix.Data()),"",600,600);
  TFile* infile = new TFile(Form("%s_%s_%s.root",infname.Data(),fpostfix.Data(),tMC.Data()));
  TFile* infileMC = new TFile(Form("%s_%s_MC.root",infname.Data(),fpostfix.Data()));
  TH1D* h = (TH1D*)infile->Get("h");                    
  h->SetName(Form("h_%s_%s",tMC.Data(),fpostfix.Data()));
  TH1D* hMCSignal = (TH1D*)infileMC->Get("h");    
  hMCSignal->SetName(Form("hMCSignal_%s_%s",tMC.Data(),fpostfix.Data()));

  TString iNP = npfit;
  TF1* f = new TF1(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8]))+[3]+[4]*x+[5]*("+iNP+")");

  f->SetParLimits(4,-1000,1000);
  f->SetParLimits(2,0.01,0.05);
  f->SetParLimits(8,0.01,0.05);
  f->SetParLimits(7,0,1);
  f->SetParLimits(5,0,1000);

  f->SetParameter(0,setparam0);
  f->SetParameter(1,setparam1);
  f->SetParameter(2,setparam2);
  f->SetParameter(8,setparam3);
  f->FixParameter(1,fixparam1);
  f->FixParameter(5,0);
  h->GetEntries();

  hMCSignal->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"q","",minhisto,maxhisto);
  hMCSignal->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"q","",minhisto,maxhisto);
  f->ReleaseParameter(1);
  hMCSignal->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L q","",minhisto,maxhisto);
  hMCSignal->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L q","",minhisto,maxhisto);
  hMCSignal->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L q","",minhisto,maxhisto);
  hMCSignal->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L m","",minhisto,maxhisto);

  f->FixParameter(1,f->GetParameter(1));
  f->FixParameter(2,f->GetParameter(2));
  f->FixParameter(7,f->GetParameter(7));
  f->FixParameter(8,f->GetParameter(8));
  f->ReleaseParameter(5);
  
  h->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"q","",minhisto,maxhisto);
  h->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"q","",minhisto,maxhisto);
  f->ReleaseParameter(1);
  h->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L q","",minhisto,maxhisto);
  h->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L q","",minhisto,maxhisto);
  h->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L q","",minhisto,maxhisto);
  h->Fit(Form("f_%s_%s",tMC.Data(),fpostfix.Data()),"L m","",minhisto,maxhisto);
  h->SetMarkerSize(0.8);
  h->SetMarkerStyle(20);

  TF1 *background = new TF1(Form("background_%s_%s",tMC.Data(),fpostfix.Data()),"[0]+[1]*x");
  background->SetParameter(0,f->GetParameter(3));
  background->SetParameter(1,f->GetParameter(4));
  background->SetLineColor(4);
  background->SetRange(minhisto,maxhisto);
  background->SetLineStyle(2);
  
  TF1 *Bkpi = new TF1(Form("fBkpi_%s_%s",tMC.Data(),fpostfix.Data()),"[0]*("+iNP+")");
  Bkpi->SetParameter(0,f->GetParameter(5));
  Bkpi->SetLineColor(kGreen+1);
  Bkpi->SetRange(minhisto,maxhisto);
  Bkpi->SetLineStyle(1);
  Bkpi->SetFillStyle(3004);
  Bkpi->SetFillColor(kGreen+1);

  TF1 *mass = new TF1(Form("fmass_%s_%s",tMC.Data(),fpostfix.Data()),"[0]*([3]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[3])*Gaus(x,[1],[4])/(sqrt(2*3.14159)*[4]))");
  mass->SetParameters(f->GetParameter(0),f->GetParameter(1),f->GetParameter(2),f->GetParameter(7),f->GetParameter(8));
  mass->SetParError(0,f->GetParError(0));
  mass->SetParError(1,f->GetParError(1));
  mass->SetParError(2,f->GetParError(2));
  mass->SetParError(7,f->GetParError(7));
  mass->SetParError(8,f->GetParError(8));
  mass->SetLineColor(2);

  h->SetXTitle("m_{#mu#muK} (GeV/c^{2})");
  h->SetYTitle("Entries / (5 MeV/c^{2})");
  h->GetXaxis()->CenterTitle();
  h->GetYaxis()->CenterTitle();
  h->SetAxisRange(0,h->GetMaximum()*1.4*1.2,"Y");
  h->GetXaxis()->SetTitleOffset(1.3);
  h->GetYaxis()->SetTitleOffset(1.8);
  h->GetXaxis()->SetLabelOffset(0.007);
  h->GetYaxis()->SetLabelOffset(0.007);
  h->GetXaxis()->SetTitleSize(0.045);
  h->GetYaxis()->SetTitleSize(0.045);
  h->GetXaxis()->SetTitleFont(42);
  h->GetYaxis()->SetTitleFont(42);
  h->GetXaxis()->SetLabelFont(42);
  h->GetYaxis()->SetLabelFont(42);
  h->GetXaxis()->SetLabelSize(0.04);
  h->GetYaxis()->SetLabelSize(0.04);
  h->SetMarkerSize(0.8);
  h->SetMarkerStyle(20);
  h->SetStats(0);
  h->Draw("e");
  Bkpi->Draw("same");
  background->Draw("same");   
  mass->SetRange(minhisto,maxhisto);
  mass->Draw("same");
  mass->SetLineStyle(2);
  mass->SetFillStyle(3004);
  mass->SetFillColor(2);
  f->Draw("same");

  Double_t yield = mass->Integral(minhisto,maxhisto)/binwidthmass;
  Double_t yieldErr = mass->Integral(minhisto,maxhisto)/binwidthmass*mass->GetParError(0)/mass->GetParameter(0);
  
  std::cout<<"YIELD="<<yield<<std::endl;
  TLegend* leg = new TLegend(0.65,0.58,0.82,0.88,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.04);
  leg->SetTextFont(42);
  leg->SetFillStyle(0);
  leg->AddEntry(h,"Data","pl");
  leg->AddEntry(f,"Fit","l");
  leg->AddEntry(mass,"B^{+} Signal","f");
  leg->AddEntry(background,"Combinatorial","l");
  leg->Draw("same");

  TLatex* texCms = new TLatex(0.18,0.93, "#scale[1.25]{CMS} Preliminary");
  texCms->SetNDC();
  texCms->SetTextAlign(12);
  texCms->SetTextSize(0.04);
  texCms->SetTextFont(42);
  texCms->Draw();

  TLatex* texCol;
  if(collisionsystem=="pp"||collisionsystem=="PP") texCol= new TLatex(0.96,0.93, Form("%s #sqrt{s_{NN}} = 5.02 TeV","pp"));
  else texCol= new TLatex(0.96,0.93, Form("%s #sqrt{s_{NN}} = 5.02 TeV","PbPb"));
  texCol->SetNDC();
  texCol->SetTextAlign(32);
  texCol->SetTextSize(0.04);
  texCol->SetTextFont(42);
  texCol->Draw();

  TLatex* tex;
  tex = new TLatex(0.22,0.78,Form("%s",fpostfix.Data()));

  tex->SetNDC();
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  tex->Draw();

  tex = new TLatex(0.22,0.83,"|y| < 2.4");
  tex->SetNDC();
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  tex->Draw();

  tex = new TLatex(0.22,0.73,Form("N_{B} = %.0f #pm %.0f",yield,yieldErr));
  tex->SetNDC();
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  tex->Draw();

  c->SaveAs(Form("plotFits/DMass_%s_%s.pdf",fpostfix.Data(),tMC.Data()));
  return mass;
}

int main(int argc, char *argv[])
{
  if(argc!=4)
    {
      std::cout << "Wrong number of inputs" << std::endl;
      return 1;
    }
  else
    {
      fitB(argv[1],argv[2],argv[3]);
      return 0;
    }
}

