////////////////////////////////////////////////////////////////////////
// \file    SRCRTPMTMatch.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCRTPMTMatch.h"
#include <climits>

namespace caf
{
  /*SRMatchedCRT::SRMatchedCRT():
    PMTTimeDiff(std::numeric_limits<double>::lowest()),
    time(std::numeric_limits<double>::lowest()),
    sys(-1),
    region(-1)
    {}*/


  SRCRTPMTMatch::SRCRTPMTMatch():
    flashID(std::numeric_limits<int>::min()),
    flashTime_us(std::numeric_limits<double>::signaling_NaN())
    

    //flashGateTime_ns(std::numeric_limits<double>::signaling_NaN())
    //flashInGate(false),
    //flashInBeam(false),
    //flashClassification()
    //void SRCRTPMTMatch::setDefault(){flashPosition = .. }
  {}

  /*SRMatchedCRT::SRMatchedCRT():
    PMTTimeDiff(std::numeric_limits<double>::lowest()),
    time(std::numeric_limits<double>::lowest()),
    sys(-1),
    region(-1)
    {}*/

} // end namespace caf 
////////////////////////////////////////////////////////////////////////
