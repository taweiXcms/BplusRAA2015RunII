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
float NPpar[2];

const int nbkg=4;

TString sig =     "[0]*([7]*Gaus(x,[1],[2]*(1+[6]))/(sqrt(2*3.14159)*[2]*(1+[6]))+(1-[7])*Gaus(x,[1],[8]*(1+[6]))/(sqrt(2*3.14159)*[8]*(1+[6])))";
TString sig_new = "[0]*([3]*Gaus(x,[1],[2]*(1+[5]))/(sqrt(2*3.14159)*[2]*(1+[5]))+(1-[3])*Gaus(x,[1],[4]*(1+[5]))/(sqrt(2*3.14159)*[4]*(1+[5])))";

TString sig1 =     "[0]*Gaus(x,[1],[2]*(1+[6]))/(sqrt(2*3.14159)*[2]*(1+[6]))";
TString sig1_new = "[0]*Gaus(x,[1],[2]*(1+[3]))/(sqrt(2*3.14159)*[2]*(1+[3]))";

TString bkg1 = "[7]+[8]*x";

TString bkgerf = "[3]*(TMath::Erf((x-[4])/[5])+1)";
TString bkgerf_new = "[0]*(TMath::Erf((x-[1])/[2])+1)";


TString bkg[nbkg] = {"[9]+[10]*x",
		    "[9]+[10]*x+[11]*x*x",
		    "[9]+[10]*x+[11]*x*x+[12]*x*x*x",
		    "[9]*exp([10]*x)"};

TString bkg_new[nbkg] = {"[0]+[1]*x",
		    "[0]+[1]*x+[2]*x*x",
		    "[0]+[1]*x+[2]*x*x+[3]*x*x*x",
		    "[0]*exp([1]*x)"};

TString name[nbkg] = {"linear","quadratic","cubic","exp"};

void clean0(TH1D* h)
{
    for (int i=1;i<=h->GetNbinsX();i++)
    {
	if(h->GetBinContent(i)==0) h->SetBinError(i,1);
    }
}

void getNPFnPar(TString npfname, float par[]){
	TFile* npf = new TFile(npfname.Data());
	TF1* f = (TF1*)npf->Get("f1");
	par[0] = f->GetParameter(1);
	par[1] = f->GetParameter(2);
}

