void canvasRAAPbPb_0_100_DRAA_ChHadRAA()
{
//=========Macro generated from canvas: canvasRAA/canvasRAA
//=========  (Sat Feb  4 22:42:08 2017) by ROOT version6.02/10
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
   TBox *box = new TBox(0.752,0.8492652,0.92,1.150735);

   ci = 925;
   color = new TColor(ci, 0, 0.6, 1, " ", 0.5);
   box->SetFillColor(ci);

   ci = TColor::GetColor("#0099ff");
   box->SetLineColor(ci);
   box->Draw();
   TLatex *   tex = new TLatex(0.4,0.595,"Centrality 0-100%");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.13,0.936,"350.68 #mub^{-1} (5.02 TeV PbPb)");
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
   box = new TBox(0.7,0.3322697,0.8,0.3887397);

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
   
   Double_t gNuclearModification_fx3003[5] = {
   8.5,
   12.5,
   17.5,
   25,
   40};
   Double_t gNuclearModification_fy3003[5] = {
   0.3133335,
   0.4007349,
   0.3927664,
   0.5503309,
   0.3152627};
   Double_t gNuclearModification_felx3003[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gNuclearModification_fely3003[5] = {
   0.07832043,
   0.09694121,
   0.09477138,
   0.1319865,
   0.07552261};
   Double_t gNuclearModification_fehx3003[5] = {
   1.5,
   2.5,
   2.5,
   5,
   10};
   Double_t gNuclearModification_fehy3003[5] = {
   0.07832043,
   0.09694121,
   0.09477138,
   0.1319865,
   0.07552261};
   grae = new TGraphAsymmErrors(5,gNuclearModification_fx3003,gNuclearModification_fy3003,gNuclearModification_felx3003,gNuclearModification_fehx3003,gNuclearModification_fely3003,gNuclearModification_fehy3003);
   grae->SetName("gNuclearModification");
   grae->SetTitle("Graph");

   ci = 924;
   color = new TColor(ci, 0, 0.6, 1, " ", 0.5);
   grae->SetFillColor(ci);

   ci = TColor::GetColor("#0033cc");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0033cc");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(21);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_gNuclearModification3003 = new TH1F("Graph_gNuclearModification3003","Graph",100,2.7,54.3);
   Graph_gNuclearModification3003->SetMinimum(0.1902826);
   Graph_gNuclearModification3003->SetMaximum(0.7270478);
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
   Double_t xAxis4[6] = {7, 10, 15, 20, 30, 50}; 
   
   TH1D *hNuclearModification5 = new TH1D("hNuclearModification5","",5, xAxis4);
   hNuclearModification5->SetBinContent(1,0.3133335);
   hNuclearModification5->SetBinContent(2,0.4007349);
   hNuclearModification5->SetBinContent(3,0.3927664);
   hNuclearModification5->SetBinContent(4,0.5503309);
   hNuclearModification5->SetBinContent(5,0.3152627);
   hNuclearModification5->SetBinError(1,0.09882952);
   hNuclearModification5->SetBinError(2,0.06665032);
   hNuclearModification5->SetBinError(3,0.06694987);
   hNuclearModification5->SetBinError(4,0.082197);
   hNuclearModification5->SetBinError(5,0.1012749);
   hNuclearModification5->SetEntries(108.9623);

   ci = TColor::GetColor("#0033cc");
   hNuclearModification5->SetLineColor(ci);
   hNuclearModification5->SetLineWidth(3);

   ci = TColor::GetColor("#0033cc");
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
   Double_t xAxis5[38] = {0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4, 3.2, 4, 4.8, 5.6, 6.4, 7.2, 9.6, 12, 14.4, 19.2, 24, 28.8, 35.2, 41.6, 48, 60.8, 73.6, 86.4, 103.6, 120.8, 140, 165, 250, 400}; 
   
   TH1D *RAA_0_100584__2__2__26 = new TH1D("RAA_0_100584__2__2__26","",37, xAxis5);
   RAA_0_100584__2__2__26->SetBinContent(1,-1);
   RAA_0_100584__2__2__26->SetBinContent(2,-1);
   RAA_0_100584__2__2__26->SetBinContent(3,0.3605047);
   RAA_0_100584__2__2__26->SetBinContent(4,0.3850582);
   RAA_0_100584__2__2__26->SetBinContent(5,0.4188398);
   RAA_0_100584__2__2__26->SetBinContent(6,0.4411318);
   RAA_0_100584__2__2__26->SetBinContent(7,0.4564881);
   RAA_0_100584__2__2__26->SetBinContent(8,0.4798668);
   RAA_0_100584__2__2__26->SetBinContent(9,0.4985427);
   RAA_0_100584__2__2__26->SetBinContent(10,0.516094);
   RAA_0_100584__2__2__26->SetBinContent(11,0.5160761);
   RAA_0_100584__2__2__26->SetBinContent(12,0.5157593);
   RAA_0_100584__2__2__26->SetBinContent(13,0.5090351);
   RAA_0_100584__2__2__26->SetBinContent(14,0.4718224);
   RAA_0_100584__2__2__26->SetBinContent(15,0.381288);
   RAA_0_100584__2__2__26->SetBinContent(16,0.3016595);
   RAA_0_100584__2__2__26->SetBinContent(17,0.2568378);
   RAA_0_100584__2__2__26->SetBinContent(18,0.2362394);
   RAA_0_100584__2__2__26->SetBinContent(19,0.2313929);
   RAA_0_100584__2__2__26->SetBinContent(20,0.2397292);
   RAA_0_100584__2__2__26->SetBinContent(21,0.2795414);
   RAA_0_100584__2__2__26->SetBinContent(22,0.3109757);
   RAA_0_100584__2__2__26->SetBinContent(23,0.359047);
   RAA_0_100584__2__2__26->SetBinContent(24,0.4103232);
   RAA_0_100584__2__2__26->SetBinContent(25,0.4535739);
   RAA_0_100584__2__2__26->SetBinContent(26,0.4871136);
   RAA_0_100584__2__2__26->SetBinContent(27,0.5390386);
   RAA_0_100584__2__2__26->SetBinContent(28,0.6064001);
   RAA_0_100584__2__2__26->SetBinContent(29,0.6583816);
   RAA_0_100584__2__2__26->SetBinContent(30,0.6914895);
   RAA_0_100584__2__2__26->SetBinContent(31,0.7510186);
   RAA_0_100584__2__2__26->SetBinContent(32,0.8027461);
   RAA_0_100584__2__2__26->SetBinContent(33,0.8064291);
   RAA_0_100584__2__2__26->SetBinContent(34,0.8144861);
   RAA_0_100584__2__2__26->SetBinContent(35,0.8835603);
   RAA_0_100584__2__2__26->SetBinContent(36,0.9077175);
   RAA_0_100584__2__2__26->SetBinContent(37,0.8767255);
   RAA_0_100584__2__2__26->SetBinError(1,1.279903e-05);
   RAA_0_100584__2__2__26->SetBinError(2,1.387861e-05);
   RAA_0_100584__2__2__26->SetBinError(3,1.439234e-05);
   RAA_0_100584__2__2__26->SetBinError(4,1.673993e-05);
   RAA_0_100584__2__2__26->SetBinError(5,1.996438e-05);
   RAA_0_100584__2__2__26->SetBinError(6,2.296277e-05);
   RAA_0_100584__2__2__26->SetBinError(7,2.652961e-05);
   RAA_0_100584__2__2__26->SetBinError(8,2.303589e-05);
   RAA_0_100584__2__2__26->SetBinError(9,2.956636e-05);
   RAA_0_100584__2__2__26->SetBinError(10,3.708897e-05);
   RAA_0_100584__2__2__26->SetBinError(11,4.504344e-05);
   RAA_0_100584__2__2__26->SetBinError(12,5.385318e-05);
   RAA_0_100584__2__2__26->SetBinError(13,6.332594e-05);
   RAA_0_100584__2__2__26->SetBinError(14,4.278537e-05);
   RAA_0_100584__2__2__26->SetBinError(15,6.266848e-05);
   RAA_0_100584__2__2__26->SetBinError(16,8.299302e-05);
   RAA_0_100584__2__2__26->SetBinError(17,0.0001099248);
   RAA_0_100584__2__2__26->SetBinError(18,0.0001477243);
   RAA_0_100584__2__2__26->SetBinError(19,0.0002002684);
   RAA_0_100584__2__2__26->SetBinError(20,0.0001962782);
   RAA_0_100584__2__2__26->SetBinError(21,0.00043599);
   RAA_0_100584__2__2__26->SetBinError(22,0.0007955915);
   RAA_0_100584__2__2__26->SetBinError(23,0.001121086);
   RAA_0_100584__2__2__26->SetBinError(24,0.002349183);
   RAA_0_100584__2__2__26->SetBinError(25,0.003934258);
   RAA_0_100584__2__2__26->SetBinError(26,0.005431548);
   RAA_0_100584__2__2__26->SetBinError(27,0.007593713);
   RAA_0_100584__2__2__26->SetBinError(28,0.008532134);
   RAA_0_100584__2__2__26->SetBinError(29,0.006423681);
   RAA_0_100584__2__2__26->SetBinError(30,0.009668077);
   RAA_0_100584__2__2__26->SetBinError(31,0.009013466);
   RAA_0_100584__2__2__26->SetBinError(32,0.01230905);
   RAA_0_100584__2__2__26->SetBinError(33,0.01985833);
   RAA_0_100584__2__2__26->SetBinError(34,0.02497965);
   RAA_0_100584__2__2__26->SetBinError(35,0.04145952);
   RAA_0_100584__2__2__26->SetBinError(36,0.0459072);
   RAA_0_100584__2__2__26->SetBinError(37,0.152905);
   RAA_0_100584__2__2__26->SetMinimum(0);
   RAA_0_100584__2__2__26->SetMaximum(1.8);
   RAA_0_100584__2__2__26->SetEntries(11078.9);
   RAA_0_100584__2__2__26->SetDirectory(0);
   RAA_0_100584__2__2__26->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   RAA_0_100584__2__2__26->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   RAA_0_100584__2__2__26->SetLineColor(ci);
   RAA_0_100584__2__2__26->SetLineWidth(2);
   RAA_0_100584__2__2__26->SetMarkerStyle(20);
   RAA_0_100584__2__2__26->SetMarkerSize(1.3);
   RAA_0_100584__2__2__26->GetXaxis()->SetTitle("p_{T} (GeV)");
   RAA_0_100584__2__2__26->GetXaxis()->SetRange(1,37);
   RAA_0_100584__2__2__26->GetXaxis()->CenterTitle(true);
   RAA_0_100584__2__2__26->GetXaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__26->GetXaxis()->SetLabelOffset(-0.002);
   RAA_0_100584__2__2__26->GetXaxis()->SetLabelSize(0.045);
   RAA_0_100584__2__2__26->GetXaxis()->SetTitleSize(0.05);
   RAA_0_100584__2__2__26->GetXaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__26->GetYaxis()->SetTitle("R_{AA}, R_{pA}");
   RAA_0_100584__2__2__26->GetYaxis()->CenterTitle(true);
   RAA_0_100584__2__2__26->GetYaxis()->SetNdivisions(508);
   RAA_0_100584__2__2__26->GetYaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__26->GetYaxis()->SetLabelSize(0.045);
   RAA_0_100584__2__2__26->GetYaxis()->SetTitleSize(0.05);
   RAA_0_100584__2__2__26->GetYaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__26->GetZaxis()->SetLabelFont(42);
   RAA_0_100584__2__2__26->GetZaxis()->SetLabelSize(0.05);
   RAA_0_100584__2__2__26->GetZaxis()->SetTitleSize(0.09);
   RAA_0_100584__2__2__26->GetZaxis()->SetTitleFont(42);
   RAA_0_100584__2__2__26->Draw("same");
   Double_t xAxis6[6] = {20, 25, 30, 40, 60, 100}; 
   
   TH1D *hNuclearModification27 = new TH1D("hNuclearModification27","",5, xAxis6);
   hNuclearModification27->SetBinContent(1,0.4279886);
   hNuclearModification27->SetBinContent(2,0.4447959);
   hNuclearModification27->SetBinContent(3,0.5041472);
   hNuclearModification27->SetBinContent(4,0.6796131);
   hNuclearModification27->SetBinContent(5,0.7424828);
   hNuclearModification27->SetBinError(1,0.05025093);
   hNuclearModification27->SetBinError(2,0.04192271);
   hNuclearModification27->SetBinError(3,0.04691724);
   hNuclearModification27->SetBinError(4,0.03941607);
   hNuclearModification27->SetBinError(5,0.07611912);
   hNuclearModification27->SetEntries(566.4226);
   hNuclearModification27->SetStats(0);
   hNuclearModification27->SetLineWidth(3);

   ci = TColor::GetColor("#006600");
   hNuclearModification27->SetMarkerColor(ci);
   hNuclearModification27->SetMarkerStyle(21);
   hNuclearModification27->SetMarkerSize(1.2);
   hNuclearModification27->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification27->GetXaxis()->SetLabelFont(42);
   hNuclearModification27->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification27->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification27->GetXaxis()->SetTitleFont(42);
   hNuclearModification27->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification27->GetYaxis()->SetLabelFont(42);
   hNuclearModification27->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification27->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification27->GetYaxis()->SetTitleFont(42);
   hNuclearModification27->GetZaxis()->SetLabelFont(42);
   hNuclearModification27->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification27->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification27->GetZaxis()->SetTitleFont(42);
   hNuclearModification27->Draw("psame");
   Double_t xAxis7[10] = {2, 3, 4, 5, 6, 8, 10, 12.5, 15, 20}; 
   
   TH1D *hNuclearModification38 = new TH1D("hNuclearModification38","",9, xAxis7);
   hNuclearModification38->SetBinContent(1,0.6315195);
   hNuclearModification38->SetBinContent(2,0.4432341);
   hNuclearModification38->SetBinContent(3,0.3674997);
   hNuclearModification38->SetBinContent(4,0.2758138);
   hNuclearModification38->SetBinContent(5,0.2623725);
   hNuclearModification38->SetBinContent(6,0.2722143);
   hNuclearModification38->SetBinContent(7,0.3291268);
   hNuclearModification38->SetBinContent(8,0.3207651);
   hNuclearModification38->SetBinContent(9,0.3937182);
   hNuclearModification38->SetBinError(1,0.1116572);
   hNuclearModification38->SetBinError(2,0.04535789);
   hNuclearModification38->SetBinError(3,0.03419174);
   hNuclearModification38->SetBinError(4,0.02501397);
   hNuclearModification38->SetBinError(5,0.01804332);
   hNuclearModification38->SetBinError(6,0.01714575);
   hNuclearModification38->SetBinError(7,0.02192858);
   hNuclearModification38->SetBinError(8,0.03017596);
   hNuclearModification38->SetBinError(9,0.04454357);
   hNuclearModification38->SetEntries(534.8555);
   hNuclearModification38->SetStats(0);
   hNuclearModification38->SetLineWidth(3);

   ci = TColor::GetColor("#006600");
   hNuclearModification38->SetMarkerColor(ci);
   hNuclearModification38->SetMarkerStyle(21);
   hNuclearModification38->SetMarkerSize(1.2);
   hNuclearModification38->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification38->GetXaxis()->SetLabelFont(42);
   hNuclearModification38->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification38->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification38->GetXaxis()->SetTitleFont(42);
   hNuclearModification38->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification38->GetYaxis()->SetLabelFont(42);
   hNuclearModification38->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification38->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification38->GetYaxis()->SetTitleFont(42);
   hNuclearModification38->GetZaxis()->SetLabelFont(42);
   hNuclearModification38->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification38->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification38->GetZaxis()->SetTitleFont(42);
   hNuclearModification38->Draw("psame");
   Double_t xAxis8[6] = {7, 10, 15, 20, 30, 50}; 
   
   TH1D *hNuclearModification9 = new TH1D("hNuclearModification9","",5, xAxis8);
   hNuclearModification9->SetBinContent(1,0.3133335);
   hNuclearModification9->SetBinContent(2,0.4007349);
   hNuclearModification9->SetBinContent(3,0.3927664);
   hNuclearModification9->SetBinContent(4,0.5503309);
   hNuclearModification9->SetBinContent(5,0.3152627);
   hNuclearModification9->SetBinError(1,0.09882952);
   hNuclearModification9->SetBinError(2,0.06665032);
   hNuclearModification9->SetBinError(3,0.06694987);
   hNuclearModification9->SetBinError(4,0.082197);
   hNuclearModification9->SetBinError(5,0.1012749);
   hNuclearModification9->SetEntries(108.9623);

   ci = TColor::GetColor("#0033cc");
   hNuclearModification9->SetLineColor(ci);
   hNuclearModification9->SetLineWidth(3);

   ci = TColor::GetColor("#0033cc");
   hNuclearModification9->SetMarkerColor(ci);
   hNuclearModification9->SetMarkerStyle(21);
   hNuclearModification9->SetMarkerSize(1.2);
   hNuclearModification9->GetXaxis()->SetTitle("D^{0} p_{T} (GeV/c)");
   hNuclearModification9->GetXaxis()->SetLabelFont(42);
   hNuclearModification9->GetXaxis()->SetLabelSize(0.035);
   hNuclearModification9->GetXaxis()->SetTitleSize(0.035);
   hNuclearModification9->GetXaxis()->SetTitleFont(42);
   hNuclearModification9->GetYaxis()->SetTitle("Uncorrected dN(D^{0})/dp_{T}");
   hNuclearModification9->GetYaxis()->SetLabelFont(42);
   hNuclearModification9->GetYaxis()->SetLabelSize(0.035);
   hNuclearModification9->GetYaxis()->SetTitleSize(0.035);
   hNuclearModification9->GetYaxis()->SetTitleFont(42);
   hNuclearModification9->GetZaxis()->SetLabelFont(42);
   hNuclearModification9->GetZaxis()->SetLabelSize(0.035);
   hNuclearModification9->GetZaxis()->SetTitleSize(0.035);
   hNuclearModification9->GetZaxis()->SetTitleFont(42);
   hNuclearModification9->Draw("same p");
   
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
   entry=leg->AddEntry("gNuclearModification","B^{+} |y| < 2.4","pf");

   ci = 924;
   color = new TColor(ci, 0, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0033cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0033cc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry->SetTextSize(0.038);
   leg->Draw();
   
   TH2F *hemptyEff_copy10 = new TH2F("hemptyEff_copy10","",50,0.5,600,10,0,1.55);
   hemptyEff_copy10->SetMinimum(0);
   hemptyEff_copy10->SetMaximum(2);
   hemptyEff_copy10->SetDirectory(0);
   hemptyEff_copy10->SetStats(0);

   ci = TColor::GetColor("#000099");
   hemptyEff_copy10->SetLineColor(ci);
   hemptyEff_copy10->SetMarkerStyle(20);
   hemptyEff_copy10->GetXaxis()->SetTitle("p_{T} (GeV/c)");
   hemptyEff_copy10->GetXaxis()->CenterTitle(true);
   hemptyEff_copy10->GetXaxis()->SetLabelFont(42);
   hemptyEff_copy10->GetXaxis()->SetTitleSize(0.05);
   hemptyEff_copy10->GetXaxis()->SetTitleFont(42);
   hemptyEff_copy10->GetYaxis()->SetTitle("R_{AA}");
   hemptyEff_copy10->GetYaxis()->CenterTitle(true);
   hemptyEff_copy10->GetYaxis()->SetLabelFont(42);
   hemptyEff_copy10->GetYaxis()->SetTitleSize(0.05);
   hemptyEff_copy10->GetYaxis()->SetTitleOffset(1.1);
   hemptyEff_copy10->GetYaxis()->SetTitleFont(42);
   hemptyEff_copy10->GetZaxis()->SetLabelFont(42);
   hemptyEff_copy10->GetZaxis()->SetLabelSize(0.035);
   hemptyEff_copy10->GetZaxis()->SetTitleSize(0.035);
   hemptyEff_copy10->GetZaxis()->SetTitleFont(42);
   hemptyEff_copy10->Draw("sameaxis");
   canvasRAA->Modified();
   canvasRAA->cd();
   canvasRAA->SetSelected(canvasRAA);
}
