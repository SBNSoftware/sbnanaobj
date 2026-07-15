////////////////////////////////////////////////////////////////////////
// \file    SRCRTHitTruth.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTHITTRUTH_H
#define SRCRTHITTRUTH_H

#include <vector>

namespace caf
{
  /// Truthing information between a TPC Track and a CRT Hit
  struct SRCRTHitTruth
    {
      std::vector<int> match_id;
      std::vector<float> match_e;
      int bestmatch_id = -1;
    };

} // end namespace

#endif // SRCRTHITTRUTH_H
//////////////////////////////////////////////////////////////////////////////
