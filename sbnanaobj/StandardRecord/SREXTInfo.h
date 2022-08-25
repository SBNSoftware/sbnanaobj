#ifndef SREXTInfo_h
#define SREXTInfo_h

namespace caf
{
  class SREXTInfo
  {
  public:
    SREXTInfo();
    unsigned int gates_since_last_trigger;
    bool isBNBOffBeam;
    bool isNuMIOffBeam;
    bool isMajority;
    bool isMinBias;
  };
}

#endif
