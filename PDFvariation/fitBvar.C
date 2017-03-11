using namespace std;
#include "uti.h"
#include "parameters.h"

double minhisto=5.0;
double maxhisto=6.0;
double nbinsmasshisto=50;
double binwidthmass=(maxhisto-minhisto)/nbinsmasshisto;

TString collisionsystem;
TString infname;
float centmin,centmax;

bool isPbPb = true;

float yield=0;
float yieldErr=0;
float NPpar[4];
float NPpar_pp[4]={5.14397,.0643194,31.2764,5.33166};
float NPpar_PP[4]={5.14189,.0866243,33.9711,5.35002};

const int nbkg=4;
const int nsig=2;

TString inputf_pp;
TString inputf_PP;

TString npfit;
//TString npfit_pp = "213.355334*TMath::Erf((x-[4])/[5]) + 213.355334 + 14.620639*(0.856020*Gaus(x,5.351676,0.198591)/(sqrt(2*3.14159)*0.198591)+(1-0.856020)*Gaus(x,5.351676,0.035974)/(sqrt(2*3.14159)*0.035974))";
//TString npfit_PP = "199.353547*TMath::Erf((x-[4])/[5]) + 199.353547 + 26.393491*(0.613544*Gaus(x,5.354664,0.448306)/(sqrt(2*3.14159)*0.448306)+(1-0.613544)*Gaus(x,5.354664,0.111947)/(sqrt(2*3.14159)*0.111947))";TString npfit_pp = "3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+7.18255e1*TMath::Erf(-(x-[4])/[5]) + 7.18255e1";
TString npfit_pp; //= "3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+7.18255e1*TMath::Erf(-(x-[4])/[5]) + 7.18255e1";
TString npfit_PP; //= "3.39711e1*Gaus(x,5.35002e0,3.87952e-2)*(x<5.35002e0)+(x>=5.35002e0)*3.39711e1*Gaus(x,5.35002e0,1.14232e-1)+6.89441e1*TMath::Erf(-(x-[4])/[5]) + 6.89441e1";

TString npfit_new;
//TString npfit_pp_new = "213.355334*TMath::Erf((x-[1])/[2]) + 213.355334 + 14.620639*(0.856020*Gaus(x,5.351676,0.198591)/(sqrt(2*3.14159)*0.198591)+(1-0.856020)*Gaus(x,5.351676,0.035974)/(sqrt(2*3.14159)*0.035974))";
//TString npfit_PP_new = "199.353547*TMath::Erf((x-[1])/[2]) + 199.353547 + 26.393491*(0.613544*Gaus(x,5.354664,0.448306)/(sqrt(2*3.14159)*0.448306)+(1-0.613544)*Gaus(x,5.354664,0.111947)/(sqrt(2*3.14159)*0.111947))";
TString npfit_pp_new; //= "3.12764e1*Gaus(x,5.33166,3.64663e-2)*(x<5.33166)+(x>=5.33166)*3.12764e1*Gaus(x,5.33166,1.5204e-1)+7.18255e1*TMath::Erf(-(x-[1])/[2]) + 7.18255e1";
TString npfit_PP_new; //= "3.39711e1*Gaus(x,5.35002e0,3.87952e-2)*(x<5.35002e0)+(x>=5.35002e0)*3.39711e1*Gaus(x,5.35002e0,1.14232e-1)+6.89441e1*TMath::Erf(-(x-[1])/[2]) + 6.89441e1";

TString bkgerf;
TString bkgerf_new;

TString sig[nsig] =     {"[0]*([7]*Gaus(x,[1],[2]*(1+[6]))/(sqrt(2*3.14159)*[2]*(1+[6]))+(1-[7])*Gaus(x,[1],[8]*(1+[6]))/(sqrt(2*3.14159)*[8]*(1+[6])))",
		         "[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[7])*Gaus(x,[1],[8])/(sqrt(2*3.14159)*[8])+[6]*Gaus(x,[1],[9])/(sqrt(2*3.14159)*[9]))",
		         //"[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+[6]*ROOT::Math::crystalball_cdf(x,[9],[10],[8],[1]))",
		         //"[0]*([7]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+[6]*TMath::BreitWigner(x,[1],[8]))"
			 };
		    
TString sig_new[nsig] = {"[0]*([3]*Gaus(x,[1],[2]*(1+[5]))/(sqrt(2*3.14159)*[2]*(1+[5]))+(1-[3])*Gaus(x,[1],[4]*(1+[5]))/(sqrt(2*3.14159)*[4]*(1+[5])))",
		         "[0]*([3]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+(1-[3])*Gaus(x,[1],[4])/(sqrt(2*3.14159)*[4])+[5]*Gaus(x,[1],[6])/(sqrt(2*3.14159)*[6]))",
		         //"[0]*([3]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+[5]*ROOT::Math::crystalball_cdf(x,[6],[7],[4],[1]))",
		         //"[0]*([3]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2])+[5]*TMath::BreitWigner(x,[1],[4]))"
			 };

