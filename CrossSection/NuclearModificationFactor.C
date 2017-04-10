#include "uti.h"
#include "parameters.h"
#include "TLegendEntry.h"
#include "../Systematics/systematics.C"
#include "theoryPrediction/drawTheory.h"
#include "B_RpA/DrawBRpAFONLL.h"
#include "B_RpA/DrawBRpA.h"
//#include "ChargedHad/RAA_0_10.C"
//#include "ChargedHad/RAA_0_100.C"
#include "ChargedHad/RpPb_Final_20161207.h"
#include "Dmeson/Draw_DRAA.h" //PAS
#include "Dmeson/canvasRAA_0_100_20161207.h" //new
//#include "NonPromptJpsi/expBeautyCMS_20161208.h"
#include "NonPromptJpsi/nonPrompt_276raa_20170201.h"

bool drawB = 1;
bool drawChHad = 0;
bool drawDRAA = 0;
bool drawJpsi = 0;

bool drawBRpA = 0;
bool drawThm = 1;

bool BSepSys = 0;

void adjustLegend(TLegend* l);
void NuclearModificationFactor(TString inputPP="ROOTfiles/CrossSectionPP.root", TString inputPbPb="ROOTfiles/CrossSectionPbPb.root",TString label="PbPb",TString outputfile="RAAfile.root", Float_t centMin=0., Float_t centMax=100.)
{
	float TAABarWid = 0.35;
	float pti = ptBins[0]-2.;
	float pte = ptBins[nBins]+5.;
	if(drawDRAA){
		pti = 0.5;
		pte = 600.;
		//pte = 60.;
		TAABarWid = 0.12;
	}
	if(drawThm){
		pti = 5;
		pte = 110.;
	}

	gStyle->SetOptTitle(0);
	gStyle->SetOptStat(0);
	gStyle->SetEndErrorSize(0);
	gStyle->SetMarkerStyle(20);
	gStyle->SetPadRightMargin(0.03);//###0.020
	gStyle->SetPadLeftMargin(0.12);
	gStyle->SetPadTopMargin(0.075);
	gStyle->SetPadBottomMargin(0.12);

	TFile *fpp=new TFile(inputPP.Data());
	TFile *fPbPb=new TFile(inputPbPb.Data());

	TH1D*hSigmaPPStat=(TH1D*)fpp->Get("hPtSigma");
	hSigmaPPStat->SetName("hSigmaPPStat");
	TH1D*hNuclearModification=(TH1D*)fPbPb->Get("hPtSigma");
	hNuclearModification->SetName("hNuclearModification");
	hNuclearModification->Divide(hSigmaPPStat);

	double apt[nBins];
	//bin half width
	double aptl[nBins];
	//"half" of bin half width
	double haptl[nBins];
	//number of every rebined bin
	double bin_num[nBins];

	for (int ibin=0; ibin<nBins; ibin++){
		apt[ibin]=(ptBins[ibin+1]+ptBins[ibin])/2.;
		aptl[ibin] = (ptBins[ibin+1]-ptBins[ibin])/2;
		haptl[ibin] = aptl[ibin]/1.4;
		bin_num[ibin]=aptl[ibin]/binsize*2;
	}

	Double_t xr[nBins], yr[nBins], xrlow[nBins], yrlow[nBins],xrhigh[nBins],yrhigh[nBins];
	Double_t yrcor[nBins], yruncor[nBins];
	for(int i=0;i<nBins;i++)
	{
		yr[i] = hNuclearModification->GetBinContent(i+1);
		double systematic=0.01*systematicsForRAA(hNuclearModification->GetBinCenter(i+1),centMin,centMax,0.,0.);
		double systematic_cor=0.01*systematicsForRAA_Correlated(hNuclearModification->GetBinCenter(i+1),centMin,centMax,0.,0.);
		double systematic_uncor=0.01*systematicsForRAA_UnCorrelated(hNuclearModification->GetBinCenter(i+1),centMin,centMax,0.,0.);
		//double systematic=0.;
		yrlow[i] = hNuclearModification->GetBinContent(i+1)*systematic;
		yrhigh[i] =hNuclearModification->GetBinContent(i+1)*systematic;
		yrcor[i] = hNuclearModification->GetBinContent(i+1)*systematic_cor;
		yruncor[i] = hNuclearModification->GetBinContent(i+1)*systematic_uncor;
	}

	TGraphAsymmErrors* gNuclearModification = new TGraphAsymmErrors(nBins,apt,yr,aptl,aptl,yrlow,yrhigh);
	gNuclearModification->SetName("gNuclearModification");
	TGraphAsymmErrors* gNuclearModification_UnCor = new TGraphAsymmErrors(nBins,apt,yr,haptl,haptl,yruncor,yruncor);
	gNuclearModification_UnCor->SetName("gNuclearModification_UnCor");
	TGraphAsymmErrors* gNuclearModification_Cor = new TGraphAsymmErrors(nBins,apt,yr,aptl,aptl,yrcor,yrcor);
	gNuclearModification_Cor->SetName("gNuclearModification_Cor");

	TCanvas*canvasRAA=new TCanvas("canvasRAA","canvasRAA",600,600);
	canvasRAA->cd();
	canvasRAA->SetLogx();

	TH2F* hemptyEff=new TH2F("hemptyEff","",50,pti,pte,10.,0,1.55);  
	if(drawBRpA) {
		hemptyEff=new TH2F("hemptyEff","",50,pti,pte,10.,0,3);  
	}
	hemptyEff->GetXaxis()->CenterTitle();
	hemptyEff->GetYaxis()->CenterTitle();
	hemptyEff->GetYaxis()->SetTitle("R_{AA}");
	hemptyEff->GetXaxis()->SetTitle("p_{T} (GeV/c)");
	hemptyEff->GetXaxis()->SetTitleOffset(1.0);
	hemptyEff->GetYaxis()->SetTitleOffset(1.1);
	hemptyEff->GetXaxis()->SetTitleSize(0.05);
	hemptyEff->GetYaxis()->SetTitleSize(0.05);
	hemptyEff->GetXaxis()->SetTitleFont(42);
	hemptyEff->GetYaxis()->SetTitleFont(42);
	hemptyEff->GetXaxis()->SetLabelFont(42);
	hemptyEff->GetYaxis()->SetLabelFont(42);
	hemptyEff->GetXaxis()->SetLabelSize(0.04);
	hemptyEff->GetYaxis()->SetLabelSize(0.04);  
	hemptyEff->SetMaximum(2);
	hemptyEff->SetMinimum(0.);
	hemptyEff->Draw();

	TLine *line = new TLine(pti,1,pte,1);
	line->SetLineStyle(2);
	line->SetLineWidth(2);
	line->Draw();

	gNuclearModification->SetFillColor(kAzure+7);
	gNuclearModification->SetFillColorAlpha(kAzure+7, 0.5);
	gNuclearModification->SetLineWidth(0);
	gNuclearModification->SetMarkerSize(1.2);
	gNuclearModification->SetMarkerStyle(21);
	gNuclearModification->SetLineColor(0);
	gNuclearModification->SetMarkerColor(kAzure-1);

	gNuclearModification_UnCor->SetFillColor(kAzure+7);
	gNuclearModification_UnCor->SetFillColorAlpha(kAzure+7, 0.5);
	gNuclearModification_UnCor->SetLineWidth(0);
	gNuclearModification_UnCor->SetMarkerSize(1.2);
	gNuclearModification_UnCor->SetMarkerStyle(21);
	gNuclearModification_UnCor->SetLineColor(0);
	gNuclearModification_UnCor->SetMarkerColor(kAzure-1);

	gNuclearModification_Cor->SetLineColor(1);
	gNuclearModification_Cor->SetLineWidth(3);
	gNuclearModification_Cor->SetFillColor(0);
	gNuclearModification_Cor->SetFillColorAlpha(0, 0.01);

	hNuclearModification->SetLineWidth(3);
	hNuclearModification->SetLineColor(kAzure-1);
	hNuclearModification->SetMarkerColor(kAzure-1);
	hNuclearModification->SetMarkerStyle(21);
	hNuclearModification->SetMarkerSize(1.2);

	Float_t systnormhi = normalizationUncertaintyForRAA(1)*1.e-2;
	Float_t systnormlo = normalizationUncertaintyForRAA(0)*1.e-2;
	Float_t systnorm;
	TBox* bSystnorm = new TBox(pti,1-systnormlo,pti+TAABarWid*1,1+systnormhi);
	//cout<<systnorm<<endl;
	bSystnorm->SetLineColor(16);
	bSystnorm->SetFillColor(16);
	if(drawDRAA) bSystnorm = new TBox(pti,1-systnorm,pti+TAABarWid*1,1+systnorm);
	if(drawChHad) {
		bSystnorm = new TBox(pti+TAABarWid*2.1,1-systnorm,pti+TAABarWid*3.5,1+systnorm);
		bSystnorm->SetLineColor(kAzure+7);
		bSystnorm->SetFillColor(kAzure+7);
		bSystnorm->SetFillColorAlpha(kAzure+7, 0.5);
	}
	if(drawB) bSystnorm->Draw();

	TLatex * tlatexeff2=new TLatex(0.40,0.595,"Centrality 0-100%");
	tlatexeff2->SetNDC();
	tlatexeff2->SetTextColor(1);
	tlatexeff2->SetTextFont(42);
	tlatexeff2->SetTextSize(0.050);
	//tlatexeff2->Draw();

	TLatex * texY = new TLatex(0.41,0.53,"|y| < 2.4");
	texY->SetNDC();
	texY->SetTextColor(1);
	texY->SetTextFont(42);
	texY->SetTextSize(0.045);
	texY->SetLineWidth(2);
	//texY->Draw();

	TLatex* texlumi = new TLatex(0.20,0.936,"28.0 pb^{-1} (pp 5.02 TeV) + 351 #mub^{-1} (PbPb 5.02 TeV)");
	texlumi->SetNDC();
	texlumi->SetTextFont(42);
	texlumi->SetTextSize(0.038);
	texlumi->SetLineWidth(2);
	texlumi->Draw();

	TLatex* texB = new TLatex(0.81,0.21,"B^{+}");
	texB->SetNDC();
	texB->SetTextFont(62);
	texB->SetTextSize(0.08);
	texB->SetLineWidth(2);
	texB->Draw();

	TLatex* texcms = new TLatex(0.16,0.90,"CMS");
	texcms->SetNDC();
	texcms->SetTextAlign(13);
	texcms->SetTextFont(62);//61
	texcms->SetTextSize(0.06);
	texcms->SetLineWidth(2);
	texcms->Draw();

	texY = new TLatex(0.81,0.16,"|y| < 2.4");
	texY->SetNDC();
	texY->SetTextFont(42);
	texY->SetTextSize(0.04);
	texY->SetLineWidth(2);
	texY->Draw();

	TLatex* texpre = new TLatex(0.15,0.84,"Preliminary");
	texpre->SetNDC();
	texpre->SetTextAlign(13);
	texpre->SetTextFont(52);
	texpre->SetTextSize(0.05);
	texpre->SetLineWidth(2);
	//texpre->Draw();

    TLegend *legendSigma=new TLegend(0.6036242,0.7474695,0.942953,0.8457592,"");
	if(drawDRAA)legendSigma=new TLegend(0.3936242,0.6574695,0.812953,0.9157592,"");
	if(drawThm)legendSigma=new TLegend(0.15,0.65,0.49,0.85,"");
	adjustLegend(legendSigma);

	//TLegendEntry *ent_SigmaPP=legendSigma->AddEntry(hNuclearModification,"R_{AA} stat. unc.","pf");
	//ent_SigmaPP->SetTextFont(42);
	//ent_SigmaPP->SetLineColor(1);
	//ent_SigmaPP->SetMarkerColor(1);
	//ent_SigmaPP->SetTextSize(0.045);

	//TLegendEntry *ent_Sigmapp=legendSigma->AddEntry(gNuclearModification,"R_{AA} syst.","f");
	//ent_Sigmapp->SetTextFont(42);
	//ent_Sigmapp->SetLineColor(5);
	//ent_Sigmapp->SetMarkerColor(1);
	//ent_Sigmapp->SetTextSize(0.045);

	TLatex* texSystnorm = new TLatex(0.23,0.70,"Global uncert.");
	if(drawDRAA) texSystnorm = new TLatex(0.22,0.70,"Global uncert.");
	texSystnorm->SetNDC();
	texSystnorm->SetTextColor(1);
	texSystnorm->SetTextFont(42);
	texSystnorm->SetTextSize(0.04);
	texSystnorm->SetLineWidth(2);
	//texSystnorm->Draw();

	texSystnorm = new TLatex(0.23,0.66,"uncertainty");
	if(drawDRAA) texSystnorm = new TLatex(0.22,0.66,"uncertainty");
	texSystnorm->SetNDC();
	texSystnorm->SetTextColor(1);
	texSystnorm->SetTextFont(42);
	texSystnorm->SetTextSize(0.035);
	texSystnorm->SetLineWidth(2);
	//texSystnorm->Draw();

	if(drawChHad){
		//RAA_0_100();
		RpPb_Final_20161207();
		TGraphAsymmErrors* gChHadDummy = new TGraphAsymmErrors();
		gChHadDummy->SetFillColor(TColor::GetColor("#ffcc00"));
		TLegendEntry *ent_ChHad = legendSigma->AddEntry(gChHadDummy,"charged hadrons |y| < 1.0","pf");
		ent_ChHad->SetTextFont(42);
		ent_ChHad->SetLineColor(4);
		ent_ChHad->SetMarkerColor(4);
		ent_ChHad->SetTextSize(0.038);
		systnorm = sqrt(0.089*0.089+0.023*0.023);
		bSystnorm = new TBox(pti,1-systnorm,pti+TAABarWid*1,1+systnorm);
		bSystnorm->SetLineColor(TColor::GetColor("#ffcc00"));
		bSystnorm->SetFillColor(TColor::GetColor("#ffcc00"));
		bSystnorm->Draw();
	}

	if(drawDRAA){
		TGraphAsymmErrors* gDNuclearModification = new TGraphAsymmErrors();
		Draw_DRAA(canvasRAA, gDNuclearModification);
		//canvasRAA_0_100_20161207(canvasRAA, gDNuclearModification);
		gDNuclearModification->SetFillColor(kGreen-9);
		gDNuclearModification->SetFillColorAlpha(kGreen-9, 0.5);
		gDNuclearModification->SetMarkerStyle(21);
		gDNuclearModification->SetMarkerColor(kGreen+3);
		TLegendEntry *ent_Dhighpt = legendSigma->AddEntry(gDNuclearModification,"D^{0} |y| < 1.0","pf");
		ent_Dhighpt->SetTextFont(42);
		ent_Dhighpt->SetMarkerColor(4);
		ent_Dhighpt->SetTextSize(0.038);
		systnormhi = normalizationUncertaintyForRAA(1)*1.e-2;
		systnormlo = normalizationUncertaintyForRAA(0)*1.e-2;
		bSystnorm = new TBox(pti+TAABarWid*1,1-systnormlo,pti+TAABarWid*2.1,1+systnormhi);
		bSystnorm->SetLineColor(kGreen-9);
		bSystnorm->SetFillColor(kGreen-9);
		bSystnorm->SetFillColorAlpha(kGreen-9, 0.5);
		bSystnorm->Draw();
	}

	TLegendEntry *ent_B;
	TLegendEntry *ent_uncCor;
	TLegendEntry *ent_uncUncor;
	TLegendEntry *ent_unc;
	TLegendEntry *ent_uncGlo;
	if(drawB) {
		ent_B = legendSigma->AddEntry(gNuclearModification_UnCor,"R_{AA}","pe");
		ent_B->SetTextFont(42);
		ent_B->SetLineColor(4);
		ent_B->SetMarkerColor(4);
		ent_B->SetTextSize(0.038);

		if(BSepSys){
			ent_uncCor = legendSigma->AddEntry(gNuclearModification_Cor,"Correlated syst. uncert.","f");
			ent_uncCor->SetTextFont(42);
			ent_uncCor->SetLineColor(4);
			ent_uncCor->SetMarkerColor(4);
			ent_uncCor->SetTextSize(0.03);

			ent_uncUncor = legendSigma->AddEntry(gNuclearModification_UnCor,"Uncorrelated syst. uncert.","f");
			ent_uncUncor->SetTextFont(42);
			ent_uncUncor->SetLineColor(4);
			ent_uncUncor->SetMarkerColor(4);
			ent_uncUncor->SetTextSize(0.03);
		}
		else{
			ent_unc = legendSigma->AddEntry(gNuclearModification,"Syst. uncert.","f");
			ent_unc->SetTextFont(42);
			ent_unc->SetLineColor(4);
			ent_unc->SetMarkerColor(4);
			ent_unc->SetTextSize(0.03);
		}

		TBox* dummybox = new TBox();
		dummybox->SetFillColor(16);
		dummybox->SetLineColor(16);
		dummybox->SetLineWidth(0);
		//ent_uncGlo = legendSigma->AddEntry(dummybox,"T_{AA} + L_{pp} uncert.","f");
		ent_uncGlo = legendSigma->AddEntry(dummybox,"Global uncert.","f");
		ent_uncGlo->SetTextFont(42);
		ent_uncGlo->SetTextSize(0.03);

		//TMathText mt;
		//mt.SetTextAlign(23);
		//mt.SetTextSize(0.06);
		//mt.DrawMathText(0.80,0.80,"\\delta");
	}
	TLegendEntry *ent_BpA;
	if(drawBRpA){
		TGraphAsymmErrors* gBpADummy = new TGraphAsymmErrors();
		gBpADummy->SetFillColor(5);
		gBpADummy->SetMarkerStyle(21);
		ent_BpA = legendSigma->AddEntry(gBpADummy,"B^{+} R_{pA} (5.02 TeV)","pf");
	}

	if(drawJpsi){
		//expBeautyCMS_20161208();
		expBeautyCMS_20170201();
		TGraphAsymmErrors* gChHadDummy = new TGraphAsymmErrors();
		gChHadDummy->SetFillColor(925);
		gChHadDummy->SetMarkerColor(kGray+3);
		gChHadDummy->SetMarkerStyle(34);
		gChHadDummy->SetMarkerSize(1.5);
		gChHadDummy->SetFillColor(kGray+2);
		gChHadDummy->SetFillColorAlpha(kGray+2, 0.5);
		TLegendEntry *ent_ChHad = legendSigma->AddEntry(gChHadDummy,"nonprompt J/#psi 1.6 < |y| < 2.4 (2.76 TeV)","pf");
		ent_ChHad->SetTextSize(0.029);
		TGraphAsymmErrors* gChHadDummy2 = new TGraphAsymmErrors();
		gChHadDummy2->SetFillColor(924);
		gChHadDummy2->SetMarkerColor(kGray+3);
		gChHadDummy2->SetMarkerStyle(29);
		gChHadDummy2->SetMarkerSize(1.5);
		gChHadDummy2->SetFillColor(kGray+2);
		gChHadDummy2->SetFillColorAlpha(kGray+2, 0.5);
		TLegendEntry *ent_ChHad2 = legendSigma->AddEntry(gChHadDummy2,"nonprompt J/#psi |y| < 2.4 (2.76 TeV)","pf");
		ent_ChHad2->SetTextSize(0.029);
		systnorm = 0.075;
		bSystnorm = new TBox(pti+TAABarWid*3.5,0.9249388,pti+TAABarWid*5.,1.075061);
		bSystnorm->SetLineColor(kGray+2);
		bSystnorm->SetFillColor(kGray+2);
		bSystnorm->SetFillColorAlpha(kGray+2, 0.5);
		bSystnorm->Draw();
		texlumi = new TLatex(0.13,0.936,"350.68 #mub^{-1} (5.02 TeV PbPb)");
		texlumi->SetNDC();
		texlumi->SetTextFont(42);
		texlumi->SetTextSize(0.038);
		texlumi->SetLineWidth(2);
		texlumi->Draw();
	}

	if(drawBRpA){
		//DrawBRpAFONLL();
		DrawBRpA();
	}

	TLegend *legendThm=new TLegend(0.71,0.78,0.95,0.915,"");
	TLegend *legendAds=new TLegend(0.71,0.64,0.95,0.78,"");
	if(drawThm){
		adjustLegend(legendThm);
		adjustLegend(legendAds);
		plotTheory();
		TGraphAsymmErrors* gThmDummy1 = new TGraphAsymmErrors();
		TGraphAsymmErrors* gThmDummy2 = new TGraphAsymmErrors();
		TGraphAsymmErrors* gThmDummy3 = new TGraphAsymmErrors();
		TGraphAsymmErrors* gThmDummy4 = new TGraphAsymmErrors();
		TGraphAsymmErrors* gThmDummy5 = new TGraphAsymmErrors();
		gThmDummy1->SetLineColor(kOrange+8);
		gThmDummy2->SetLineColor(kRed-4);
		gThmDummy3->SetLineColor(0);
		gThmDummy4->SetLineColor(0);
		gThmDummy5->SetLineColor(0);
		gThmDummy3->SetFillColorAlpha(kYellow+2,0.5);
		gThmDummy4->SetFillColorAlpha(kViolet-8,0.5);
		gThmDummy5->SetFillColorAlpha(kGreen-2,0.5);
		gThmDummy1->SetLineWidth(4.5);
		gThmDummy2->SetLineWidth(4.5);
		gThmDummy2->SetLineStyle(6);
		gThmDummy3->SetFillStyle(3344);
		gThmDummy4->SetFillStyle(3352);
		gThmDummy5->SetFillStyle(3325);
		TLegendEntry *ent_thm1 = legendThm->AddEntry(gThmDummy1,"TAMU","l");
		TLegendEntry *ent_thm2 = legendThm->AddEntry(gThmDummy2,"Djordjevic","l");
		TLegendEntry *ent_thm3 = legendThm->AddEntry(gThmDummy3,"CUJET3.0","f");
		legendAds->SetHeader("AdS/CFT HH");
		TLegendEntry *ent_thm4 = legendAds->AddEntry(gThmDummy4,"D(p)","f");
		TLegendEntry *ent_thm5 = legendAds->AddEntry(gThmDummy5,"D = const","f");
		ent_thm1->SetTextSize(0.038);
		ent_thm2->SetTextSize(0.038);
		ent_thm3->SetTextSize(0.038);
		ent_thm4->SetTextSize(0.038);
		ent_thm5->SetTextSize(0.038);
	}

	if(drawB){
		if(BSepSys){
			gNuclearModification_UnCor->Draw("5same");
			gNuclearModification_Cor->Draw("5same");
		}
		else 
			gNuclearModification->Draw("5same");
		hNuclearModification->Draw("same");
	}

	//DrawPoints at the very last again
	if(drawChHad){
		RpPb_Final_20161207(1);
	}
	if(drawDRAA){
		TGraphAsymmErrors* gDNuclearModification = new TGraphAsymmErrors();
		Draw_DRAA(canvasRAA, gDNuclearModification, 1);
	}
	if(drawJpsi){
		expBeautyCMS_20170201(1);
	} 
	if(drawB){
		hNuclearModification->Draw("same p");
	}

	legendSigma->Draw();
	if(drawThm) {
		legendThm->Draw();
		legendAds->Draw();
	}
	texB->Draw();

	canvasRAA->Update();
	canvasRAA->RedrawAxis();

	TString AddOn = "";
	if(BSepSys){
		AddOn = AddOn += "_SepUnc";
	}
	if(!drawB){
		AddOn = AddOn += "_NoB";
	}
	if(drawDRAA){
		AddOn = AddOn += "_DRAA";
	}
	if(drawChHad){
		AddOn = AddOn += "_ChHadRAA";
	}
	if(drawJpsi){
		AddOn = AddOn += "_NPJpsiRAA";
	}
	if(drawThm){
		AddOn = AddOn += "_ThmRAA";
	}
	if(drawBRpA){
		AddOn = AddOn += "_RpA";
	}


	canvasRAA->SaveAs(Form("plotRAA/canvasRAA%s_%.0f_%.0f%s.pdf",label.Data(),centMin,centMax,AddOn.Data()));
	canvasRAA->SaveAs(Form("plotRAA/canvasRAA%s_%.0f_%.0f%s.png",label.Data(),centMin,centMax,AddOn.Data()));
	canvasRAA->SaveAs(Form("plotRAA/canvasRAA%s_%.0f_%.0f%s.eps",label.Data(),centMin,centMax,AddOn.Data()));
	canvasRAA->SaveAs(Form("plotRAA/canvasRAA%s_%.0f_%.0f%s.C",label.Data(),centMin,centMax,AddOn.Data()));
	TFile *fRAA=new TFile(outputfile.Data(),"recreate");
	fRAA->cd();
	gNuclearModification->Write();
	gNuclearModification_UnCor->Write();
	gNuclearModification_Cor->Write();
	hNuclearModification->Write();

}


int main(int argc, char *argv[])
{
	if(argc==7)
	{
		NuclearModificationFactor(argv[1], argv[2], argv[3], argv[4], atof(argv[5]), atof(argv[6]));
		return 0;
	}
	else
	{
		std::cout << "Wrong number of inputs" << std::endl;
		return 1;
	}
}

void adjustLegend(TLegend* l){
	l->SetBorderSize(0);
	l->SetLineColor(0);
	l->SetFillColor(0);
	l->SetFillStyle(1001);
	l->SetTextFont(42);
	l->SetTextSize(0.04);
}
