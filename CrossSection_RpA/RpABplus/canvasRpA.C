void canvasRpA()
{
//=========Macro generated from canvas: canvasRpA/canvasRpA
//=========  (Tue Feb 28 04:10:17 2017) by ROOT version6.02/10
   TCanvas *canvasRpA = new TCanvas("canvasRpA", "canvasRpA",0,0,1128,390);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvasRpA->Range(0,0,1,1);
   canvasRpA->SetFillColor(0);
   canvasRpA->SetBorderMode(0);
   canvasRpA->SetBorderSize(2);
   canvasRpA->SetLeftMargin(0.165);
   canvasRpA->SetRightMargin(0.02);
   canvasRpA->SetTopMargin(0.075);
   canvasRpA->SetBottomMargin(0.145);
   canvasRpA->SetFrameFillStyle(0);
   canvasRpA->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: p_0_0
   TPad *p_0_0 = new TPad("p_0_0", "p_0_0",0,0.01,0.342,0.99);
   p_0_0->Draw();
   p_0_0->cd();
   p_0_0->Range(-12.4319,-0.5576923,63.51902,3.288462);
   p_0_0->SetFillColor(0);
   p_0_0->SetBorderMode(0);
   p_0_0->SetBorderSize(2);
   p_0_0->SetLeftMargin(0.165);
   p_0_0->SetRightMargin(0.02);
   p_0_0->SetTopMargin(0.075);
   p_0_0->SetBottomMargin(0.145);
   p_0_0->SetFrameFillStyle(0);
   p_0_0->SetFrameBorderMode(0);
   p_0_0->SetFrameFillStyle(0);
   p_0_0->SetFrameBorderMode(0);
   
   TH2F *hempty5 = new TH2F("hempty5","",10,0.1,62,30,0,3);
   hempty5->SetMinimum(0);
   hempty5->SetMaximum(3);
   hempty5->SetStats(0);
   hempty5->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hempty5->GetXaxis()->CenterTitle(true);
   hempty5->GetXaxis()->SetLabelFont(42);
   hempty5->GetXaxis()->SetLabelSize(0.06);
   hempty5->GetXaxis()->SetTitleSize(0.07);
   hempty5->GetXaxis()->SetTitleOffset(0.9);
   hempty5->GetXaxis()->SetTitleFont(42);
   hempty5->GetYaxis()->SetTitle("R^{FONLL}_{pA}");
   hempty5->GetYaxis()->CenterTitle(true);
   hempty5->GetYaxis()->SetLabelFont(42);
   hempty5->GetYaxis()->SetLabelSize(0.06);
   hempty5->GetYaxis()->SetTitleSize(0.07);
   hempty5->GetYaxis()->SetTitleFont(42);
   hempty5->Draw("");
   
   Double_t Graph0_fx3004[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t Graph0_fy3004[5] = {
   0.9659208,
   1.069293,
   0.7747728,
   0.876683,
   1.091473};
   Double_t Graph0_felx3004[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t Graph0_fely3004[5] = {
   0.2548944,
   0.2495598,
   0.1608088,
   0.1639167,
   0.1742041};
   Double_t Graph0_fehx3004[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t Graph0_fehy3004[5] = {
   0.2890554,
   0.2801409,
   0.1798253,
   0.1834407,
   0.1966067};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph0_fx3004,Graph0_fy3004,Graph0_felx3004,Graph0_fehx3004,Graph0_fely3004,Graph0_fehy3004);
   grae->SetName("Graph0");
   grae->SetTitle("RpA syst uncertainty from FONLL reference");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0066ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerColor(4);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","RpA syst uncertainty from FONLL reference",100,5,65);
   Graph_Graph3004->SetMinimum(0.5404171);
   Graph_Graph3004->SetMaximum(1.42298);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("2");
   
   Double_t Graph1_fx3005[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t Graph1_fy3005[5] = {
   0.9659208,
   1.069293,
   0.7747728,
   0.876683,
   1.091473};
   Double_t Graph1_felx3005[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t Graph1_fely3005[5] = {
   0.2548944,
   0.2495598,
   0.1608088,
   0.1639167,
   0.1742041};
   Double_t Graph1_fehx3005[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t Graph1_fehy3005[5] = {
   0.2890554,
   0.2801409,
   0.1798253,
   0.1834407,
   0.1966067};
   grae = new TGraphAsymmErrors(5,Graph1_fx3005,Graph1_fy3005,Graph1_felx3005,Graph1_fehx3005,Graph1_fely3005,Graph1_fehy3005);
   grae->SetName("Graph1");
   grae->SetTitle("RpA syst uncertainty from FONLL reference");
   grae->SetFillStyle(0);

   ci = TColor::GetColor("#0066ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","RpA syst uncertainty from FONLL reference",100,5,65);
   Graph_Graph3005->SetMinimum(0.5404171);
   Graph_Graph3005->SetMaximum(1.42298);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("2");
   
   Double_t gRpAsyst_fx3006[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t gRpAsyst_fy3006[5] = {
   0.9659208,
   1.069293,
   0.7747728,
   0.876683,
   1.091473};
   Double_t gRpAsyst_felx3006[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t gRpAsyst_fely3006[5] = {
   0.163786,
   0.1733856,
   0.1252511,
   0.1399525,
   0.1817517};
   Double_t gRpAsyst_fehx3006[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t gRpAsyst_fehy3006[5] = {
   0.163786,
   0.1733856,
   0.1252511,
   0.1399525,
   0.1817517};
   grae = new TGraphAsymmErrors(5,gRpAsyst_fx3006,gRpAsyst_fy3006,gRpAsyst_felx3006,gRpAsyst_fehx3006,gRpAsyst_fely3006,gRpAsyst_fehy3006);
   grae->SetName("gRpAsyst");
   grae->SetTitle("RpA syst uncertainty from pPb");

   ci = TColor::GetColor("#ffff66");
   grae->SetFillColor(ci);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_gRpAsyst3006 = new TH1F("Graph_gRpAsyst3006","RpA syst uncertainty from pPb",100,5,65);
   Graph_gRpAsyst3006->SetMinimum(0.5871515);
   Graph_gRpAsyst3006->SetMaximum(1.335595);
   Graph_gRpAsyst3006->SetDirectory(0);
   Graph_gRpAsyst3006->SetStats(0);
   grae->SetHistogram(Graph_gRpAsyst3006);
   
   grae->Draw("2e");
   
   Double_t gRpAsyst_fx3007[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t gRpAsyst_fy3007[5] = {
   0.9659208,
   1.069293,
   0.7747728,
   0.876683,
   1.091473};
   Double_t gRpAsyst_felx3007[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t gRpAsyst_fely3007[5] = {
   0.163786,
   0.1733856,
   0.1252511,
   0.1399525,
   0.1817517};
   Double_t gRpAsyst_fehx3007[5] = {
   2.5,
   2.5,
   2.5,
   2.5,
   15};
   Double_t gRpAsyst_fehy3007[5] = {
   0.163786,
   0.1733856,
   0.1252511,
   0.1399525,
   0.1817517};
   grae = new TGraphAsymmErrors(5,gRpAsyst_fx3007,gRpAsyst_fy3007,gRpAsyst_felx3007,gRpAsyst_fehx3007,gRpAsyst_fely3007,gRpAsyst_fehy3007);
   grae->SetName("gRpAsyst");
   grae->SetTitle("RpA syst uncertainty from pPb");
   grae->SetFillStyle(0);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(25);
   
   TH1F *Graph_gRpAsyst3007 = new TH1F("Graph_gRpAsyst3007","RpA syst uncertainty from pPb",100,5,65);
   Graph_gRpAsyst3007->SetMinimum(0.5871515);
   Graph_gRpAsyst3007->SetMaximum(1.335595);
   Graph_gRpAsyst3007->SetDirectory(0);
   Graph_gRpAsyst3007->SetStats(0);
   grae->SetHistogram(Graph_gRpAsyst3007);
   
   grae->Draw("2e");
   
   Double_t Graph2_fx3008[5] = {
   12.5,
   17.5,
   22.5,
   27.5,
   45};
   Double_t Graph2_fy3008[5] = {
   0.9659208,
   1.069293,
   0.7747728,
   0.876683,
   1.091473};
   Double_t Graph2_felx3008[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fely3008[5] = {
   0.07848593,
   0.1010036,
   0.1124761,
   0.1993566,
   0.2048654};
   Double_t Graph2_fehx3008[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fehy3008[5] = {
   0.07848593,
   0.1010036,
   0.1124761,
   0.1993566,
   0.2048654};
   grae = new TGraphAsymmErrors(5,Graph2_fx3008,Graph2_fy3008,Graph2_felx3008,Graph2_fehx3008,Graph2_fely3008,Graph2_fehy3008);
   grae->SetName("Graph2");
   grae->SetTitle("RpA stat uncertainty from pPb");
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","RpA stat uncertainty from pPb",100,9.25,48.25);
   Graph_Graph3008->SetMinimum(0.5988927);
   Graph_Graph3008->SetMaximum(1.359742);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p");
   TLine *line = new TLine(4.740882,1,61,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   TBox *box = new TBox(0.1,0.9532453,4,1.046755);
   box->Draw();
   box = new TBox(0.1,0.9532453,4,1.046755);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(0.1,0.9532453,4,1.046755);

   ci = TColor::GetColor("#cccccc");
   box->SetFillColor(ci);
   box->SetFillStyle(0);
   box->Draw();
   
   TLegend *leg = new TLegend(0.22,0.6,0.51,0.83,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.06);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph2","R^{FONLL}_{pA}","p");
   entry->SetLineColor(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("gRpAsyst","Syst. pPb data","f");

   ci = TColor::GetColor("#ffff66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","Syst. FONLL pp ref.","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0066ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ffff66");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("TBox","Syst. int. lumi + B","f");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.19,0.85,"CMS");
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
      tex = new TLatex(0.65,0.23,"|y_{lab}| < 2.4");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9,0.85,"B^{+}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.07);
   tex->SetLineWidth(2);
   tex->Draw();
   p_0_0->Modified();
   canvasRpA->cd();
  
// ------------>Primitives in pad: p_1_0
   TPad *p_1_0 = new TPad("p_1_0", "p_1_0",0.342,0.01,0.671,0.99);
   p_1_0->Draw();
   p_1_0->cd();
   p_1_0->Range(0,0,1,1);
   p_1_0->SetFillColor(0);
   p_1_0->SetBorderMode(0);
   p_1_0->SetBorderSize(2);
   p_1_0->SetLeftMargin(0.165);
   p_1_0->SetRightMargin(0.02);
   p_1_0->SetTopMargin(0.075);
   p_1_0->SetBottomMargin(0.145);
   p_1_0->SetFrameFillStyle(0);
   p_1_0->SetFrameBorderMode(0);
   p_1_0->Modified();
   canvasRpA->cd();
  
// ------------>Primitives in pad: p_2_0
   TPad *p_2_0 = new TPad("p_2_0", "p_2_0",0.671,0.01,1,0.99);
   p_2_0->Draw();
   p_2_0->cd();
   p_2_0->Range(0,0,1,1);
   p_2_0->SetFillColor(0);
   p_2_0->SetBorderMode(0);
   p_2_0->SetBorderSize(2);
   p_2_0->SetLeftMargin(0.165);
   p_2_0->SetRightMargin(0.02);
   p_2_0->SetTopMargin(0.075);
   p_2_0->SetBottomMargin(0.145);
   p_2_0->SetFrameFillStyle(0);
   p_2_0->SetFrameBorderMode(0);
   p_2_0->Modified();
   canvasRpA->cd();
   canvasRpA->Modified();
   canvasRpA->cd();
   canvasRpA->SetSelected(canvasRpA);
}
