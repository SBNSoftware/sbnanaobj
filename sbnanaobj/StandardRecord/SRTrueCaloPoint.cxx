////////////////////////////////////////////////////////////////////////
// \file    SRTrueCaloPoint.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTrueCaloPoint.h"

#include <limits>

namespace caf
{

  SRTrueCaloPoint::SRTrueCaloPoint():
    nelec(std::numeric_limits<float>::signaling_NaN()),
    e(std::numeric_limits<float>::signaling_NaN()),
    x(std::numeric_limits<float>::signaling_NaN()),
    y(std::numeric_limits<float>::signaling_NaN()),
    z(std::numeric_limits<float>::signaling_NaN()),
    rr(std::numeric_limits<float>::signaling_NaN()),
    pitch(std::numeric_limits<float>::signaling_NaN())
  {}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
