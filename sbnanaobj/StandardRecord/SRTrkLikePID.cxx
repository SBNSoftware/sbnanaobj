////////////////////////////////////////////////////////////////////////
// \file    SRTrkLikePID.cxx
// \brief   An SRTrkLikePID is a high level track ParticlePID object for
//          for larana LikelihoodPIDAlg results.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTrkLikePID.h"

#include <limits>

namespace caf
{

  SRTrkLikePID::SRTrkLikePID():
    pdg(-999),
    pid_ndof(-99),
    lambda_muon(std::numeric_limits<float>::signaling_NaN()),
    lambda_pion(std::numeric_limits<float>::signaling_NaN()),
    lambda_proton(std::numeric_limits<float>::signaling_NaN())
  {  }

  SRTrkLikePID::~SRTrkLikePID(){  }

  void SRTrkLikePID::setDefault()
  {
    pdg           = -5;
    pid_ndof      = -5;
    lambda_muon   = -5.0;
    lambda_pion   = -5.0;
    lambda_proton = -5.0;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
