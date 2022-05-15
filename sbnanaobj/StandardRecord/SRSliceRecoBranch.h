////////////////////////////////////////////////////////////////////////
// \file    SRSliceRecoBranch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSLICERECOBRANCH_H
#define SRSLICERECOBRANCH_H

//#include "sbnanaobj/StandardRecord/SRTrack.h"
//#include "sbnanaobj/StandardRecord/SRShower.h"
#include "sbnanaobj/StandardRecord/SRStub.h"
#include "sbnanaobj/StandardRecord/SRHit.h"
#include "sbnanaobj/StandardRecord/SRPFP.h"
>>>>>>> 2d13569 (Removed tracks and showers and added PFPs to the SRSliceRecoBranch, and added a shower and track to SRPFPs.)

#include <vector>

namespace caf
{
  /// Vectors of reconstructed objects found by various algorithms
  class SRSliceRecoBranch
  {
  public:
    SRSliceRecoBranch();
    ~SRSliceRecoBranch();

    std::vector<SRPFP> pfp;
    size_t             npfp;            
    std::vector<SRStub> stub;      ///< Vector of stubs
    size_t             nstub;      ///< Number of stubs

    void fillSizes();
      
  };
  
} // end namespace

#endif // SRSLICERECOBRANCH_H
////////////////////////////////////////////////////////////////////////////
