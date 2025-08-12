////////////////////////////////////////////////////////////////////////
// \file    SRSBNDFrame.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSBNDFRAME_H
#define SRSBNDFRAME_H

namespace caf
{
  class SRSBNDFrame
    {
    public:
      SRSBNDFrame();
      virtual ~SRSBNDFrame() {}

      double frameTdcCrtt1;
      double frameTdcBes;
      double frameTdcRwm;
      double frameHltCrtt1;
      double frameHltBeamGate;
      double frameDataToMC;
      
    };
} // end namespace

#endif // SRSBNDFRAME_H
//////////////////////////////////////////////////////////////////////////////
