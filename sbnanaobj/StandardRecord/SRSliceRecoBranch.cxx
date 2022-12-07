////////////////////////////////////////////////////////////////////////
// \file    SRSliceRecoBranch.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSliceRecoBranch.h"


namespace caf 
{
  
  SRSliceRecoBranch::SRSliceRecoBranch() :
    npfp(0),
    nhit(0),
    nstub(0)
  {  
  }
  
  SRSliceRecoBranch::~SRSliceRecoBranch()
  { 
  }

  void SRSliceRecoBranch::fillSizes()
  {
    npfp   = pfp.size();
    //    nvtx   = vtx.size();
    nhit   = hit.size();
    // nshw_em = shw_em.size();
    // nshw_pandora = shw_pandora.size();
  }
 
} // end namespace caf
////////////////////////////////////////////////////////////////////////
