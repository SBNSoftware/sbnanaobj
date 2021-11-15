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
  visEintrk(std::numeric_limits<float>::signaling_NaN()),
  eff(std::numeric_limits<float>::signaling_NaN()),
  eff_cryo(std::numeric_limits<float>::signaling_NaN()),
  pur(std::numeric_limits<float>::signaling_NaN()),
  nmatches(0)
{}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
