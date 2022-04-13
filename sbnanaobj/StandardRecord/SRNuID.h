////////////////////////////////////////////////////////////////////////
// \file    SRNuID.h
// \brief   SRNuID object for Neutrino ID score features (MVA inputs). This SR code copied/based on other SR objects.
// \author  howard@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SBNANAOBJ_STANDARDRECORD_SRNUID_H
#define SBNANAOBJ_STANDARDRECORD_SRNUID_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  /// Slice Neutrino ID Score features (MVA inputs)
  class SRNuID
  {
  public:
    SRNuID();

    float nufspfos         { kSignalingNaN     }; //!< NuNFinalStatePfos feature in NeutrinoID
    int   nutothits        { kUninitializedInt }; //!< NuNHitsTotal feature in NeutrinoID
    float nuvtxy           { kSignalingNaN     }; //!< NuVertexY feature in NeutrinoID
    float nuwgtdirz        { kSignalingNaN     }; //!< NuWeightedDirZ feature in NeutrinoID
    float nusps            { kSignalingNaN     }; //!< NuNSpacePointsInSphere feature in NeutrinoID
    float nueigen          { kSignalingNaN     }; //!< NuEigenRatioInSphere feature in NeutrinoID
    float crlongtrkdiry    { kSignalingNaN     }; //!< CRLongestTrackDirY feature in NeutrinoID
    float crlongtrkdef     { kSignalingNaN     }; //!< CRLongestTrackDeflection feature in NeutrinoID
    float crlongtrkhitfrac { kSignalingNaN     }; //!< CRFracHitsInLongestTrack feature in NeutrinoID
    int   crmaxhits        { kUninitializedInt }; //!< CRNHitsMax feature in NeutrinoID

    void setDefault();
  };
} // end namespace

#endif // SBNANAOBJ_STANDARDRECORD_SRNUID_H
//////////////////////////////////////////////////////////////////////////////
