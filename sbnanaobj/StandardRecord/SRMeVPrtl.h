//  SRMeVPrtl.h
////////////////////////////////////////////////////////////////////////
#ifndef SRMEVPRTL_H
#define SRMEVPRTL_H

#include "sbnanaobj/StandardRecord/SREnums.h"
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRTruthMatch.h"
#include "sbnanaobj/StandardRecord/SRTrueParticle.h"

namespace caf
{
  /// The SRMeVPrtl is a representation of information on 
  /// a heavy (BSM) particle decay in the detector
  class SRMeVPrtl
  {
  public:
    SRMeVPrtl();
    ~SRMeVPrtl() {  }

    caf::mevprtlchannel_ gen; //!< Generator physics channel for this event
    caf::SRVector3D dcy; //!< Decay location [cm]
    float dcyT; //!< Decay time [us]
    caf::SRVector3D mom; //!< Portal momentum [GeV]
    float E; //!< Portal Energy [GeV]
    float M; //!< Portal Mass [GeV]

    float flux_weight; //!< Weight associated with the production of the Portal
    float ray_weight; //!< Weight associated with the Portal hitting the detector
    float decay_weight; //!< Weight associated with the Portal decaying

    // Constants! For random model parameters
    float C1;
    float C2;
    float C3;
    float C4;
    float C5;
  };

} // end namespace

#endif // SRMEVPRTL_H
//////////////////////////////////////////////////////////////////////////////
