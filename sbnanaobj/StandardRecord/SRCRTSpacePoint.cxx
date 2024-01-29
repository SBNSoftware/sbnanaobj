////////////////////////////////////////////////////////////////////////
// \file    SRCRTSpacePoint.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCRTSpacePoint.h"

#include <climits>

namespace caf
{
  SRCRTSpacePoint::SRCRTSpacePoint():
    pe(std::numeric_limits<float>::signaling_NaN()),
    time(std::numeric_limits<float>::signaling_NaN()),
    time_err(std::numeric_limits<float>::signaling_NaN()),
    complete(false)
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
