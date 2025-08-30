/*
 * @file   /sbnanaobj/StandardRecord/SRSBNDTimingInfo.cxx
 * @brief  Defines CAF data structures to store sbnd::timing::TimingInfo (docdb#43090).
 * @author Vu Chi Lan Nguyen
 * @date   August 29, 2025
 *
 */

#include "sbnanaobj/StandardRecord/SRSBNDTimingInfo.h"

#include <limits>

namespace caf
{
  SRSBNDTimingInfo::SRSBNDTimingInfo():
    rawDAQHeaderTimestamp(std::numeric_limits<uint64_t>::min()),
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
