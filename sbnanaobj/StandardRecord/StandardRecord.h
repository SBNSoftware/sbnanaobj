////////////////////////////////////////////////////////////////////////
// \file    StandardRecord.h
// \brief   StandardRecord defines top-level objects for
//          Common Analysis File trees.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef STANDARDRECORD_H
#define STANDARDRECORD_H

#include "sbnanaobj/StandardRecord/SRCRTHit.h"
#include "sbnanaobj/StandardRecord/SRCRTTrack.h"
#include "sbnanaobj/StandardRecord/SRCRTSpacePoint.h"
#include "sbnanaobj/StandardRecord/SRSBNDCRTTrack.h"
#include "sbnanaobj/StandardRecord/SRSBNDFrameShiftInfo.h"
#include "sbnanaobj/StandardRecord/SRSBNDTimingInfo.h"
#include "sbnanaobj/StandardRecord/SRHeader.h"
#include "sbnanaobj/StandardRecord/SRCRTPMTMatch.h"
#include "sbnanaobj/StandardRecord/SRSlice.h"
#include "sbnanaobj/StandardRecord/SRSliceRecoBranch.h"
#include "sbnanaobj/StandardRecord/SRTruthBranch.h"
#include "sbnanaobj/StandardRecord/SRFakeReco.h"
#include "sbnanaobj/StandardRecord/SROpFlash.h"
#include "sbnanaobj/StandardRecord/SRTrigger.h"
#include "sbnanaobj/StandardRecord/SRInteractionDLP.h"
#include "sbnanaobj/StandardRecord/SRInteractionTruthDLP.h"
#include "sbnanaobj/StandardRecord/SRBlip.h"

/// Common Analysis Files
namespace caf
{

  /// \brief   The StandardRecord is the primary top-level object in the
  ///          Common Analysis File trees.

  class StandardRecord
  {

  public:
    StandardRecord();
    ~StandardRecord();

    SRHeader          hdr;    ///< Header branch: run, subrun, etc.
    //    SRSpill          spill;  ///< Beam spill branch: pot, beam current, etc.
    SRSliceRecoBranch reco;   ///< Slice reco branch: tracks, showers, etc.
    SRTruthBranch     mc;     ///< Truth branch for all interactions

    int                         nslc = 0;    ///< Number of slices in list
    std::vector<SRSlice>         slc;    ///< Slice branch.
    int                         nfake_reco = 0; ///< Number of Fake-Reco's in list
    std::vector<SRFakeReco>      fake_reco; ///< List of fake-reco slices
    int                         ntrue_particles = 0; ///< Number of true particles in list
    std::vector<SRTrueParticle>  true_particles; ///< True particles in spill
    int                         ncrt_hits = 0; ///< Number of CRT hits in event (ICARUS)
    std::vector<SRCRTHit>        crt_hits; ///< CRT hits in event (ICARUS)
    int                         ncrt_tracks = 0; ///< Number of CRT tracks in event (ICARUS)
    std::vector<SRCRTTrack>      crt_tracks; ///< CRT tracks in event (ICARUS)
    int                         ncrt_spacepoints = 0; ///< Number of CRT spacepoints in event (SBND)
    std::vector<SRCRTSpacePoint> crt_spacepoints; ///< CRT spacepoints in event (SBND)
    int                         nsbnd_crt_tracks = 0; ///< Number of CRT tracks in event (SBND)
    std::vector<SRSBNDCRTTrack>  sbnd_crt_tracks; ///< CRT tracks in event (SBND)
    int                         nopflashes = 0; ///< Number of OpFlashes in spill
    std::vector<SROpFlash>       opflashes; ///< List of OpFlashes in spill
    int                        ncrtpmt_matches = 0; ///<Number of CRT-PMT Matches in event 
    std::vector<SRCRTPMTMatch> crtpmt_matches;  ///< CRT-PMT matches in event 
    bool pass_flashtrig = false;     ///< Whether this Record passed the Flash Trigger requirement
    SRSBNDFrameShiftInfo sbnd_frames; ///< List of Frame Shift in event in unit [ns] (SBND)
    SRSBNDTimingInfo sbnd_timings; ///< List of Timing Info in event in UNIX timestamp format(SBND)
    std::vector<SRBlip>        blips; ///Blips are small O(mm) depositions in LAr, made from recob::hits

    int                                ndlp = 0;       ///< Number of reco DLP (ML) interactions.
    std::vector<SRInteractionDLP>      dlp;        ///< Reco DLP (ML) interactions.  
    int                                ndlp_true = 0;  ///< Number of true DLP (ML) interactions.
    std::vector<SRInteractionTruthDLP> dlp_true;   ///< True DLP (ML) interactions.
  };

} // end namespace

#endif // STANDARDRECORD_H
//////////////////////////////////////////////////////////////////////////////
