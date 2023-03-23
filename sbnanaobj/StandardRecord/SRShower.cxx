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
    bestplane_dEdx(kInvalid),
    bestplane_energy(kInvalid),
    conversion_gap(kInvalid),
    density(kInvalid),
    len(kInvalid),
    open_angle(kInvalid),
    dir(kInvalid, kInvalid, kInvalid),
    start(kInvalid, kInvalid, kInvalid),
    end(kInvalid, kInvalid, kInvalid),
    cosmicDist(-5.f)
  {
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
