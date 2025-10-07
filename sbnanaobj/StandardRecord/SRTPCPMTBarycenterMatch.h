////////////////////////////////////////////////////////////////////////
// \file    SRTPCPMTBarycenterMatch.h
// \brief   Slice-level match info for barycenter flash matching, including best match OpFlash and matching to trigger
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRBARYCENTERMATCH_H
#define SRBARYCENTERMATCH_H

#include "sbnanaobj/StandardRecord/SRConstants.h"
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include <vector>

namespace caf
{
  class SRTPCPMTBarycenterMatch
  {
  public:

    /// @name Data members related to the slice barycenter determination
    /// @{
    float        chargeTotal        { kSignalingNaN }; ///< Total charge in slice contributing to barycenter (integrated ADC counts)
    float        chargeCenterXLocal { kSignalingNaN }; ///< Weighted mean X position of spacepoints, measured with respect to the cathode (cm)
    SRVector3D   chargeCenter;                         ///< Weighted mean spacepoint position in X,Y,Z (cm)
    SRVector3D   chargeWidth;                          ///< Weighted standard devitation of spacepoint position in X,Y,Z (cm)
    /// @}


    /// @name Data members related to matched recob::OpFlash, also reachable by association 
    /// @{
    float        flashTime            { kSignalingNaN     };  ///< Matched OpFlash time (us)
    float        flashFirstHit        { kSignalingNaN     };  ///< Time of first OpHit in matched OpFlash (us)
    float        flashPEs             { kSignalingNaN     };  ///< Total PEs in matched flash
    float        flashAsymmetry       { kSignalingNaN     };  ///< East-West asymmetry of PEs in matched flash
    SRVector3D   flashCenter;                                 ///< Weighted mean ophit position in X,Y,Z [no meaingful X info for ophits] (cm)
    SRVector3D   flashWidth;                                  ///< Weighted standard devitation of ophit position in X,Y,Z [no meaingful X info for ophits] (cm)
    int          flashClassification  { kUninitializedInt };  ///< Flash classification according to the CRT-PMT matching
    /// @}


    /// @name Data members related to quality of match
    /// @{
    float        deltaY             { kSignalingNaN }; ///< | Matched flash Y center - charge Y center | (cm)
    float        deltaZ             { kSignalingNaN }; ///< | Matched flash Z center - charge Z center | (cm)
    float        radius             { kSignalingNaN }; ///< Hypotenuse of DeltaY and DeltaZ (cm)
    float        deltaT             { kSignalingNaN }; ///< | Matched flash time - anab::T0 | when available (us)
    float        overlapY           { kSignalingNaN }; ///< Spatial overlap of flash and charge centroids in Y [>0] OR distance apart if no overlap [<0] (cm)
    float        overlapZ           { kSignalingNaN }; ///< Spatial overlap of flash and charge centroids in Z [>0] OR distance apart if no overlap [<0] (cm)
    float        deltaZ_Trigger     { kSignalingNaN }; ///< | Triggering flash Z center - charge Z center | (cm)
    float        deltaY_Trigger     { kSignalingNaN }; ///< | Triggering flash Y center - charge Y center | (cm)
    float        radius_Trigger     { kSignalingNaN }; ///< Hypotenuse of DeltaY_Trigger and DeltaZ_Trigger (cm)
    /// @}

    void setDefault();

  };

} // end namespace

#endif // SRBARYCENTERMATCH_H
//////////////////////////////////////////////////////////////////////////////

