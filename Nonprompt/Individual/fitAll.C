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

double minhisto = 5.0;
double maxhisto = 6.0;

TString infilepp = "test_pp.root";
TString infilePbPb = "test_PbPb.root";
bool ispp = true;
//bool ispp = false;

void fitAll(){
	TFile* outf;
	if(ispp) outf = new TFile(Form("plotspp/fitNP_pp.root"), "recreate");
	else outf = new TFile(Form("plotsPbPb/fitNP_PbPb.root"), "recreate");

	gStyle->SetOptStat(0);
	TFile* inf;
	if(ispp) inf = new TFile(infilepp.Data());
	else inf = new TFile(infilePbPb.Data());
	
	TH1D* Bnosig = (TH1D*)inf->Get("Bmass_nosig");
	TH1D* cp1 = (TH1D*)inf->Get("BmassBpPi");
	TH1D* cp2 = (TH1D*)inf->Get("BmassBpK_tkmatch");
	TH1D* cp3 = (TH1D*)inf->Get("BmassB0K_tkmatch");
	TH1D* h = (TH1D*)cp1->Clone();
	h->Add(cp2);
	h->Add(cp3);
	h->GetXaxis()->SetRangeUser(minhisto, maxhisto);
	TH1D* hempty = new TH1D("", "", 50, minhisto, maxhisto);
	TCanvas* c = new TCanvas("c", "", 600, 600);
	c->cd();
	
    //TF1* f = new TF1(Form("f"),"[0]*TMath::Erf((x-[1])/[2]) + [0] + [3]*([4]*Gaus(x,[5],[6])/(sqrt(2*3.14159)*[6])+(1-[4])*Gaus(x,[5],[7])/(sqrt(2*3.14159)*[7])) + [9]+[10]*x ");
    TF1* f = new TF1(Form("f"),"[0]*TMath::Erf((x-[1])/[2]) + [0] + [3]*([4]*Gaus(x,[5],[6])/(sqrt(2*3.14159)*[6])+(1-[4])*Gaus(x,[5],[7])/(sqrt(2*3.14159)*[7]))");

    //error fn
    f->SetParLimits(0, 1e0, 1e3);
    f->SetParLimits(1, 5., 5.3);
    f->SetParLimits(2, -10, 0);
    f->SetParameter(0,20);
    f->SetParameter(1,5.14);
    f->SetParameter(2,-1);

    f->SetParLimits(3, 1e-2, 1e4);
    f->SetParLimits(4, 0, 1);
    f->SetParLimits(5, 5.3, 5.4);
    f->SetParLimits(6,0.005,0.5);
    f->SetParLimits(7,0.005,0.5);
    f->SetParameter(3,1e1);
    f->SetParameter(4,0.5);
    f->SetParameter(5,5.35);
    f->SetParameter(6,0.05);
    f->SetParameter(7,0.05);

//    f->SetParLimits(9, 0, 1e5);
//    f->SetParLimits(10, -500,  100);
//    f->SetParameter(9,1e3);
//    f->SetParameter(10,-1);

    h->Fit(Form("f"),"q","",minhisto,maxhisto);
    h->Fit(Form("f"),"q","",minhisto,maxhisto);
    h->Fit(Form("f"),"L q","",minhisto,maxhisto);
    h->Fit(Form("f"),"L q","",minhisto,maxhisto);
    h->Fit(Form("f"),"L q","",minhisto,maxhisto);
    h->Fit(Form("f"),"L m","",minhisto,maxhisto);
    h->SetMarkerSize(0.8);
    h->SetMarkerStyle(20);

	//print out the fitted function
	printf(Form("%.6f*TMath::Erf((x-%.6f)/%.6f) + %.6f + %.6f*(%.6f*Gaus(x,%.6f,%.6f)/(sqrt(2*3.14159)*%.6f)+(1-%.6f)*Gaus(x,%.6f,%.6f)/(sqrt(2*3.14159)*%.6f)) \n", 
		f->GetParameter(0),
		f->GetParameter(1),
		f->GetParameter(2),
		f->GetParameter(0),
		f->GetParameter(3),
		f->GetParameter(4),
		f->GetParameter(5),
		f->GetParameter(6),
		f->GetParameter(6),
		f->GetParameter(4),
		f->GetParameter(5),
		f->GetParameter(7),
		f->GetParameter(7)
		));

    hempty->SetXTitle("m_{#mu#muK} (GeV/c^{2})");
    hempty->SetYTitle("Entries / (5 MeV/c^{2})");
    hempty->GetXaxis()->CenterTitle();
    hempty->GetYaxis()->CenterTitle();
    hempty->SetAxisRange(0,h->GetMaximum()*1.4*1.2,"Y");
    hempty->GetXaxis()->SetTitleOffset(1.3);
    hempty->GetYaxis()->SetTitleOffset(1.3);
    hempty->GetXaxis()->SetLabelOffset(0.007);
    hempty->GetYaxis()->SetLabelOffset(0.007);
    hempty->GetXaxis()->SetTitleSize(0.045);
    hempty->GetYaxis()->SetTitleSize(0.045);
    hempty->GetXaxis()->SetTitleFont(42);
    hempty->GetYaxis()->SetTitleFont(42);
    hempty->GetXaxis()->SetLabelFont(42);
    hempty->GetYaxis()->SetLabelFont(42);
    hempty->GetXaxis()->SetLabelSize(0.04);
    hempty->GetYaxis()->SetLabelSize(0.04);
    hempty->SetMarkerSize(0.01);
    hempty->SetMarkerStyle(20);
    hempty->SetStats(0);

	hempty->SetMaximum(h->GetMaximum()*1.2);
//	hempty->SetMaximum(Bnosig->GetMaximum()*1.2);
	hempty->Draw();
	Bnosig->Draw("same e");
	h->Draw("same e");
	f->Draw("same");

	TLegend* leg = new TLegend(0.42,0.56,0.65,0.86,NULL,"brNDC");
	leg->SetBorderSize(0);
	leg->SetTextSize(0.04);
	leg->SetTextFont(42);
	leg->SetFillStyle(0);
	leg->AddEntry(h,"Peaking background stack:","p");
    leg->AddEntry(hempty,"B^{+} to Jpsi Pi","p");
    leg->AddEntry(hempty,"B^{+} to Jpsi and various K","p");
    leg->AddEntry(hempty,"B^{0} to Jpsi and various K","p");
	TLatex * tlatex;
	if(ispp) tlatex=new TLatex(0.48,0.89,"pp MC");
	else tlatex=new TLatex(0.48,0.89,"PbPb MC");
	tlatex->SetNDC();
	tlatex->SetTextColor(1);
	tlatex->SetTextFont(42);
	tlatex->SetTextSize(0.04);
	tlatex->Draw();
	leg->AddEntry(f,"Fit","l");
	leg->Draw("same");

	outf->cd();
	h->Write();
	f->Write();
	if(ispp) c->SaveAs(Form("plotspp/fitNP_pp.png"));
	else c->SaveAs(Form("plotsPbPb/fitNP_PbPb.png"));
}
