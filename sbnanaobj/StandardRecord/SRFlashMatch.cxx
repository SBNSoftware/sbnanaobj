////////////////////////////////////////////////////////////////////////
// \file    SRFlashMatch.cxx
// \brief   SRFlashMatch object for flashmatch summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRFlashMatch.h"

#include <limits>

namespace caf
{
  SRFlashMatch::SRFlashMatch():
    present(false),
    time(std::numeric_limits<float>::signaling_NaN()),
    pe(std::numeric_limits<float>::signaling_NaN()),
    score(std::numeric_limits<float>::signaling_NaN()),
    scr_y(std::numeric_limits<float>::signaling_NaN()),
    scr_z(std::numeric_limits<float>::signaling_NaN()),
    scr_rr(std::numeric_limits<float>::signaling_NaN()),
    scr_ratio(std::numeric_limits<float>::signaling_NaN())
    // what about chargeXYZ and lightXYZ?
  {  }


  SRFlashMatch::~SRFlashMatch(){  }


  void SRFlashMatch::setDefault()
  {
    present        = false;
    time           = -5.0;
    pe             = -5.0;
    score          = -5.0;
    scr_y          = -5.0;
    scr_z          = -5.0;
    scr_rr         = -5.0;
    scr_ratio      = -5.0;
    // what about chargeXYZ and lightXYZ?
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
