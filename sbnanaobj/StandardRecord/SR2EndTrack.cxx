////////////////////////////////////////////////////////////////////////
// \file    SR2EndTrack.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SR2EndTrack.h"

#include <climits>

namespace caf
{

  SR2EndTrack::SR2EndTrack():
    lenA(std::numeric_limits<float>::signaling_NaN()),
    lenB(std::numeric_limits<float>::signaling_NaN()),
    nptsA(-1),
    nptsB(-1),
    calo_plane(-1),
    split_chi2_lo(std::numeric_limits<float>::signaling_NaN()),
    split_chi2_hi(std::numeric_limits<float>::signaling_NaN()),
    rev_chi2_lo(std::numeric_limits<float>::signaling_NaN()),
    rev_chi2_hi(std::numeric_limits<float>::signaling_NaN()),
    ndf_lo(-1),
    ndf_hi(-1),
    split(-1)
  {
  }
} // end namespace caf
////////////////////////////////////////////////////////////////////////
