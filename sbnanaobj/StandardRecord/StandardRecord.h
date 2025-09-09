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
#include "sbnanaobj/StandardRecord/SRSBNDCRTVeto.h"
#include "sbnanaobj/StandardRecord/SRHeader.h"
#include "sbnanaobj/StandardRecord/SRCRTPMTMatch.h"
#include "sbnanaobj/StandardRecord/SRSlice.h"
#include "sbnanaobj/StandardRecord/SRSliceRecoBranch.h"
#include "sbnanaobj/StandardRecord/SRTruthBranch.h"
#include "sbnanaobj/StandardRecord/SRFakeReco.h"
#include "sbnanaobj/StandardRecord/SROpFlash.h"

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

    int                         nslc;    ///< Number of slices in list
    std::vector<SRSlice>         slc;    ///< Slice branch.
    int                         nfake_reco; ///< Number of Fake-Reco's in list
    std::vector<SRFakeReco>      fake_reco; ///< List of fake-reco slices
    int                         ntrue_particles; ///< Number of true particles in list
    std::vector<SRTrueParticle>  true_particles; ///< True particles in spill
    int                         ncrt_hits; ///< Number of CRT hits in event (ICARUS)
    std::vector<SRCRTHit>        crt_hits; ///< CRT hits in event (ICARUS)
    int                         ncrt_tracks; ///< Number of CRT tracks in event (ICARUS)
    std::vector<SRCRTTrack>      crt_tracks; ///< CRT tracks in event (ICARUS)
    int                         ncrt_spacepoints; ///< Number of CRT spacepoints in event (SBND)
    std::vector<SRCRTSpacePoint> crt_spacepoints; ///< CRT spacepoints in event (SBND)
    int                         nsbnd_crt_tracks; ///< Number of CRT tracks in event (SBND)
    std::vector<SRSBNDCRTTrack>  sbnd_crt_tracks; ///< CRT tracks in event (SBND)
    SRSBNDCRTVeto                sbnd_crt_veto; // crt veto flags for each event
    int                         nopflashes; ///< Number of OpFlashes in spill
    std::vector<SROpFlash>       opflashes; ///< List of OpFlashes in spill
    
    int                        ncrtpmt_matches; ///<Number of CRT-PMT Matches in event 
    std::vector<SRCRTPMTMatch> crtpmt_matches;  ///< CRT-PMT matches in event 
    bool pass_flashtrig;     ///< Whether this Record passed the Flash Trigger requirement

  };

} // end namespace

#endif // STANDARDRECORD_H
//////////////////////////////////////////////////////////////////////////////
