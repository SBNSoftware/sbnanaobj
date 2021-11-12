////////////////////////////////////////////////////////////////////////
// \file    ParticleMatch.cxx
// \brief   A ParticleMatch contains basic matching information between
//          a reconstructed object and a true particle
////////////////////////////////////////////////////////////////////////
#include "sbnanaobj/Morgue/ParticleMatch.h"

#include <climits>
#include <limits>

namespace caf
{

ParticleMatch::ParticleMatch():
  G4ID(INT_MIN),
  energy(std::numeric_limits<float>::signaling_NaN())
{}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
