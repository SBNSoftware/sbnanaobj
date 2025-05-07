#include "sbnanaobj/StandardRecord/SRNuGraphScore.h"
#include <limits>

namespace caf
{
  SRNuGraphScore::SRNuGraphScore() :
    sem_cat(NuGraphCategory::Unset),
    mip_frac(std::numeric_limits<float>::signaling_NaN()),
    hip_frac(std::numeric_limits<float>::signaling_NaN()),
    shr_frac(std::numeric_limits<float>::signaling_NaN()),
    mhl_frac(std::numeric_limits<float>::signaling_NaN()),
    dif_frac(std::numeric_limits<float>::signaling_NaN()),
    bkg_frac(std::numeric_limits<float>::signaling_NaN())
  {
  }
}
