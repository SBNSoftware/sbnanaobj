/**
 * @file    SRTrkChi2PID.cxx
 * @brief   An SRTrkChi2PID is a high level track `anab::ParticlePID` object
 *          for larana `pid::Chi2ParticleID` results. 
 * @see     SRTrkChi2PID.h
 */

#include "sbnanaobj/StandardRecord/SRTrkChi2PID.h"

void caf::SRTrkChi2PID::setDefault()
{
  pdg           = -5;
  pid_ndof      = -5;
  chi2_muon     = -5.0;
  chi2_pion     = -5.0;
  chi2_kaon     = -5.0;
  chi2_proton   = -5.0;
  pida          = -5;
}

