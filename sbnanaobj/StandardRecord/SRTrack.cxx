////////////////////////////////////////////////////////////////////////
// \file    SRTrack.cxx
// \brief   An SRTrack is a high level track object.  It knows its
//          direction and length, but does not own its cell hits.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTrack.h"

#include <climits>

namespace caf
{

  SRTrack::SRTrack():
    producer(UINT_MAX),
    npts(-1),
    len(std::numeric_limits<float>::signaling_NaN()),
    costh(std::numeric_limits<float>::signaling_NaN()),
    phi(std::numeric_limits<float>::signaling_NaN())
  {
  }
} // end namespace caf
////////////////////////////////////////////////////////////////////////
