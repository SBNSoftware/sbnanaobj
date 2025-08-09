////////////////////////////////////////////////////////////////////////
// \file    SRCRTHitMatch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTHITMATCH_H
#define SRCRTHITMATCH_H

#include "sbnanaobj/StandardRecord/SRCRTHit.h"
#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  /// Matching information between a TPC Track and a CRT Hit
  class SRCRTHitMatch
    {
    public:

      SRCRTHitMatch();
      virtual ~SRCRTHitMatch() {}
      SRCRTHit hit; ///< The CRT hit
      float distance; ///< Distance from the extrapolated TPC track to the CRT hit [cm]
      int region; ///< region of the matched crt plane
      int sys; ///< system of the matched crt hit (e.g. ICARUS: Top 0, Side 1, Bottom 2)
      float deltaX; ///< DeltaX between CRT Hit matched and the track extrapolation onto the CRT plane
      float deltaY; ///< DeltaY between CRT Hit matched and the track extrapolation onto the CRT plane
      float deltaZ; ///< DeltaZ between CRT Hit matched and the track extrapolation onto the CRT plane
      float crossX; ///< Extrapolated track crossing point onto the CRT plane
      float crossY; ///< Extrapolated track crossing point onto the CRT plane
      float crossZ; ///< Extrapolated track crossing point onto the CRT plane
    };

} // end namespace

#endif // SRCRTHITMATCH_H
//////////////////////////////////////////////////////////////////////////////
