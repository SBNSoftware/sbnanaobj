////////////////////////////////////////////////////////////////////////
// \file    SRCRTHitTruth.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTHITTRUTH_H
#define SRCRTHITTRUTH_H

#include <vector>

namespace caf
{
  /// Truthing information between a TPC Track and a CRT Hit
  class SRCRTHitTruth
    {
    public:

      SRCRTHitTruth();
      virtual ~SRCRTHitTruth() {}

      std::vector<int> match_id;
      std::vector<float> match_e;
      int bestmatch_id;
    };

} // end namespace

#endif // SRCRTHITTRUTH_H
//////////////////////////////////////////////////////////////////////////////
