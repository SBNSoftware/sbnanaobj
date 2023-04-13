////////////////////////////////////////////////////////////////////////
// \file    SRFRAMSScore.cxx
// \brief   SRFRAMSScore object for frams BDT
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRFRAMSScore.h"

constexpr float  defVal = 1.;
constexpr float  defVal2 = 0.5;
constexpr float  defVal3 = 10000;
constexpr float  defVal4 = 0;
constexpr float  defVal5 = -100000;

namespace caf
{
  SRFRAMSScore::SRFRAMSScore():
    Delta_U(defVal2),  Eta_U(defVal),  FitScore_U(defVal),  Alpha_U(defVal3),  Omega_U(defVal),  Tau_U(defVal4),  Iota_U(defVal),
    Delta_V(defVal2),  Eta_V(defVal),  FitScore_V(defVal),  Alpha_V(defVal3),  Omega_V(defVal),  Tau_V(defVal4),  Iota_V(defVal),
    Delta_C(defVal2),  Eta_C(defVal),  FitScore_C(defVal),  Alpha_C(defVal3),  Omega_C(defVal),  Tau_C(defVal4),  Iota_C(defVal),
    Gap(-1), ProtonKE(-1), PionKE(-1), ScoreBDT_U(defVal5), ScoreBDT_V(defVal5), ScoreBDT_C(defVal5)
  {
  }
} // end namespace caf
////////////////////////////////////////////////////////////////////////
