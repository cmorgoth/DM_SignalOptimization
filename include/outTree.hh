//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr  6 11:22:34 2015 by ROOT version 5.34/10
// from TTree outTree/outTree
// found on file: data/ZJetsToNuNu_400_HT_Inf_Total_Normalized.root
//////////////////////////////////////////////////////////

#ifndef outTree_h
#define outTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxMu_Px = 1;
const Int_t kMaxMu_Py = 1;
const Int_t kMaxMu_Pz = 1;
const Int_t kMaxMu_E = 1;

class outTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        run;
   Double_t        evNum;
   Double_t        bx;
   Double_t        ls;
   Double_t        orbit;
   Int_t           nPU;
   Double_t        pu_w;
   Double_t        mu_w;
   Double_t        mu_w_up;
   Double_t        mu_w_down;
   Double_t        ISR;
   Double_t        ISR_up;
   Double_t        ISR_down;
   Int_t           BOX_NUM;
   Int_t           BOX[3];
   Int_t           HLT_Razor;
   Int_t           HLT_Razor_prescaled;
   Int_t           passedHLT;
   Double_t        R[4];
   Double_t        R_up[4];
   Double_t        R_down[4];
   Double_t        RSQ[4];
   Double_t        RSQ_up[4];
   Double_t        RSQ_down[4];
   Double_t        MR[4];
   Double_t        MR_up[4];
   Double_t        MR_down[4];
   Double_t        MRT[4];
   Double_t        MRT_up[4];
   Double_t        MRT_down[4];
   Double_t        RSQ_mht;
   Double_t        MR_mht;
   Double_t        MRT_mht;
   Double_t        mht_jet;
   Double_t        RSQ_gen;
   Double_t        MR_gen;
   Double_t        MRT_gen;
   Double_t        mht_gen;
   Double_t        pTHem1;
   Double_t        pTHem1_up;
   Double_t        pTHem1_down;
   Double_t        etaHem1;
   Double_t        etaHem1_up;
   Double_t        etaHem1_down;
   Double_t        phiHem1;
   Double_t        phiHem1_up;
   Double_t        phiHem1_down;
   Double_t        pTHem2;
   Double_t        pTHem2_up;
   Double_t        pTHem2_down;
   Double_t        etaHem2;
   Double_t        etaHem2_up;
   Double_t        etaHem2_down;
   Double_t        phiHem2;
   Double_t        phiHem2_up;
   Double_t        phiHem2_down;
   Int_t           N_Jets;
   Double_t        Jet_PT[10];   //[N_Jets]
   Double_t        Jet_PT_up[10];   //[N_Jets]
   Double_t        Jet_PT_down[10];   //[N_Jets]
   Double_t        Jet_Eta[10];   //[N_Jets]
   Double_t        Jet_Eta_up[10];   //[N_Jets]
   Double_t        Jet_Eta_down[10];   //[N_Jets]
   Double_t        Jet_Phi[10];   //[N_Jets]
   Double_t        Jet_Phi_up[10];   //[N_Jets]
   Double_t        Jet_Phi_down[10];   //[N_Jets]
   Double_t        CSV[10];   //[N_Jets]
   Int_t           nBtag;
   Int_t           nBtagMed;
   Int_t           nBtagTight;
   Double_t        W;
   Double_t        mst;
   Double_t        mchi;
   Int_t           nPV;
   Int_t           i1;
   Double_t        pT1;
   Double_t        eta1;
   Double_t        phi1;
   Int_t           i2;
   Double_t        pT2;
   Double_t        eta2;
   Double_t        phi2;
   Double_t        Mu_Px[2];
   Double_t        Mu_Py[2];
   Double_t        Mu_Pz[2];
   Double_t        Mu_E[2];
   Int_t           iTopDecay;
   Float_t         mssm[3];
   Double_t        metX[4];
   Double_t        metY[4];
   Double_t        metCorrX[4];
   Double_t        metCorrY[4];
   Double_t        metX_up[4];
   Double_t        metX_down[4];
   Double_t        metY_up[4];
   Double_t        metY_down[4];
   Double_t        metCorrX_up[4];
   Double_t        metCorrX_down[4];
   Double_t        metCorrY_up[4];
   Double_t        metCorrY_down[4];
   Double_t        JetMetX;
   Double_t        JetMetY;
   Double_t        ht;
   Double_t        mht[3];
   Int_t           nMC;
   Float_t         pMC[101];   //[nMC]
   Float_t         thetaMC[101];   //[nMC]
   Float_t         etaMC[101];   //[nMC]
   Float_t         phiMC[101];   //[nMC]
   Float_t         energyMC[101];   //[nMC]
   Float_t         vxMC[101];   //[nMC]
   Float_t         vyMC[101];   //[nMC]
   Float_t         vzMC[101];   //[nMC]
   Int_t           idMC[101];   //[nMC]
   Int_t           mothMC[101];   //[nMC]
   Int_t           statusMC[101];   //[nMC]
   Float_t         xs_w;
   Float_t         xs_w_kf;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_evNum;   //!
   TBranch        *b_bx;   //!
   TBranch        *b_ls;   //!
   TBranch        *b_orbit;   //!
   TBranch        *b_nPU;   //!
   TBranch        *b_pu_w;   //!
   TBranch        *b_mu_w;   //!
   TBranch        *b_mu_w_up;   //!
   TBranch        *b_mu_w_down;   //!
   TBranch        *b_ISR;   //!
   TBranch        *b_ISR_up;   //!
   TBranch        *b_ISR_down;   //!
   TBranch        *b_BOX_NUM;   //!
   TBranch        *b_BOX;   //!
   TBranch        *b_HLT_Razor;   //!
   TBranch        *b_HLT_Razor_prescaled;   //!
   TBranch        *b_passedHLT;   //!
   TBranch        *b_R;   //!
   TBranch        *b_R_up;   //!
   TBranch        *b_R_down;   //!
   TBranch        *b_RSQ;   //!
   TBranch        *b_RSQ_up;   //!
   TBranch        *b_RSQ_down;   //!
   TBranch        *b_MR;   //!
   TBranch        *b_MR_up;   //!
   TBranch        *b_MR_down;   //!
   TBranch        *b_MRT;   //!
   TBranch        *b_MRT_up;   //!
   TBranch        *b_MRT_down;   //!
   TBranch        *b_RSQ_mht;   //!
   TBranch        *b_MR_mht;   //!
   TBranch        *b_MRT_mht;   //!
   TBranch        *b_mht_jet;   //!
   TBranch        *b_RSQ_gen;   //!
   TBranch        *b_MR_gen;   //!
   TBranch        *b_MRT_gen;   //!
   TBranch        *b_mht_gen;   //!
   TBranch        *b_pTHem1;   //!
   TBranch        *b_pTHem1_up;   //!
   TBranch        *b_pTHem1_down;   //!
   TBranch        *b_etaHem1;   //!
   TBranch        *b_etaHem1_up;   //!
   TBranch        *b_etaHem1_down;   //!
   TBranch        *b_phiHem1;   //!
   TBranch        *b_phiHem1_up;   //!
   TBranch        *b_phiHem1_down;   //!
   TBranch        *b_pTHem2;   //!
   TBranch        *b_pTHem2_up;   //!
   TBranch        *b_pTHem2_down;   //!
   TBranch        *b_etaHem2;   //!
   TBranch        *b_etaHem2_up;   //!
   TBranch        *b_etaHem2_down;   //!
   TBranch        *b_phiHem2;   //!
   TBranch        *b_phiHem2_up;   //!
   TBranch        *b_phiHem2_down;   //!
   TBranch        *b_N_Jets;   //!
   TBranch        *b_Jet_PT;   //!
   TBranch        *b_Jet_PT_up;   //!
   TBranch        *b_Jet_PT_down;   //!
   TBranch        *b_Jet_Eta;   //!
   TBranch        *b_Jet_Eta_up;   //!
   TBranch        *b_Jet_Eta_down;   //!
   TBranch        *b_Jet_Phi;   //!
   TBranch        *b_Jet_Phi_up;   //!
   TBranch        *b_Jet_Phi_down;   //!
   TBranch        *b_CSV;   //!
   TBranch        *b_nBtag;   //!
   TBranch        *b_nBtagMed;   //!
   TBranch        *b_nBtagTight;   //!
   TBranch        *b_W;   //!
   TBranch        *b_mst;   //!
   TBranch        *b_mchi;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_i1;   //!
   TBranch        *b_pT1;   //!
   TBranch        *b_eta1;   //!
   TBranch        *b_phi1;   //!
   TBranch        *b_i2;   //!
   TBranch        *b_pT2;   //!
   TBranch        *b_eta2;   //!
   TBranch        *b_phi2;   //!
   TBranch        *b_Mu_Px_;   //!
   TBranch        *b_Mu_Py_;   //!
   TBranch        *b_Mu_Pz_;   //!
   TBranch        *b_Mu_E_;   //!
   TBranch        *b_iTopDecay;   //!
   TBranch        *b_mssm;   //!
   TBranch        *b_metX;   //!
   TBranch        *b_metY;   //!
   TBranch        *b_metCorrX;   //!
   TBranch        *b_metCorrY;   //!
   TBranch        *b_metX_up;   //!
   TBranch        *b_metX_down;   //!
   TBranch        *b_metY_up;   //!
   TBranch        *b_metY_down;   //!
   TBranch        *b_metCorrX_up;   //!
   TBranch        *b_metCorrX_down;   //!
   TBranch        *b_metCorrY_up;   //!
   TBranch        *b_metCorrY_down;   //!
   TBranch        *b_JetMetX;   //!
   TBranch        *b_JetMetY;   //!
   TBranch        *b_ht;   //!
   TBranch        *b_mht;   //!
   TBranch        *b_nMC;   //!
   TBranch        *b_pMC;   //!
   TBranch        *b_thetaMC;   //!
   TBranch        *b_etaMC;   //!
   TBranch        *b_phiMC;   //!
   TBranch        *b_energyMC;   //!
   TBranch        *b_vxMC;   //!
   TBranch        *b_vyMC;   //!
   TBranch        *b_vzMC;   //!
   TBranch        *b_idMC;   //!
   TBranch        *b_mothMC;   //!
   TBranch        *b_statusMC;   //!
   TBranch        *b_xs_w;   //!
   TBranch        *b_xs_w_kf;   //!

   outTree(TTree *tree=0);
   virtual ~outTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef outTree_cxx
