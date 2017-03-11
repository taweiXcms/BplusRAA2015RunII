void canvasSigma()
{
//=========Macro generated from canvas: canvasSigma/canvasSigma
//=========  (Tue Feb 28 04:10:17 2017) by ROOT version6.02/10
   TCanvas *canvasSigma = new TCanvas("canvasSigma", "canvasSigma",0,0,1128,390);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvasSigma->Range(0,0,1,1);
   canvasSigma->SetFillColor(0);
   canvasSigma->SetBorderMode(0);
   canvasSigma->SetBorderSize(2);
   canvasSigma->SetLogy();
   canvasSigma->SetLeftMargin(0.165);
   canvasSigma->SetRightMargin(0.02);
   canvasSigma->SetTopMargin(0.075);
   canvasSigma->SetBottomMargin(0.145);
   canvasSigma->SetFrameFillStyle(0);
   canvasSigma->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.01,0.342,0.99);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-13.03926,-1.177773,66.59264,3.338738);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(2);
   p_0_0->SetLogy();
   p_0_0->SetLeftMargin(0.165);
   p_0_0->SetRightMargin(0.02);
   p_0_0->SetTopMargin(0.075);
   p_0_0->SetBottomMargin(0.145);
   p_0_0->SetFrameFillStyle(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameFillStyle(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH2F *hempty1 = new TH2F("hempty1","",10,0.1,65,10,0.3,1000);
   hempty1->SetMinimum(0);
   hempty1->SetMaximum(2);
   hempty1->SetDirectory(0);
   hempty1->SetStats(0);
   hempty1->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hempty1->GetXaxis()->CenterTitle(true);
   hempty1->GetXaxis()->SetLabelFont(42);
   hempty1->GetXaxis()->SetLabelSize(0.06);
   hempty1->GetXaxis()->SetTitleSize(0.07);
   hempty1->GetXaxis()->SetTitleOffset(0.9);
   hempty1->GetXaxis()->SetTitleFont(42);
   hempty1->GetYaxis()->SetTitle("d#sigma / dp_{T}(#mub/(GeV/c))");
   hempty1->GetYaxis()->CenterTitle(true);
   hempty1->GetYaxis()->SetLabelFont(42);
   hempty1->GetYaxis()->SetLabelSize(0.06);
   hempty1->GetYaxis()->SetTitleSize(0.07);
   hempty1->GetYaxis()->SetTitleFont(42);
   hempty1->Draw("");
   
   Double_t gSigmasyst_fx3001[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t gSigmasyst_fy3001[5] = {
   149.5382,
   43.80997,
   11.36933,
   4.252444,
   0.8496312};
   Double_t gSigmasyst_felx3001[5] = {
   1.5,
   1.5,
   1.5,
   1.5,
   14};
   Double_t gSigmasyst_fely3001[5] = {
   25.35638,
   7.103779,
   1.837986,
   0.6788545,
   0.1414803};
   Double_t gSigmasyst_fehx3001[5] = {
   1.5,
   1.5,
   1.5,
   1.5,
   14};
   Double_t gSigmasyst_fehy3001[5] = {
   25.35638,
   7.103779,
   1.837986,
   0.6788545,
   0.1414803};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,gSigmasyst_fx3001,gSigmasyst_fy3001,gSigmasyst_felx3001,gSigmasyst_fehx3001,gSigmasyst_fely3001,gSigmasyst_fehy3001);
   grae->SetName("gSigmasyst");
   grae->SetTitle("Sigma syst uncertainty from pPb");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff66");
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_gSigmasyst3001 = new TH1F("Graph_gSigmasyst3001","Sigma syst uncertainty from pPb",100,6.2,63.8);
   Graph_gSigmasyst3001->SetMinimum(0.6373358);
   Graph_gSigmasyst3001->SetMaximum(192.3132);
   Graph_gSigmasyst3001->SetDirectory(0);
   Graph_gSigmasyst3001->SetStats(0);
   grae->SetHistogram(Graph_gSigmasyst3001);
   
   grae->Draw("2e");
   
   Double_t Graph0_fx3002[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t Graph0_fy3002[5] = {
   149.5382,
   43.80997,
   11.36933,
   4.252444,
   0.8496312};
   Double_t Graph0_felx3002[5] = {
   1.5,
   1.5,
   1.5,
   1.5,
   14};
   Double_t Graph0_fely3002[5] = {
   25.35638,
   7.103779,
   1.837986,
   0.6788545,
   0.1414803};
   Double_t Graph0_fehx3002[5] = {
   1.5,
   1.5,
   1.5,
   1.5,
   14};
   Double_t Graph0_fehy3002[5] = {
   25.35638,
   7.103779,
   1.837986,
   0.6788545,
   0.1414803};
   grae = new TGraphAsymmErrors(5,Graph0_fx3002,Graph0_fy3002,Graph0_felx3002,Graph0_fehx3002,Graph0_fely3002,Graph0_fehy3002);
   grae->SetName("Graph0");
   grae->SetTitle("Sigma syst uncertainty from pPb");
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","Sigma syst uncertainty from pPb",100,6.2,63.8);
   Graph_Graph3002->SetMinimum(0.6373358);
   Graph_Graph3002->SetMaximum(192.3132);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("2e");
   Double_t xAxis1[6] = {10, 15, 20, 25, 30, 60}; 
   
   TH1D *hBplusReference2 = new TH1D("hBplusReference2","",5, xAxis1);
   hBplusReference2->SetBinContent(1,136.8431);
   hBplusReference2->SetBinContent(2,37.45103);
   hBplusReference2->SetBinContent(3,12.73422);
   hBplusReference2->SetBinContent(4,5.063625);
   hBplusReference2->SetBinContent(5,0.7611287);
   hBplusReference2->SetEntries(5);
   hBplusReference2->SetStats(0);

   ci = TColor::GetColor("#0066ff");
   hBplusReference2->SetLineColor(ci);
   hBplusReference2->SetLineWidth(2);
   hBplusReference2->Draw("][,same");
   Double_t xAxis2[6] = {10, 15, 20, 25, 30, 60}; 
   
   TH1D *hBplusReferenceEYhigh3 = new TH1D("hBplusReferenceEYhigh3","",5, xAxis2);
   hBplusReferenceEYhigh3->SetBinContent(1,185.8418);
   hBplusReferenceEYhigh3->SetBinContent(2,48.83397);
   hBplusReferenceEYhigh3->SetBinContent(3,16.06217);
   hBplusReferenceEYhigh3->SetBinContent(4,6.224777);
   hBplusReferenceEYhigh3->SetBinContent(5,0.9050704);
   hBplusReferenceEYhigh3->SetEntries(5);
   hBplusReferenceEYhigh3->SetStats(0);

   ci = TColor::GetColor("#0066ff");
   hBplusReferenceEYhigh3->SetLineColor(ci);
   hBplusReferenceEYhigh3->SetLineStyle(2);
   hBplusReferenceEYhigh3->SetLineWidth(2);
   hBplusReferenceEYhigh3->Draw("][,same");
   Double_t xAxis3[6] = {10, 15, 20, 25, 30, 60}; 
   
   TH1D *hBplusReferenceEYlow4 = new TH1D("hBplusReferenceEYlow4","",5, xAxis3);
   hBplusReferenceEYlow4->SetBinContent(1,105.4146);
   hBplusReferenceEYlow4->SetBinContent(2,29.70363);
   hBplusReferenceEYlow4->SetBinContent(3,10.34564);
   hBplusReferenceEYlow4->SetBinContent(4,4.191878);
   hBplusReferenceEYlow4->SetBinContent(5,0.6457119);
   hBplusReferenceEYlow4->SetEntries(5);
   hBplusReferenceEYlow4->SetStats(0);

   ci = TColor::GetColor("#0066ff");
   hBplusReferenceEYlow4->SetLineColor(ci);
   hBplusReferenceEYlow4->SetLineStyle(2);
   hBplusReferenceEYlow4->SetLineWidth(2);
   hBplusReferenceEYlow4->Draw("][,same");
   
   Double_t Graph1_fx3003[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t Graph1_fy3003[5] = {
   149.5382,
   43.80997,
   11.36933,
   4.252444,
   0.8496312};
   Double_t Graph1_felx3003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fely3003[5] = {
   12.15073,
   4.138217,
   1.65052,
   0.9670003,
   0.1594726};
   Double_t Graph1_fehx3003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fehy3003[5] = {
   12.15073,
   4.138217,
   1.65052,
   0.9670003,
   0.1594726};
   grae = new TGraphAsymmErrors(5,Graph1_fx3003,Graph1_fy3003,Graph1_felx3003,Graph1_fehx3003,Graph1_fely3003,Graph1_fehy3003);
   grae->SetName("Graph1");
   grae->SetTitle("Sigma stat uncertainty from pPb");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","Sigma stat uncertainty from pPb",100,9.25,48.25);
   Graph_Graph3003->SetMinimum(0.6211427);
   Graph_Graph3003->SetMaximum(177.7888);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("ep");
   
   TLegend *leg = new TLegend(0.38,0.67,0.68,0.84,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.06);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gSigmasyst","pPb","pf");

   ci = TColor::GetColor("#ffff66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hBplusReference","Scaled FONLL pp ref.","l");

   ci = TColor::GetColor("#0066ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hBplusReferenceEYhigh","FONLL pp ref. uncert.","l");

   ci = TColor::GetColor("#0066ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.19,0.86,"CMS");
tex->SetNDC();
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.41,0.94,"34.6 nb^{-1} (pPb 5.02 TeV)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.65,0.5,"|y_{lab}| < 2.4");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.54,0.6,"Global uncert. 4.7%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9,0.85,"B^{+}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
   p_0_0->Modified();
   canvasSigma->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.342,0.01,0.671,0.99);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(0,0,1,1);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(2);
   p_1_0->SetLogy();
   p_1_0->SetLeftMargin(0.165);
   p_1_0->SetRightMargin(0.02);
   p_1_0->SetTopMargin(0.075);
   p_1_0->SetBottomMargin(0.145);
   p_1_0->SetFrameFillStyle(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->Modified();
   canvasSigma->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.671,0.01,1,0.99);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(0,0,1,1);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(2);
   p_2_0->SetLogy();
   p_2_0->SetLeftMargin(0.165);
   p_2_0->SetRightMargin(0.02);
   p_2_0->SetTopMargin(0.075);
   p_2_0->SetBottomMargin(0.145);
   p_2_0->SetFrameFillStyle(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->Modified();
   canvasSigma->cd();
   canvasSigma->Modified();
   canvasSigma->cd();
   canvasSigma->SetSelected(canvasSigma);
}
