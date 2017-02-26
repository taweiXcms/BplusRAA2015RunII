#include "TH1.h"
#include "TCanvas.h"
#include <iostream>
#include <algorithm>    // std::max

using namespace std;

float ppPar[5][3] = 
{{0.047832, 0.351114, 0.018229},
{0.018122, 0.726449, 0.049054},
{0.045930, 0.277067, 0.017403},
{0.048388, 0.241163, 0.017894},
{0.046620, 0.256964, 0.018085}};

float pbpbPar[5][3] =
{{0.016525, 0.649603, 0.034644}, 
{0.036360, 0.234178, 0.017061},
{0.034561, 0.316349, 0.016297},
{0.035849, 0.298891, 0.016806},
{0.036663, 0.283046, 0.017135}};
const int nBins=5;
double ptBins[nBins+1] = {7.,10.,15.,20.,30,50};
TH1D* wid1 = new TH1D("width","",nBins,ptBins);
string s;

void plot(){
	s = "ppLargerWidth";
	s = "ppNarrowerWidth";
	s = "pbpbLargerWidth";
	s = "pbpbNarrowerWidth";
	TCanvas*canvas1D=new TCanvas("canvas1D","",600,600);
	canvas1D->cd();
	for(int i = 0;  i < nBins; i ++){
		if(s == "ppLargerWidth"){
			wid1->SetBinContent(i+1, max(ppPar[i][0], ppPar[i][2]));
			wid1->SetTitle("pp Larger Width");
		}
		if(s == "ppNarrowerWidth"){
			wid1->SetBinContent(i+1, min(ppPar[i][0], ppPar[i][2]));
			wid1->SetTitle("pp Narrower Width");
		}
		if(s == "pbpbLargerWidth"){
			wid1->SetBinContent(i+1, max(pbpbPar[i][0], pbpbPar[i][2]));
			wid1->SetTitle("PbPb Larger Width");
		}
		if(s == "pbpbNarrowerWidth"){
			wid1->SetBinContent(i+1, min(pbpbPar[i][0], pbpbPar[i][2]));
			wid1->SetTitle("PbPb Narrower Width");
		}
	}
	wid1->GetXaxis()->SetTitle("GeV/c^{2}");
	wid1->SetMaximum(0.1);
	wid1->SetMinimum(0);
	wid1->Draw("");
	canvas1D->SaveAs(Form("%s.pdf", s.c_str()));
	canvas1D->SaveAs(Form("%s.png", s.c_str()));
}	