void fitBvar(TString collsyst="PbPb", TString npfile="ROOTfiles/NPFitPbPb.root", float centMin=0, float centMax=100, TString outputfile="outHisto")
{
  collisionsystem = collsyst;
  infname = outputfile;
  centmin = centMin;
  centmax = centMax;
  if(collsyst != "PbPb") isPbPb = false;

  gStyle->SetTextSize(0.05);
  gStyle->SetTextFont(42);
  gStyle->SetPadRightMargin(0.043);
  gStyle->SetPadLeftMargin(0.18);
  gStyle->SetPadTopMargin(0.1);
  gStyle->SetPadBottomMargin(0.145);
  gStyle->SetTitleX(.0f);

  TF1* fit (float ptmin, float ptmax, int j, int widVar, int nGaus); // widVar=0,1 // nGaus=1,2

  TCanvas* c = new TCanvas("c","",600,600);

  TF1* bmass = new TF1("bmass","[0]",10,50);
  bmass->SetTitle(";B^{+} p_{T} (GeV/c);fraction of default yield");
  bmass->SetMinimum(0.8);
  bmass->SetMaximum(1.2);
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

  TLatex* Title = new TLatex(0.1,0.94, Form("Fit Variation for %s",collisionsystem.Data()));
  Title->SetNDC();
  Title->SetTextAlign(12);
  Title->SetTextSize(0.04);
  Title->SetTextFont(42);
  Title->Draw("Same");

  TLegend* leg = new TLegend(0.2,0.67,0.4,0.87,NULL,"brNDC");
  leg->SetBorderSize(0);
  leg->SetTextSize(0.04);
  leg->SetTextFont(42);
  leg->SetFillStyle(0);

  TFile* data_pp = new TFile("/afs/cern.ch/user/a/aturner/B_Meson/CMSSW_7_5_5_patch4/src/BntupleRunII/CrossSection/ROOTfiles/data_pp.root");
  TFile* data_PP = new TFile("/afs/cern.ch/user/a/aturner/B_Meson/CMSSW_7_5_5_patch4/src/BntupleRunII/CrossSection/ROOTfiles/data_PbPb.root");

  TH1D* h_pp = (TH1D*)data_pp->Get("hPt");
  TH1D* h_PP = (TH1D*)data_PP->Get("hPt");

  double pp_y;
  double PP_y;
  double pp_err;
  double PP_err;
  double y;
  double err;
  double y_fr;
  double err_fr;
  TF1* f;

    getNPFnPar(npfile, NPpar);
    std::cout<<"NP parameter 0: "<<NPpar[0]<<std::endl;
    std::cout<<"NP parameter 1: "<<NPpar[1]<<std::endl;

 
    for(int j=0;j<nbkg;j++)
    {

      TH1D* hvar = new TH1D(Form("h_%s",name[j].Data()),"",nBins,ptBins);

      for(int i=0;i<nBins;i++)
	{
	  pp_y = h_pp->GetBinContent(i+1);
	  PP_y = h_PP->GetBinContent(i+1);
	  pp_err = h_pp->GetBinError(i+1);
	  PP_err = h_PP->GetBinError(i+1);
	 
	  f = fit(ptBins[i],ptBins[i+1],j,0,2);
	  cout<<"YIELD / YIELDERR:  "<< yield <<" "<< yieldErr << endl;
	  y = yield/(ptBins[i+1]-ptBins[i]);
	  err = yieldErr/(ptBins[i+1]-ptBins[i]);
	  y_fr = 0;
	  err_fr = 0;

	  if(collisionsystem == "PbPb") y_fr = y/PP_y;
	  else y_fr = y/pp_y;
	  if(collisionsystem == "PbPb") err_fr = sqrt(pow(err/PP_y,2)+pow(PP_err*y/(PP_y*PP_y),2));
	  else err_fr = sqrt(pow(err/pp_y,2)+pow(pp_err*y/(pp_y*pp_y),2));

	  hvar->SetBinContent(i+1,y_fr);
	  hvar->SetBinError(i+1,err_fr);
	  hvar->SetMarkerStyle(8);
	  hvar->SetMarkerColor(2+j);

	  c->cd();
	  hvar->Draw("Same");
	}
	   
	leg->AddEntry(hvar, name[j].Data(), "pl");
    }

      TH1D* hwidvar = new TH1D("h_widvar","",nBins,ptBins);
      TH1D* hsigvar = new TH1D("h_sigvar","",nBins,ptBins);

      for(int i=0;i<nBins;i++)
	{
	  pp_y = h_pp->GetBinContent(i+1);
	  PP_y = h_PP->GetBinContent(i+1);
	  pp_err = h_pp->GetBinError(i+1);
	  PP_err = h_PP->GetBinError(i+1);
	 
	  f = fit(ptBins[i],ptBins[i+1],0,0,1);
	  cout<<"YIELD / YIELDERR:  "<< yield <<" "<< yieldErr << endl;
	  y = yield/(ptBins[i+1]-ptBins[i]);
	  err = yieldErr/(ptBins[i+1]-ptBins[i]);
	  y_fr = 0;
	  err_fr = 0;

	  if(collisionsystem == "PbPb") y_fr = y/PP_y;
	  else y_fr = y/pp_y;
	  if(collisionsystem == "PbPb") err_fr = sqrt(pow(err/PP_y,2)+pow(PP_err*y/(PP_y*PP_y),2));
	  else err_fr = sqrt(pow(err/pp_y,2)+pow(pp_err*y/(pp_y*pp_y),2));

	  hwidvar->SetBinContent(i+1,y_fr);
	  hwidvar->SetBinError(i+1,err_fr);
	  hwidvar->SetMarkerStyle(24);

	  f = fit(ptBins[i],ptBins[i+1],0,1,2);
	  cout<<"YIELD / YIELDERR:  "<< yield <<" "<< yieldErr << endl;
	  y = yield/(ptBins[i+1]-ptBins[i]);
	  err = yieldErr/(ptBins[i+1]-ptBins[i]);
	  y_fr = 0;
	  err_fr = 0;

	  if(collisionsystem == "PbPb") y_fr = y/PP_y;
	  else y_fr = y/pp_y;
	  if(collisionsystem == "PbPb") err_fr = sqrt(pow(err/PP_y,2)+pow(PP_err*y/(PP_y*PP_y),2));
	  else err_fr = sqrt(pow(err/pp_y,2)+pow(pp_err*y/(pp_y*pp_y),2));

	  hsigvar->SetBinContent(i+1,y_fr);
	  hsigvar->SetBinError(i+1,err_fr);
	  hsigvar->SetMarkerStyle(25);

	  c->cd();
	  hwidvar->Draw("Same");
	  hsigvar->Draw("Same");
	}  
	
    leg->AddEntry(hwidvar, "Width Variation", "pl");
    leg->AddEntry(hsigvar, "Signal Variation", "pl");

  c->cd();
  leg->Draw("Same");

  c->SaveAs(Form("SystPDF/var_%s.pdf",collisionsystem.Data()));  
}

