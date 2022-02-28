////////////////////////////////////////////////////////////////////////
// \file    SRCRUMBSResult.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRUMBSRESULT_H
#define SRCRUMBSRESULT_H


#include <vector>

namespace caf {
/// Representation of CRUMBS MVA Slice ID output
class SRCRUMBSResult {
  public:
  SRCRUMBSResult();
  ~SRCRUMBSResult() {}

  float score;
  float tpc_CRFracHitsInLongestTrack;
  float tpc_CRLongestTrackDeflection;
  float tpc_CRLongestTrackDirY;
  float tpc_CRNHitsMax;
  float tpc_NuEigenRatioInSphere;
  float tpc_NuNFinalStatePfos;
  float tpc_NuNHitsTotal;
  float tpc_NuNSpacePointsInSphere;
  float tpc_NuVertexY;
  float tpc_NuWeightedDirZ;
  float tpc_StoppingChi2CosmicRatio;
  float pds_FMTotalScore;
  float pds_FMPE;
  float pds_FMTime;
  float crt_TrackScore;
  float crt_HitScore;
};

} // end namespace

#endif // SRCRUMBSRESULT_H
//////////////////////////////////////////////////////////////////////////////

