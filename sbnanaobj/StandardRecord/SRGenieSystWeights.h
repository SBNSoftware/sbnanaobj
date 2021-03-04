////////////////////////////////////////////////////////////////////////
//  SRGenieSystWeights.h
// \author  backhouse@fnal.gov
////////////////////////////////////////////////////////////////////////

#ifndef SRGENIESYSTWEIGHTS_H
#define SRGENIESYSTWEIGHTS_H

#include "sbnanaobj/StandardRecord/SRGenieSystWeights.h"

namespace caf
{
  /// TODO big comment explaining the indexing
  class SRGenieSystWeights
  {
  public:
    // [syst] then [universe]
    std::vector<std::vector<float>> wgt;
  };
}

#endif
