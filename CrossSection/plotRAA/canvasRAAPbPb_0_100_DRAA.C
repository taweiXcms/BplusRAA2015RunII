void canvasRAAPbPb_0_100_DRAA()
{
//=========Macro generated from canvas: canvasRAA/canvasRAA
//=========  (Thu Dec  8 01:32:22 2016) by ROOT version6.02/10
   TCanvas *canvasRAA = new TCanvas("canvasRAA", "canvasRAA",0,0,600,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvasRAA->SetHighLightColor(2);
   canvasRAA->Range(-0.7357379,-0.2310559,2.886828,1.69441);
   canvasRAA->SetFillColor(0);
   canvasRAA->SetBorderMode(0);
   canvasRAA->SetBorderSize(2);
   canvasRAA->SetLogx();
   canvasRAA->SetLeftMargin(0.12);
   canvasRAA->SetRightMargin(0.03);
   canvasRAA->SetTopMargin(0.075);
   canvasRAA->SetBottomMargin(0.12);
   canvasRAA->SetFrameBorderMode(0);
   canvasRAA->SetFrameBorderMode(0);
   
   TH2F *hemptyEff1 = new TH2F("hemptyEff1","",50,0.5,600,10,0,1.55);
   hemptyEff1->SetMinimum(0);
   hemptyEff1->SetMaximum(2);
   hemptyEff1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hemptyEff1->SetLineColor(ci);
   hemptyEff1->SetMarkerStyle(20);
   hemptyEff1->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hemptyEff1->GetXaxis()->CenterTitle(true);
   hemptyEff1->GetXaxis()->SetLabelFont(42);
   hemptyEff1->GetXaxis()->SetTitleSize(0.05);
   hemptyEff1->GetXaxis()->SetTitleFont(42);
   hemptyEff1->GetYaxis()->SetTitle("R_{AA}");
   hemptyEff1->GetYaxis()->CenterTitle(true);
   hemptyEff1->GetYaxis()->SetLabelFont(42);
   hemptyEff1->GetYaxis()->SetTitleSize(0.05);
   hemptyEff1->GetYaxis()->SetTitleOffset(1.1);
   hemptyEff1->GetYaxis()->SetTitleFont(42);
   hemptyEff1->GetZaxis()->SetLabelFont(42);
   hemptyEff1->GetZaxis()->SetLabelSize(0.035);
   hemptyEff1->GetZaxis()->SetTitleSize(0.035);
   hemptyEff1->GetZaxis()->SetTitleFont(42);
   hemptyEff1->Draw("");
   TLine *line = new TLine(0.5,1,600,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   TBox *box = new TBox(0.5,0.8492652,0.65,1.150735);
   box->SetFillColor(16);
   box->SetLineColor(16);
   box->Draw();
   TLatex *   tex = new TLatex(0.32,0.595,"Centrality 0-100%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.13,0.936,"27.4 pb^{-1} (5.02 TeV pp) + 350.68 #mub^{-1} (5.02 TeV PbPb)");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.038);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.9,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.15,0.84,"Preliminary");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.7,"T_{AA} and lumi.");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.17,0.65,"uncertainty");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   Double_t gNuclearModification_fx3001[5] = {
   22.5,
   27.5,
   35,
   50,
   80};
   Double_t gNuclearModification_fy3001[5] = {
   0.4553008,
   0.5137481,
   0.6258357,
   0.7585669,
   0.8186688};
   Double_t gNuclearModification_felx3001[5] = {
   2.5,
   2.5,
   5,
   10,
   20};
   Double_t gNuclearModification_fely3001[5] = {
   0.07240973,
   0.08740383,
   0.1009257,
   0.1180965,
   0.1356597};
   Double_t gNuclearModification_fehx3001[5] = {
   2.5,
   2.5,
   5,
   10,
   20};
   Double_t gNuclearModification_fehy3001[5] = {
   0.07240973,
   0.08740383,
   0.1009257,
   0.1180965,
   0.1356597};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,gNuclearModification_fx3001,gNuclearModification_fy3001,gNuclearModification_felx3001,gNuclearModification_fehx3001,gNuclearModification_fely3001,gNuclearModification_fehy3001);
   grae->SetName("gNuclearModification");
   grae->SetTitle("Graph");
   grae->SetFillColor(5);
   grae->SetFillStyle(3001);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_gNuclearModification30013001 = new TH1F("Graph_Graph_gNuclearModification30013001","Graph",100,12,108);
   Graph_Graph_gNuclearModification30013001->SetMinimum(0.3257473);
   Graph_Graph_gNuclearModification30013001->SetMaximum(1.011472);
   Graph_Graph_gNuclearModification30013001->SetDirectory(0);
   Graph_Graph_gNuclearModification30013001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gNuclearModification30013001->SetLineColor(ci);
   Graph_Graph_gNuclearModification30013001->SetMarkerStyle(20);
   Graph_Graph_gNuclearModification30013001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gNuclearModification30013001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gNuclearModification30013001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gNuclearModification30013001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gNuclearModification30013001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gNuclearModification30013001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gNuclearModification30013001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gNuclearModification30013001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gNuclearModification30013001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gNuclearModification30013001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gNuclearModification30013001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gNuclearModification30013001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_gNuclearModification30013001);
   
   grae->Draw("5");
   
   Double_t gNuclearModification_fx3002[9] = {
   2.5,
   3.5,
   4.5,
   5.5,
   7,
   9,
   11.25,
   13.75,
   17.5};
   Double_t gNuclearModification_fy3002[9] = {
   0.7591953,
   0.5946121,
   0.3950514,
   0.2702384,
   0.3020612,
   0.2626618,
   0.314626,
   0.3163168,
   0.3869489};
   Double_t gNuclearModification_felx3002[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   1,
   1,
   1.25,
   1.25,
   2.5};
   Double_t gNuclearModification_fely3002[9] = {
   0.1328676,
   0.09911552,
   0.06086598,
   0.04102258,
   0.04561535,
   0.03913137,
   0.04690739,
   0.04715989,
   0.06410216};
   Double_t gNuclearModification_fehx3002[9] = {
   0.5,
   0.5,
   0.5,
   0.5,
   1,
   1,
   1.25,
   1.25,
   2.5};
   Double_t gNuclearModification_fehy3002[9] = {
   0.1328676,
   0.09911552,
   0.06086598,
   0.04102258,
   0.04561535,
   0.03913137,
   0.04690739,
   0.04715989,
   0.06410216};
   grae = new TGraphAsymmErrors(9,gNuclearModification_fx3002,gNuclearModification_fy3002,gNuclearModification_felx3002,gNuclearModification_fehx3002,gNuclearModification_fely3002,gNuclearModification_fehy3002);
   grae->SetName("gNuclearModification");
   grae->SetTitle("Graph");
   grae->SetFillColor(5);
   grae->SetFillStyle(3001);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_gNuclearModification30023002 = new TH1F("Graph_Graph_gNuclearModification30023002","Graph",100,0.2,21.8);
   Graph_Graph_gNuclearModification30023002->SetMinimum(0.1566771);
   Graph_Graph_gNuclearModification30023002->SetMaximum(0.958916);
   Graph_Graph_gNuclearModification30023002->SetDirectory(0);
   Graph_Graph_gNuclearModification30023002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_gNuclearModification30023002->SetLineColor(ci);
   Graph_Graph_gNuclearModification30023002->SetMarkerStyle(20);
   Graph_Graph_gNuclearModification30023002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_gNuclearModification30023002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_gNuclearModification30023002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_gNuclearModification30023002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_gNuclearModification30023002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_gNuclearModification30023002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_gNuclearModification30023002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_gNuclearModification30023002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_gNuclearModification30023002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_gNuclearModification30023002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_gNuclearModification30023002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_gNuclearModification30023002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_gNuclearModification30023002);
   
   grae->Draw("5");
   Double_t xAxis1[6] = {20, 25, 30, 40, 60, 100}; 
   
   TH1D *hNuclearModification22 = new TH1D("hNuclearModification22","",5, xAxis1);
   hNuclearModification22->SetBinContent(1,0.4553008);
   hNuclearModification22->SetBinContent(2,0.5137481);
   hNuclearModification22->SetBinContent(3,0.6258357);
   hNuclearModification22->SetBinContent(4,0.7585669);
   hNuclearModification22->SetBinContent(5,0.8186688);
   hNuclearModification22->SetBinError(1,0.04427799);
   hNuclearModification22->SetBinError(2,0.04100084);
   hNuclearModification22->SetBinError(3,0.04890131);
   hNuclearModification22->SetBinError(4,0.03967027);
   hNuclearModification22->SetBinError(5,0.05895622);
   hNuclearModification22->SetEntries(907.948);
   hNuclearModification22->SetStats(0);

   ci = TColor::GetColor("#000099");
   hNuclearModification22->SetLineColor(ci);
   hNuclearModification22->SetLineWidth(3);
   hNuclearModification22->SetMarkerStyle(21);
   hNuclearModification22->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification22->GetXaxis()->SetLabelFont(42);
   hNuclearModification22->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification22->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification22->GetXaxis()->SetTitleFont(42);
   hNuclearModification22->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification22->GetYaxis()->SetLabelFont(42);
   hNuclearModification22->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification22->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification22->GetYaxis()->SetTitleFont(42);
   hNuclearModification22->GetZaxis()->SetLabelFont(42);
   hNuclearModification22->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification22->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification22->GetZaxis()->SetTitleFont(42);
   hNuclearModification22->Draw("psame");
   Double_t xAxis2[10] = {2, 3, 4, 5, 6, 8, 10, 12.5, 15, 20}; 
   
   TH1D *hNuclearModification33 = new TH1D("hNuclearModification33","",9, xAxis2);
   hNuclearModification33->SetBinContent(1,0.7591953);
   hNuclearModification33->SetBinContent(2,0.5946121);
   hNuclearModification33->SetBinContent(3,0.3950514);
   hNuclearModification33->SetBinContent(4,0.2702384);
   hNuclearModification33->SetBinContent(5,0.3020612);
   hNuclearModification33->SetBinContent(6,0.2626618);
   hNuclearModification33->SetBinContent(7,0.314626);
   hNuclearModification33->SetBinContent(8,0.3163168);
   hNuclearModification33->SetBinContent(9,0.3869489);
   hNuclearModification33->SetBinError(1,0.1013955);
   hNuclearModification33->SetBinError(2,0.05441077);
   hNuclearModification33->SetBinError(3,0.02638753);
   hNuclearModification33->SetBinError(4,0.02118107);
   hNuclearModification33->SetBinError(5,0.01887709);
   hNuclearModification33->SetBinError(6,0.01497342);
   hNuclearModification33->SetBinError(7,0.0192235);
   hNuclearModification33->SetBinError(8,0.02348236);
   hNuclearModification33->SetBinError(9,0.03141261);
   hNuclearModification33->SetEntries(768.7405);
   hNuclearModification33->SetStats(0);

   ci = TColor::GetColor("#000099");
   hNuclearModification33->SetLineColor(ci);
   hNuclearModification33->SetLineWidth(3);
   hNuclearModification33->SetMarkerStyle(21);
   hNuclearModification33->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification33->GetXaxis()->SetLabelFont(42);
   hNuclearModification33->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification33->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification33->GetXaxis()->SetTitleFont(42);
   hNuclearModification33->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification33->GetYaxis()->SetLabelFont(42);
   hNuclearModification33->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification33->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification33->GetYaxis()->SetTitleFont(42);
   hNuclearModification33->GetZaxis()->SetLabelFont(42);
   hNuclearModification33->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification33->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification33->GetZaxis()->SetTitleFont(42);
   hNuclearModification33->Draw("psame");
   
   TH2F *hemptyEff_copy44 = new TH2F("hemptyEff_copy44","",50,1,150,10,0,1.55);
   hemptyEff_copy44->SetMinimum(0);
   hemptyEff_copy44->SetMaximum(2);
   hemptyEff_copy44->SetDirectory(0);
   hemptyEff_copy44->SetStats(0);

   ci = TColor::GetColor("#000099");
   hemptyEff_copy44->SetLineColor(ci);
   hemptyEff_copy44->SetMarkerStyle(20);
   hemptyEff_copy44->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hemptyEff_copy44->GetXaxis()->CenterTitle(true);
   hemptyEff_copy44->GetXaxis()->SetLabelFont(42);
   hemptyEff_copy44->GetXaxis()->SetLabelOffset(0.01);
   hemptyEff_copy44->GetXaxis()->SetLabelSize(0.05);
   hemptyEff_copy44->GetXaxis()->SetTitleSize(0.06);
   hemptyEff_copy44->GetXaxis()->SetTitleOffset(1.15);
   hemptyEff_copy44->GetXaxis()->SetTitleFont(42);
   hemptyEff_copy44->GetYaxis()->SetTitle("D^{0} R_{AA}");
   hemptyEff_copy44->GetYaxis()->CenterTitle(true);
   hemptyEff_copy44->GetYaxis()->SetLabelFont(42);
   hemptyEff_copy44->GetYaxis()->SetLabelSize(0.05);
   hemptyEff_copy44->GetYaxis()->SetTitleSize(0.06);
   hemptyEff_copy44->GetYaxis()->SetTitleOffset(1.15);
   hemptyEff_copy44->GetYaxis()->SetTitleFont(42);
   hemptyEff_copy44->GetZaxis()->SetLabelFont(42);
   hemptyEff_copy44->GetZaxis()->SetLabelSize(0.035);
   hemptyEff_copy44->GetZaxis()->SetTitleSize(0.035);
   hemptyEff_copy44->GetZaxis()->SetTitleFont(42);
   hemptyEff_copy44->Draw("sameaxis");
   
   Double_t gNuclearModification_fx3003[5] = {
   8.5,
   12.5,
   17.5,
   25,
   40};
   Double_t gNuclearModification_fy3003[5] = {
   0.3357582,
   0.4294148,
   0.420876,
   0.5897171,
   0.3378255};
   Double_t gNuclearModification_felx3003[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gNuclearModification_fely3003[5] = {
   0.08392569,
   0.1038791,
   0.101554,
   0.1414325,
   0.08092763};
   Double_t gNuclearModification_fehx3003[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gNuclearModification_fehy3003[5] = {
   0.08392569,
   0.1038791,
   0.101554,
   0.1414325,
   0.08092763};
   grae = new TGraphAsymmErrors(5,gNuclearModification_fx3003,gNuclearModification_fy3003,gNuclearModification_felx3003,gNuclearModification_fehx3003,gNuclearModification_fely3003,gNuclearModification_fehy3003);
   grae->SetName("gNuclearModification");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#0099ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3001);

   ci = TColor::GetColor("#0099ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#330066");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_gNuclearModification3003 = new TH1F("Graph_gNuclearModification3003","Graph",100,2.7,54.3);
   Graph_gNuclearModification3003->SetMinimum(0.2039008);
   Graph_gNuclearModification3003->SetMaximum(0.7790813);
   Graph_gNuclearModification3003->SetDirectory(0);
   Graph_gNuclearModification3003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gNuclearModification3003->SetLineColor(ci);
   Graph_gNuclearModification3003->SetMarkerStyle(20);
   Graph_gNuclearModification3003->GetXaxis()->SetLabelFont(42);
   Graph_gNuclearModification3003->GetXaxis()->SetLabelSize(0.035);
   Graph_gNuclearModification3003->GetXaxis()->SetTitleSize(0.035);
   Graph_gNuclearModification3003->GetXaxis()->SetTitleFont(42);
   Graph_gNuclearModification3003->GetYaxis()->SetLabelFont(42);
   Graph_gNuclearModification3003->GetYaxis()->SetLabelSize(0.035);
   Graph_gNuclearModification3003->GetYaxis()->SetTitleSize(0.035);
   Graph_gNuclearModification3003->GetYaxis()->SetTitleFont(42);
   Graph_gNuclearModification3003->GetZaxis()->SetLabelFont(42);
   Graph_gNuclearModification3003->GetZaxis()->SetLabelSize(0.035);
   Graph_gNuclearModification3003->GetZaxis()->SetTitleSize(0.035);
   Graph_gNuclearModification3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_gNuclearModification3003);
   
   grae->Draw("5");
   Double_t xAxis3[6] = {7, 10, 15, 20, 30, 50}; 
   
   TH1D *hNuclearModification5 = new TH1D("hNuclearModification5","",5, xAxis3);
   hNuclearModification5->SetBinContent(1,0.3357582);
   hNuclearModification5->SetBinContent(2,0.4294148);
   hNuclearModification5->SetBinContent(3,0.420876);
   hNuclearModification5->SetBinContent(4,0.5897171);
   hNuclearModification5->SetBinContent(5,0.3378255);
   hNuclearModification5->SetBinError(1,0.1059026);
   hNuclearModification5->SetBinError(2,0.07142036);
   hNuclearModification5->SetBinError(3,0.07174135);
   hNuclearModification5->SetBinError(4,0.08807969);
   hNuclearModification5->SetBinError(5,0.1085229);
   hNuclearModification5->SetEntries(108.9623);

   ci = TColor::GetColor("#330066");
   hNuclearModification5->SetLineColor(ci);
   hNuclearModification5->SetLineWidth(3);

   ci = TColor::GetColor("#330066");
   hNuclearModification5->SetMarkerColor(ci);
   hNuclearModification5->SetMarkerStyle(21);
   hNuclearModification5->SetMarkerSize(1.2);
   hNuclearModification5->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification5->GetXaxis()->SetLabelFont(42);
   hNuclearModification5->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification5->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification5->GetXaxis()->SetTitleFont(42);
   hNuclearModification5->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification5->GetYaxis()->SetLabelFont(42);
   hNuclearModification5->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification5->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification5->GetYaxis()->SetTitleFont(42);
   hNuclearModification5->GetZaxis()->SetLabelFont(42);
   hNuclearModification5->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification5->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification5->GetZaxis()->SetTitleFont(42);
   hNuclearModification5->Draw("same");
   
   TLegend *leg = new TLegend(0.4236242,0.6774695,0.812953,0.8757592,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("gNuclearModification","B^{+} |y| < 2.4","pf");

   ci = TColor::GetColor("#0099ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3001);

   ci = TColor::GetColor("#0099ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#330066");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry->SetTextSize(0.038);
   entry=leg->AddEntry("","D^{0} |y| < 1.0","pf");

   ci = TColor::GetColor("#ffff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry->SetTextSize(0.038);
   leg->Draw();
   
   TH2F *hemptyEff_copy6 = new TH2F("hemptyEff_copy6","",50,0.5,600,10,0,1.55);
   hemptyEff_copy6->SetMinimum(0);
   hemptyEff_copy6->SetMaximum(2);
   hemptyEff_copy6->SetDirectory(0);
   hemptyEff_copy6->SetStats(0);

   ci = TColor::GetColor("#000099");
   hemptyEff_copy6->SetLineColor(ci);
   hemptyEff_copy6->SetMarkerStyle(20);
   hemptyEff_copy6->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hemptyEff_copy6->GetXaxis()->CenterTitle(true);
   hemptyEff_copy6->GetXaxis()->SetLabelFont(42);
   hemptyEff_copy6->GetXaxis()->SetTitleSize(0.05);
   hemptyEff_copy6->GetXaxis()->SetTitleFont(42);
   hemptyEff_copy6->GetYaxis()->SetTitle("R_{AA}");
   hemptyEff_copy6->GetYaxis()->CenterTitle(true);
   hemptyEff_copy6->GetYaxis()->SetLabelFont(42);
   hemptyEff_copy6->GetYaxis()->SetTitleSize(0.05);
   hemptyEff_copy6->GetYaxis()->SetTitleOffset(1.1);
   hemptyEff_copy6->GetYaxis()->SetTitleFont(42);
   hemptyEff_copy6->GetZaxis()->SetLabelFont(42);
   hemptyEff_copy6->GetZaxis()->SetLabelSize(0.035);
   hemptyEff_copy6->GetZaxis()->SetTitleSize(0.035);
   hemptyEff_copy6->GetZaxis()->SetTitleFont(42);
   hemptyEff_copy6->Draw("sameaxis");
   canvasRAA->Modified();
   canvasRAA->cd();
   canvasRAA->SetSelected(canvasRAA);
}
