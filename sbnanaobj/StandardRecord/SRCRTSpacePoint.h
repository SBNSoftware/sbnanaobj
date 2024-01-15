////////////////////////////////////////////////////////////////////////
// \file    SRCRTSpacePoint.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTSPACEPOINT_H
#define SRCRTSPACEPOINT_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  class SRCRTSpacePoint
    {
    public:
      SRCRTSpacePoint();
      ~SRCRTSpacePoint() {}
      
      SRVector3D position;     // position [cm]
      SRVector3D position_err; // positional spread [cm]
      float      pe;           // total PE
      float      time;         // time [ns]
      float      time_err;     // time_err [ns]
      bool       complete;     // was cluster made from perpendicular & overlapping strips?
    };
} // end namespace

#endif // SRCRTSPACEPOINT_H
//////////////////////////////////////////////////////////////////////////////
