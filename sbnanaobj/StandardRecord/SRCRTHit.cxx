////////////////////////////////////////////////////////////////////////
// \file    SRCRTHit.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCRTHit.h"

#include <climits>

namespace caf
{

  SRCRTHit::SRCRTHit():
    time(std::numeric_limits<float>::signaling_NaN()),
    t0(std::numeric_limits<float>::signaling_NaN()),
    t1(std::numeric_limits<float>::signaling_NaN()),
    pe(std::numeric_limits<float>::signaling_NaN()),
    plane(INT_MIN)
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