TString sig_bkg[nsig] = {"[9]+[10]*(x-6)",
		         "[10]+[11]*(x-6)",
		         //"[11]+[12]*(x-5)",
		         //"[9]+[10]*(x-6)"
			 };

int sigmax[nsig] = {8,9};

TString bkg[nbkg] = {"",
		    "[9]+[10]*x+[11]*x*x",
		    "[9]+[10]*x+[11]*x*x+[12]*x*x*x",
		    "[9]*exp([10]*(x-5))"};

TString bkg_new[nbkg] = {"[0]+[1]*(x-6)",
		    "[0]+[1]*x+[2]*x*x",
		    "[0]+[1]*x+[2]*x*x+[3]*x*x*x",
		    "[0]*exp([1]*(x-5))"};

int bkgmax[nbkg] = {0,11,12,10};

TString signame[nsig] = {"DoubleGaussian","TripleGaussian"};
TString bkgname[nbkg] = {"Linear","Quadratic","Cubic","Exponential"};

void clean0(TH1D* h)
{
    for (int i=1;i<=h->GetNbinsX();i++)
    {
	if(h->GetBinContent(i)==0) h->SetBinError(i,1);
    }
}

//void getNPFnPar(TString npfname, float par[]){
void getNPFnPar(){
	//TFile* npf = new TFile(npfname.Data());
	//TF1* f = (TF1*)npf->Get("f1");
	//par[0] = f->GetParameter(1);
	//par[1] = f->GetParameter(2);
	
	if(isPbPb)
	{
	    NPpar[0] = NPpar_PP[0];
	    NPpar[1] = NPpar_PP[1];
	    NPpar[2] = NPpar_PP[2];
	    NPpar[3] = NPpar_PP[3];
    
	    npfit = npfit_PP;
	    npfit_new = npfit_PP_new;
	}

	else
	{
	    NPpar[0] = NPpar_pp[0];
	    NPpar[1] = NPpar_pp[1];
	    NPpar[2] = NPpar_pp[2];
	    NPpar[3] = NPpar_pp[3];

	    npfit = npfit_pp;
	    npfit_new = npfit_pp_new;
	}

	bkgerf = Form("[3]*(%s)",npfit.Data());
	bkgerf_new = Form("[0]*(%s)",npfit_new.Data());
}

void mkpp()
{
  collisionsystem = "pp";
  isPbPb = false;
  //getNPFnPar();

}

void mkPP()
{
  collisionsystem = "PbPb";
  isPbPb = true;
  //getNPFnPar();

}

