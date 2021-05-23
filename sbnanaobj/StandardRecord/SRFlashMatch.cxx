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
    charge(SRFlashMatch::Charge(
             std::numeric_limits<float>::signaling_NaN(),
             SRVector3D())),
    light(SRFlashMatch::Flash(
            std::numeric_limits<float>::signaling_NaN(),
            SRVector3D())),
    score(SRFlashMatch::Score(
            std::numeric_limits<float>::signaling_NaN(),
            std::numeric_limits<float>::signaling_NaN(),
            std::numeric_limits<float>::signaling_NaN(),
            std::numeric_limits<float>::signaling_NaN(),
            std::numeric_limits<float>::signaling_NaN()))
  {}

  SRFlashMatch::~SRFlashMatch(){  }

  void SRFlashMatch::setDefault()
  {
    present = false;
    time    = -5.0;
    charge  = SRFlashMatch::Charge(-5.0, SRVector3D(-10.,-10.,-10.));
    light   = SRFlashMatch::Flash(-5.0, SRVector3D(-10.,-10.,-10.));
    score   = SRFlashMatch::Score(-5.0,-5.0,-5.0,-5.0,-5.0);
  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
