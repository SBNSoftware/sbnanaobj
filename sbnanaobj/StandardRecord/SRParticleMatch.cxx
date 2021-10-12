////////////////////////////////////////////////////////////////////////
// \file    SRParticleMatch.cxx
// \brief   An SRParticleMatch contains matching information between
//          a reconstructed object and a true particle
////////////////////////////////////////////////////////////////////////
#include "sbnanaobj/StandardRecord/SRParticleMatch.h"

#include <limits>
#include <climits>

namespace caf
{

SRParticleMatch::SRParticleMatch():
  G4ID(INT_MIN),
  energy(std::numeric_limits<float>::signaling_NaN()),
  hit_completeness(std::numeric_limits<float>::signaling_NaN()),
  hit_purity(std::numeric_limits<float>::signaling_NaN()),
  energy_completeness(std::numeric_limits<float>::signaling_NaN()),
  energy_purity(std::numeric_limits<float>::signaling_NaN())
{}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
