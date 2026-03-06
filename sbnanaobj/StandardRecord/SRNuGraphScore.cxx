#include "sbnanaobj/StandardRecord/SRNuGraphScore.h"

namespace caf
{

  SRNuGraphSliceInfo::SRNuGraphSliceInfo() : 
    mip_hits(INT_MIN),
    hip_hits(INT_MIN),
    shr_hits(INT_MIN),
    mhl_hits(INT_MIN),
    dif_hits(INT_MIN),
    ng_vtx_hip_hits(INT_MIN),
    unclustered_shr_hits(INT_MIN)
  {  }

} // end namespace caf