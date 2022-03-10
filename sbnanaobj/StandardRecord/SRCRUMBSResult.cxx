////////////////////////////////////////////////////////////////////////
// \file    SRCRUMBSResult.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCRUMBSResult.h"

namespace caf {
SRCRUMBSResult::SRCRUMBSResult()
  : score(-5.f)
  , tpc_CRFracHitsInLongestTrack(-5.f)
  , tpc_CRLongestTrackDeflection(-5.f)
  , tpc_CRLongestTrackDirY(-5.f)
  , tpc_CRNHitsMax(-5.f)
  , tpc_NuEigenRatioInSphere(-5.f)
  , tpc_NuNFinalStatePfos(-5.f)
  , tpc_NuNHitsTotal(-5.f)
  , tpc_NuNSpacePointsInSphere(-5.f)
  , tpc_NuVertexY(-5.f)
  , tpc_NuWeightedDirZ(-5.f)
  , tpc_StoppingChi2CosmicRatio(-5.f)
  , pds_FMTotalScore(-5.f)
  , pds_FMPE(-5.f)
  , pds_FMTime(-5.f)
  , crt_TrackScore(-5.f)
  , crt_HitScore(-5.f)
  , crt_TrackTime(-5.f)
  , crt_HitTime(-5.f)
{
}

} // end namespace
//////////////////////////////////////////////////////////////////////////////
