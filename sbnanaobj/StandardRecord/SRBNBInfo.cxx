#include "sbnanaobj/StandardRecord/SRBNBInfo.h"

#include <limits>
#include <climits>

namespace caf
{
  SRBNBInfo::SRBNBInfo():
    spill_time_sec(std::numeric_limits<unsigned long int>::max()),
    spill_time_nsec(std::numeric_limits<unsigned long int>::max()),
    event(UINT_MAX),
    TOR860(std::numeric_limits<float>::signaling_NaN()),
    TOR875(std::numeric_limits<float>::signaling_NaN()),
    LM875A(std::numeric_limits<float>::signaling_NaN()),
    LM875B(std::numeric_limits<float>::signaling_NaN()),
    LM875C(std::numeric_limits<float>::signaling_NaN()),
    HP873(std::numeric_limits<float>::signaling_NaN()),
    VP873(std::numeric_limits<float>::signaling_NaN()),
    HP875(std::numeric_limits<float>::signaling_NaN()),
    VP875(std::numeric_limits<float>::signaling_NaN()),
    HPTG1(std::numeric_limits<float>::signaling_NaN()),
    VPTG1(std::numeric_limits<float>::signaling_NaN()),
    HPTG2(std::numeric_limits<float>::signaling_NaN()),
    VPTG2(std::numeric_limits<float>::signaling_NaN()),
    BTJT2(std::numeric_limits<float>::signaling_NaN()),
    THCURR(std::numeric_limits<float>::signaling_NaN()),
    M875HS(std::numeric_limits<float>::signaling_NaN()),
    M875VS(std::numeric_limits<float>::signaling_NaN()),
    M875HM(std::numeric_limits<float>::signaling_NaN()),
    M875VM(std::numeric_limits<float>::signaling_NaN()),
    M876HS(std::numeric_limits<float>::signaling_NaN()),
    M876VS(std::numeric_limits<float>::signaling_NaN()),
    M876HM(std::numeric_limits<float>::signaling_NaN()),
    M876VM(std::numeric_limits<float>::signaling_NaN()),
    M875BB_spill_time_diff(std::numeric_limits<float>::signaling_NaN()),
    M876BB_spill_time_diff(std::numeric_limits<float>::signaling_NaN()),
    MMBTBB_spill_time_diff(std::numeric_limits<float>::signaling_NaN())
  {}

  void SRBNBInfo::setDefault()
  {
    spill_time_sec = std::numeric_limits<unsigned long int>::max();
    spill_time_nsec = std::numeric_limits<unsigned long int>::max();
    event = UINT_MAX;
    TOR860 = -999.0;
    TOR875 = -999.0;
    LM875A = -999.0;
    LM875B = -999.0;
    LM875C = -999.0;
    HP873 = -999.0;
    VP873 = -999.0;
    HP875 = -999.0;
    VP875 = -999.0;
    HPTG1 = -999.0;
    VPTG1 = -999.0;
    HPTG2 = -999.0;
    VPTG2 = -999.0;
    BTJT2 = -999.0;
    THCURR = -999.0;
    M875HS = std::numeric_limits<float>::lowest();
    M875VS = std::numeric_limits<float>::lowest();
    M875HM = std::numeric_limits<float>::lowest();
    M875VM = std::numeric_limits<float>::lowest();
    M876HS = std::numeric_limits<float>::lowest();
    M876VS = std::numeric_limits<float>::lowest();
    M876HM = std::numeric_limits<float>::lowest();
    M876VM = std::numeric_limits<float>::lowest();
    M875BB_spill_time_diff = -999.0;
    M876BB_spill_time_diff = -999.0;
    MMBTBB_spill_time_diff = -999.0;
  }
    
} //end namespace caf
