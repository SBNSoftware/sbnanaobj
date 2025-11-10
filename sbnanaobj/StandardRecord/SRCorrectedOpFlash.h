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
    float        OpFlashT0             { -9999. };                   ///< | OpFlash Time wrt RWM time | (us)
    float        NuToFLight             {  -9999.  };      ///< | Nu ToF using light only | (us)
    float        NuToFCharge             {  -9999.  };       ///< | Nu ToF Z from tpc vertex | (us)
    float        OpFlashT0Corrected    {  -9999.  };       ///< | OpFlash Time wrt RWM time after light propagation corrections | (us)
    /// @}

    void setDefault();

  };

} // end namespace

#endif // SRCORRECTEDOPFLASH_H
//////////////////////////////////////////////////////////////////////////////

