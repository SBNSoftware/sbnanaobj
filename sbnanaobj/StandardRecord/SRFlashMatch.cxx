////////////////////////////////////////////////////////////////////////
// \file    SRFlashMatch.cxx
// \brief   SRFlashMatch object for flashmatch summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRFlashMatch.h"

#include <limits>

namespace caf
{
  SRFlashMatch::SRFlashMatch():
    present(false),
    time(std::numeric_limits<float>::signaling_NaN()),
    chargeQ(std::numeric_limits<float>::signaling_NaN()),
    chargeCenter(SRVector3D()),
    chargeWidth(SRVector3D()),
    lightPE(std::numeric_limits<float>::signaling_NaN()),
    lightCenter(SRVector3D()),
    lightWidth(SRVector3D()),
    score(std::numeric_limits<float>::signaling_NaN()),
    scoreY(std::numeric_limits<float>::signaling_NaN()),
    scoreZ(std::numeric_limits<float>::signaling_NaN()),
    scoreRR(std::numeric_limits<float>::signaling_NaN()),
    scoreRatio(std::numeric_limits<float>::signaling_NaN()),
    scoreSlope(std::numeric_limits<float>::signaling_NaN()),
    scorePEToQ(std::numeric_limits<float>::signaling_NaN())
  {}

  SRFlashMatch::~SRFlashMatch(){  }

  void SRFlashMatch::setDefault()
  {
    present    = false;
    time       = -5.0;
    chargeQ    = -5.0;
    lightPE    = -5.0;
    score      = -5.0;
    scoreY     = -5.0;
    scoreZ     = -5.0;
    scoreRR    = -5.0;
    scoreRatio = -5.0;
    scoreSlope = -5.0;
    scorePEToQ = -5.0;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
