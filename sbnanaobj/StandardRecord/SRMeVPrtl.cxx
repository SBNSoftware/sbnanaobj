////////////////////////////////////////////////////////////////////////
// \file    SRMeVPrtl.cxx
// \brief   SRMeVPrtl holds true interaction info.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRMeVPrtl.h"

namespace caf
{

  SRMeVPrtl::SRMeVPrtl():
    gen(kUnknownMeVPrtlChannel),
    time(std::numeric_limits<double>::signaling_NaN()),
    E(std::numeric_limits<double>::signaling_NaN()),
    M(std::numeric_limits<double>::signaling_NaN()),
    flux_weight(std::numeric_limits<double>::signaling_NaN()),
    ray_weight(std::numeric_limits<double>::signaling_NaN()),
    decay_weight(std::numeric_limits<double>::signaling_NaN()),
    C1(std::numeric_limits<double>::signaling_NaN()),
    C2(std::numeric_limits<double>::signaling_NaN()),
    C3(std::numeric_limits<double>::signaling_NaN()),
    C4(std::numeric_limits<double>::signaling_NaN()),
    C5(std::numeric_limits<double>::signaling_NaN())
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
