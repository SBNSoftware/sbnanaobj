////////////////////////////////////////////////////////////////////////
// \file    SRTruthMatch.cxx
// \brief   SRTruthMatch object for slice-to-neutrino information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTruthMatch.h"

#include <limits>

namespace caf
{
  SRTruthMatch::SRTruthMatch():
    eff(std::numeric_limits<float>::signaling_NaN()),
    eff_cryo(std::numeric_limits<float>::signaling_NaN()),
    pur(std::numeric_limits<float>::signaling_NaN()),
    visEinslc(std::numeric_limits<float>::signaling_NaN()),
    visEcosmic(std::numeric_limits<float>::signaling_NaN()),
    index(-999)
  {  }

  SRTruthMatch::~SRTruthMatch(){  }

  void SRTruthMatch::setDefault()
  {
    index             = -5;
    eff               = -5.0;
    pur               = -5.0;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
