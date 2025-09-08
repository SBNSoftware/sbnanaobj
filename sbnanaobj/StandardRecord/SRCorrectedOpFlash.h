////////////////////////////////////////////////////////////////////////
// \file    SRCorrectedOpFlash.h
// \brief   Slice-level match info for corrected opflash, which includes corrected opflash time using tpc information
// \author  acastill@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRCORRECTEDOPFLASH_H
#define SRCORRECTEDOPFLASH_H

#include "sbnanaobj/StandardRecord/SRConstants.h"
#include <vector>

namespace caf
{
  class SRCorrectedOpFlash
  {
  public:

    /// @name Data members related to the opflash corrected time
    /// @{
    float        OpFlashT0             { -9999. };                   ///< | OpFlash Time wrt RWM time | (ns)
    float        UpstreamTime_lightonly             {  -9999.  };      ///< | Nu upstream wall time reconstructed using light only | (ns)
    float        UpstreamTime_tpczcorr             {  -9999.  };       ///< | Nu upstream wall time reconstructed using light and Z from tpc vertex | (ns)
    float        UpstreamTime_propcorr_tpczcorr    {  -9999.  };       ///< | Nu upstream wall time reconstructed using light propagation correction from tpc information and z correction from tpc vertex | (ns)
    float        SliceNuScore             {  -9999.  };                   ///< | Slice Nu Score |
    float        FMScore             {  -9999.  };                   ///< | Flash Match Score |
    /// @}

    void setDefault();

  };

} // end namespace

#endif // SRCORRECTEDOPFLASH_H
//////////////////////////////////////////////////////////////////////////////

