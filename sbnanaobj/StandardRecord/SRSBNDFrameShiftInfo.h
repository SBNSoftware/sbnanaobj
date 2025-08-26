////////////////////////////////////////////////////////////////////////
// \file    SRSBNDFrameShiftInfo.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSBNDFRAMESHIFTINFO_H
#define SRSBNDFRAMESHIFTINFO_H

#include <cstdint>
namespace caf
{
  class SRSBNDFrameShiftInfo
    {
    public:
      SRSBNDFrameShiftInfo();
      virtual ~SRSBNDFrameShiftInfo() {}

      uint16_t timingType;
      double frameTdcCrtt1;
      double frameTdcBes;
      double frameTdcRwm;
      double frameHltCrtt1;
      double frameHltBeamGate;
      double frameApplyAtCaf;
    };
} // end namespace

#endif // SRSBNDFRAMESHIFTINFO_H
//////////////////////////////////////////////////////////////////////////////
