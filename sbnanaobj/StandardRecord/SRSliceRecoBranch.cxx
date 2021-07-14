////////////////////////////////////////////////////////////////////////
// \file    SRSliceRecoBranch.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSliceRecoBranch.h"


namespace caf 
{
  
  SRSliceRecoBranch::SRSliceRecoBranch() :
    ntrk(0),
    nshw(0),
    nstub(0)
  {  
  }
  
  SRSliceRecoBranch::~SRSliceRecoBranch()
  { 
  }

  void SRSliceRecoBranch::fillSizes()
  {
    
    //    nvtx   = vtx.size();
    ntrk   = trk.size();
    nshw   = shw.size();
    // nshw_em = shw_em.size();
    // nshw_pandora = shw_pandora.size();

  }
 
} // end namespace caf
////////////////////////////////////////////////////////////////////////
