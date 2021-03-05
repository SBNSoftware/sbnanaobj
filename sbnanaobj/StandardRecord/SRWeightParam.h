#ifndef SRWEIGHTPARAM_H
#define SRWEIGHTPARAM_H

#include <string>

namespace caf
{
  class SRWeightParam
  {
  public:
    std::string name;
    float mean;
    float width;
    int covidx;
  };
}

#endif
