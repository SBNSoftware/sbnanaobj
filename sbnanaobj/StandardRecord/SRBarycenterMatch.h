////////////////////////////////////////////////////////////////////////
// \file    SRBarycenterMatch.h
// \brief   Slice-level match info for barycenter flash matching, including best match OpFlash and matching to triggger
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRBARYCENTERMATCH_H
#define SRBARYCENTERMATCH_H

#include "sbnanaobj/StandardRecord/SRConstants.h"
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include <vector>

namespace caf
{
  class SRBarycenterMatch
  {
  public:
    SRBarycenterMatch();

    /// Data members related to the slice barycetner determination
    float      chargeTotal        { kSignalingNaN }; ///< Total charge in slice contributing to barycenter
    float      chargeCenterXLocal { kSignalingNaN }; ///< Weighted mean X position of spacepoints, measured with respect to the cathode (cm)
    SRVector3D chargeCenter;                         ///< Weighted mean spacepoint position in X,Y,Z (cm)
    SRVector3D chargeWidth;                          ///< Weighted standard devitation of spacepoint position in X,Y,Z (cm)

    /// Data members related to matched recob::OpFlash, also reachable by association 
    float      flashTime          { kSignalingNaN }; ///< Matched OpFlash time (us)
    float      flashFirstHit      { kSignalingNaN }; ///< Time of first OpHit in matched OpFlash (us)
    float      flashAsymmetry     { kSignalingNaN }; ///< East-West asymmetry of PEs in matched flash
    SRVector3D flashCenter;                          ///< Weighted mean ophit position in X,Y,Z [no meaingful X info for ophits] (cm)
    SRVector3D flashWidth;                           ///< Weighted standard devitation of ophit position in X,Y,Z [no meaingful X info for ophits] (cm)

    /// Data members related to quality of match
    float      deltaY             { kSignalingNaN }; ///< abs( Matched flash Y center - charge Y center ) (cm)
    float      deltaZ             { kSignalingNaN }; ///< abs( Matched flash Z cetner - charge Z center ) (cm)
    float      radius             { kSignalingNaN }; ///< Hypotenuse of DeltaY and DeltaZ, PARAMETER MINIMIZED BY MATCHING (cm)
    float      deltaT             { kSignalingNaN }; ///< abs( Matched flash time - anab::T0 ) when available (us)
    float      overlapY           { kSignalingNaN }; ///< Spacial overlap of flash and charge centroids in Y [>0] OR distance apart if no overlap [<0] (cm)
    float      overlapZ           { kSignalingNaN }; ///< Spacial overlap of flash and charge centroids in Z [>0] OR distance apart if no overlap [<0] (cm)
    float      deltaZ_Trigger     { kSignalingNaN }; ///< abs( Triggering flash Z cetner - charge Z center ) (cm)

    void setDefault();

  };

} // end namespace

#endif // SRBARYCENTERMATCH_H
//////////////////////////////////////////////////////////////////////////////

