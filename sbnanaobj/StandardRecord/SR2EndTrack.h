////////////////////////////////////////////////////////////////////////
// \file    SR2EndTrack.h
////////////////////////////////////////////////////////////////////////
#ifndef SR2ENDTRACK_H
#define SR2ENDTRACK_H

#include "sbnanaobj/StandardRecord/SRTrackTruth.h"
#include "sbnanaobj/StandardRecord/SRTrackCalo.h"
#include "sbnanaobj/StandardRecord/SRTrkChi2PID.h"

#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  class SR2EndTrack
    {
    public:


      SR2EndTrack();
      ~SR2EndTrack(){  }

      SRVector3D     vtx;         ///< Vertex position
      SRVector3D     dir_vtxA;    ///< Direction at vertex of track A (vtx-start)
      SRVector3D     dir_vtxB;    ///< Direction at vertex of track B (vtx-en/)

      float          lenA;        ///< Length of track A (vtx-start)
      float          lenB;        ///< Length of track B (vtx-end)
      int            nptsA;       ///< Number of track points of track A (vtx-start)
      int            nptsB;       ///< Number of track points of track B (vtx-end)

      SRTrkChi2PID   pidA;        ///< Chi2 particle ID of the track on the split-plane of track A (vtx-start)
      SRTrkChi2PID   pidB;        ///< Chi2 particle ID of the track on the split-plane of track B (vtx-end)
      SRTrackCalo    caloA;       ///< Calorimetry of the track on the split-plane of track A (vtx-start)
      SRTrackCalo    caloB;       ///< Calorimetry of the track on the split-plane of track B (vtx-end)
      unsigned short calo_plane;  ///< Plane of the calorimetry where the track is split

      float          split_chi2_lo;   ///< The double-ended particle ID chi2
      float          split_chi2_hi;   ///< The double-ended particle ID chi2
      float          rev_chi2_lo;   ///< The double-ended particle ID chi2
      float          rev_chi2_hi;   ///< The double-ended particle ID chi2
      unsigned       ndf_lo;         ///< Number of degrees of freedom of the split point
      unsigned       ndf_hi;         ///< Number of degrees of freedom of the split point
      unsigned       split;       ///< The location of the split point in the calorimetry
    };

} // end namespace

#endif // SR2ENDTRACK_H
//////////////////////////////////////////////////////////////////////////////
