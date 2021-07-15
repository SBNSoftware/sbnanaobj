////////////////////////////////////////////////////////////////////////
// \file    SRTrackCalo.cxx
// \brief   An SRTrackCalo is a high level track ParticlePID object for
//          for larana Chi2ParticleID results. 
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTrackCalo.h"

#include <limits>

namespace caf
{

  SRCaloPoint::SRCaloPoint():
    rr(std::numeric_limits<float>::signaling_NaN()),
    dqdx(std::numeric_limits<float>::signaling_NaN()),
    dedx(std::numeric_limits<float>::signaling_NaN()),
    pitch(std::numeric_limits<float>::signaling_NaN()),
    t(std::numeric_limits<float>::signaling_NaN())
  {}

  SRTrackCalo::SRTrackCalo():
    nhit(-999),
    ke(std::numeric_limits<float>::signaling_NaN()),
    charge(std::numeric_limits<float>::signaling_NaN())
  {  }

  SRTrackCalo::~SRTrackCalo(){  }

  void SRTrackCalo::setDefault()
  {
    nhit          = -1;
    ke            = -1.;
    charge        = -1.;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
