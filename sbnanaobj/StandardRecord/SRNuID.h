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

    float        nufspfos;         //!< NuNFinalStatePfos feature in NeutrinoID
    unsigned int nutothits;        //!< NuNHitsTotal feature in NeutrinoID
    float        nuvtxy;           //!< NuVertexY feature in NeutrinoID
    float        nuwgtdirz;        //!< NuWeightedDirZ feature in NeutrinoID
    float        nusps;            //!< NuNSpacePointsInSphere feature in NeutrinoID
    float        nueigen;          //!< NuEigenRatioInSphere feature in NeutrinoID
    float        crlongtrkdiry;    //!< CRLongestTrackDirY feature in NeutrinoID
    float        crlongtrkdef;     //!< CRLongestTrackDeflection feature in NeutrinoID
    float        crlongtrkhitfrac; //!< CRFracHitsInLongestTrack feature in NeutrinoID
    unsigned int crmaxhits;        //!< CRNHitsMax feature in NeutrinoID

    void setDefault();
  };
} // end namespace

#endif // SRNUID_H
//////////////////////////////////////////////////////////////////////////////
