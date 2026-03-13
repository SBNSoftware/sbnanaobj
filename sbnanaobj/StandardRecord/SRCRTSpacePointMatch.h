////////////////////////////////////////////////////////////////////////
// \file    SRCRTSpacePointMatch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTSPACEPOINTMATCH_H
#define SRCRTSPACEPOINTMATCH_H

#include "sbnanaobj/StandardRecord/SRCRTSpacePoint.h"

namespace caf
{
  class SRCRTSpacePointMatch
    {
    public:
      SRCRTSpacePointMatch();

      bool            matched;    ///< whether or not a match was made
      SRCRTSpacePoint spacepoint; ///< the spacepoint
      float           score;      ///< assessment of quality of matching (depends on alg configuration)
    };
}

#endif // SRCRTSPACEPOINTMATCH_H
//////////////////////////////////////////////////////////////////////////////
