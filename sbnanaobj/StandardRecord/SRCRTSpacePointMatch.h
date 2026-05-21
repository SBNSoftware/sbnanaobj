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

      SRCRTSpacePoint spacepoint; ///< the spacepoint
      float           score;      ///< assessment of quality of matching (depends on alg configuration)
      bool            matched;    ///< whether or not a match was made
    };
}

#endif // SRCRTSPACEPOINTMATCH_H
//////////////////////////////////////////////////////////////////////////////
