void canvasSigmaBplusRatiopp()
{
//=========Macro generated from canvas: cSigma/
//=========  (Mon Sep 11 23:40:52 2017) by ROOT version6.02/13
   TCanvas *cSigma = new TCanvas("cSigma", "",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cSigma->SetHighLightColor(2);
   cSigma->Range(-1.989924,-0.2917772,25.49622,2.212202);
   cSigma->SetFillColor(0);
   cSigma->SetBorderMode(0);
   cSigma->SetBorderSize(2);
   cSigma->SetLogy();
   cSigma->SetLeftMargin(0.1451613);
   cSigma->SetRightMargin(0.05443548);
   cSigma->SetTopMargin(0.08474576);
   cSigma->SetBottomMargin(0);
   cSigma->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pSigma
   TPad *pSigma = new TPad("pSigma", "",0,0.3,1,1);
   pSigma->Draw();
   pSigma->cd();
   pSigma->Range(-7.612091,3,58.60453,7.37037);
   pSigma->SetFillColor(0);
   pSigma->SetBorderMode(0);
   pSigma->SetBorderSize(2);
   pSigma->SetLogy();
   pSigma->SetLeftMargin(0.1451613);
   pSigma->SetRightMargin(0.05443548);
   pSigma->SetTopMargin(0.08474576);
   pSigma->SetBottomMargin(0);
   pSigma->SetFrameBorderMode(0);
   pSigma->SetFrameBorderMode(0);
   
   TH2F *hemptySigma1 = new TH2F("hemptySigma1","",50,2,55,10,1000,1e+07);
   hemptySigma1->SetMinimum(0);
   hemptySigma1->SetMaximum(2);
   hemptySigma1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hemptySigma1->SetLineColor(ci);
   hemptySigma1->SetMarkerStyle(20);
   hemptySigma1->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hemptySigma1->GetXaxis()->CenterTitle(true);
   hemptySigma1->GetXaxis()->SetLabelFont(42);
   hemptySigma1->GetXaxis()->SetLabelOffset(0.0015);
   hemptySigma1->GetXaxis()->SetLabelSize(0.036);
   hemptySigma1->GetXaxis()->SetTitleSize(0.036);
   hemptySigma1->GetXaxis()->SetTitleFont(42);
   hemptySigma1->GetYaxis()->SetTitle("#frac{d#sigma}{dp_{T}} ( pb GeV^{-1}c)");
   hemptySigma1->GetYaxis()->CenterTitle(true);
   hemptySigma1->GetYaxis()->SetLabelFont(42);
   hemptySigma1->GetYaxis()->SetLabelSize(0.06);
   hemptySigma1->GetYaxis()->SetTitleSize(0.06);
   hemptySigma1->GetYaxis()->SetTitleFont(42);
   hemptySigma1->GetZaxis()->SetLabelFont(42);
   hemptySigma1->GetZaxis()->SetLabelSize(0.035);
   hemptySigma1->GetZaxis()->SetTitleSize(0.035);
   hemptySigma1->GetZaxis()->SetTitleFont(42);
   hemptySigma1->Draw("");
   
   Double_t gaeSigmaBplus_fx3001[5] = {
   8.5,
   12.5,
   17.5,
   25,
   40};
   Double_t gaeSigmaBplus_fy3001[5] = {
   2072970,
   657899.4,
   180053,
   42783.27,
   5127.144};
   Double_t gaeSigmaBplus_felx3001[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeSigmaBplus_fely3001[5] = {
   507555.7,
   151098.6,
   37247.09,
   7837.314,
   785.8247};
   Double_t gaeSigmaBplus_fehx3001[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeSigmaBplus_fehy3001[5] = {
   823867.9,
   235570.7,
   54725.67,
   10791.12,
   984.8425};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,gaeSigmaBplus_fx3001,gaeSigmaBplus_fy3001,gaeSigmaBplus_felx3001,gaeSigmaBplus_fehx3001,gaeSigmaBplus_fely3001,gaeSigmaBplus_fehy3001);
   grae->SetName("gaeSigmaBplus");
   grae->SetTitle(";p_{T}(GeV/c);d#sigma/dp_{T} (D^{0}) (pb GeV-1c)");

   ci = TColor::GetColor("#ffcc00");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(3);
   
   TH1F *Graph_gaeSigmaBplus3001 = new TH1F("Graph_gaeSigmaBplus3001","",100,2.7,54.3);
   Graph_gaeSigmaBplus3001->SetMinimum(3907.188);
   Graph_gaeSigmaBplus3001->SetMaximum(3186087);
   Graph_gaeSigmaBplus3001->SetDirectory(0);
   Graph_gaeSigmaBplus3001->SetStats(0);
   Graph_gaeSigmaBplus3001->GetXaxis()->SetTitle("p_{T}(GeV/c)");
   Graph_gaeSigmaBplus3001->GetYaxis()->SetTitle("d#sigma/dp_{T} (D^{0}) (pb GeV-1c)");
   grae->SetHistogram(Graph_gaeSigmaBplus3001);
   
   grae->Draw("5");
   Double_t xAxis1[6] = {7, 10, 15, 20, 30, 50}; 
   
   TH1D *hPtSigma2 = new TH1D("hPtSigma2","",5, xAxis1);
   hPtSigma2->SetBinContent(1,2606494);
   hPtSigma2->SetBinContent(2,744298.6);
   hPtSigma2->SetBinContent(3,196975.9);
   hPtSigma2->SetBinContent(4,46489.87);
   hPtSigma2->SetBinContent(5,5342.301);
   hPtSigma2->SetBinError(1,167077.5);
   hPtSigma2->SetBinError(2,29079.39);
   hPtSigma2->SetBinError(3,9029.711);
   hPtSigma2->SetBinError(4,2439.138);
   hPtSigma2->SetBinError(5,495.0301);
   hPtSigma2->SetEntries(449.1478);
   hPtSigma2->SetLineWidth(2);
   hPtSigma2->SetMarkerStyle(20);
   hPtSigma2->SetMarkerSize(1.2);
   hPtSigma2->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hPtSigma2->GetXaxis()->SetLabelFont(42);
   hPtSigma2->GetXaxis()->SetLabelSize(0.035);
   hPtSigma2->GetXaxis()->SetTitleSize(0.035);
   hPtSigma2->GetXaxis()->SetTitleFont(42);
   hPtSigma2->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hPtSigma2->GetYaxis()->SetLabelFont(42);
   hPtSigma2->GetYaxis()->SetLabelSize(0.035);
   hPtSigma2->GetYaxis()->SetTitleSize(0.035);
   hPtSigma2->GetYaxis()->SetTitleFont(42);
   hPtSigma2->GetZaxis()->SetLabelFont(42);
   hPtSigma2->GetZaxis()->SetLabelSize(0.035);
   hPtSigma2->GetZaxis()->SetTitleSize(0.035);
   hPtSigma2->GetZaxis()->SetTitleFont(42);
   hPtSigma2->Draw("epsame");
   
   Double_t gaeCrossSyst_fx3002[5] = {
   8.5,
   12.5,
   17.5,
   25,
   40};
   Double_t gaeCrossSyst_fy3002[5] = {
   2606494,
   744298.6,
   196975.9,
   46489.87,
   5342.301};
   Double_t gaeCrossSyst_felx3002[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeCrossSyst_fely3002[5] = {
   234401,
   59381.62,
   15208.98,
   3533.588,
   401.8008};
   Double_t gaeCrossSyst_fehx3002[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeCrossSyst_fehy3002[5] = {
   234401,
   59381.62,
   15208.98,
   3533.588,
   401.8008};
   grae = new TGraphAsymmErrors(5,gaeCrossSyst_fx3002,gaeCrossSyst_fy3002,gaeCrossSyst_felx3002,gaeCrossSyst_fehx3002,gaeCrossSyst_fely3002,gaeCrossSyst_fehy3002);
   grae->SetName("gaeCrossSyst");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_gaeCrossSyst3002 = new TH1F("Graph_gaeCrossSyst3002","Graph",100,2.7,54.3);
   Graph_gaeCrossSyst3002->SetMinimum(4446.451);
   Graph_gaeCrossSyst3002->SetMaximum(3124490);
   Graph_gaeCrossSyst3002->SetDirectory(0);
   Graph_gaeCrossSyst3002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gaeCrossSyst3002->SetLineColor(ci);
   Graph_gaeCrossSyst3002->SetMarkerStyle(20);
   Graph_gaeCrossSyst3002->GetXaxis()->SetLabelFont(42);
   Graph_gaeCrossSyst3002->GetXaxis()->SetLabelSize(0.035);
   Graph_gaeCrossSyst3002->GetXaxis()->SetTitleSize(0.035);
   Graph_gaeCrossSyst3002->GetXaxis()->SetTitleFont(42);
   Graph_gaeCrossSyst3002->GetYaxis()->SetLabelFont(42);
   Graph_gaeCrossSyst3002->GetYaxis()->SetLabelSize(0.035);
   Graph_gaeCrossSyst3002->GetYaxis()->SetTitleSize(0.035);
   Graph_gaeCrossSyst3002->GetYaxis()->SetTitleFont(42);
   Graph_gaeCrossSyst3002->GetZaxis()->SetLabelFont(42);
   Graph_gaeCrossSyst3002->GetZaxis()->SetLabelSize(0.035);
   Graph_gaeCrossSyst3002->GetZaxis()->SetTitleSize(0.035);
   Graph_gaeCrossSyst3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gaeCrossSyst3002);
   
   grae->Draw("5");
   TLatex *   tex = new TLatex(0.18,0.87,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextSize(0.08);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9,0.936,"28.0 pb^{-1} (pp 5.02 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.53,0.65,"|y| < 2.4");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.77,0.82,"B^{#pm}");
tex->SetNDC();
   tex->SetTextSize(0.09);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.53,0.59,"Global uncert. 3.8%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.52,0.7,0.85,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("hPtSigma","Data","pf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gaeSigmaBplus","FONLL","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pSigma->Modified();
   cSigma->cd();
  
// ------------>Primitives in pad: pRatio
   TPad *pRatio = new TPad("pRatio", "",0,0,1,0.3);
   pRatio->Draw();
   pRatio->cd();
   pRatio->Range(-7.612091,-0.4857143,58.60453,1.8);
   pRatio->SetFillColor(0);
   pRatio->SetBorderMode(0);
   pRatio->SetBorderSize(2);
   pRatio->SetLeftMargin(0.1451613);
   pRatio->SetRightMargin(0.05443548);
   pRatio->SetTopMargin(0);
   pRatio->SetBottomMargin(0.3);
   pRatio->SetFrameBorderMode(0);
   pRatio->SetFrameBorderMode(0);
   
   TH2F *hemptyRatio3 = new TH2F("hemptyRatio3","",50,2,55,10,0.2,1.8);
   hemptyRatio3->SetStats(0);

   ci = TColor::GetColor("#000099");
   hemptyRatio3->SetLineColor(ci);
   hemptyRatio3->SetMarkerStyle(20);
   hemptyRatio3->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hemptyRatio3->GetXaxis()->CenterTitle(true);
   hemptyRatio3->GetXaxis()->SetLabelFont(42);
   hemptyRatio3->GetXaxis()->SetLabelSize(0.12);
   hemptyRatio3->GetXaxis()->SetTitleSize(0.12);
   hemptyRatio3->GetXaxis()->SetTickLength(0.09999999);
   hemptyRatio3->GetXaxis()->SetTitleFont(42);
   hemptyRatio3->GetYaxis()->SetTitle("Data / FONLL");
   hemptyRatio3->GetYaxis()->CenterTitle(true);
   hemptyRatio3->GetYaxis()->SetNdivisions(505);
   hemptyRatio3->GetYaxis()->SetLabelFont(42);
   hemptyRatio3->GetYaxis()->SetLabelSize(0.12);
   hemptyRatio3->GetYaxis()->SetTitleSize(0.12);
   hemptyRatio3->GetYaxis()->SetTitleOffset(0.5);
   hemptyRatio3->GetYaxis()->SetTitleFont(42);
   hemptyRatio3->GetZaxis()->SetLabelFont(42);
   hemptyRatio3->GetZaxis()->SetLabelSize(0.035);
   hemptyRatio3->GetZaxis()->SetTitleSize(0.035);
   hemptyRatio3->GetZaxis()->SetTitleFont(42);
   hemptyRatio3->Draw("");
   TLine *line = new TLine(2,1,55,1);
   line->SetLineStyle(2);
   line->Draw();
   
   Double_t gaeRatioCrossFONLLunity_fx3003[5] = {
   8.5,
   12.5,
   17.5,
   25,
   40};
   Double_t gaeRatioCrossFONLLunity_fy3003[5] = {
   1,
   1,
   1,
   1,
   1};
   Double_t gaeRatioCrossFONLLunity_felx3003[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeRatioCrossFONLLunity_fely3003[5] = {
   0.2448448,
   0.2296682,
   0.2068673,
   0.1831864,
   0.1532675};
   Double_t gaeRatioCrossFONLLunity_fehx3003[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeRatioCrossFONLLunity_fehy3003[5] = {
   0.3974337,
   0.3580648,
   0.303942,
   0.2522276,
   0.192084};
   grae = new TGraphAsymmErrors(5,gaeRatioCrossFONLLunity_fx3003,gaeRatioCrossFONLLunity_fy3003,gaeRatioCrossFONLLunity_felx3003,gaeRatioCrossFONLLunity_fehx3003,gaeRatioCrossFONLLunity_fely3003,gaeRatioCrossFONLLunity_fehy3003);
   grae->SetName("gaeRatioCrossFONLLunity");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#ffcc00");
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_gaeRatioCrossFONLLunity3003 = new TH1F("Graph_gaeRatioCrossFONLLunity3003","Graph",100,2.7,54.3);
   Graph_gaeRatioCrossFONLLunity3003->SetMinimum(0.6909274);
   Graph_gaeRatioCrossFONLLunity3003->SetMaximum(1.461662);
   Graph_gaeRatioCrossFONLLunity3003->SetDirectory(0);
   Graph_gaeRatioCrossFONLLunity3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gaeRatioCrossFONLLunity3003->SetLineColor(ci);
   Graph_gaeRatioCrossFONLLunity3003->SetMarkerStyle(20);
   Graph_gaeRatioCrossFONLLunity3003->GetXaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLunity3003->GetXaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLunity3003->GetXaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLunity3003->GetXaxis()->SetTitleFont(42);
   Graph_gaeRatioCrossFONLLunity3003->GetYaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLunity3003->GetYaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLunity3003->GetYaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLunity3003->GetYaxis()->SetTitleFont(42);
   Graph_gaeRatioCrossFONLLunity3003->GetZaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLunity3003->GetZaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLunity3003->GetZaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLunity3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gaeRatioCrossFONLLunity3003);
   
   grae->Draw("5");
   
   Double_t gaeRatioCrossFONLLstat_fx3004[5] = {
   8.5,
   12.5,
   17.5,
   25,
   40};
   Double_t gaeRatioCrossFONLLstat_fy3004[5] = {
   1.257372,
   1.131326,
   1.093988,
   1.086637,
   1.041964};
   Double_t gaeRatioCrossFONLLstat_felx3004[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeRatioCrossFONLLstat_fely3004[5] = {
   0.08059815,
   0.04420036,
   0.05015029,
   0.05701149,
   0.09655085};
   Double_t gaeRatioCrossFONLLstat_fehx3004[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeRatioCrossFONLLstat_fehy3004[5] = {
   0.08059815,
   0.04420036,
   0.05015029,
   0.05701149,
   0.09655085};
   grae = new TGraphAsymmErrors(5,gaeRatioCrossFONLLstat_fx3004,gaeRatioCrossFONLLstat_fy3004,gaeRatioCrossFONLLstat_felx3004,gaeRatioCrossFONLLstat_fehx3004,gaeRatioCrossFONLLstat_fely3004,gaeRatioCrossFONLLstat_fehy3004);
   grae->SetName("gaeRatioCrossFONLLstat");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(0.8);
   
   TH1F *Graph_gaeRatioCrossFONLLstat3004 = new TH1F("Graph_gaeRatioCrossFONLLstat3004","Graph",100,2.7,54.3);
   Graph_gaeRatioCrossFONLLstat3004->SetMinimum(0.9061578);
   Graph_gaeRatioCrossFONLLstat3004->SetMaximum(1.377226);
   Graph_gaeRatioCrossFONLLstat3004->SetDirectory(0);
   Graph_gaeRatioCrossFONLLstat3004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gaeRatioCrossFONLLstat3004->SetLineColor(ci);
   Graph_gaeRatioCrossFONLLstat3004->SetMarkerStyle(20);
   Graph_gaeRatioCrossFONLLstat3004->GetXaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLstat3004->GetXaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLstat3004->GetXaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLstat3004->GetXaxis()->SetTitleFont(42);
   Graph_gaeRatioCrossFONLLstat3004->GetYaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLstat3004->GetYaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLstat3004->GetYaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLstat3004->GetYaxis()->SetTitleFont(42);
   Graph_gaeRatioCrossFONLLstat3004->GetZaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLstat3004->GetZaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLstat3004->GetZaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLstat3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gaeRatioCrossFONLLstat3004);
   
   grae->Draw("ep");
   
   Double_t gaeRatioCrossFONLLsyst_fx3005[5] = {
   8.5,
   12.5,
   17.5,
   25,
   40};
   Double_t gaeRatioCrossFONLLsyst_fy3005[5] = {
   1.257372,
   1.131326,
   1.093988,
   1.086637,
   1.041964};
   Double_t gaeRatioCrossFONLLsyst_felx3005[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeRatioCrossFONLLsyst_fely3005[5] = {
   0.113075,
   0.09025941,
   0.08446946,
   0.08259276,
   0.07836737};
   Double_t gaeRatioCrossFONLLsyst_fehx3005[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gaeRatioCrossFONLLsyst_fehy3005[5] = {
   0.113075,
   0.09025941,
   0.08446946,
   0.08259276,
   0.07836737};
   grae = new TGraphAsymmErrors(5,gaeRatioCrossFONLLsyst_fx3005,gaeRatioCrossFONLLsyst_fy3005,gaeRatioCrossFONLLsyst_felx3005,gaeRatioCrossFONLLsyst_fehx3005,gaeRatioCrossFONLLsyst_fely3005,gaeRatioCrossFONLLsyst_fehy3005);
   grae->SetName("gaeRatioCrossFONLLsyst");
   grae->SetTitle("Graph");
   grae->SetFillColor(5);
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_gaeRatioCrossFONLLsyst3005 = new TH1F("Graph_gaeRatioCrossFONLLsyst3005","Graph",100,2.7,54.3);
   Graph_gaeRatioCrossFONLLsyst3005->SetMinimum(0.9229119);
   Graph_gaeRatioCrossFONLLsyst3005->SetMaximum(1.411132);
   Graph_gaeRatioCrossFONLLsyst3005->SetDirectory(0);
   Graph_gaeRatioCrossFONLLsyst3005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gaeRatioCrossFONLLsyst3005->SetLineColor(ci);
   Graph_gaeRatioCrossFONLLsyst3005->SetMarkerStyle(20);
   Graph_gaeRatioCrossFONLLsyst3005->GetXaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLsyst3005->GetXaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLsyst3005->GetXaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLsyst3005->GetXaxis()->SetTitleFont(42);
   Graph_gaeRatioCrossFONLLsyst3005->GetYaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLsyst3005->GetYaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLsyst3005->GetYaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLsyst3005->GetYaxis()->SetTitleFont(42);
   Graph_gaeRatioCrossFONLLsyst3005->GetZaxis()->SetLabelFont(42);
   Graph_gaeRatioCrossFONLLsyst3005->GetZaxis()->SetLabelSize(0.035);
   Graph_gaeRatioCrossFONLLsyst3005->GetZaxis()->SetTitleSize(0.035);
   Graph_gaeRatioCrossFONLLsyst3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gaeRatioCrossFONLLsyst3005);
   
   grae->Draw("5");
   pRatio->Modified();
   cSigma->cd();
   cSigma->Modified();
   cSigma->cd();
   cSigma->SetSelected(cSigma);
}
