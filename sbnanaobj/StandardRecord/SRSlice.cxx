////////////////////////////////////////////////////////////////////////
// \file    SRSlice.cxx
// \brief   SRSlice object for slice summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRSlice.h"

#include <limits>
#include <climits>

namespace caf
{
  SRSlice::SRSlice():
    producer(UINT_MAX),
    charge(std::numeric_limits<float>::signaling_NaN()),
    is_clear_cosmic(false),
    nu_pdg(INT_MIN),
    nu_score(std::numeric_limits<float>::signaling_NaN()),
    nuid_nuNFinalStatePfos(std::numeric_limits<float>::signaling_NaN()),
    nuid_nuNHitsTotal(0),
    nuid_nuVertexY(std::numeric_limits<float>::signaling_NaN()),
    nuid_nuWeightedDirZ(std::numeric_limits<float>::signaling_NaN()),
    nuid_nuNSpacePointsInSphere(std::numeric_limits<float>::signaling_NaN()),
    nuid_nuEigenRatioInSphere(std::numeric_limits<float>::signaling_NaN()),
    nuid_crLongestTrackDirY(std::numeric_limits<float>::signaling_NaN()),
    nuid_crLongestTrackDeflection(std::numeric_limits<float>::signaling_NaN()),
    nuid_crFracHitsInLongestTrack(std::numeric_limits<float>::signaling_NaN()),
    nuid_nCRHitsMax(0),
    self(INT_MIN)
  {  }


  SRSlice::~SRSlice(){  }


  void SRSlice::setDefault()
  {
    charge         = -5;
  }


} // end namespace caf
////////////////////////////////////////////////////////////////////////
