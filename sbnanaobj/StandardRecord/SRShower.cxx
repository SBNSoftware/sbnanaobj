////////////////////////////////////////////////////////////////////////
// \file    SRShower.cxx
// \brief   An SRShower is a high level shower object.  It knows its
//          direction and length, but does not own its cell hits.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRShower.h"

#include <climits>

namespace{
  constexpr float kInvalid = std::numeric_limits<float>::signaling_NaN();
}

namespace caf
{

  SRShowerPlaneInfo::SRShowerPlaneInfo() :
    dEdx(kInvalid),
    energy(kInvalid),
    nHits(0),
    wirePitch(kInvalid)
  {
  }

  SRShower::SRShower():
    bestplane(-5),
    bestplane_dEdx(-5.0),
    bestplane_energy(-5.0),
    conversion_gap(-5.0),
    density(-5.0),
    len(-5.0),
    open_angle(-5.0),
    dir(kInvalid, kInvalid, kInvalid),
    start(kInvalid, kInvalid, kInvalid),
    end(kInvalid, kInvalid, kInvalid),
    cosmicDist(-5.f)
  {
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