TF1* fit(float ptmin, float ptmax, int j, int widVar, int nGaus)
{

    static int count=0;
    count++;

  TCanvas* c = new TCanvas(Form("c_%.0f_%.0f",ptmin,ptmax),"",600,600);
  TFile* infile = new TFile(Form("%s/%s_%.0f_%.0f.root",infname.Data(),collisionsystem.Data(),ptmin,ptmax));
  TH1D* h = (TH1D*)infile->Get("h");                    h->SetName(Form("h_%.0f_%.0f",ptmin,ptmax));
  TH1D* hMCSignal = (TH1D*)infile->Get("hMCSignal");    hMCSignal->SetName(Form("hMCSignal_%.0f_%.0f",ptmin,ptmax));
    
  TF1* f;  
  TF1* background;
  TF1* bkpi;
  TF1* mass;

  if(nGaus == 1) f = new TF1(Form("f%d",count),Form("%s+%s+%s",sig1.Data(),bkg1.Data(),bkgerf.Data()), 5.0, 6.0);
  else f = new TF1(Form("f%d",count),Form("%s+%s+%s",sig.Data(),bkg[j].Data(),bkgerf.Data()), 5.0, 6.0);

    clean0(h);
    h->Draw();

    double hmin = h->GetBinContent(h->GetMinimumBin());
    double hmax = h->GetBinContent(h->GetMaximumBin());
    double havg = h->Integral();

    if(nGaus == 1)
    {	
	f->SetParLimits(0,0,2*hmax);
	f->SetParLimits(1,5.27,5.29);
	f->SetParLimits(2,0.01,0.05);
	f->SetParLimits(3,0,havg);

	f->FixParameter(4,NPpar[0]);
	f->FixParameter(5,NPpar[1]);
	f->FixParameter(6,0);

	if(name[j] == "linear")
	{
	    f->SetParLimits(7,0,havg*6);
	    f->SetParLimits(8,-hmax,0);
	}

	f->SetParameter(0,200);
	f->SetParameter(1,5.279);
	f->SetParameter(2,0.05);

	f->FixParameter(1,5.279);
	f->FixParameter(10,0);

	f->FixParameter(6,0);
	f->FixParameter(3,0);

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
     
	f->ReleaseParameter(10);
	if(name[j] == "linear")
	{
	    f->SetParLimits(8,-hmax,0);
	}
	
	if(widVar == 1)
	{
	    f->ReleaseParameter(6);
	    f->SetParLimits(6,-1,1);
	}

	f->ReleaseParameter(3);
	f->SetParLimits(3,0,havg);
     
	h->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
	f->ReleaseParameter(1);
	f->SetParLimits(1,5.27,5.29);
	h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"L m","",minhisto,maxhisto);
		
	background = new TF1(Form("background%d",count),"[0]+[1]*x",minhisto,maxhisto);
	background->SetParameter(0,f->GetParameter(7));
	background->SetParameter(1,f->GetParameter(8));
	background->SetLineColor(4);
	background->SetLineStyle(2);

	bkpi = new TF1(Form("bpki%d",count),bkgerf_new.Data(),minhisto,maxhisto);
	bkpi->SetParameter(0,f->GetParameter(3));
	bkpi->SetParameter(1,NPpar[0]);
	bkpi->SetParameter(2,NPpar[1]);
	bkpi->SetLineColor(kGreen+1);
	bkpi->SetLineStyle(1);
	bkpi->SetFillStyle(3004);
	bkpi->SetFillColor(kGreen+1);

	mass = new TF1(Form("fmass%d",count),sig1_new.Data(),minhisto,maxhisto);
	mass->SetParameters(f->GetParameter(0),f->GetParameter(1),f->GetParameter(2),f->GetParameter(6));
	mass->SetParError(0,f->GetParError(0));
	mass->SetParError(1,f->GetParError(1));
	mass->SetParError(2,f->GetParError(2));
	mass->SetParError(5,f->GetParError(6));
	mass->SetLineColor(2);
    }
    
    else
    {	
	f->SetParLimits(1,5.26,5.30);
	f->SetParLimits(2,0.01,0.05);
	f->SetParLimits(8,0.01,0.05);
	f->SetParLimits(7,0,1);
	f->SetParLimits(3,0,hmax);

	f->FixParameter(4,NPpar[0]);
	f->FixParameter(5,NPpar[1]);

	if(name[j] == "linear")
	{
	    f->SetParLimits(9,0,hmax*6);
	    f->SetParLimits(10,-hmax,0);
	}

	f->SetParameter(0,100);
	f->SetParameter(1,5.279);
	f->SetParameter(2,0.05);
	f->SetParameter(8,0.03);

	f->FixParameter(1,5.279);
	if(name[j] != "linear") f->FixParameter(10,0);
	if(name[j]=="quadratic" || name[j]=="cubic") f->FixParameter(11,0);
	if(name[j]=="cubic") f->FixParameter(12,0);

	f->FixParameter(6,0);
	f->FixParameter(3,0);

	h->GetEntries();

	hMCSignal->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
	hMCSignal->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
	f->ReleaseParameter(1);
	f->SetParLimits(1,5.26,5.30);
	hMCSignal->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	hMCSignal->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	hMCSignal->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	hMCSignal->Fit(Form("f%d",count),"L m","",minhisto,maxhisto);

	f->FixParameter(1,f->GetParameter(1));
	f->FixParameter(2,f->GetParameter(2)); 
	f->FixParameter(7,f->GetParameter(7)); 
	f->FixParameter(8,f->GetParameter(8));
     
	if(name[j] != "linear")f->ReleaseParameter(10);
	if(name[j] == "linear")
	{
	    f->SetParLimits(10,-hmax,0);
	}

	if(name[j]=="quadratic" || name[j]=="cubic") f->ReleaseParameter(11);
	if(name[j]=="cubic") f->ReleaseParameter(12);
	
	if(widVar == 1)
	{
	    f->ReleaseParameter(6);
	    f->SetParLimits(6,-1,1);
	}

	f->ReleaseParameter(3);
	f->SetParLimits(3,0,hmax);
     
	h->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"q","",minhisto,maxhisto);
	f->ReleaseParameter(1);
	f->SetParLimits(1,5.26,5.30);
	h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"L q","",minhisto,maxhisto);
	h->Fit(Form("f%d",count),"L m","",minhisto,maxhisto);
		
	background = new TF1(Form("background%d",count),bkg_new[j].Data(),minhisto,maxhisto);
	background->SetParameter(0,f->GetParameter(9));
	background->SetParameter(1,f->GetParameter(10));
	background->SetParameter(2,f->GetParameter(11));
	background->SetParameter(3,f->GetParameter(12));
	background->SetLineColor(4);
	background->SetLineStyle(2);

	bkpi = new TF1(Form("bpki%d",count),bkgerf_new.Data(),minhisto,maxhisto);
	bkpi->SetParameter(0,f->GetParameter(3));
	bkpi->SetParameter(1,NPpar[0]);
	bkpi->SetParameter(2,NPpar[1]);
	bkpi->SetLineColor(kGreen+1);
	bkpi->SetLineStyle(1);
	bkpi->SetFillStyle(3004);
	bkpi->SetFillColor(kGreen+1);

	mass = new TF1(Form("fmass%d",count),sig_new.Data(),minhisto,maxhisto);
	mass->SetParameters(f->GetParameter(0),f->GetParameter(1),f->GetParameter(2),f->GetParameter(7),f->GetParameter(8),f->GetParameter(6));
	mass->SetParError(0,f->GetParError(0));
	mass->SetParError(1,f->GetParError(1));
	mass->SetParError(2,f->GetParError(2));
	mass->SetParError(3,f->GetParError(7));
	mass->SetParError(4,f->GetParError(8));
	mass->SetParError(5,f->GetParError(6));
	mass->SetLineColor(2);
    }

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
    bkpi->Draw("same");
    background->Draw("same");   
    mass->Draw("same");
    mass->SetLineStyle(2);
    mass->SetFillStyle(3004);
    mass->SetFillColor(2);
    f->Draw("same");

    yield = mass->Integral(minhisto,maxhisto)/binwidthmass;
    yieldErr = mass->Integral(minhisto,maxhisto)/binwidthmass*mass->GetParError(0)/mass->GetParameter(0);

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

    tex = new TLatex(0.22,0.78,Form("%.1f < p_{T} < %.1f GeV/c",ptmin,ptmax));
    tex->SetNDC();
    tex->SetTextFont(42);
    tex->SetTextSize(0.04);
    tex->SetLineWidth(2);
    tex->Draw();

    if(collisionsystem == "PbPb"){
    TString texper="%";
    tex = new TLatex(0.22,0.71,Form("Centrality %.0f-%.0f%s",centmin,centmax,texper.Data()));//0.2612903,0.8425793
    tex->SetNDC();
    tex->SetTextColor(1);
    tex->SetTextFont(42);
    tex->SetTextSize(0.045);
    tex->SetLineWidth(2);
    tex->Draw();
    }

    tex = new TLatex(0.22,0.83,"|y| < 2.4");
    tex->SetNDC();
    tex->SetTextFont(42);
    tex->SetTextSize(0.04);
    tex->SetLineWidth(2);
    tex->Draw();

    if(widVar==0 && nGaus==2) 
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),name[j].Data(),ptmin,ptmax));
    else if(widVar==1)
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"widvar",ptmin,ptmax));
    else
      c->SaveAs(Form("SystPDF/%s_%s_%.0f_%.0f.pdf",collisionsystem.Data(),"sigvar",ptmin,ptmax));

    return mass;
}


int main(int argc, char *argv[])
{
  if(argc==5)
    {
      fitBvar(argv[1],argv[2],atof(argv[3]),atof(argv[4]));
      return 0;
    }
  else if(argc==3)
    {
      fitBvar(argv[1],argv[2]);
      return 0;
    }
  else
    {
      std::cout << "Wrong number of inputs" << std::endl;
      return 1;
    }
}