//void fitBvar(TString collsyst="PbPb", TString inputfile ="", TString npfile="ROOTfiles/NPFitPbPb.root", float centMin=0, float centMax=100, TString outputfile="outHisto")
void fitBvar(int N=0,float centMin=0, float centMax=100, TString outputfile="outHisto")
{
  if(N==0) mkpp();
  if(N==1) mkPP();

  if(nBins == 1) inputf_pp = "ROOTfiles/hPtSpectrumBplusPP_integrated.root";
  else inputf_pp = "ROOTfiles/hPtSpectrumBplusPP.root";

  if(nBins == 1) inputf_PP = "ROOTfiles/hPtSpectrumBplusPbPb_integrated.root";
  else inputf_PP = "ROOTfiles/hPtSpectrumBplusPbPb.root";
  infname = outputfile;
  centmin = centMin;
  centmax = centMax;

  gStyle->SetTextSize(0.05);
  gStyle->SetTextFont(42);
  gStyle->SetPadRightMargin(0.02);
  gStyle->SetPadLeftMargin(0.18);
  gStyle->SetPadTopMargin(0.09);
  gStyle->SetPadBottomMargin(0.145);
  gStyle->SetTitleX(.0f);

  TF1* fit (float ptmin, float ptmax, int s, int b, int widVar, float erfvar, float normvar, float meanvar);

  TCanvas* c = new TCanvas("c","",600,600);

  c->cd();
  TF1* bmass = new TF1("bmass","[0]",7,50);
  if(N==0 || N==1) bmass->SetTitle(";B^{+} p_{T} (GeV/c);Fraction of Default Yield");
  if(N==2) bmass->SetTitle(";B^{+} p_{T} (GeV/c);PbPb Discrepancy / pp Discrepancy");
  bmass->SetMinimum(0.9);
  bmass->SetMaximum(1.1);
  bmass->SetParameter(0,1);
  bmass->SetLineWidth(1);
  bmass->SetLineColor(kRed);
  bmass->SetLineStyle(2);
  bmass->GetXaxis()->SetTitleOffset(1.3);
  bmass->GetYaxis()->SetTitleOffset(1.8);
  bmass->GetXaxis()->SetLabelOffset(0.007);
  bmass->GetYaxis()->SetLabelOffset(0.007);
  bmass->GetXaxis()->SetTitleSize(0.045);
  bmass->GetYaxis()->SetTitleSize(0.045);
  bmass->GetXaxis()->SetTitleFont(42);
  bmass->GetYaxis()->SetTitleFont(42);
  bmass->GetXaxis()->SetLabelFont(42);
  bmass->GetYaxis()->SetLabelFont(42);
  bmass->GetXaxis()->SetLabelSize(0.04);
  bmass->GetYaxis()->SetLabelSize(0.04);
  bmass->Draw();

  TLatex* Title;
  if(N==0) Title = new TLatex(0.15,0.94, "Fit Variation for pp");
  if(N==1) Title = new TLatex(0.15,0.94, "Fit Variation for PbPb");
  if(N==2) Title = new TLatex(0.15,0.94, "Fit Variation PbPb/pp");
  Title->SetNDC();
  Title->SetTextAlign(12);
  Title->SetTextSize(0.04);
  Title->SetTextFont(42);
  Title->Draw("Same");

  TLegend* leg = new TLegend(0.2,0.55,0.4,0.89,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.03);
  leg->SetTextFont(42);
  leg->SetFillStyle(0);

    //getNPFnPar(npfile, NPpar);
    //std::cout<<"NP parameter 0: "<<NPpar[0]<<std::endl;
    //std::cout<<"NP parameter 1: "<<NPpar[1]<<std::endl;

    TFile* data_pp = new TFile(inputf_pp.Data()); 
    TFile* data_PP = new TFile(inputf_PP.Data());   
    TH1D* h_def_pp = (TH1D*)data_pp->Get("hPt");
    TH1D* h_def_PP = (TH1D*)data_PP->Get("hPt");  
    TH1D* hwidvar;
    TH1D* erfplus;
    TH1D* erfminus;
    TH1D* normplus;
    TH1D* normminus;
    TH1D* meanplus;
    TH1D* meanminus;
    int cnt =0;
    int colors[17]  = {2,3,4,5,6,7,8,9,12,26,30,40,41,46,38,49,29};

    for(int s=0;s<nsig;s++)
    {
	bkgmax[0]=sigmax[s]+2;

	for(int b=0;b<nbkg;b++)
	{

	  if(s==0 || b==0)
	  {

	      TH1D* hvar = new TH1D(Form("h_%s",bkgname[b].Data()),"",nBins,ptBins);
	      if(s==0 && b==0)
	      {
		  hwidvar = new TH1D("h_widvar","",nBins,ptBins);
		  erfplus = new TH1D("h_erfplus","",nBins,ptBins);
		  erfminus = new TH1D("h_erfminus","",nBins,ptBins);
		  normplus = new TH1D("h_normplus","",nBins,ptBins);
		  normminus = new TH1D("h_normminus","",nBins,ptBins);
		  meanplus = new TH1D("h_meanplus","",nBins,ptBins);
		  meanminus = new TH1D("h_meanminus","",nBins,ptBins);
	      }

	      for(int i=0;i<nBins;i++)
		{

		  double def_y_PP = h_def_PP->GetBinContent(i+1);
		  double def_y_pp = h_def_pp->GetBinContent(i+1);
		  double def_err_PP = h_def_PP->GetBinError(i+1);
		  double def_err_pp = h_def_pp->GetBinError(i+1);
		  
		  mkpp();
		  TF1* f = fit(ptBins[i],ptBins[i+1],s,b,0,0,1,0);
		  double y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  double err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  double y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  double err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],s,b,0,0,1,0);
		  double y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  double err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  double y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  double err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));

		  if(N==0)
		  {
			hvar->SetBinContent(i+1,y_fr_pp);
			hvar->SetBinError(i+1,err_fr_pp);
			hvar->SetMarkerStyle(8);
			hvar->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			hvar->SetBinContent(i+1,y_fr_PP);
			hvar->SetBinError(i+1,err_fr_PP);
			hvar->SetMarkerStyle(8);
			hvar->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			hvar->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			hvar->SetBinError(i+1,err_fr_PP/err_fr_pp);
			hvar->SetMarkerStyle(8);
			hvar->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;


		  if(s==0 && b==0)
		  {    
		      		     
		  mkpp();
		  f = fit(ptBins[i],ptBins[i+1],0,0,1,0,1,0);
		  y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],0,0,1,0,1,0);
		  y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));

		  if(N==0)
		  {
			hwidvar->SetBinContent(i+1,y_fr_pp);
			hwidvar->SetBinError(i+1,err_fr_pp);
			hwidvar->SetMarkerStyle(8);
			hwidvar->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			hwidvar->SetBinContent(i+1,y_fr_PP);
			hwidvar->SetBinError(i+1,err_fr_PP);
			hwidvar->SetMarkerStyle(8);
			hwidvar->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			hwidvar->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			hwidvar->SetBinError(i+1,err_fr_PP/err_fr_pp);
			hwidvar->SetMarkerStyle(8);
			hwidvar->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;

		  mkpp();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,-0.01,1,0);
		  y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,-0.01,1,0);
		  y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));
		    
		  if(N==0)
		  {
			erfplus->SetBinContent(i+1,y_fr_pp);
			erfplus->SetBinError(i+1,err_fr_pp);
			erfplus->SetMarkerStyle(8);
			erfplus->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			erfplus->SetBinContent(i+1,y_fr_PP);
			erfplus->SetBinError(i+1,err_fr_PP);
			erfplus->SetMarkerStyle(8);
			erfplus->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			erfplus->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			erfplus->SetBinError(i+1,err_fr_PP/err_fr_pp);
			erfplus->SetMarkerStyle(8);
			erfplus->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;

		  mkpp();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0.01,1,0);
		  y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0.01,1,0);
		  y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));

		  if(N==0)
		  {
			erfminus->SetBinContent(i+1,y_fr_pp);
			erfminus->SetBinError(i+1,err_fr_pp);
			erfminus->SetMarkerStyle(8);
			erfminus->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			erfminus->SetBinContent(i+1,y_fr_PP);
			erfminus->SetBinError(i+1,err_fr_PP);
			erfminus->SetMarkerStyle(8);
			erfminus->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			erfminus->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			erfminus->SetBinError(i+1,err_fr_PP/err_fr_pp);
			erfminus->SetMarkerStyle(8);
			erfminus->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;

		  mkpp();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,1.1,0);
		  y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,1.1,0);
		  y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));
		    
		  if(N==0)
		  {
			normplus->SetBinContent(i+1,y_fr_pp);
			normplus->SetBinError(i+1,err_fr_pp);
			normplus->SetMarkerStyle(8);
			normplus->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			normplus->SetBinContent(i+1,y_fr_PP);
			normplus->SetBinError(i+1,err_fr_PP);
			normplus->SetMarkerStyle(8);
			normplus->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			normplus->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			normplus->SetBinError(i+1,err_fr_PP/err_fr_pp);
			normplus->SetMarkerStyle(8);
			normplus->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;

		  mkpp();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,0.9,0);
		  y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,0.9,0);
		  y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));

		  if(N==0)
		  {
			normminus->SetBinContent(i+1,y_fr_pp);
			normminus->SetBinError(i+1,err_fr_pp);
			normminus->SetMarkerStyle(8);
			normminus->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			normminus->SetBinContent(i+1,y_fr_PP);
			normminus->SetBinError(i+1,err_fr_PP);
			normminus->SetMarkerStyle(8);
			normminus->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			normminus->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			normminus->SetBinError(i+1,err_fr_PP/err_fr_pp);
			normminus->SetMarkerStyle(8);
			normminus->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;

		  mkpp();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,1,-0.015);
		  y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,1,-0.015);
		  y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));
		    
		  if(N==0)
		  {
			meanplus->SetBinContent(i+1,y_fr_pp);
			meanplus->SetBinError(i+1,err_fr_pp);
			meanplus->SetMarkerStyle(8);
			meanplus->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			meanplus->SetBinContent(i+1,y_fr_PP);
			meanplus->SetBinError(i+1,err_fr_PP);
			meanplus->SetMarkerStyle(8);
			meanplus->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			meanplus->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			meanplus->SetBinError(i+1,err_fr_PP/err_fr_pp);
			meanplus->SetMarkerStyle(8);
			meanplus->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;

		  mkpp();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,1,0.015);
		  y_pp = yield/(ptBins[i+1]-ptBins[i]);
		  err_pp = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_pp = y_pp/def_y_pp;
		  cout << "YIELD FRACTION: " << y_fr_pp << endl;
		  err_fr_pp = sqrt(pow(err_pp/def_y_pp,2)+pow(def_err_pp*y_pp/(def_y_pp*def_y_pp),2));

		  mkPP();
		  f = fit(ptBins[i],ptBins[i+1],0,0,0,0,1,0.015);
		  y_PP = yield/(ptBins[i+1]-ptBins[i]);
		  err_PP = yieldErr/(ptBins[i+1]-ptBins[i]);

		  y_fr_PP = y_PP/def_y_PP;
		  cout << "YIELD FRACTION: " << y_fr_PP << endl;
		  err_fr_PP = sqrt(pow(err_PP/def_y_PP,2)+pow(def_err_PP*y_PP/(def_y_PP*def_y_PP),2));

		  if(N==0)
		  {
			meanminus->SetBinContent(i+1,y_fr_pp);
			meanminus->SetBinError(i+1,err_fr_pp);
			meanminus->SetMarkerStyle(8);
			meanminus->SetMarkerColor(colors[cnt]);
		  }
		  else if(N==1)
		  {
			meanminus->SetBinContent(i+1,y_fr_PP);
			meanminus->SetBinError(i+1,err_fr_PP);
			meanminus->SetMarkerStyle(8);
			meanminus->SetMarkerColor(colors[cnt]);
		  }
		  else
		  {
			meanminus->SetBinContent(i+1,y_fr_PP/y_fr_pp);
			meanminus->SetBinError(i+1,err_fr_PP/err_fr_pp);
			meanminus->SetMarkerStyle(8);
			meanminus->SetMarkerColor(colors[cnt]);
		  }
		  cnt++;


		  }

		}
		c->cd();	
		hvar->Draw("Same");

		if(s==0 && b==0)
	        {
		    hwidvar->Draw("Same");
		    erfplus->Draw("Same");
		    erfminus->Draw("Same");
		}
		TString sigName;
		if(s==0) sigName = "Double Gaussian";
		else sigName = "Triple Gaussian";
		leg->AddEntry(hvar,Form("%s and %s",sigName.Data(),bkgname[b].Data()),"pl");
		if(s==0 && b==0)
		{
		    leg->AddEntry(hwidvar, "Width Variation", "pl");
		    leg->AddEntry(erfplus, "NP Erf Shift Forward", "pl");
		    leg->AddEntry(erfminus, "NP Erf Shift Back", "pl");
		    leg->AddEntry(normplus, "NP Relative Norm Erf Decrease","pl");
		    leg->AddEntry(normminus, "NP Relative Norm Erf Increase","pl");
		    leg->AddEntry(meanplus, "NP Gaussian Shift Forward","pl");
		    leg->AddEntry(meanminus, "NP Gaussian Shift Back","pl");
		}
	    }
	}
  }
  c->cd();
  leg->Draw("Same");

