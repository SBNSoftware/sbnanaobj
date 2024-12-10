#include "sbnanaobj/StandardRecord/SRCVNScore.h"
#include <limits>

namespace caf
{
  SRCVNScore::SRCVNScore() :
    cosmicscore(std::numeric_limits<float>::signaling_NaN()),
    ncscore(std::numeric_limits<float>::signaling_NaN()),
    numuscore(std::numeric_limits<float>::signaling_NaN()),
    nuescore(std::numeric_limits<float>::signaling_NaN())
  {
  }
}
