////////////////////////////////////////////////////////////////////////
// \file    SRSBNDTimingInfo.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSBNDTimingInfo.h"

#include <limits>

namespace caf
{
  SRSBNDTimingInfo::SRSBNDTimingInfo():
    tdcCrtt1(std::numeric_limits<uint64_t>::min()),
    tdcBes(std::numeric_limits<uint64_t>::min()),
    tdcRwm(std::numeric_limits<uint64_t>::min()),
    tdcEtrig(std::numeric_limits<uint64_t>::min()),
    hltCrtt1(std::numeric_limits<uint64_t>::min()),
    hltEtrig(std::numeric_limits<uint64_t>::min()),
    hltBeamGate(std::numeric_limits<uint64_t>::min())
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
