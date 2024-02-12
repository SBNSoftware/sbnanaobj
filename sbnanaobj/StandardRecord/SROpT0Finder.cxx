////////////////////////////////////////////////////////////////////////
// \file    SROpT0Finder.cxx
// \brief   An SROpT0Finder contains matching information between
//          a slice and the OpT0Finder object
////////////////////////////////////////////////////////////////////////
#include "sbnanaobj/StandardRecord/SROpT0Finder.h"

#include <limits>
#include <climits>

namespace caf
{

SROpT0Finder::SROpT0Finder():
    tpc(INT_MIN),     // tpc that the matching was performed in
    time(std::numeric_limits<float>::signaling_NaN()),    // flash-matched t0  
    score(std::numeric_limits<float>::signaling_NaN()),   // OpT0 score of the match; is the reciprocal of the LLH score or chi-squared score 
    measPE(std::numeric_limits<float>::signaling_NaN()),  // total PE of the measured flash 
    hypoPE(std::numeric_limits<float>::signaling_NaN())   // total PE of the hypothetical flash 
{}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