if(N==0)
{
  if(nBins == 1) c->SaveAs("SystPDF/total_var_pp.pdf");  
  else c->SaveAs("SystPDF/var_pp.pdf");  
}
if(N==1)
{
  if(nBins == 1) c->SaveAs("SystPDF/total_var_PbPb.pdf");  
  else c->SaveAs("SystPDF/var_PbPb.pdf");  
}
if(N==2)
{
  if(nBins == 1) c->SaveAs("SystPDF/total_var_divide.pdf");  
  else c->SaveAs("SystPDF/var_divide.pdf");  
}
}

TF1* fit(float ptmin, float ptmax, int s, int b, int widVar, float erfvar, float normvar, float meanvar)
{

    npfit_pp = Form("%f*Gaus(x,%f,3.64663e-2)*(x<%f)+(x>=%f)*%f*Gaus(x,%f,1.5204e-1)+7.18255e1*TMath::Erf(-(x-[4])/[5]) + 7.18255e1",normvar*NPpar_pp[2],meanvar+NPpar_pp[3],meanvar+NPpar_pp[3],meanvar+NPpar_pp[3],normvar*NPpar_pp[2],meanvar+NPpar_pp[3]);
    npfit_PP = Form("%f*Gaus(x,%f,3.87952e-2)*(x<%f)+(x>=%f)*%f*Gaus(x,%f,1.14232e-1)+6.89441e1*TMath::Erf(-(x-[4])/[5]) + 6.89441e1",normvar*NPpar_PP[2],meanvar+NPpar_PP[3],meanvar+NPpar_PP[3],meanvar+NPpar_PP[3],normvar*NPpar_PP[2],meanvar+NPpar_PP[3]);

    npfit_pp_new = Form("%f*Gaus(x,%f,3.64663e-2)*(x<%f)+(x>=%f)*%f*Gaus(x,%f,1.5204e-1)+7.18255e1*TMath::Erf(-(x-[1])/[2]) + 7.18255e1",normvar*NPpar_pp[2],meanvar+NPpar_pp[3],meanvar+NPpar_pp[3],meanvar+NPpar_pp[3],normvar*NPpar_pp[2],meanvar+NPpar_pp[3]);
    npfit_PP_new = Form("%f*Gaus(x,%f,3.87952e-2)*(x<%f)+(x>=%f)*%f*Gaus(x,%f,1.14232e-1)+6.89441e1*TMath::Erf(-(x-[1])/[2]) + 6.89441e1",normvar*NPpar_PP[2],meanvar+NPpar_PP[3],meanvar+NPpar_PP[3],meanvar+NPpar_PP[3],normvar*NPpar_PP[2],meanvar+NPpar_PP[3]);

    getNPFnPar();

    static int count=0;
    count++;

  TCanvas* c = new TCanvas(Form("c_%.0f_%.0f",ptmin,ptmax),"",400,400);
  TFile* infile = new TFile(Form("%s/%s_%.0f_%.0f.root",infname.Data(),collisionsystem.Data(),ptmin,ptmax));
  TH1D* h = (TH1D*)infile->Get("h");                    h->SetName(Form("h_%.0f_%.0f",ptmin,ptmax));
  TH1D* hMCSignal = (TH1D*)infile->Get("hMCSignal");    hMCSignal->SetName(Form("hMCSignal_%.0f_%.0f",ptmin,ptmax));
    
  TF1* f;  
  TF1* background;
  TF1* bkpi;
  TF1* mass;

  if(b==0) f = new TF1(Form("f%d",count),Form("%s+%s+%s",sig[s].Data(),sig_bkg[s].Data(),bkgerf.Data()), 5.0, 6.0);
  else f = new TF1(Form("f%d",count),Form("%s+%s+%s",sig[s].Data(),bkg[b].Data(),bkgerf.Data()), 5.0, 6.0);

    clean0(h);
    h->Draw();

    double hmin = h->GetBinContent(h->GetMinimumBin());
    double hmax = h->GetBinContent(h->GetMaximumBin());
    double havg = h->Integral();

    double mcmin = hMCSignal->GetBinContent(h->GetMinimumBin());
    double mcmax = hMCSignal->GetBinContent(h->GetMaximumBin());
    double mcavg = hMCSignal->Integral();

    f->SetParLimits(1,5.27,5.29);
    f->SetParLimits(2,0.01,0.05);
    f->SetParLimits(8,0.01,0.05);
    f->SetParLimits(7,0,1);
    f->SetParLimits(6,0,1);
    if(s==1) f->SetParLimits(9,0,1);
    if(s==2)
    {
	 f->FixParameter(0,1);
	 f->SetParLimits(6,0,0.5*hmax);
	 f->SetParLimits(7,0,hmax);
    }
    if(b==0 && sigmax[s]==8)
    {
	//f->SetParLimits(9,0.5*hmin,1.5*hmax);
	f->SetParLimits(10,-1000,100);
    }
    if(b==0 && sigmax[s]==10)
    {
	//f->SetParLimits(11,0.5*hmin,1.5*hmax);
	f->SetParLimits(12,-1000,100);
    }
    if(b==3)
    {
	f->SetParLimits(9,0,1.5*hmax);
	f->SetParLimits(10,-100,0);
    }

    f->SetParLimits(3,0,1000);
    f->FixParameter(4,NPpar[0]+erfvar);
    f->FixParameter(5,NPpar[1]);

    f->SetParameter(0,100);
    f->SetParameter(1,5.28);
    f->SetParameter(2,0.05);
    f->SetParameter(8,0.03);

    f->FixParameter(1,5.279);
    f->FixParameter(3,0);
    if(s==2) f->FixParameter(7,0);

    if(s>0 && bkgmax[b]>=11) f->FixParameter(11,0);
    if(s>0 && bkgmax[b]>=12) f->FixParameter(12,0); 
 
    h->GetEntries();
    hMCSignal->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
    hMCSignal->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
    f->ReleaseParameter(1);
    f->SetParLimits(1,5.27,5.29);
    hMCSignal->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
    hMCSignal->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
    hMCSignal->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
    hMCSignal->Fit(Form("f%d",count),"L m","",minhisto,maxhisto);

    f->FixParameter(1,f->GetParameter(1));
    f->FixParameter(2,f->GetParameter(2));  
    f->FixParameter(7,f->GetParameter(7)); 
    f->FixParameter(8,f->GetParameter(8));
    f->FixParameter(6,f->GetParameter(6));
    if(sigmax[s]>=9) f->FixParameter(9,f->GetParameter(9));
    if(sigmax[s]>=10) f->FixParameter(10,f->GetParameter(10));

    if(s==2) 
    {
	f->ReleaseParameter(7);
	f->SetParLimits(7,0,1);
    }
 
    if(s>0 && bkgmax[b]>=11) f->ReleaseParameter(11);
    if(s>0 && bkgmax[b]>=12) f->ReleaseParameter(12); 
    f->ReleaseParameter(3);
    f->SetParLimits(3,0,1000);
 
    h->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
    h->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
    f->ReleaseParameter(1);
    f->SetParLimits(1,5.27,5.29);
    h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
    h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
    h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
    h->Fit(Form("f%d",count),"L m","",minhisto,maxhisto);
    
    if(b==0)
    {
	background = new TF1(Form("background%d",count),bkg_new[b].Data(),minhisto,maxhisto);
	background->SetParameter(0,f->GetParameter(sigmax[s]+1));
	background->SetParameter(1,f->GetParameter(sigmax[s]+2));
    }
    else
    {
	background = new TF1(Form("background%d",count),bkg_new[b].Data(),minhisto,maxhisto);
	background->SetParameter(0,f->GetParameter(9));
	background->SetParameter(1,f->GetParameter(10));
	if(bkgmax[b]>=11) background->SetParameter(2,f->GetParameter(11));
	if(bkgmax[b]>=12) background->SetParameter(3,f->GetParameter(12));
    }

    bkpi = new TF1(Form("bpki%d",count),bkgerf_new.Data(),minhisto,maxhisto);
    bkpi->SetParameter(0,f->GetParameter(3));
    bkpi->SetParameter(1,NPpar[0]);
    bkpi->SetParameter(2,NPpar[1]);

    mass = new TF1(Form("fmass%d",count),sig_new[s].Data(),minhisto,maxhisto);
    if(s==0 || s==3) mass->SetParameters(f->GetParameter(0),f->GetParameter(1),f->GetParameter(2),f->GetParameter(7),f->GetParameter(8),f->GetParameter(6));
    if(s==1) mass->SetParameters(f->GetParameter(0),f->GetParameter(1),f->GetParameter(2),f->GetParameter(7),f->GetParameter(8),f->GetParameter(6),f->GetParameter(9));
    if(s==2) mass->SetParameters(f->GetParameter(0),f->GetParameter(1),f->GetParameter(2),f->GetParameter(7),f->GetParameter(8),f->GetParameter(6),f->GetParameter(9),f->GetParameter(10));

    mass->SetParError(0,f->GetParError(0));
    mass->SetParError(1,f->GetParError(1));
    mass->SetParError(2,f->GetParError(2));
    mass->SetParError(3,f->GetParError(7));
    mass->SetParError(4,f->GetParError(8));
    mass->SetParError(5,f->GetParError(6));
    if(sigmax[s]>=9) mass->SetParError(6,f->GetParError(9));
    if(sigmax[s]>=10) mass->SetParError(7,f->GetParError(10));

      f->SetLineColor(kRed);
      f->SetLineWidth(2);

   background->SetLineColor(4);
   background->SetLineStyle(2);
   background->SetLineWidth(3);
   background->SetRange(minhisto,maxhisto);
   
   bkpi->SetFillColor(kGreen+4);
   bkpi->SetFillStyle(3005);
   bkpi->SetLineColor(kGreen+4);
   bkpi->SetLineWidth(3);

   mass->SetLineColor(kOrange-3);
   mass->SetLineStyle(2);
   mass->SetLineWidth(3);
   mass->SetFillColor(kOrange-3);
   mass->SetFillStyle(3002);

  h->SetXTitle("m_{#mu#muK} (GeV/c^{2})");
  h->SetYTitle("Entries / (5 MeV/c^{2})");
  h->GetXaxis()->CenterTitle();
  h->GetYaxis()->CenterTitle();
  h->SetAxisRange(0,h->GetMaximum()*1.4*1.2,"Y");
  h->GetXaxis()->SetTitleOffset(1.0);
  h->GetYaxis()->SetTitleOffset(1.5);
  h->GetXaxis()->SetLabelOffset(0.008);
  h->GetYaxis()->SetLabelOffset(0.008);
  h->GetXaxis()->SetTitleSize(0.060);
  h->GetYaxis()->SetTitleSize(0.060);
  h->GetXaxis()->SetTitleFont(42);
  h->GetYaxis()->SetTitleFont(42);
  h->GetXaxis()->SetLabelFont(42);
  h->GetYaxis()->SetLabelFont(42);
  h->GetXaxis()->SetLabelSize(0.06);
  h->GetYaxis()->SetLabelSize(0.06);
  h->Draw("e");
  
  double axisymin = -0.05;
  h->SetAxisRange(axisymin,h->GetMaximum()*1.2,"Y");
  h->GetXaxis()->SetNdivisions(-50205);
  int ci = TColor::GetColor("#000099");
  h->SetLineColor(ci);
  h->SetStats(0);
  
      h->SetMarkerStyle(20); // 24?
      h->SetMarkerSize(0.8);

   h->Draw("e");
   bkpi->Draw("same");
   background->Draw("same");   
   mass->SetRange(minhisto,maxhisto);
   mass->Draw("same");
   f->Draw("same");

   yield = mass->Integral(minhisto,maxhisto)/binwidthmass;
   yieldErr = mass->Integral(minhisto,maxhisto)/binwidthmass*mass->GetParError(0)/mass->GetParameter(0);

  TLegend* leg = new TLegend(0.55,0.45,0.875,0.76,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.05);
  leg->SetTextFont(42);
  leg->SetFillStyle(0);
  leg->AddEntry(h,"Data","pl");
  leg->AddEntry(f,"Fit","l");
  leg->AddEntry(mass,"B^{+} Signal","f");
  leg->AddEntry(background,"Combinatorial","l");
  leg->AddEntry(bkpi,"B #rightarrow J/#psi X","f");
  leg->Draw("same");

  TLatex* texCms = new TLatex(0.225,0.87, "#scale[1.25]{CMS} Preliminary");
  texCms->SetNDC();
  texCms->SetTextAlign(12);
  texCms->SetTextSize(0.04);
  texCms->SetTextFont(42);
  texCms->Draw();

  TLatex* texCol;
  if(collisionsystem=="pp"||collisionsystem=="PP") texCol= new TLatex(0.39,0.94, Form("25.8 pb^{-1} (%s #sqrt{s_{NN}} = 5.02 TeV)","pp"));
  else texCol= new TLatex(0.35,0.94, Form("345 #mub^{-1} (%s #sqrt{s_{NN}} = 5.02 TeV)","PbPb"));
  texCol->SetNDC();
  texCol->SetTextSize(0.05);
  texCol->SetLineWidth(2);
  texCol->SetTextFont(42);
  texCol->Draw();

  TLatex* tex;
  
  tex = new TLatex(0.53,0.85,Form("%.1f < p_{T} < %.1f GeV/c",ptmin,ptmax));
  tex->SetNDC();
  tex->SetTextFont(42);
  tex->SetTextSize(0.05);
  tex->SetLineWidth(2);
  tex->Draw();
  
  if(isPbPb){
  TString texper="%";
  tex = new TLatex(0.225,0.78,Form("Centrality %.0f-%.0f%s",centmin,centmax,texper.Data()));//0.2612903,0.8425793
  tex->SetNDC();
  tex->SetTextColor(1);
  tex->SetTextFont(42);
  tex->SetTextSize(0.05);
  tex->SetLineWidth(2);
  tex->Draw();
  }

  if(s==0 && widVar==0 && normvar==1.0 && erfvar==0.0  && meanvar==0.0) tex= new TLatex(0.465,0.38,Form("%s Background ",bkgname[b].Data()));
  else if(s==1) tex= new TLatex(0.465,0.38,"Triple Gaussian Signal");
  else if(widVar!=0) tex= new TLatex(0.465,0.38,"Width Variation");
  else if(erfvar>0.0) tex= new TLatex(0.465,0.38,"NP Erf Shift Forward");
  else if(erfvar<0.0) tex= new TLatex(0.465,0.38,"NP Erf Shift Back");
  else if(meanvar>0.0) tex= new TLatex(0.465,0.38,"NP Gaus. Shift Forward");
  else if(meanvar<0.0) tex= new TLatex(0.465,0.38,"NP Gaus. Shift Back");
  else if(normvar>1) tex= new TLatex(0.465,0.38,"NP Rel. Norm Erf Decrease");
  else tex= new TLatex(0.465,0.38,"NP Rel. Norm Erf Increase");

  tex->SetNDC();
  tex->SetTextColor(1);
  tex->SetTextFont(42);
  tex->SetTextSize(0.045);
  tex->SetLineWidth(2);
  tex->Draw();

  tex = new TLatex(0.77,0.78,"|y_{lab}| < 2.4");
  tex->SetNDC();
  tex->SetTextFont(42);
  tex->SetTextSize(0.05);
  tex->SetLineWidth(2);
  tex->Draw();

  tex = new TLatex(0.30,0.54,"B^{+}");
  tex->SetNDC();
  tex->SetTextFont(42);
  tex->SetTextSize(0.06);
  tex->SetLineWidth(2);
  tex->Draw();

    if(widVar==0 && erfvar==0 && normvar==1 && meanvar==0) 
      c->SaveAs(Form("SystPDF/%s_%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),signame[s].Data(),bkgname[b].Data(),ptmin,ptmax));
    else if(erfvar>0.0)
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"erfplus",ptmin,ptmax));
    else if(erfvar<0.0)
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"erfminus",ptmin,ptmax));
    else if(normvar>1.0)
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"normplus",ptmin,ptmax));
    else if(normvar<1.0)
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"normminus",ptmin,ptmax));
    else if(meanvar>0.0)
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"meanplus",ptmin,ptmax));
    else if(meanvar<0.0)
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"meanminus",ptmin,ptmax));
    else
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"widvar",ptmin,ptmax));

    return mass;
}


int main(int argc, char *argv[])
{
  if(argc==4)
    {
      fitBvar(atof(argv[1]),atof(argv[2]),atof(argv[3]));
      return 0;
    }
  else if(argc==2)
    {
      fitBvar(atof(argv[1]));
      return 0;
    }
  else
    {
      std::cout << "Wrong number of inputs" << std::endl;
      return 1;
    }
}

