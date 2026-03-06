////////////////////////////////////////////////////////////////////////
// \file    SRSBNDCRTTrackMatch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSBNDCRTTRACKMATCH_H
#define SRSBNDCRTTRACKMATCH_H

#include "sbnanaobj/StandardRecord/SRSBNDCRTTrack.h"

namespace caf
{
  class SRSBNDCRTTrackMatch
    {
    public:
      SRSBNDCRTTrackMatch();
      virtual ~SRSBNDCRTTrackMatch() {}
      
      bool           matched; // whether or not a match was made
      SRSBNDCRTTrack track;   // the track
      float          score;   // assessment of quality of matching (depends on alg configuration)
    };
}

#endif // SRSBNDCRTTRACKMATCH_H
//////////////////////////////////////////////////////////////////////////////
