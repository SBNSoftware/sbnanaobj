////////////////////////////////////////////////////////////////////////
// \file    SRHit.h
////////////////////////////////////////////////////////////////////////
#ifndef SRHIT_H
#define SRHIT_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  class SRSpacePoint
  {
    public:
      SRSpacePoint();

      SRVector3D XYZ;
      double chisq;

      int ID; // spacepoint ID 
      int pfpID; // PFP ID that this spacepoint belongs to; -1 if no PFP
  };

  /// Representation of a rb::Shower, knows energy and direction, but not a list
  /// of hits.
  class SRHit
    {
    public:
      SRHit();
      ~SRHit(){  }
      float peakTime; // time of hit peak in tick units

      float RMS;

      float peakAmplitude;
      float integral;

      int cryoID;
      int tpcID;
      int planeID;
      int wireID;

      SRSpacePoint spacepoint;

      unsigned producer;    ///< Index of the producer that produced this object. In ICARUS, this is the same as the cryostat.
    };

} // end namespace

#endif // SRHIT_H
//////////////////////////////////////////////////////////////////////////////
