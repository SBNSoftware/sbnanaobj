/*
 * @file   /sbnanaobj/StandardRecord/SRSBNDFrameShiftInfo.cxx
 * @brief  Defines CAF data structures to store sbnd::timing::FrameShiftInfo (docdb#43090).
 * @author Vu Chi Lan Nguyen
 * @date   August 29, 2025
 *
 */

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
