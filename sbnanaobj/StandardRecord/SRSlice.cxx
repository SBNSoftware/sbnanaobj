////////////////////////////////////////////////////////////////////////
// \file    SRSlice.cxx
// \brief   SRSlice object for slice summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSlice.h"

namespace caf
{
  SRSlice::SRSlice()
  {  }


  SRSlice::~SRSlice(){  }


  void SRSlice::setDefault()
  {
    charge         = -5;
    charge_center  = SRVector3D(-9999.f, -9999.f, -9999.f);
    charge_width   = SRVector3D(-9999.f, -9999.f, -9999.f);
  }


} // end namespace caf
////////////////////////////////////////////////////////////////////////
