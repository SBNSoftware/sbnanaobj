////////////////////////////////////////////////////////////////////////
// \file    SRFRAMSScore.h
// \brief   SRFRAMSScore object for frams BDT
////////////////////////////////////////////////////////////////////////
#ifndef SRFRAMSSCORE_H
#define SRFRAMSSCORE_H

namespace caf
{
  /// FRAMS BDT score
  class SRFRAMSScore
    {
    public:
      SRFRAMSScore();

      float Delta_U;
      float Eta_U;
      float FitScore_U;
      float Alpha_U;
      float Omega_U;
      float Tau_U;
      float Iota_U;
      float Delta_V;
      float Eta_V;
      float FitScore_V;
      float Alpha_V;
      float Omega_V;
      float Tau_V;
      float Iota_V;
      float Delta_C;
      float Eta_C;
      float FitScore_C;
      float Alpha_C;
      float Omega_C;
      float Tau_C;
      float Iota_C;
      float Gap;
      float ProtonKE;
      float PionKE;
      float ScoreBDT_U;
      float ScoreBDT_V;
      float ScoreBDT_C;

      void setDefault();
    };
} // end namespace

#endif // SRFLASHMATCH_H
//////////////////////////////////////////////////////////////////////////////
