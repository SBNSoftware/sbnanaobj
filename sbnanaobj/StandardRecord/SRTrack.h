////////////////////////////////////////////////////////////////////////
// \file    SRTrack.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACK_H
#define SRTRACK_H

/* #include "sbnanaobj/StandardRecord/SRVector3D.h" */

#include "sbnanaobj/StandardRecord/SRTrackTruth.h"
#include "sbnanaobj/StandardRecord/SRTrkChi2PID.h"
#include "sbnanaobj/StandardRecord/SRTrkLikePID.h"
#include "sbnanaobj/StandardRecord/SRTrkMCS.h"
#include "sbnanaobj/StandardRecord/SRTrkRange.h"
#include "sbnanaobj/StandardRecord/SRCRTHitMatch.h"
#include "sbnanaobj/StandardRecord/SRCRTTrackMatch.h"
#include "sbnanaobj/StandardRecord/SRCRTSpacePointMatch.h"
#include "sbnanaobj/StandardRecord/SRSBNDCRTTrackMatch.h"
#include "sbnanaobj/StandardRecord/SRTrackCalo.h"
#include "sbnanaobj/StandardRecord/SRTrackDazzle.h"
#include "sbnanaobj/StandardRecord/SRTrackScatterClosestApproach.h"
#include "sbnanaobj/StandardRecord/SRTrackStoppingChi2Fit.h"

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SREnums.h"

namespace caf
{
  /// Representation of a rb::Track, knows energy and direction, but not a list
  /// of hits.
  class SRTrack
    {
    public:


      SRTrack();
      ~SRTrack(){  }

      unsigned producer;    ///< Index of the producer that produced this object. In ICARUS, this is the same as the cryostat.
      unsigned short npts;         ///< number of points (recob Track.NPoints)
      float          len;          ///< track length [cm]
      float          costh;       ///< Costh of start direction of track
      float          phi;         ///< Angle of the start direction of the track in the x-y plane
      SRVector3D     dir;         ///< Direction of track at start
      SRVector3D     dir_end;     ///< Direction of track at end
      SRVector3D     start;       ///< Start point of track
      SRVector3D     end;         ///< End point of track

      SRTrkChi2PID chi2pid[3]; ///< Per-plane Chi2 Particle ID
      SRTrkLikePID likepid[3]; ///< Per-plane likelihood-based Particle ID variabeles (lambda = \Sigma -lnL/L_max where \Sigma is done over hits)
      SRTrackCalo calo[3]; ///< Per-plane Calorimetry information
      Plane_t            bestplane;   ///< Plane index with the most hits. -1 if no calorimetry

      SRTrkMCS       mcsP;
      SRTrkRange     rangeP;

      SRTrackTruth         truth;         ///< truth information
      SRCRTHitMatch        crthit;        ///< CRT Hit match (ICARUS)
      SRCRTTrackMatch      crttrack;      ///< CRT Track match (ICARUS)
      SRCRTSpacePointMatch crtspacepoint; ///< CRT SpacePoint match (SBND)
      SRSBNDCRTTrackMatch  crtsbndtrack;  ///< CRT Track match (SBND)

      SRTrackScatterClosestApproach scatterClosestApproach; ///< Scattering variables relating to spread about interpolated track
      SRTrackStoppingChi2Fit stoppingChi2Fit;               ///< Fit results from Pol0 and Exp to dEdx vs res. range
      SRTrackDazzle dazzle;                                 ///< Results from the track PID MVA

      // TO DO: Move the following into SRObjects      

      /* struct CRTMatch { */
        /* struct Track { */
        /*   bool present; //!< Whether a CRT track match exists */
        /*   float time; //!< time of the CRT track [mus -- t=0 is spill time] */
        /*   float angle; //!< Angle of the match between the TPC track and the CRT track [rad] */
        /* }; */
 
        /* struct Hit { */
        /*   bool present; //!< Whether a CRT hit match exists */
        /*   float distance; //!< Distance of closest approach between CRT hit and projected TPC track [cm] */
        /*   float time; //!< Time of CRT hit [mus -- t=0 is spill time] */
        /* }; */

      /*   Track track; //!< CRT track match */
      /*   Hit   hit;   //!< CRT hit match */
      /* }; */

      //      CRTMatch       crt_match;   ///< Matching to CRT information

    };

} // end namespace

#endif // SRTRACK_H
//////////////////////////////////////////////////////////////////////////////
