////////////////////////////////////////////////////////////////////////
// \file    SRSBNDFrame.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSBNDFrame.h"

#include <limits>

namespace caf
{
  SRSBNDFrame::SRSBNDFrame():
    frameTdcCrtt1(std::numeric_limits<double>::signaling_NaN()),
    frameTdcBes(std::numeric_limits<double>::signaling_NaN()),
    frameTdcRwm(std::numeric_limits<double>::signaling_NaN()),
    frameHltCrtt1(std::numeric_limits<double>::signaling_NaN()),
    frameHltBeamGate(std::numeric_limits<double>::signaling_NaN()),
    frameDataToMC(std::numeric_limits<double>::signaling_NaN())
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
