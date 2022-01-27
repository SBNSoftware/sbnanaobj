////////////////////////////////////////////////////////////////////////
// \file    SRNuID.h
// \brief   SRNuID object for Neutrino ID score features (MVA inputs). This SR code copied/based on other SR objects.
// \author  $Author: howard@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRNUID_H
#define SRNUID_H

namespace caf
{
  /// Slice Neutrino ID Score features (MVA inputs)
  class SRNuID
  {
  public:
    SRNuID();
    virtual ~SRNuID();

    float        NuNFinalStatePfos;        //!< NuNFinalStatePfos feature in NeutrinoID
    unsigned int NuNHitsTotal;             //!< NuNHitsTotal feature in NeutrinoID
    float        NuVertexY;                //!< NuVertexY feature in NeutrinoID
    float        NuWeightedDirZ;           //!< NuWeightedDirZ feature in NeutrinoID
    float        NuNSpacePointsInSphere;   //!< NuNSpacePointsInSphere feature in NeutrinoID
    float        NuEigenRatioInSphere;     //!< NuEigenRatioInSphere feature in NeutrinoID
    float        CRLongestTrackDirY;       //!< CRLongestTrackDirY feature in NeutrinoID
    float        CRLongestTrackDeflection; //!< CRLongestTrackDeflection feature in NeutrinoID
    float        CRFracHitsInLongestTrack; //!< CRFracHitsInLongestTrack feature in NeutrinoID
    unsigned int CRNHitsMax;               //!< CRNHitsMax feature in NeutrinoID

    void setDefault();
  };
} // end namespace

#endif // SRNUID_H
//////////////////////////////////////////////////////////////////////////////
