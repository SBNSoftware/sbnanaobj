////////////////////////////////////////////////////////////////////////
// \file    SRHit.cxx
// \brief   An SRHit is a low level hit object.  It knows its
//          amplitude and time, as well as the pandora spacepoint
//          created from it.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRHit.h"

#include <climits>

namespace caf
{
  SRSpacePoint::SRSpacePoint()
  {  }

  SRHit::SRHit()
  {  }

  void SRHit::setDefault()
  { 
    peakTime      = -9999.f;

    RMS           = -9999.f;

    peakAmplitude = -9999.f;
    integral      = -9999.f;

    cryoID        = -5;
    tpcID         = -5;
    planeID       = -5;
    wireID        = -5;

    spacepoint.XYZ   = {-9999.f,-9999.f,-9999.f};
    spacepoint.chisq = -9999.f;
    spacepoint.ID    = -1;
    spacepoint.pfpID = -1;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
