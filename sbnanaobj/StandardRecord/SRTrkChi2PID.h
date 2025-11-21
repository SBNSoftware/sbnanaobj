/**
 * @file    SRTrkChi2PID.h
 * @brief   An SRTrkChi2PID is a high level track `anab::ParticlePID` object
 *          for larana `pid::Chi2ParticleID` results. 
 * @see     SRTrkChi2PID.cxx
 */

#ifndef SRTRKCHI2PID_H
#define SRTRKCHI2PID_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  /// Track PID from dE/dx v. residual range &chi;&sup2;.
  struct SRTrkChi2PID
    {

      int            pdg          = -999;                 ///< PDG ID of the lowest Chi2.
      int            pid_ndof     =  -99;                 ///< Number of degrees of freedom in Chi2 PID fit.
      float          chi2_muon    = caf::kSignalingNaN;   ///< dE/dx v. residual range Chi2 (muon hypothesis).
      float          chi2_pion    = caf::kSignalingNaN;   ///< dE/dx v. residual range Chi2 (pion hypothesis).
      float          chi2_kaon    = caf::kSignalingNaN;   ///< dE/dx v. residual range Chi2 (kaon hypothesis).
      float          chi2_proton  = caf::kSignalingNaN;   ///< dE/dx v. residual range Chi2 (proton hypothesis).

      float          pida         = caf::kSignalingNaN;   ///< Particle identification algorithm result (PIDA).

      void setDefault();
    };

} // end namespace

#endif // SRTRKCHI2PID_H
