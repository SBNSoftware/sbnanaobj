////////////////////////////////////////////////////////////////////////
// \file    SRSliceRecoBranch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSLICERECOBRANCH_H
#define SRSLICERECOBRANCH_H

#include "sbnanaobj/StandardRecord/SRStub.h"
#include "sbnanaobj/StandardRecord/SRPFP.h"
#include "sbnanaobj/StandardRecord/SRHit.h"

#include <vector>

namespace caf
{
  /// Vectors of reconstructed objects found by various algorithms
  class SRSliceRecoBranch
  {
  public:
    SRSliceRecoBranch();
    ~SRSliceRecoBranch();

    std::vector<SRPFP> pfp;        ///< Vector of pfps
    size_t             npfp;       ///< Number of pfps

    std::vector<SRHit> hit;        ///< Vector of hits
    size_t            nhit;        ///< Number of hits

    std::vector<SRStub> stub;      ///< Vector of stubs
    size_t             nstub;      ///< Number of stubs

    void fillSizes();
      
  };
  
} // end namespace

#endif // SRSLICERECOBRANCH_H
////////////////////////////////////////////////////////////////////////////
