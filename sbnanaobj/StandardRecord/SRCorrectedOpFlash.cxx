////////////////////////////////////////////////////////////////////////
// \file    SRCorrectedOpFlash.cxx
// \brief   Slice-level match info for corrected opflash, which includes corrected opflash time using tpc information
// \author  acastill@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCorrectedOpFlash.h"

#include <climits>

namespace caf
{

  void SRCorrectedOpFlash::setDefault()
  {
    OpFlashT0             =                             -9999.;
    NuToFLight            =                             -9999.;
    NuToFCharge           =                             -9999.;
    OpFlashT0Corrected    =                             -9999.;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
