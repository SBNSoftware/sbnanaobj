#ifndef SRWEIGHTPSET_H
#define SRWEIGHTPSET_H

#include "sbnanaobj/StandardRecord/SRWeightMapEntry.h"

#include "sbnanaobj/StandardRecord/SREnums.h"

#include <string>
#include <vector>

namespace caf
{
  class SRWeightPSet
  {
  public:
    std::string name;
    ReweightType_t type;
    int nuniv;
    std::vector<float> covmx;

    std::vector<SRWeightMapEntry> map;
  };
}

#endif
