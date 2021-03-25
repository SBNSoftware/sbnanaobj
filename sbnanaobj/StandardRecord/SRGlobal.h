#ifndef SRGLOBAL_H
#define SRGLOBAL_H

#include "sbnanaobj/StandardRecord/SRWeightPSet.h"

#include <vector>

namespace caf
{
  class SRGlobal
  {
  public:
    std::vector<SRWeightPSet> wgts;
  };
}

#endif
