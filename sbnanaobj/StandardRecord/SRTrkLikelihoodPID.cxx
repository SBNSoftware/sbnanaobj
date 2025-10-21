////////////////////////////////////////////////////////////////////////
// \file    SRTrkLikelihoodPID.cxx
// \brief   An SRTrkLikelihoodPID is a high level track ParticlePID object for
//          for larana LikelihoodPIDAlg results.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTrkLikelihoodPID.h"

#include <limits>

namespace caf
{

  SRTrkLikelihoodPID::SRTrkLikelihoodPID():
    pdg(-999),
    pid_ndof(-99),
    lambda_muon(std::numeric_limits<float>::signaling_NaN()),
    lambda_pion(std::numeric_limits<float>::signaling_NaN()),
    lambda_proton(std::numeric_limits<float>::signaling_NaN())
  {  }

  SRTrkLikelihoodPID::~SRTrkLikelihoodPID(){  }

  void SRTrkLikelihoodPID::setDefault()
  {
    pdg           = -5;
    pid_ndof      = -5;
    lambda_muon   = -5.0;
    lambda_pion   = -5.0;
    lambda_proton = -5.0;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
