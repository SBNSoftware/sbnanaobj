////////////////////////////////////////////////////////////////////////
// \file    SRSliceRecoBranch.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSliceRecoBranch.h"


namespace caf 
{
  
  SRSliceRecoBranch::SRSliceRecoBranch() :
    npfp(0)
  {  
  }
  
  SRSliceRecoBranch::~SRSliceRecoBranch()
  { 
  }

  void SRSliceRecoBranch::fillSizes()
  {
    
    npfp   = pfp.size();
  }
 
} // end namespace caf
////////////////////////////////////////////////////////////////////////
