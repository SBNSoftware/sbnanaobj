////////////////////////////////////////////////////////////////////////
// \file    SRCRUMBSResult.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCRUMBSResult.h"
#include <limits>

namespace caf {
SRCRUMBSResult::SRCRUMBSResult()
  : score(std::numeric_limits<float>::signaling_NaN())
  , tpc_CRFracHitsInLongestTrack(std::numeric_limits<float>::signaling_NaN())
  , tpc_CRLongestTrackDeflection(std::numeric_limits<float>::signaling_NaN())
  , tpc_CRLongestTrackDirY(std::numeric_limits<float>::signaling_NaN())
  , tpc_CRNHitsMax(std::numeric_limits<int>::max())
  , tpc_NuEigenRatioInSphere(std::numeric_limits<float>::signaling_NaN())
  , tpc_NuNFinalStatePfos(std::numeric_limits<int>::max())
  , tpc_NuNHitsTotal(std::numeric_limits<int>::max())
  , tpc_NuNSpacePointsInSphere(std::numeric_limits<int>::max())
  , tpc_NuVertexY(std::numeric_limits<float>::signaling_NaN())
  , tpc_NuWeightedDirZ(std::numeric_limits<float>::signaling_NaN())
  , tpc_StoppingChi2CosmicRatio(std::numeric_limits<float>::signaling_NaN())
  , pds_FMTotalScore(std::numeric_limits<float>::signaling_NaN())
  , pds_FMPE(std::numeric_limits<float>::signaling_NaN())
  , pds_FMTime(std::numeric_limits<float>::signaling_NaN())
  , crt_TrackScore(std::numeric_limits<float>::signaling_NaN())
  , crt_HitScore(std::numeric_limits<float>::signaling_NaN())
  , crt_TrackTime(std::numeric_limits<float>::signaling_NaN())
  , crt_HitTime(std::numeric_limits<float>::signaling_NaN())
{
}

} // end namespace
//////////////////////////////////////////////////////////////////////////////
