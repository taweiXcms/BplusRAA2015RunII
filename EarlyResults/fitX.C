#include <TF1.h>
#include <TTree.h>
#include <TH1D.h>
#include <TFile.h>
#include <TCut.h>
#include <TCanvas.h>
#include <TLatex.h>

void fitX(TString infname="/data/twang/BfinderRun2/DoubleMu/BfinderData_pp_20151202_bPt0jpsiPt0tkPt0p5/finder_pp_merged.root")
{
   
   TFile *inf = new TFile(infname.Data());
   TTree *ntmix = (TTree*) inf->Get("Bfinder/ntmix");
   TH1D *h = new TH1D("h","",40,3.6,4);
   //TCut cutTrk = "1";   //original YJ
   TCut cutTrk = "Btrk1PixelHit>=2&&Btrk1StripHit>=7&&Btrk1Chi2ndf<5&&Btrk2PixelHit>=2&&Btrk2StripHit>=7&&Btrk2Chi2ndf<5";

   TCanvas *c = new TCanvas("c","",750,600);
  
   //ntmix->Draw("Bmass>>h","Btype==7&&Bpt>10.&&abs(Beta)<10. "&&cutTrk,"");    //original YJ
    ntmix->Draw("Bmass>>h","Btype==7&&Bpt>10&&abs(Beta)<10&&sqrt((Bmumueta-Btrk1Eta)*(Bmumueta-Btrk1Eta)+(Bmumuphi-Btrk1Phi)*(Bmumuphi-Btrk1Phi))<1."&&cutTrk,"");

   h->Sumw2();
   TF1 *f = new TF1("f","[0]+[1]*x+[2]*x*x+[3]*Gaus(x,[4],[5])+[6]*Gaus(x,[7],[5])");
//  TF1 *f = new TF1("f","[0]+[1]*x+[2]*x*x+[8]*x*x*x+[9]*x*x*x*x+[3]*Gaus(x,[4],[5])+[6]*Gaus(x,[7],[5])");
   f->SetLineColor(4);
   f->SetParameters(-2.2597e4,1.326e4,-1.727e3,50,3.686,0.00357,1,3.8725,0.0054);
   f->FixParameter(4,3.686);
   f->FixParameter(5,0.00357);
   f->FixParameter(7,3.8725);
   h->Fit("f","LL");
   h->Fit("f","");
   h->Fit("f","LL");
   h->Fit("f","LL","",3.65,3.94);
   h->Fit("f","LL","",3.65,3.94);
   f->ReleaseParameter(4);
   f->ReleaseParameter(5);
   f->ReleaseParameter(7);
   h->Fit("f","LL","",3.65,3.94);
   h->SetXTitle("m(J/#psi#pi^{+}#pi^{-}) [GeV]");
   h->SetYTitle("Entries");
   h->SetStats(0);
   h->SetAxisRange(0,h->GetMaximum()*1.3	,"Y");
   TF1 *f2 = new TF1("f2","[0]+[1]*x+[2]*x*x+0*Gaus(x,[4],[5])+0*Gaus(x,[7],[5])");
   f2->SetParameter(0,f->GetParameter(0));
   f2->SetParameter(1,f->GetParameter(1));
   f2->SetParameter(2,f->GetParameter(2));
   TF1 *f3 = new TF1("f3","[3]*Gaus(x,[4],[5])+[6]*Gaus(x,[7],[5])");
   f3->SetParameter(3,f->GetParameter(3));
   f3->SetParameter(4,f->GetParameter(4));
   f3->SetParameter(5,f->GetParameter(5));
   f3->SetParameter(6,f->GetParameter(6));
   f3->SetParameter(7,f->GetParameter(7));
   f3->SetParameter(8,f->GetParameter(8));

   f->SetLineColor(4);
   f2->SetLineColor(4);
   f3->SetRange(3.65,3.94);
   f2->SetRange(3.65,3.94);
   f2->SetLineStyle(2);
   f3->SetLineStyle(2);
   f2->Draw("same");
   f3->SetLineColor(2);
   f3->SetFillStyle(3004);
   f3->SetFillColor(2);
   f3->Draw("same");
   TLatex *l = new TLatex(3.7,70./80*h->GetMaximum(),"#psi(2S)");
   l->Draw();
   TLatex *l2 = new TLatex(3.875,50./80*h->GetMaximum(),"X(3872)");
   l2->Draw();
   TLatex *l3 = new TLatex(3.812,70./80*h->GetMaximum(),"CMS Preliminary");
   l3->Draw();
   TLatex *l4 = new TLatex(3.78,60./80*h->GetMaximum(),"pp #sqrt{s_{NN}}=5.02 TeV");
  l4->Draw();
   cout<<ntmix->GetEntries()<<endl;
   
   TH1D *hProj = (TH1D*)h->Clone("hProj");
   hProj->Clear();
   f->SetRange(3.6,4);
   for (int i=0;i<h->GetEntries()*11;i++)
   {
      hProj->Fill(f->GetRandom());
   } 
   
   TCanvas *c2 = new TCanvas("c2","",750,600);
   hProj->SetTitle("Estimated Projection");
   hProj->Draw("e");
}
