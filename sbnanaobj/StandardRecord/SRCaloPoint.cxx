////////////////////////////////////////////////////////////////////////
// \file    SRCaloPoint.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCaloPoint.h"

#include <limits>

namespace caf
{

  SRCaloPoint::SRCaloPoint():
    rr(std::numeric_limits<float>::signaling_NaN()),
    dqdx(std::numeric_limits<float>::signaling_NaN()),
    dedx(std::numeric_limits<float>::signaling_NaN()),
    pitch(std::numeric_limits<float>::signaling_NaN()),
    t(std::numeric_limits<float>::signaling_NaN()),
    x(std::numeric_limits<float>::signaling_NaN()),
    y(std::numeric_limits<float>::signaling_NaN()),
    z(std::numeric_limits<float>::signaling_NaN()),
    integral(std::numeric_limits<float>::signaling_NaN()),
    sumadc(std::numeric_limits<float>::signaling_NaN()),
    width(std::numeric_limits<float>::signaling_NaN()),
    mult(-1),
    wire(-1),
    tpc(-1),
    start(-1),
    end(-1),
    channel(0)
  {}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
