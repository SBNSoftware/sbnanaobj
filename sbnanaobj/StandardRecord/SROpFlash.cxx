////////////////////////////////////////////////////////////////////////
// \file    SROpFlash.cxx
// \brief   Adaptation of recob::OpFlash (https://nusoft.fnal.gov/larsoft/doxsvn/html/classrecob_1_1OpFlash.html). This SR code copied/based on other SR objects.
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SROpFlash.h"

#include <climits>

namespace caf
{

  SROpFlash::SROpFlash():
  {}

  void SROpFlash::setDefault()
  {

    Time        = -9999.f;
    TimeWidth   =    -5.f;
    TotalPE     =    -5.f;
    FastToTotal =    -5.f;
    OnBeamTime  =   false;
    XCenter     = -9999.f;
    XWidth      =    -5.f;
    YCenter     = -9999.f;
    YWidth      =    -5.f;
    ZCenter     = -9999.f;
    ZWidth      =    -5.f;
    Cryo        =      -5;
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
