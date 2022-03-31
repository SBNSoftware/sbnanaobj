////////////////////////////////////////////////////////////////////////
// \file    SRCRTHit.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTHIT_H
#define SRCRTHIT_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include <climits>

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
      float t0; // T0 subtracted by the gate start time [us]
      float t1; // T1 [us]
      float pe; // The number of PhotoElectrons in the hit
      int plane; //!< Plane that the CRT hit is on
      void setDefault();
    };

} // end namespace

#endif // SRCRTHIT_H
//////////////////////////////////////////////////////////////////////////////
