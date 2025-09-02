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
    UpstreamTime_lightonly =                             -9999.;
    UpstreamTime_tpczcorr  =                             -9999.;
    UpstreamTime_propcorr_tpczcorr =                     -9999.;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
