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
    integral(std::numeric_limits<float>::signaling_NaN()),
    sumadc(std::numeric_limits<float>::signaling_NaN()),
    wire(-1)
  {}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
