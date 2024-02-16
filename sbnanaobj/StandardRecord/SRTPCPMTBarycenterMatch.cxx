////////////////////////////////////////////////////////////////////////
// \file    SRTPCPMTBarycenterMatch.cxx
// \brief   Slice-level match info for barycenter flash matching, including best match OpFlash and matching to triggger
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTPCPMTBarycenterMatch.h"

#include <climits>

namespace caf
{

  void SRTPCPMTBarycenterMatch::setDefault()
  {

    chargeTotal        =                             -9999.;
    chargeCenterXLocal =                             -9999.;
    chargeCenter       = SRVector3D(-9999., -9999., -9999.);
    chargeWidth        = SRVector3D(-9999., -9999., -9999.); 

    flashTime          =                             -9999.;
    flashFirstHit      =                             -9999.;
    flashPEs           =                             -9999.;
    flashAsymmetry     =                             -9999.;
    flashCenter        = SRVector3D(-9999., -9999., -9999.);
    flashWidth         = SRVector3D(-9999., -9999., -9999.);

    deltaY             =                             -9999.;
    deltaZ             =                             -9999.;
    radius             =                             -9999.;
    deltaT             =                             -9999.;
    overlapY           =                             -9999.;
    overlapZ           =                             -9999.;
    deltaY_Trigger     =                             -9999.;
    deltaZ_Trigger     =                             -9999.;
    radius_Trigger     =                             -9999.;

  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
