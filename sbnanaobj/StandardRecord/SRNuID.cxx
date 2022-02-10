////////////////////////////////////////////////////////////////////////
// \file    SRNuID.cxx
// \brief   SRNuID object for Neutrino ID score features (MVA inputs). This SR code copied/based on other SR objects.
// \author  $Author: howard@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRNuID.h"

#include <limits>
#include <climits>

namespace caf
{
  SRNuID::SRNuID():
    nufspfos(std::numeric_limits<float>::signaling_NaN()),
    nutothits(0),
    nuvtxy(std::numeric_limits<float>::signaling_NaN()),
    nuwgtdirz(std::numeric_limits<float>::signaling_NaN()),
    nusps(std::numeric_limits<float>::signaling_NaN()),
    nueigen(std::numeric_limits<float>::signaling_NaN()),
    crlongtrkdiry(std::numeric_limits<float>::signaling_NaN()),
    crlongtrkdef(std::numeric_limits<float>::signaling_NaN()),
    crlongtrkhitfrac(std::numeric_limits<float>::signaling_NaN()),
    crmaxhits(0)
  {  }


  SRNuID::~SRNuID(){  }


  void SRNuID::setDefault()
  {
    nufspfos         = -9999.f;
    nutothits        = 0;
    nuvtxy           = -9999.f;
    nuwgtdirz        = -9999.f;
    nusps            = -9999.f;
    nueigen          = -9999.f;
    crlongtrkdiry    = -9999.f;
    crlongtrkdef     = -9999.f;
    crlongtrkhitfrac = -9999.f;
    crmaxhits        = 0;
  }


} // end namespace caf
////////////////////////////////////////////////////////////////////////
