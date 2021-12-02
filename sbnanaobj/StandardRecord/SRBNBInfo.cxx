#include "sbnanaobj/StandardRecord/SRBNBInfo.h"

#include <limits>
#include <climits>

namespace caf
{
  SRBNBInfo::SRBNBInfo():
    spill_time_sec(UINT_MAX),
    spill_time_nsec(UINT_MAX),
    event(UINT_MAX),
    TOR860(std::numeric_limits<float>::signaling_NaN()),
    TOR875(std::numeric_limits<float>::signaling_NaN()),
    LM875A(std::numeric_limits<float>::signaling_NaN()),
    LM875B(std::numeric_limits<float>::signaling_NaN()),
    LM875C(std::numeric_limits<float>::signaling_NaN()),
    HP875(std::numeric_limits<float>::signaling_NaN()),
    VP875(std::numeric_limits<float>::signaling_NaN()),
    HPTG1(std::numeric_limits<float>::signaling_NaN()),
    VPTG1(std::numeric_limits<float>::signaling_NaN()),
    HPTG2(std::numeric_limits<float>::signaling_NaN()),
    VPTG2(std::numeric_limits<float>::signaling_NaN()),
    BTJT2(std::numeric_limits<float>::signaling_NaN()),
    THCURR(std::numeric_limits<float>::signaling_NaN()),
    M875BB_spill_time_diff(std::numeric_limits<float>::signaling_NaN()),
    M876BB_spill_time_diff(std::numeric_limits<float>::signaling_NaN()),
    MMBTBB_spill_time_diff(std::numeric_limits<float>::signaling_NaN())
  {}
  SRBNBInfo::~SRBNBInfo() {}

  void SRBNBInfo::setDefault()
  {
    spill_time_sec = 0;
    spill_time_nsec = 0;
    event = UINT_MAX;
    TOR860 = -999.0;
    TOR875 = -999.0;
    LM875A = -999.0;
    LM875B = -999.0;
    LM875C = -999.0;
    HP875 = -999.0;
    VP875 = -999.0;
    HPTG1 = -999.0;
    VPTG1 = -999.0;
    HPTG2 = -999.0;
    VPTG2 = -999.0;
    BTJT2 = -999.0;
    THCURR = -999.0;
    M875BB_spill_time_diff = -999.0;
    M876BB_spill_time_diff = -999.0;
    MMBTBB_spill_time_diff = -999.0;
  }
    
} //end namespace caf
