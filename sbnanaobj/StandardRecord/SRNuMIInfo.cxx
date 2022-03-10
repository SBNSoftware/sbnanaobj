#include "sbnanaobj/StandardRecord/SRNuMIInfo.h"

#include <limits>
#include <climits>

namespace caf
{
  SRNuMIInfo::SRNuMIInfo():
    HRNDIR(std::numeric_limits<float>::signaling_NaN()),
    NSLINA(std::numeric_limits<float>::signaling_NaN()),
    NSLINB(std::numeric_limits<float>::signaling_NaN()),
    NSLINC(std::numeric_limits<float>::signaling_NaN()),
    NSLIND(std::numeric_limits<float>::signaling_NaN()),
    TRTGTD(std::numeric_limits<float>::signaling_NaN()),
    TR101D(std::numeric_limits<float>::signaling_NaN()),

    spill_time_s(std::numeric_limits<unsigned long int>::max()),
    spill_time_ns(std::numeric_limits<unsigned long int>::max()),
    event(UINT_MAX),
    daq_gates(UINT_MAX)
  {}
}

