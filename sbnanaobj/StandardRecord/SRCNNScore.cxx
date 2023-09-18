#include "sbnanaobj/StandardRecord/SRCNNScore.h"
#include <limits>

namespace caf
{
  SRCNNScore::SRCNNScore() :
    track(std::numeric_limits<float>::signaling_NaN()),
    shower(std::numeric_limits<float>::signaling_NaN()),
    noise(std::numeric_limits<float>::signaling_NaN()),
    michel(std::numeric_limits<float>::signaling_NaN()),
    endmichel(std::numeric_limits<float>::signaling_NaN()),
    nclusters(std::numeric_limits<int>::signaling_NaN())
  {
  }
}