////////////////////////////////////////////////////////////////////////
// \file    SRTrkLikelihoodPID.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRKLIKELIHOODPID_H
#define SRTRKLIKELIHOODPID_H

namespace caf
{
  /// Track PID from dE/dx v. likelihood from dE/dx PDF measured with residual range-based kinetic energy and hit pitch
  class SRTrkLikelihoodPID
    {
    public:

      SRTrkLikelihoodPID();
      virtual ~SRTrkLikelihoodPID();

      int            pdg;          ///< Likelihood PID pdg
      int            pid_ndof;    ///< Number of degress of freedom in likelihood PID
      float          lambda_muon;   ///< Sum of -lnL/L_max (muon hypothesis)
      float          lambda_pion;   ///< Sum of -lnL/L_max (charged pion hypothesis)
      float          lambda_proton; ///< Sum of -lnL/L_max (proton hypothesis)

    };

} // end namespace

#endif // SRTRKLIKELIHOODPID_H
//////////////////////////////////////////////////////////////////////////////
