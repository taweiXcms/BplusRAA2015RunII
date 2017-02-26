void canvasRAAPbPb_0_100_NoB_DRAA_ChHadRAA()
{
//=========Macro generated from canvas: canvasRAA/canvasRAA
//=========  (Sun Feb 19 20:56:27 2017) by ROOT version6.02/10
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
   TLatex *   tex = new TLatex(0.4,0.595,"Centrality 0-100%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.13,0.936,"350.1 #mub^{-1} (5.02 TeV PbPb)");
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
      tex = new TLatex(0.22,0.7,"T_{AA} + lumi.");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.22,0.66,"uncertainty");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   TBox *box = new TBox(0.7,0.3322697,0.8,0.3887397);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(0.8,0.3547214,0.9,0.4153951);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(0.9,0.3856854,1,0.4519942);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(1,0.4035821,1.1,0.4786815);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(1.1,0.4178419,1.2,0.4951344);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(1.2,0.4336979,1.4,0.5260356);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(1.4,0.4471445,1.6,0.5499409);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(1.6,0.454559,1.8,0.5776292);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(1.8,0.4545544,2,0.5775976);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(2,0.4458492,2.2,0.5856694);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(2.2,0.4400381,2.4,0.5780321);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(2.4,0.4004238,3.2,0.5432211);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(3.2,0.3194642,4,0.443112);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(4,0.2555583,4.8,0.3477606);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(4.8,0.2236467,5.6,0.290029);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(5.6,0.2091373,6.4,0.2633415);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(6.4,0.2084873,7.2,0.2542985);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(7.2,0.218131,9.6,0.2613273);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(9.6,0.254349,12,0.3047338);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(12,0.279773,14.4,0.3421784);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(14.4,0.3230158,19.2,0.395078);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(19.2,0.3691498,24,0.4514966);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(24,0.4081148,28.8,0.4990331);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(28.8,0.4382444,35.2,0.5359827);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(35.2,0.4849575,41.6,0.5931196);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(41.6,0.54671,48,0.6660902);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(48,0.5934783,60.8,0.7232848);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(60.8,0.6229389,73.6,0.7600401);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(73.6,0.6765564,86.4,0.8254808);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(86.4,0.7227269,103.6,0.8827653);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(103.6,0.7255117,120.8,0.8873466);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(120.8,0.732652,140,0.8963203);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(140,0.7948418,165,0.9722788);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(165,0.8158651,250,0.9995696);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   box = new TBox(250,0.7867229,400,0.9667282);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);
   box->Draw();
   Double_t xAxis1[38] = {0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4, 3.2, 4, 4.8, 5.6, 6.4, 7.2, 9.6, 12, 14.4, 19.2, 24, 28.8, 35.2, 41.6, 48, 60.8, 73.6, 86.4, 103.6, 120.8, 140, 165, 250, 400}; 
   
   TH1D *RAA_0_100584__2__2__22 = new TH1D("RAA_0_100584__2__2__22","",37, xAxis1);
   RAA_0_100584__2__2__22->SetBinContent(1,-1);
   RAA_0_100584__2__2__22->SetBinContent(2,-1);
   RAA_0_100584__2__2__22->SetBinContent(3,0.3605047);
   RAA_0_100584__2__2__22->SetBinContent(4,0.3850582);
   RAA_0_100584__2__2__22->SetBinContent(5,0.4188398);
   RAA_0_100584__2__2__22->SetBinContent(6,0.4411318);
   RAA_0_100584__2__2__22->SetBinContent(7,0.4564881);
   RAA_0_100584__2__2__22->SetBinContent(8,0.4798668);
   RAA_0_100584__2__2__22->SetBinContent(9,0.4985427);
   RAA_0_100584__2__2__22->SetBinContent(10,0.516094);
   RAA_0_100584__2__2__22->SetBinContent(11,0.5160761);
   RAA_0_100584__2__2__22->SetBinContent(12,0.5157593);
   RAA_0_100584__2__2__22->SetBinContent(13,0.5090351);
   RAA_0_100584__2__2__22->SetBinContent(14,0.4718224);
   RAA_0_100584__2__2__22->SetBinContent(15,0.381288);
   RAA_0_100584__2__2__22->SetBinContent(16,0.3016595);
   RAA_0_100584__2__2__22->SetBinContent(17,0.2568378);
   RAA_0_100584__2__2__22->SetBinContent(18,0.2362394);
   RAA_0_100584__2__2__22->SetBinContent(19,0.2313929);
   RAA_0_100584__2__2__22->SetBinContent(20,0.2397292);
   RAA_0_100584__2__2__22->SetBinContent(21,0.2795414);
   RAA_0_100584__2__2__22->SetBinContent(22,0.3109757);
   RAA_0_100584__2__2__22->SetBinContent(23,0.359047);
   RAA_0_100584__2__2__22->SetBinContent(24,0.4103232);
   RAA_0_100584__2__2__22->SetBinContent(25,0.4535739);
   RAA_0_100584__2__2__22->SetBinContent(26,0.4871136);
   RAA_0_100584__2__2__22->SetBinContent(27,0.5390386);
   RAA_0_100584__2__2__22->SetBinContent(28,0.6064001);
   RAA_0_100584__2__2__22->SetBinContent(29,0.6583816);
   RAA_0_100584__2__2__22->SetBinContent(30,0.6914895);
   RAA_0_100584__2__2__22->SetBinContent(31,0.7510186);
   RAA_0_100584__2__2__22->SetBinContent(32,0.8027461);
   RAA_0_100584__2__2__22->SetBinContent(33,0.8064291);
   RAA_0_100584__2__2__22->SetBinContent(34,0.8144861);
   RAA_0_100584__2__2__22->SetBinContent(35,0.8835603);
   RAA_0_100584__2__2__22->SetBinContent(36,0.9077175);
   RAA_0_100584__2__2__22->SetBinContent(37,0.8767255);
   RAA_0_100584__2__2__22->SetBinError(1,1.279903e-05);
   RAA_0_100584__2__2__22->SetBinError(2,1.387861e-05);
   RAA_0_100584__2__2__22->SetBinError(3,1.439234e-05);
   RAA_0_100584__2__2__22->SetBinError(4,1.673993e-05);
   RAA_0_100584__2__2__22->SetBinError(5,1.996438e-05);
   RAA_0_100584__2__2__22->SetBinError(6,2.296277e-05);
   RAA_0_100584__2__2__22->SetBinError(7,2.652961e-05);
   RAA_0_100584__2__2__22->SetBinError(8,2.303589e-05);
   RAA_0_100584__2__2__22->SetBinError(9,2.956636e-05);
   RAA_0_100584__2__2__22->SetBinError(10,3.708897e-05);
   RAA_0_100584__2__2__22->SetBinError(11,4.504344e-05);
   RAA_0_100584__2__2__22->SetBinError(12,5.385318e-05);
   RAA_0_100584__2__2__22->SetBinError(13,6.332594e-05);
   RAA_0_100584__2__2__22->SetBinError(14,4.278537e-05);
   RAA_0_100584__2__2__22->SetBinError(15,6.266848e-05);
   RAA_0_100584__2__2__22->SetBinError(16,8.299302e-05);
   RAA_0_100584__2__2__22->SetBinError(17,0.0001099248);
   RAA_0_100584__2__2__22->SetBinError(18,0.0001477243);
   RAA_0_100584__2__2__22->SetBinError(19,0.0002002684);
   RAA_0_100584__2__2__22->SetBinError(20,0.0001962782);
   RAA_0_100584__2__2__22->SetBinError(21,0.00043599);
   RAA_0_100584__2__2__22->SetBinError(22,0.0007955915);
   RAA_0_100584__2__2__22->SetBinError(23,0.001121086);
   RAA_0_100584__2__2__22->SetBinError(24,0.002349183);
   RAA_0_100584__2__2__22->SetBinError(25,0.003934258);
   RAA_0_100584__2__2__22->SetBinError(26,0.005431548);
   RAA_0_100584__2__2__22->SetBinError(27,0.007593713);
   RAA_0_100584__2__2__22->SetBinError(28,0.008532134);
   RAA_0_100584__2__2__22->SetBinError(29,0.006423681);
   RAA_0_100584__2__2__22->SetBinError(30,0.009668077);
   RAA_0_100584__2__2__22->SetBinError(31,0.009013466);
   RAA_0_100584__2__2__22->SetBinError(32,0.01230905);
   RAA_0_100584__2__2__22->SetBinError(33,0.01985833);
   RAA_0_100584__2__2__22->SetBinError(34,0.02497965);
   RAA_0_100584__2__2__22->SetBinError(35,0.04145952);
   RAA_0_100584__2__2__22->SetBinError(36,0.0459072);
   RAA_0_100584__2__2__22->SetBinError(37,0.152905);
   RAA_0_100584__2__2__22->SetMinimum(0);
   RAA_0_100584__2__2__22->SetMaximum(1.8);
   RAA_0_100584__2__2__22->SetEntries(11078.9);
   RAA_0_100584__2__2__22->SetDirectory(0);
   RAA_0_100584__2__2__22->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   RAA_0_100584__2__2__22->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   RAA_0_100584__2__2__22->SetLineColor(ci);
   RAA_0_100584__2__2__22->SetLineWidth(2);
   RAA_0_100584__2__2__22->SetMarkerStyle(20);
   RAA_0_100584__2__2__22->SetMarkerSize(1.3);
   RAA_0_100584__2__2__22->GetXaxis()->SetTitle("p_{T} (GeV)");
   RAA_0_100584__2__2__22->GetXaxis()->SetRange(1,37);
   RAA_0_100584__2__2__22->GetXaxis()->CenterTitle(true);
   RAA_0_100584__2__2__22->GetXaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__22->GetXaxis()->SetLabelOffset(-0.002);
   RAA_0_100584__2__2__22->GetXaxis()->SetLabelSize(0.045);
   RAA_0_100584__2__2__22->GetXaxis()->SetTitleSize(0.05);
   RAA_0_100584__2__2__22->GetXaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__22->GetYaxis()->SetTitle("R_{AA}, R_{pA}");
   RAA_0_100584__2__2__22->GetYaxis()->CenterTitle(true);
   RAA_0_100584__2__2__22->GetYaxis()->SetNdivisions(508);
   RAA_0_100584__2__2__22->GetYaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__22->GetYaxis()->SetLabelSize(0.045);
   RAA_0_100584__2__2__22->GetYaxis()->SetTitleSize(0.05);
   RAA_0_100584__2__2__22->GetYaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__22->GetZaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__22->GetZaxis()->SetLabelSize(0.05);
   RAA_0_100584__2__2__22->GetZaxis()->SetTitleSize(0.09);
   RAA_0_100584__2__2__22->GetZaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__22->Draw("same");
   box = new TBox(0.5,0.9080761,0.62,1.091924);

   ci = TColor::GetColor("#ffcc00");
   box->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   box->SetLineColor(ci);
   box->Draw();
   
   Double_t gNuclearModification_fx3001[5] = {
   22.5,
   27.5,
   35,
   50,
   80};
   Double_t gNuclearModification_fy3001[5] = {
   0.4279886,
   0.4447959,
   0.5041472,
   0.6796131,
   0.7424828};
   Double_t gNuclearModification_felx3001[5] = {
   2.5,
   2.5,
   5,
   10,
   20};
   Double_t gNuclearModification_fely3001[5] = {
   0.08040356,
   0.08777721,
   0.09566393,
   0.1257512,
   0.1437027};
   Double_t gNuclearModification_fehx3001[5] = {
   2.5,
   2.5,
   5,
   10,
   20};
   Double_t gNuclearModification_fehy3001[5] = {
   0.08040356,
   0.08777721,
   0.09566393,
   0.1257512,
   0.1437027};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,gNuclearModification_fx3001,gNuclearModification_fy3001,gNuclearModification_felx3001,gNuclearModification_fehx3001,gNuclearModification_fely3001,gNuclearModification_fehy3001);
   grae->SetName("gNuclearModification");
   grae->SetTitle("Graph");

   ci = 926;
   color = new TColor(ci, 0.6, 1, 0.6, " ", 0.5);
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_gNuclearModification30013001 = new TH1F("Graph_Graph_gNuclearModification30013001","Graph",100,12,108);
   Graph_Graph_gNuclearModification30013001->SetMinimum(0.293725);
   Graph_Graph_gNuclearModification30013001->SetMaximum(0.9400455);
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
   0.6315195,
   0.4432341,
   0.3674997,
   0.2758138,
   0.2623725,
   0.2722143,
   0.3291268,
   0.3207651,
   0.3937182};
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
   0.1385446,
   0.08615785,
   0.06750189,
   0.05013722,
   0.04752139,
   0.04884336,
   0.05908503,
   0.05758429,
   0.07618566};
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
   0.1385446,
   0.08615785,
   0.06750189,
   0.05013722,
   0.04752139,
   0.04884336,
   0.05908503,
   0.05758429,
   0.07618566};
   grae = new TGraphAsymmErrors(9,gNuclearModification_fx3002,gNuclearModification_fy3002,gNuclearModification_felx3002,gNuclearModification_fehx3002,gNuclearModification_fely3002,gNuclearModification_fehy3002);
   grae->SetName("gNuclearModification");
   grae->SetTitle("Graph");

   ci = 927;
   color = new TColor(ci, 0.6, 1, 0.6, " ", 0.5);
   grae->SetFillColor(ci);
   grae->SetMarkerStyle(21);
   
   TH1F *Graph_Graph_gNuclearModification30023002 = new TH1F("Graph_Graph_gNuclearModification30023002","Graph",100,0.2,21.8);
   Graph_Graph_gNuclearModification30023002->SetMinimum(0.1593298);
   Graph_Graph_gNuclearModification30023002->SetMaximum(0.8255854);
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
   Double_t xAxis2[6] = {20, 25, 30, 40, 60, 100}; 
   
   TH1D *hNuclearModification23 = new TH1D("hNuclearModification23","",5, xAxis2);
   hNuclearModification23->SetBinContent(1,0.4279886);
   hNuclearModification23->SetBinContent(2,0.4447959);
   hNuclearModification23->SetBinContent(3,0.5041472);
   hNuclearModification23->SetBinContent(4,0.6796131);
   hNuclearModification23->SetBinContent(5,0.7424828);
   hNuclearModification23->SetBinError(1,0.05025093);
   hNuclearModification23->SetBinError(2,0.04192271);
   hNuclearModification23->SetBinError(3,0.04691724);
   hNuclearModification23->SetBinError(4,0.03941607);
   hNuclearModification23->SetBinError(5,0.07611912);
   hNuclearModification23->SetEntries(566.4226);
   hNuclearModification23->SetDirectory(0);
   hNuclearModification23->SetStats(0);
   hNuclearModification23->SetLineWidth(3);

   ci = TColor::GetColor("#006600");
   hNuclearModification23->SetMarkerColor(ci);
   hNuclearModification23->SetMarkerStyle(21);
   hNuclearModification23->SetMarkerSize(1.2);
   hNuclearModification23->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification23->GetXaxis()->SetLabelFont(42);
   hNuclearModification23->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification23->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification23->GetXaxis()->SetTitleFont(42);
   hNuclearModification23->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification23->GetYaxis()->SetLabelFont(42);
   hNuclearModification23->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification23->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification23->GetYaxis()->SetTitleFont(42);
   hNuclearModification23->GetZaxis()->SetLabelFont(42);
   hNuclearModification23->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification23->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification23->GetZaxis()->SetTitleFont(42);
   hNuclearModification23->Draw("psame");
   Double_t xAxis3[10] = {2, 3, 4, 5, 6, 8, 10, 12.5, 15, 20}; 
   
   TH1D *hNuclearModification34 = new TH1D("hNuclearModification34","",9, xAxis3);
   hNuclearModification34->SetBinContent(1,0.6315195);
   hNuclearModification34->SetBinContent(2,0.4432341);
   hNuclearModification34->SetBinContent(3,0.3674997);
   hNuclearModification34->SetBinContent(4,0.2758138);
   hNuclearModification34->SetBinContent(5,0.2623725);
   hNuclearModification34->SetBinContent(6,0.2722143);
   hNuclearModification34->SetBinContent(7,0.3291268);
   hNuclearModification34->SetBinContent(8,0.3207651);
   hNuclearModification34->SetBinContent(9,0.3937182);
   hNuclearModification34->SetBinError(1,0.1116572);
   hNuclearModification34->SetBinError(2,0.04535789);
   hNuclearModification34->SetBinError(3,0.03419174);
   hNuclearModification34->SetBinError(4,0.02501397);
   hNuclearModification34->SetBinError(5,0.01804332);
   hNuclearModification34->SetBinError(6,0.01714575);
   hNuclearModification34->SetBinError(7,0.02192858);
   hNuclearModification34->SetBinError(8,0.03017596);
   hNuclearModification34->SetBinError(9,0.04454357);
   hNuclearModification34->SetEntries(534.8555);
   hNuclearModification34->SetDirectory(0);
   hNuclearModification34->SetStats(0);
   hNuclearModification34->SetLineWidth(3);

   ci = TColor::GetColor("#006600");
   hNuclearModification34->SetMarkerColor(ci);
   hNuclearModification34->SetMarkerStyle(21);
   hNuclearModification34->SetMarkerSize(1.2);
   hNuclearModification34->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification34->GetXaxis()->SetLabelFont(42);
   hNuclearModification34->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification34->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification34->GetXaxis()->SetTitleFont(42);
   hNuclearModification34->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification34->GetYaxis()->SetLabelFont(42);
   hNuclearModification34->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification34->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification34->GetYaxis()->SetTitleFont(42);
   hNuclearModification34->GetZaxis()->SetLabelFont(42);
   hNuclearModification34->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification34->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification34->GetZaxis()->SetTitleFont(42);
   hNuclearModification34->Draw("psame");
   box = new TBox(0.62,0.8492652,0.752,1.150735);

   ci = 929;
   color = new TColor(ci, 0.6, 1, 0.6, " ", 0.5);
   box->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   box->SetLineColor(ci);
   box->Draw();
   Double_t xAxis4[38] = {0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4, 3.2, 4, 4.8, 5.6, 6.4, 7.2, 9.6, 12, 14.4, 19.2, 24, 28.8, 35.2, 41.6, 48, 60.8, 73.6, 86.4, 103.6, 120.8, 140, 165, 250, 400}; 
   
   TH1D *RAA_0_100584__2__2__25 = new TH1D("RAA_0_100584__2__2__25","",37, xAxis4);
   RAA_0_100584__2__2__25->SetBinContent(1,-1);
   RAA_0_100584__2__2__25->SetBinContent(2,-1);
   RAA_0_100584__2__2__25->SetBinContent(3,0.3605047);
   RAA_0_100584__2__2__25->SetBinContent(4,0.3850582);
   RAA_0_100584__2__2__25->SetBinContent(5,0.4188398);
   RAA_0_100584__2__2__25->SetBinContent(6,0.4411318);
   RAA_0_100584__2__2__25->SetBinContent(7,0.4564881);
   RAA_0_100584__2__2__25->SetBinContent(8,0.4798668);
   RAA_0_100584__2__2__25->SetBinContent(9,0.4985427);
   RAA_0_100584__2__2__25->SetBinContent(10,0.516094);
   RAA_0_100584__2__2__25->SetBinContent(11,0.5160761);
   RAA_0_100584__2__2__25->SetBinContent(12,0.5157593);
   RAA_0_100584__2__2__25->SetBinContent(13,0.5090351);
   RAA_0_100584__2__2__25->SetBinContent(14,0.4718224);
   RAA_0_100584__2__2__25->SetBinContent(15,0.381288);
   RAA_0_100584__2__2__25->SetBinContent(16,0.3016595);
   RAA_0_100584__2__2__25->SetBinContent(17,0.2568378);
   RAA_0_100584__2__2__25->SetBinContent(18,0.2362394);
   RAA_0_100584__2__2__25->SetBinContent(19,0.2313929);
   RAA_0_100584__2__2__25->SetBinContent(20,0.2397292);
   RAA_0_100584__2__2__25->SetBinContent(21,0.2795414);
   RAA_0_100584__2__2__25->SetBinContent(22,0.3109757);
   RAA_0_100584__2__2__25->SetBinContent(23,0.359047);
   RAA_0_100584__2__2__25->SetBinContent(24,0.4103232);
   RAA_0_100584__2__2__25->SetBinContent(25,0.4535739);
   RAA_0_100584__2__2__25->SetBinContent(26,0.4871136);
   RAA_0_100584__2__2__25->SetBinContent(27,0.5390386);
   RAA_0_100584__2__2__25->SetBinContent(28,0.6064001);
   RAA_0_100584__2__2__25->SetBinContent(29,0.6583816);
   RAA_0_100584__2__2__25->SetBinContent(30,0.6914895);
   RAA_0_100584__2__2__25->SetBinContent(31,0.7510186);
   RAA_0_100584__2__2__25->SetBinContent(32,0.8027461);
   RAA_0_100584__2__2__25->SetBinContent(33,0.8064291);
   RAA_0_100584__2__2__25->SetBinContent(34,0.8144861);
   RAA_0_100584__2__2__25->SetBinContent(35,0.8835603);
   RAA_0_100584__2__2__25->SetBinContent(36,0.9077175);
   RAA_0_100584__2__2__25->SetBinContent(37,0.8767255);
   RAA_0_100584__2__2__25->SetBinError(1,1.279903e-05);
   RAA_0_100584__2__2__25->SetBinError(2,1.387861e-05);
   RAA_0_100584__2__2__25->SetBinError(3,1.439234e-05);
   RAA_0_100584__2__2__25->SetBinError(4,1.673993e-05);
   RAA_0_100584__2__2__25->SetBinError(5,1.996438e-05);
   RAA_0_100584__2__2__25->SetBinError(6,2.296277e-05);
   RAA_0_100584__2__2__25->SetBinError(7,2.652961e-05);
   RAA_0_100584__2__2__25->SetBinError(8,2.303589e-05);
   RAA_0_100584__2__2__25->SetBinError(9,2.956636e-05);
   RAA_0_100584__2__2__25->SetBinError(10,3.708897e-05);
   RAA_0_100584__2__2__25->SetBinError(11,4.504344e-05);
   RAA_0_100584__2__2__25->SetBinError(12,5.385318e-05);
   RAA_0_100584__2__2__25->SetBinError(13,6.332594e-05);
   RAA_0_100584__2__2__25->SetBinError(14,4.278537e-05);
   RAA_0_100584__2__2__25->SetBinError(15,6.266848e-05);
   RAA_0_100584__2__2__25->SetBinError(16,8.299302e-05);
   RAA_0_100584__2__2__25->SetBinError(17,0.0001099248);
   RAA_0_100584__2__2__25->SetBinError(18,0.0001477243);
   RAA_0_100584__2__2__25->SetBinError(19,0.0002002684);
   RAA_0_100584__2__2__25->SetBinError(20,0.0001962782);
   RAA_0_100584__2__2__25->SetBinError(21,0.00043599);
   RAA_0_100584__2__2__25->SetBinError(22,0.0007955915);
   RAA_0_100584__2__2__25->SetBinError(23,0.001121086);
   RAA_0_100584__2__2__25->SetBinError(24,0.002349183);
   RAA_0_100584__2__2__25->SetBinError(25,0.003934258);
   RAA_0_100584__2__2__25->SetBinError(26,0.005431548);
   RAA_0_100584__2__2__25->SetBinError(27,0.007593713);
   RAA_0_100584__2__2__25->SetBinError(28,0.008532134);
   RAA_0_100584__2__2__25->SetBinError(29,0.006423681);
   RAA_0_100584__2__2__25->SetBinError(30,0.009668077);
   RAA_0_100584__2__2__25->SetBinError(31,0.009013466);
   RAA_0_100584__2__2__25->SetBinError(32,0.01230905);
   RAA_0_100584__2__2__25->SetBinError(33,0.01985833);
   RAA_0_100584__2__2__25->SetBinError(34,0.02497965);
   RAA_0_100584__2__2__25->SetBinError(35,0.04145952);
   RAA_0_100584__2__2__25->SetBinError(36,0.0459072);
   RAA_0_100584__2__2__25->SetBinError(37,0.152905);
   RAA_0_100584__2__2__25->SetMinimum(0);
   RAA_0_100584__2__2__25->SetMaximum(1.8);
   RAA_0_100584__2__2__25->SetEntries(11078.9);
   RAA_0_100584__2__2__25->SetDirectory(0);
   RAA_0_100584__2__2__25->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   RAA_0_100584__2__2__25->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   RAA_0_100584__2__2__25->SetLineColor(ci);
   RAA_0_100584__2__2__25->SetLineWidth(2);
   RAA_0_100584__2__2__25->SetMarkerStyle(20);
   RAA_0_100584__2__2__25->SetMarkerSize(1.3);
   RAA_0_100584__2__2__25->GetXaxis()->SetTitle("p_{T} (GeV)");
   RAA_0_100584__2__2__25->GetXaxis()->SetRange(1,37);
   RAA_0_100584__2__2__25->GetXaxis()->CenterTitle(true);
   RAA_0_100584__2__2__25->GetXaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__25->GetXaxis()->SetLabelOffset(-0.002);
   RAA_0_100584__2__2__25->GetXaxis()->SetLabelSize(0.045);
   RAA_0_100584__2__2__25->GetXaxis()->SetTitleSize(0.05);
   RAA_0_100584__2__2__25->GetXaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__25->GetYaxis()->SetTitle("R_{AA}, R_{pA}");
   RAA_0_100584__2__2__25->GetYaxis()->CenterTitle(true);
   RAA_0_100584__2__2__25->GetYaxis()->SetNdivisions(508);
   RAA_0_100584__2__2__25->GetYaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__25->GetYaxis()->SetLabelSize(0.045);
   RAA_0_100584__2__2__25->GetYaxis()->SetTitleSize(0.05);
   RAA_0_100584__2__2__25->GetYaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__25->GetZaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__25->GetZaxis()->SetLabelSize(0.05);
   RAA_0_100584__2__2__25->GetZaxis()->SetTitleSize(0.09);
   RAA_0_100584__2__2__25->GetZaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__25->Draw("same");
   Double_t xAxis5[6] = {20, 25, 30, 40, 60, 100}; 
   
   TH1D *hNuclearModification26 = new TH1D("hNuclearModification26","",5, xAxis5);
   hNuclearModification26->SetBinContent(1,0.4279886);
   hNuclearModification26->SetBinContent(2,0.4447959);
   hNuclearModification26->SetBinContent(3,0.5041472);
   hNuclearModification26->SetBinContent(4,0.6796131);
   hNuclearModification26->SetBinContent(5,0.7424828);
   hNuclearModification26->SetBinError(1,0.05025093);
   hNuclearModification26->SetBinError(2,0.04192271);
   hNuclearModification26->SetBinError(3,0.04691724);
   hNuclearModification26->SetBinError(4,0.03941607);
   hNuclearModification26->SetBinError(5,0.07611912);
   hNuclearModification26->SetEntries(566.4226);
   hNuclearModification26->SetStats(0);
   hNuclearModification26->SetLineWidth(3);

   ci = TColor::GetColor("#006600");
   hNuclearModification26->SetMarkerColor(ci);
   hNuclearModification26->SetMarkerStyle(21);
   hNuclearModification26->SetMarkerSize(1.2);
   hNuclearModification26->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification26->GetXaxis()->SetLabelFont(42);
   hNuclearModification26->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification26->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification26->GetXaxis()->SetTitleFont(42);
   hNuclearModification26->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification26->GetYaxis()->SetLabelFont(42);
   hNuclearModification26->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification26->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification26->GetYaxis()->SetTitleFont(42);
   hNuclearModification26->GetZaxis()->SetLabelFont(42);
   hNuclearModification26->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification26->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification26->GetZaxis()->SetTitleFont(42);
   hNuclearModification26->Draw("psame");
   Double_t xAxis6[10] = {2, 3, 4, 5, 6, 8, 10, 12.5, 15, 20}; 
   
   TH1D *hNuclearModification37 = new TH1D("hNuclearModification37","",9, xAxis6);
   hNuclearModification37->SetBinContent(1,0.6315195);
   hNuclearModification37->SetBinContent(2,0.4432341);
   hNuclearModification37->SetBinContent(3,0.3674997);
   hNuclearModification37->SetBinContent(4,0.2758138);
   hNuclearModification37->SetBinContent(5,0.2623725);
   hNuclearModification37->SetBinContent(6,0.2722143);
   hNuclearModification37->SetBinContent(7,0.3291268);
   hNuclearModification37->SetBinContent(8,0.3207651);
   hNuclearModification37->SetBinContent(9,0.3937182);
   hNuclearModification37->SetBinError(1,0.1116572);
   hNuclearModification37->SetBinError(2,0.04535789);
   hNuclearModification37->SetBinError(3,0.03419174);
   hNuclearModification37->SetBinError(4,0.02501397);
   hNuclearModification37->SetBinError(5,0.01804332);
   hNuclearModification37->SetBinError(6,0.01714575);
   hNuclearModification37->SetBinError(7,0.02192858);
   hNuclearModification37->SetBinError(8,0.03017596);
   hNuclearModification37->SetBinError(9,0.04454357);
   hNuclearModification37->SetEntries(534.8555);
   hNuclearModification37->SetStats(0);
   hNuclearModification37->SetLineWidth(3);

   ci = TColor::GetColor("#006600");
   hNuclearModification37->SetMarkerColor(ci);
   hNuclearModification37->SetMarkerStyle(21);
   hNuclearModification37->SetMarkerSize(1.2);
   hNuclearModification37->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification37->GetXaxis()->SetLabelFont(42);
   hNuclearModification37->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification37->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification37->GetXaxis()->SetTitleFont(42);
   hNuclearModification37->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification37->GetYaxis()->SetLabelFont(42);
   hNuclearModification37->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification37->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification37->GetYaxis()->SetTitleFont(42);
   hNuclearModification37->GetZaxis()->SetLabelFont(42);
   hNuclearModification37->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification37->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification37->GetZaxis()->SetTitleFont(42);
   hNuclearModification37->Draw("psame");
   
   TLegend *leg = new TLegend(0.3936242,0.6574695,0.812953,0.9157592,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","charged hadrons |y| < 1.0","pf");

   ci = TColor::GetColor("#ffcc00");
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
   entry=leg->AddEntry("","D^{0} |y| < 1.0","pf");

   ci = 928;
   color = new TColor(ci, 0.6, 1, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#006600");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry->SetTextSize(0.038);
   leg->Draw();
   
   TH2F *hemptyEff_copy8 = new TH2F("hemptyEff_copy8","",50,0.5,600,10,0,1.55);
   hemptyEff_copy8->SetMinimum(0);
   hemptyEff_copy8->SetMaximum(2);
   hemptyEff_copy8->SetDirectory(0);
   hemptyEff_copy8->SetStats(0);

   ci = TColor::GetColor("#000099");
   hemptyEff_copy8->SetLineColor(ci);
   hemptyEff_copy8->SetMarkerStyle(20);
   hemptyEff_copy8->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hemptyEff_copy8->GetXaxis()->CenterTitle(true);
   hemptyEff_copy8->GetXaxis()->SetLabelFont(42);
   hemptyEff_copy8->GetXaxis()->SetTitleSize(0.05);
   hemptyEff_copy8->GetXaxis()->SetTitleFont(42);
   hemptyEff_copy8->GetYaxis()->SetTitle("R_{AA}");
   hemptyEff_copy8->GetYaxis()->CenterTitle(true);
   hemptyEff_copy8->GetYaxis()->SetLabelFont(42);
   hemptyEff_copy8->GetYaxis()->SetTitleSize(0.05);
   hemptyEff_copy8->GetYaxis()->SetTitleOffset(1.1);
   hemptyEff_copy8->GetYaxis()->SetTitleFont(42);
   hemptyEff_copy8->GetZaxis()->SetLabelFont(42);
   hemptyEff_copy8->GetZaxis()->SetLabelSize(0.035);
   hemptyEff_copy8->GetZaxis()->SetTitleSize(0.035);
   hemptyEff_copy8->GetZaxis()->SetTitleFont(42);
   hemptyEff_copy8->Draw("sameaxis");
   canvasRAA->Modified();
   canvasRAA->cd();
   canvasRAA->SetSelected(canvasRAA);
}
