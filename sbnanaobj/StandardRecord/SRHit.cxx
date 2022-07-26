////////////////////////////////////////////////////////////////////////
// \file    SRHit.cxx
// \brief   An SRHit is a high level shower object.  It knows its
//          direction and length, but does not own its cell hits.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRHit.h"

#include <climits>

namespace caf
{
  SRSpacePoint::SRSpacePoint():
    XYZ(-999.,-999.,-999.),
    chisq(-5.),
    pfpID(-1)
  {
  }

  SRHit::SRHit():

    startTick(-999.),
    endTick(-999.),

    RMS(-5.),

    peakAmplitude(-5.),
    summedADC(-5.),
    integral(-5.),

    cryoID(-5),
    tpcID(-5),
    planeID(-5),
    wireID(-5)
  {
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
