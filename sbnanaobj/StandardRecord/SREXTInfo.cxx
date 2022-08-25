#include "sbnanaobj/StandardRecord/SREXTInfo.h"

#include <limits>
#include <climits>

namespace caf
{
  SREXTInfo::SREXTInfo():
    gates_since_last_trigger(std::numeric_limits<unsigned int>::max()),
    isBNBOffBeam(false),
    isNuMIOffBeam(false),
    isMajority(false),
    isMinBias(false)
  {}
}
