#include <TCanvas.h>
#include <TPad.h>
#include <TLatex.h>
#include <TLegend.h>
#include <TLine.h>
#include <TBox.h>
#include <TCut.h>
#include <TMath.h>
#include <TStyle.h>
#include <TF1.h>
#include <TH1.h>
#include <TFile.h>

double minhisto = 4.9;
double maxhisto = 6.0;

TString infilepp = "ppMinCut.root";
TString infilePbPb = "PbPbMinCut.root";
TString histname;
void fitIndi(){
	void fit(int fitType, bool ispp);
	for(int i = 1; i < 4; i++){
		fit(i, true);
		fit(i, false);
	}
}
void fit(int fitType, bool ispp){

	if(fitType==1){
		histname = "BmassBpPi";
	}
	else if(fitType==2){
		histname = "BmassBpK_tkmatch";
	}
	else if(fitType==3){
		histname = "BmassB0K_tkmatch";
	}
	TFile* outf;
	if(ispp) outf = new TFile(Form("plotspp/%s.root", histname.Data()), "recreate");
	else outf = new TFile(Form("plotsPbPb/%s.root", histname.Data()), "recreate");

	gStyle->SetOptStat(0);
	TFile* inf;
	if(ispp) inf = new TFile(infilepp.Data());
	else inf = new TFile(infilePbPb.Data());
	
	TH1D* h = (TH1D*)inf->Get(histname.Data());
	h->GetXaxis()->SetRangeUser(minhisto, maxhisto);
	TH1D* hempty = new TH1D("", "", 50, minhisto, maxhisto);
	TCanvas* c = new TCanvas("c", "", 600, 600);
	c->cd();
	
	TF1* f = new TF1(Form("f"),"[0]*Gaus(x,[1],[2])/(sqrt(2*3.14159)*[2]) + [3]*Gaus(x,[4],[5])/(sqrt(2*3.14159)*[5]) + [9]+[10]*x ");
	f->SetParLimits(0, 1e-3, 1e3);
	f->SetParLimits(1, 4.9, 5.2);
	f->SetParLimits(2, 0.001, 0.1);

	f->SetParLimits(3, 1e-3, 1e3);
	f->SetParLimits(4, 4.9, 5.2);
	f->SetParLimits(5, 0.001, 0.1);

	f->SetParLimits(9, 0, 1e2);
	f->SetParLimits(10, -10,  10);

	f->SetParameter(0,1e2);
	f->SetParameter(1,5.11);
	f->SetParameter(2,0.05);

	f->SetParameter(3,1e2);
	f->SetParameter(4,4.98);
	f->SetParameter(5,0.05);

	f->SetParameter(9,1e3);
	f->SetParameter(10,0);

	if(fitType==1) {
		f->SetParLimits(0, 0, 1e4);
		f->SetParLimits(1, 5.2, 5.6);
		f->SetParLimits(2, 0.0001, 0.5);
		f->SetParameter(0,1e2);
		f->SetParameter(1,5.35);
		f->SetParameter(2,0.05);

		f->SetParLimits(3, 0, 1e4);
		f->SetParLimits(4, 5.2, 5.6);
		f->SetParLimits(5, 0.0001, 0.5);
		f->SetParameter(3,1e2);
		f->SetParameter(4,5.35);
		f->SetParameter(5,0.05);
	}

	//h->Fit(Form("f"),"q","",minhisto,maxhisto);
	//h->Fit(Form("f"),"q","",minhisto,maxhisto);
	//h->Fit(Form("f"),"L q","",minhisto,maxhisto);
	//h->Fit(Form("f"),"L m","",minhisto,maxhisto);
	h->SetMarkerSize(0.8);
	h->SetMarkerStyle(20);

	hempty->SetMaximum(h->GetMaximum()*1.4);
	hempty->Draw();
	h->Draw("same e");
	//f->Draw("same");

	TLegend* leg = new TLegend(0.45,0.79,0.65,0.89,NULL,"brNDC");
	leg->SetBorderSize(0);
	leg->SetTextSize(0.04);
	leg->SetTextFont(42);
	leg->SetFillStyle(0);
	if(fitType==1) leg->AddEntry(h,"B^{+} to Jpsi Pi","p");
	if(fitType==2) leg->AddEntry(h,"B^{+} to Jpsi and various K","p");
	if(fitType==3) leg->AddEntry(h,"B^{0} to Jpsi and various K","p");
	TLatex * tlatex;
	if(ispp) tlatex=new TLatex(0.18,0.85,"pp MC");
	else tlatex=new TLatex(0.18,0.85,"PbPb MC");
	tlatex->SetNDC();
	tlatex->SetTextColor(1);
	tlatex->SetTextFont(42);
	tlatex->SetTextSize(0.04);
	tlatex->Draw();
	//leg->AddEntry(f,"Fit","l");
	leg->Draw("same");

	outf->cd();
	h->Write();
	f->Write();
	if(ispp) c->SaveAs(Form("plotspp/%s.png", histname.Data()));
	else c->SaveAs(Form("plotsPbPb/%s.png", histname.Data()));
}
