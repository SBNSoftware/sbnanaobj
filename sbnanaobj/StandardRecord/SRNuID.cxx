////////////////////////////////////////////////////////////////////////
// \file    SRNuID.cxx
// \brief   SRNuID object for Neutrino ID score features (MVA inputs). This SR code copied/based on other SR objects.
// \author  howard@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRNuID.h"

namespace caf
{
  SRNuID::SRNuID()
  {  }

  void SRNuID::setDefault()
  {
    nufspfos         = -9999.f;
    nutothits        = -5;
    nuvtxy           = -9999.f;
    nuwgtdirz        = -9999.f;
    nusps            = -9999.f;
    nueigen          = -9999.f;
    crlongtrkdiry    = -9999.f;
    crlongtrkdef     = -9999.f;
    crlongtrkhitfrac = -9999.f;
    crmaxhits        = -5;
  }


} // end namespace caf
////////////////////////////////////////////////////////////////////////
