/**
 * @file   sbnanaobj/StandardRecord/SRTrkLikelihoodPID.cxx
 * @brief  An `SRTrkLikelihoodPID` is a high level track ParticlePID object for
 *         for larana LikelihoodPIDAlg results.
 * @author Sungbin Oh (sungbino@fnal.gov)
 */

#include "sbnanaobj/StandardRecord/SRTrkLikelihoodPID.h"

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{

  SRTrkLikelihoodPID::SRTrkLikelihoodPID():
    pdg(-999),
    pid_ndof(-99),
    lambda_muon(caf::kSignalingNaN),
    lambda_pion(caf::kSignalingNaN),
    lambda_proton(caf::kSignalingNaN)
  {  }

  void SRTrkLikelihoodPID::setDefault()
  {
    pdg           = 0;
    pid_ndof      = -5;
    lambda_muon   = -5.0;
    lambda_pion   = -5.0;
    lambda_proton = -5.0;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
