////////////////////////////////////////////////////////////////////////
// \file    SRSBNDTimingInfo.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSBNDFRAME_H
#define SRSBNDFRAME_H

#include <stdint.h>

namespace caf
{
  class SRSBNDTimingInfo
    {
    public:
      SRSBNDTimingInfo();
      virtual ~SRSBNDTimingInfo() {}
      
      uint64_t tdcCrtt1;
      uint64_t tdcBes;
      uint64_t tdcRwm;
      uint64_t tdcEtrig;
      uint64_t hltCrtt1;
      uint64_t hltEtrig;
      uint64_t hltBeamGate;
    };
} // end namespace

#endif // SRSBNDFRAME_H
//////////////////////////////////////////////////////////////////////////////
