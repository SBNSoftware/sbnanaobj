////////////////////////////////////////////////////////////////////////
// \file    SRTrackTruth.cxx
// \brief   An SRTrackTruth contains the matching information between an
//          SRTrack and a list of SRTrueParticles
////////////////////////////////////////////////////////////////////////
#include "sbnanaobj/StandardRecord/SRTrackTruth.h"

#include <climits>
//#include <bits/stdc++.h> //not available in clang

namespace caf
{

SRTrackTruth::SRTrackTruth():
  total_deposited_energy(std::numeric_limits<float>::signaling_NaN()),
  nmatches(0)
{}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
