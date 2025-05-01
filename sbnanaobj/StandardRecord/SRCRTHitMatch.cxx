////////////////////////////////////////////////////////////////////////
// \file    SRCRTHitMAtch.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCRTHitMatch.h"

namespace caf
{

  SRCRTHitMatch::SRCRTHitMatch():
    distance(std::numeric_limits<float>::signaling_NaN()),
    region(-1),
    sys(-1),
    deltaX(std::numeric_limits<float>::signaling_NaN()),
    deltaY(std::numeric_limits<float>::signaling_NaN()),
    deltaZ(std::numeric_limits<float>::signaling_NaN()),
    crossX(std::numeric_limits<float>::signaling_NaN()),
    crossY(std::numeric_limits<float>::signaling_NaN()),
    crossZ(std::numeric_limits<float>::signaling_NaN())
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
