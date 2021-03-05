#ifndef SRWEIGHTMAPENTRY_H
#define SRWEIGHTMAPENTRY_H

#include "SRWeightParam.h"

#include <vector>

namespace caf
{
  class SRWeightMapEntry
  {
  public:
    SRWeightMapEntry(const SRWeightParam& p,
                     const std::vector<float>& vs) : param(p), vals(vs) {}

    SRWeightParam param;
    std::vector<float> vals;
  };
}

#endif
