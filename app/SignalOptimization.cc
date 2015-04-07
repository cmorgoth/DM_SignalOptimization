//C++ INCLUDES
#include <iostream>
//ROOT INCLUDES
#include <TFile.h>
#include <TTree.h>
#include <TChain.h>
//LOCAL INCLUDES
#include "outTree.hh"

int main ( int argc, char* argv[] )
{
  TChain* T = new TChain( argv[1] );
  T->Add("data/ZJetsToNuNu_50_HT_100_Total_Normalized.root");
  T->Add("data/ZJetsToNuNu_100_HT_200_Total_Normalized.root");
  T->Add("data/ZJetsToNuNu_200_HT_400_Total_Normalized.root");
  T->Add("data/ZJetsToNuNu_400_HT_Inf_Total_Normalized.root");
  
  outTree* tree = new outTree( T );
  tree->Loop();
  
  return 0;
};
