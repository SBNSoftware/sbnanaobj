////////////////////////////////////////////////////////////////////////
// \file    SRCRUMBSResult.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRUMBSRESULT_H
#define SRCRUMBSRESULT_H

namespace caf {
/// Representation of CRUMBS MVA Slice ID output
class SRCRUMBSResult {
  public:
  SRCRUMBSResult();
  ~SRCRUMBSResult() {}

  float score;                         //!< CRUMBS result
  float tpc_CRFracHitsInLongestTrack;  //!< fraction of slice’s space points in longest track (cosmic reco)
  float tpc_CRLongestTrackDeflection;  //!< 1 - the cosine of the angle between the starting and finishing directions of the longest track (cosmic reco)
  float tpc_CRLongestTrackDirY;        //!< relative direction of the longest track in Y (cosmic reco)
  int   tpc_CRNHitsMax;                //!< the number of space points in the largest pfp
  float tpc_NuEigenRatioInSphere;      //!< the ratio between the first and second eigenvalues from a PCA of spacepoints within 10cm of the vertex (nu reco)
  int   tpc_NuNFinalStatePfos;         //!< the number of final state pfos (nu reco)
  int   tpc_NuNHitsTotal;              //!< the total number of space points (nu reco)
  int   tpc_NuNSpacePointsInSphere;    //!< the total number of space points within 10cm of the vertex (nu reco)
  float tpc_NuVertexY;                 //!< the vertex position in Y (nu reco) [cm]
  float tpc_NuWeightedDirZ;            //!< the Z component of the space-point weighted direction of the final state pfos (nu reco)
  float tpc_StoppingChi2CosmicRatio;   //!< a ratio of chi2 values intended to find Bragg peaks in stopping muon tracks
  float pds_FMTotalScore;              //!< the total flash match score
  float pds_FMPE;                      //!< the total number of photoelectrons in the associated flash
  float pds_FMTime;                    //!< the time associated with the flash [us]
  float crt_TrackScore;                //!< a combination of the DCA and angle between the best matched TPC & CRT tracks
  float crt_HitScore;                  //!< the best distance from an extrapolated TPC track to a CRT hit [cm]
  float crt_TrackTime;                 //!< the time associated with the matched CRT track [us]
  float crt_HitTime;                   //!< the time associated with the matched CRT hit [us]
};

} // end namespace

#endif // SRCRUMBSRESULT_H
//////////////////////////////////////////////////////////////////////////////

