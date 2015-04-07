#define outTree_cxx
#include "outTree.hh"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TFile.h>

void outTree::Loop()
{
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  TH1F* h_rsq_0p5 = new TH1F("h_rsq_0p5", "h_rsq_0p5", 100, 0.5, 2.0 );
  TH1F* h_rsq_0p6 = new TH1F("h_rsq_0p6", "h_rsq_0p6", 100, 0.5, 2.0 );
  TH1F* h_rsq_0p7 = new TH1F("h_rsq_0p7", "h_rsq_0p7", 100, 0.5, 2.0 );
  TH1F* h_rsq_0p8 = new TH1F("h_rsq_0p8", "h_rsq_0p8", 100, 0.5, 2.0 );
  TH1F* h_rsq_0p9 = new TH1F("h_rsq_0p9", "h_rsq_0p9", 100, 0.5, 2.0 );
  
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    if ( RSQ[2] > 0.5 ) h_rsq_0p5->Fill( RSQ[2], xs_w_kf );
    if ( RSQ[2] > 0.6 ) h_rsq_0p6->Fill( RSQ[2], xs_w_kf );
    if ( RSQ[2] > 0.7 ) h_rsq_0p7->Fill( RSQ[2], xs_w_kf );
    if ( RSQ[2] > 0.8 ) h_rsq_0p8->Fill( RSQ[2], xs_w_kf );
    if ( RSQ[2] > 0.9 ) h_rsq_0p9->Fill( RSQ[2], xs_w_kf );
      
  }
  
  TFile* fout = new TFile("test_out.root", "recreate");
  h_rsq_0p5->Write();
  h_rsq_0p6->Write();
  h_rsq_0p7->Write();
  h_rsq_0p8->Write();
  h_rsq_0p9->Write();
  fout->Close();
}
