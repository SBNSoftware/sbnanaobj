////////////////////////////////////////////////////////////////////////
// \file    SRCRTHit.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTHIT_H
#define SRCRTHIT_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  /// A hit from the CRT
  class SRCRTHit
    {
    public:

      SRCRTHit();
      virtual ~SRCRTHit() {}
      SRVector3D position;  // Position of CRT hit in detector coordinates [cm]
      SRVector3D position_err; // Error in position of CRT hit [cm]
      float time; // Time of CRT hit [us]
      float t0; //!< Hit time (from absolute time T0) relative to the gate start time [us]
      float t1; //!< Relatvie time w.r.t. beam early warning (from T1 module) [us]
      float pe; // The number of PhotoElectrons in the hit
      int plane; //!< Plane that the CRT hit is on
      int flag; //!< CRT Hit flag to help classify ICARUS Side CRT reco
      void setDefault();
    };

} // end namespace

#endif // SRCRTHIT_H
//////////////////////////////////////////////////////////////////////////////
