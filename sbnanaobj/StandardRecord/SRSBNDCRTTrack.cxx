////////////////////////////////////////////////////////////////////////
// \file    SRSBNDCRTTrack.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSBNDCRTTrack.h"

#include <climits>

namespace caf
{
  SRSBNDCRTTrack::SRSBNDCRTTrack():
    time(std::numeric_limits<float>::signaling_NaN()),
    time_err(std::numeric_limits<float>::signaling_NaN()),
    pe(std::numeric_limits<float>::signaling_NaN()),
    tof(std::numeric_limits<float>::signaling_NaN())
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
