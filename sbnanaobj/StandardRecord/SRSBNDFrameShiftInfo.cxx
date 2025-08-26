////////////////////////////////////////////////////////////////////////
// \file    SRSBNDFrame.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSBNDFrameShiftInfo.h"

#include <limits>

namespace caf
{
  SRSBNDFrameShiftInfo::SRSBNDFrameShiftInfo():
    timingType(std::numeric_limits<uint16_t>::max()),
    frameTdcCrtt1(std::numeric_limits<double>::signaling_NaN()),
    frameTdcBes(std::numeric_limits<double>::signaling_NaN()),
    frameTdcRwm(std::numeric_limits<double>::signaling_NaN()),
    frameHltCrtt1(std::numeric_limits<double>::signaling_NaN()),
    frameHltBeamGate(std::numeric_limits<double>::signaling_NaN()),
    frameApplyAtCaf(std::numeric_limits<double>::signaling_NaN())
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
