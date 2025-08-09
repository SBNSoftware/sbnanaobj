////////////////////////////////////////////////////////////////////////
// \file    SROpFlash.cxx
// \brief   Adaptation of recob::OpFlash (https://nusoft.fnal.gov/larsoft/doxsvn/html/classrecob_1_1OpFlash.html). This SR code copied/based on other SR objects.
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SROpFlash.h"

#include <climits>

namespace caf
{

  SROpFlash::SROpFlash()
  {}

  void SROpFlash::setDefault()
  {
    onbeamtime       =   false;
    cryo             =      -5;
    tpc              =      -5;  
    firstpmt         =      -5;
    time             = -9999.f;
    timewidth        =    -5.f;
    timemean         = -9999.f;
    timesd           =    -5.f;
    firsttime        = -9999.f;
    rwmtime          = -9999.f;
    totalpe          =    -5.f;
    fasttototal      =    -5.f;
    peperwall[0] = -5.f;
    peperwall[1] = -5.f;

    center           = SRVector3D(-9999.f, -9999.f, -9999.f);
    width            = SRVector3D(-9999.f, -9999.f, -9999.f);
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
