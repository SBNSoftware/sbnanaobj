////////////////////////////////////////////////////////////////////////
// \file    SRTrueParticle.cxx
// \brief   An SRTrueParticle is a high level true track object. It
//          knows true id, direction, length, but  no hit information.
////////////////////////////////////////////////////////////////////////
#include "sbnanaobj/StandardRecord/SRTrueParticle.h"
#include <climits>

namespace caf
{
  SRTrueParticlePlaneInfo::SRTrueParticlePlaneInfo() :
    visE(std::numeric_limits<float>::signaling_NaN()),
    nhit(0)
  {
  }

  SRTrueParticle::SRTrueParticle():
    genE(std::numeric_limits<float>::signaling_NaN()),
    startE(std::numeric_limits<float>::signaling_NaN()),
    endE(std::numeric_limits<float>::signaling_NaN()),
    genT(std::numeric_limits<float>::signaling_NaN()),
    startT(std::numeric_limits<float>::signaling_NaN()),
    endT(std::numeric_limits<float>::signaling_NaN()),
    length(std::numeric_limits<float>::signaling_NaN()),
    wallin(kWallNone),
    wallout(kWallNone),
    cont_tpc(false),
    crosses_tpc(false),
    contained(false),
    pdg(INT_MIN),
    G4ID(INT_MIN),
    interaction_id(INT_MIN),
    cryostat(-1),
    generator(kUnknownGenerator),
    start_process(g4_process_(caf::kG4UNKNOWN)), 
    end_process(g4_process_(caf::kG4UNKNOWN)),
    gstatus(kIStUndefined)
  {
  }
} // end namespace caf
////////////////////////////////////////////////////////////////////////