outTree::outTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("data/ZJetsToNuNu_400_HT_Inf_Total_Normalized.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("data/ZJetsToNuNu_400_HT_Inf_Total_Normalized.root");
      }
      f->GetObject("outTree",tree);

   }
   Init(tree);
}

outTree::~outTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t outTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t outTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void outTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("evNum", &evNum, &b_evNum);
   fChain->SetBranchAddress("bx", &bx, &b_bx);
   fChain->SetBranchAddress("ls", &ls, &b_ls);
   fChain->SetBranchAddress("orbit", &orbit, &b_orbit);
   fChain->SetBranchAddress("nPU", &nPU, &b_nPU);
   fChain->SetBranchAddress("pu_w", &pu_w, &b_pu_w);
   fChain->SetBranchAddress("mu_w", &mu_w, &b_mu_w);
   fChain->SetBranchAddress("mu_w_up", &mu_w_up, &b_mu_w_up);
   fChain->SetBranchAddress("mu_w_down", &mu_w_down, &b_mu_w_down);
   fChain->SetBranchAddress("ISR", &ISR, &b_ISR);
   fChain->SetBranchAddress("ISR_up", &ISR_up, &b_ISR_up);
   fChain->SetBranchAddress("ISR_down", &ISR_down, &b_ISR_down);
   fChain->SetBranchAddress("BOX_NUM", &BOX_NUM, &b_BOX_NUM);
   fChain->SetBranchAddress("BOX", BOX, &b_BOX);
   fChain->SetBranchAddress("HLT_Razor", &HLT_Razor, &b_HLT_Razor);
   fChain->SetBranchAddress("HLT_Razor_prescaled", &HLT_Razor_prescaled, &b_HLT_Razor_prescaled);
   fChain->SetBranchAddress("passedHLT", &passedHLT, &b_passedHLT);
   fChain->SetBranchAddress("R", R, &b_R);
   fChain->SetBranchAddress("R_up", R_up, &b_R_up);
   fChain->SetBranchAddress("R_down", R_down, &b_R_down);
   fChain->SetBranchAddress("RSQ", RSQ, &b_RSQ);
   fChain->SetBranchAddress("RSQ_up", RSQ_up, &b_RSQ_up);
   fChain->SetBranchAddress("RSQ_down", RSQ_down, &b_RSQ_down);
   fChain->SetBranchAddress("MR", MR, &b_MR);
   fChain->SetBranchAddress("MR_up", MR_up, &b_MR_up);
   fChain->SetBranchAddress("MR_down", MR_down, &b_MR_down);
   fChain->SetBranchAddress("MRT", MRT, &b_MRT);
   fChain->SetBranchAddress("MRT_up", MRT_up, &b_MRT_up);
   fChain->SetBranchAddress("MRT_down", MRT_down, &b_MRT_down);
   fChain->SetBranchAddress("RSQ_mht", &RSQ_mht, &b_RSQ_mht);
   fChain->SetBranchAddress("MR_mht", &MR_mht, &b_MR_mht);
   fChain->SetBranchAddress("MRT_mht", &MRT_mht, &b_MRT_mht);
   fChain->SetBranchAddress("mht_jet", &mht_jet, &b_mht_jet);
   fChain->SetBranchAddress("RSQ_gen", &RSQ_gen, &b_RSQ_gen);
   fChain->SetBranchAddress("MR_gen", &MR_gen, &b_MR_gen);
   fChain->SetBranchAddress("MRT_gen", &MRT_gen, &b_MRT_gen);
   fChain->SetBranchAddress("mht_gen", &mht_gen, &b_mht_gen);
   fChain->SetBranchAddress("pTHem1", &pTHem1, &b_pTHem1);
   fChain->SetBranchAddress("pTHem1_up", &pTHem1_up, &b_pTHem1_up);
   fChain->SetBranchAddress("pTHem1_down", &pTHem1_down, &b_pTHem1_down);
   fChain->SetBranchAddress("etaHem1", &etaHem1, &b_etaHem1);
   fChain->SetBranchAddress("etaHem1_up", &etaHem1_up, &b_etaHem1_up);
   fChain->SetBranchAddress("etaHem1_down", &etaHem1_down, &b_etaHem1_down);
   fChain->SetBranchAddress("phiHem1", &phiHem1, &b_phiHem1);
   fChain->SetBranchAddress("phiHem1_up", &phiHem1_up, &b_phiHem1_up);
   fChain->SetBranchAddress("phiHem1_down", &phiHem1_down, &b_phiHem1_down);
   fChain->SetBranchAddress("pTHem2", &pTHem2, &b_pTHem2);
   fChain->SetBranchAddress("pTHem2_up", &pTHem2_up, &b_pTHem2_up);
   fChain->SetBranchAddress("pTHem2_down", &pTHem2_down, &b_pTHem2_down);
   fChain->SetBranchAddress("etaHem2", &etaHem2, &b_etaHem2);
   fChain->SetBranchAddress("etaHem2_up", &etaHem2_up, &b_etaHem2_up);
   fChain->SetBranchAddress("etaHem2_down", &etaHem2_down, &b_etaHem2_down);
   fChain->SetBranchAddress("phiHem2", &phiHem2, &b_phiHem2);
   fChain->SetBranchAddress("phiHem2_up", &phiHem2_up, &b_phiHem2_up);
   fChain->SetBranchAddress("phiHem2_down", &phiHem2_down, &b_phiHem2_down);
   fChain->SetBranchAddress("N_Jets", &N_Jets, &b_N_Jets);
   fChain->SetBranchAddress("Jet_PT", Jet_PT, &b_Jet_PT);
   fChain->SetBranchAddress("Jet_PT_up", Jet_PT_up, &b_Jet_PT_up);
   fChain->SetBranchAddress("Jet_PT_down", Jet_PT_down, &b_Jet_PT_down);
   fChain->SetBranchAddress("Jet_Eta", Jet_Eta, &b_Jet_Eta);
   fChain->SetBranchAddress("Jet_Eta_up", Jet_Eta_up, &b_Jet_Eta_up);
   fChain->SetBranchAddress("Jet_Eta_down", Jet_Eta_down, &b_Jet_Eta_down);
   fChain->SetBranchAddress("Jet_Phi", Jet_Phi, &b_Jet_Phi);
   fChain->SetBranchAddress("Jet_Phi_up", Jet_Phi_up, &b_Jet_Phi_up);
   fChain->SetBranchAddress("Jet_Phi_down", Jet_Phi_down, &b_Jet_Phi_down);
   fChain->SetBranchAddress("CSV", CSV, &b_CSV);
   fChain->SetBranchAddress("nBtag", &nBtag, &b_nBtag);
   fChain->SetBranchAddress("nBtagMed", &nBtagMed, &b_nBtagMed);
   fChain->SetBranchAddress("nBtagTight", &nBtagTight, &b_nBtagTight);
   fChain->SetBranchAddress("W", &W, &b_W);
   fChain->SetBranchAddress("mst", &mst, &b_mst);
   fChain->SetBranchAddress("mchi", &mchi, &b_mchi);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("i1", &i1, &b_i1);
   fChain->SetBranchAddress("pT1", &pT1, &b_pT1);
   fChain->SetBranchAddress("eta1", &eta1, &b_eta1);
   fChain->SetBranchAddress("phi1", &phi1, &b_phi1);
   fChain->SetBranchAddress("i2", &i2, &b_i2);
   fChain->SetBranchAddress("pT2", &pT2, &b_pT2);
   fChain->SetBranchAddress("eta2", &eta2, &b_eta2);
   fChain->SetBranchAddress("phi2", &phi2, &b_phi2);
   fChain->SetBranchAddress("Mu_Px", Mu_Px, &b_Mu_Px_);
   fChain->SetBranchAddress("Mu_Py", Mu_Py, &b_Mu_Py_);
   fChain->SetBranchAddress("Mu_Pz", Mu_Pz, &b_Mu_Pz_);
   fChain->SetBranchAddress("Mu_E", Mu_E, &b_Mu_E_);
   fChain->SetBranchAddress("iTopDecay", &iTopDecay, &b_iTopDecay);
   fChain->SetBranchAddress("mssm", mssm, &b_mssm);
   fChain->SetBranchAddress("metX", metX, &b_metX);
   fChain->SetBranchAddress("metY", metY, &b_metY);
   fChain->SetBranchAddress("metCorrX", metCorrX, &b_metCorrX);
   fChain->SetBranchAddress("metCorrY", metCorrY, &b_metCorrY);
   fChain->SetBranchAddress("metX_up", metX_up, &b_metX_up);
   fChain->SetBranchAddress("metX_down", metX_down, &b_metX_down);
   fChain->SetBranchAddress("metY_up", metY_up, &b_metY_up);
   fChain->SetBranchAddress("metY_down", metY_down, &b_metY_down);
   fChain->SetBranchAddress("metCorrX_up", metCorrX_up, &b_metCorrX_up);
   fChain->SetBranchAddress("metCorrX_down", metCorrX_down, &b_metCorrX_down);
   fChain->SetBranchAddress("metCorrY_up", metCorrY_up, &b_metCorrY_up);
   fChain->SetBranchAddress("metCorrY_down", metCorrY_down, &b_metCorrY_down);
   fChain->SetBranchAddress("JetMetX", &JetMetX, &b_JetMetX);
   fChain->SetBranchAddress("JetMetY", &JetMetY, &b_JetMetY);
   fChain->SetBranchAddress("ht", &ht, &b_ht);
   fChain->SetBranchAddress("mht", mht, &b_mht);
   fChain->SetBranchAddress("nMC", &nMC, &b_nMC);
   fChain->SetBranchAddress("pMC", pMC, &b_pMC);
   fChain->SetBranchAddress("thetaMC", thetaMC, &b_thetaMC);
   fChain->SetBranchAddress("etaMC", etaMC, &b_etaMC);
   fChain->SetBranchAddress("phiMC", phiMC, &b_phiMC);
   fChain->SetBranchAddress("energyMC", energyMC, &b_energyMC);
   fChain->SetBranchAddress("vxMC", vxMC, &b_vxMC);
   fChain->SetBranchAddress("vyMC", vyMC, &b_vyMC);
   fChain->SetBranchAddress("vzMC", vzMC, &b_vzMC);
   fChain->SetBranchAddress("idMC", idMC, &b_idMC);
   fChain->SetBranchAddress("mothMC", mothMC, &b_mothMC);
   fChain->SetBranchAddress("statusMC", statusMC, &b_statusMC);
   fChain->SetBranchAddress("xs_w", &xs_w, &b_xs_w);
   fChain->SetBranchAddress("xs_w_kf", &xs_w_kf, &b_xs_w_kf);
   Notify();
}

Bool_t outTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void outTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t outTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef outTree_cxx
