////////////////////////////////////////////////////////////////////////
// \file    SRSliceRecoBranch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSLICERECOBRANCH_H
#define SRSLICERECOBRANCH_H

#include "sbnanaobj/StandardRecord/SRTrack.h"
#include "sbnanaobj/StandardRecord/SRShower.h"
#include "sbnanaobj/StandardRecord/SRStub.h"
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
            
    std::vector<SRTrack>  trk;     ///< Vector of pandora tracks
    std::unordered_map<int, std:vector<SRTrack>> trkMap;
    size_t               ntrk;     ///< Number of panora tracks

    std::vector<SRShower> shw;     ///< Vector of trac showers
    std::unordered_map<int, std:vector<SRShower>> shwMap;
    size_t               nshw;     ///< Number of trac showers

    std::vector<SRHit> hit;        ///< Vector of hits
    size_t            nhit;        ///< Number of hits

    std::vector<SRStub> stub;      ///< Vector of stubs
    std::unordered_map<int, std:vector<SRStub>> stubMap;
    size_t             nstub;      ///< Number of stubs

    void fillSizes();
      
  };
  
} // end namespace

#endif // SRSLICERECOBRANCH_H
////////////////////////////////////////////////////////////////////////////
