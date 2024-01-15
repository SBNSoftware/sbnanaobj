////////////////////////////////////////////////////////////////////////
// \file    SRSBNDCRTTrack.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSBNDCRTTRACK_H
#define SRSBNDCRTTRACK_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SREnums.h"
#include <set>

namespace caf
{
  class SRSBNDCRTTrack
    {
    public:
      SRSBNDCRTTrack();
      ~SRSBNDCRTTrack() {}
      
      std::vector<SRVector3D>   points;   // fitted track points at each tagger [cm]
      float                     time;     // average time [ns]
      float                     time_err; // error in average time [ns]
      float                     pe;       // total PE;
      float                     tof;      // time from first space point to last [ns]
      std::set<SBNDCRTTagger_t> taggers;  // which taggers were used to create the track
    };
} // end namespace

#endif // SRSBNDCRTTRACK_H
//////////////////////////////////////////////////////////////////////////////
