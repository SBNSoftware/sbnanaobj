////////////////////////////////////////////////////////////////////////
// \file    SRTrack.cxx
// \brief   An SRTrack is a high level track object.  It knows its
//          direction and length, but does not own its cell hits.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTrack.h"

#include <climits>

namespace{
  constexpr float kInvalid = std::numeric_limits<float>::signaling_NaN();
}

namespace caf
{

  SRTrack::SRTrack():
    producer(UINT_MAX),
    npts(-1),
    len(kInvalid),
    costh(kInvalid),
    phi(kInvalid),
    ID(INT_MIN)
  {
  }
} // end namespace caf
////////////////////////////////////////////////////////////////////////
