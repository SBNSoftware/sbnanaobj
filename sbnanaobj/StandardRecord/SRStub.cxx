////////////////////////////////////////////////////////////////////////
// \file    SRStub.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRStub.h"

#include <climits>

namespace caf
{

  SRStubHit::SRStubHit():
    charge(std::numeric_limits<float>::signaling_NaN()),
    wire(-1),
    ontrack(false)
  {}

  SRStubPlane::SRStubPlane():
    pitch(std::numeric_limits<float>::signaling_NaN()),
    trkpitch(std::numeric_limits<float>::signaling_NaN()),
    vtx_w(std::numeric_limits<float>::signaling_NaN()),
    hit_w(-1)
  {}

  SRStub::SRStub():
    efield_vtx(std::numeric_limits<float>::signaling_NaN()),
    efield_end(std::numeric_limits<float>::signaling_NaN()),
    pfpid(-1)
  {}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
