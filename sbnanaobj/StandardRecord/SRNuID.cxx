////////////////////////////////////////////////////////////////////////
// \file    SRNuID.cxx
// \brief   SRNuID object for Neutrino ID score features (MVA inputs). This SR code copied/based on other SR objects.
// \author  $Author: howard@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRNuID.h"

#include <limits>
#include <climits>

namespace caf
{
  SRNuID::SRNuID():
    NuNFinalStatePfos(std::numeric_limits<float>::signaling_NaN()),
    NuNHitsTotal(0),
    NuVertexY(std::numeric_limits<float>::signaling_NaN()),
    NuWeightedDirZ(std::numeric_limits<float>::signaling_NaN()),
    NuNSpacePointsInSphere(std::numeric_limits<float>::signaling_NaN()),
    NuEigenRatioInSphere(std::numeric_limits<float>::signaling_NaN()),
    CRLongestTrackDirY(std::numeric_limits<float>::signaling_NaN()),
    CRLongestTrackDeflection(std::numeric_limits<float>::signaling_NaN()),
    CRFracHitsInLongestTrack(std::numeric_limits<float>::signaling_NaN()),
    CRNHitsMax(0)
  {  }


  SRNuID::~SRNuID(){  }


  void SRNuID::setDefault()
  {
    NuNFinalStatePfos = -9999.f;
    NuNHitsTotal = 0;
    NuVertexY = -9999.f;
    NuWeightedDirZ = -9999.f;
    NuNSpacePointsInSphere = -9999.f;
    NuEigenRatioInSphere = -9999.f;
    CRLongestTrackDirY =-9999.f;
    CRLongestTrackDeflection = -9999.f;
    CRFracHitsInLongestTrack = -9999.f;
    CRNHitsMax = 0;
  }


} // end namespace caf
////////////////////////////////////////////////////////////////////////
