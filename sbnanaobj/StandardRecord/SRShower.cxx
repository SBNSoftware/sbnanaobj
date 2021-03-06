////////////////////////////////////////////////////////////////////////
// \file    SRShower.cxx
// \brief   An SRShower is a high level shower object.  It knows its
//          direction and length, but does not own its cell hits.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRShower.h"

namespace caf
{

  SRShower::SRShower():
    bestplane(-5),
    bestplane_dEdx(-5.0),
    bestplane_energy(-5.0),
    conversion_gap(-5.0),
    density(-5.0),
    len(-5.0),
    open_angle(-5.0),
    dEdx_plane0(-5.0), dEdx_plane1(-5.0), dEdx_plane2(-5.0),
    energy_plane0(-5.0), energy_plane1(-5.0), energy_plane2(-5.0),
    nHits_plane0(0), nHits_plane1(0), nHits_plane2(0),
    wirePitch_plane0(0), wirePitch_plane1(0), wirePitch_plane2(0),
    dEdx(),
    energy(),
    dir(-5.0, -5.0, -5.0),
    start(-5.0, -5.0, -5.0),
    end(-5.0, -5.0, -5.0),
    cosmicDist(-5.f)
  {
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
