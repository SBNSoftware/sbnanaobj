//  SRFakeReco.h
// \author  grayputnam@uchicago.edu
////////////////////////////////////////////////////////////////////////
#ifndef SRFAKERECO_H
#define SRFAKERECO_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRFakeRecoParticle.h"

#include <vector>

namespace caf
{
  /// The SRFakeReco is a faked reconstruction using estimates from the SBN proposal
  class SRFakeReco
  {
  public:
    SRFakeReco();
    ~SRFakeReco() {  }

    float nuE; ///< Fake-reco neutrino Energy [GeV]
    SRVector3D vtx; ///< Interaction vertex in detector coordinates [cm]
    SRFakeRecoParticle lepton; ///< Fake-reco lepton information
    std::vector<SRFakeRecoParticle> hadrons; ///< Fake-reco information on hadronic state
    int nhad; ///< Number of hadrons
    int npion; ///< Number of charged pions
    int npi0; ///< Number of neutral pions
    int nkaon; ///< Number of charged kaons
    int nproton; ///< Number of protons
    float wgt; ///< Weight for this interaction
    bool filled;
  };

} // end namespace

#endif // SRFAKERECO_H
//////////////////////////////////////////////////////////////////////////////
