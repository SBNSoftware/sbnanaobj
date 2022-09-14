////////////////////////////////////////////////////////////////////////
// \file    SRHit.h
////////////////////////////////////////////////////////////////////////
#ifndef SRHIT_H
#define SRHIT_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  /// Representation of a rb::Spacepoint, knows pfp ID and position
  class SRSpacePoint
  {
    public:
      SRSpacePoint();
      ~SRSpacePoint() { }

      SRVector3D XYZ;
      double chisq  { kSignalingNaN     };

      int ID { kUninitializedInt }; // spacepoint ID 
      int pfpID { kUninitializedInt }; // PFP ID that this spacepoint belongs to; -1 if no PFP
  };

  /// Representation of a rb::Hit, knows hit amplitude and integral, geometric IDs, and time
  class SRHit
    {
    public:
      SRHit();
      ~SRHit(){  }
      float peakTime  { kSignalingNaN     }; // time of hit peak in tick units

      float RMS  { kSignalingNaN     };

      float peakAmplitude  { kSignalingNaN     };
      float integral  { kSignalingNaN     };

      int cryoID { kUninitializedInt };
      int tpcID { kUninitializedInt };
      int planeID { kUninitializedInt };
      int wireID { kUninitializedInt };

      SRSpacePoint spacepoint;

      void setDefault();
    };

} // end namespace

#endif // SRHIT_H
//////////////////////////////////////////////////////////////////////////////
