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
    caf::SRVector3D position; //!< Decay location [cm]
    double time; //!< Decay time [us]
    caf::SRVector3D momentum; //!< Portal momentum [GeV]
    double E; //!< Portal Energy [GeV]
    double M; //!< Portal Mass [GeV]

    int cryostat; //!< Cryostat that the decay occurs in

    double flux_weight; //!< Weight associated with the production of the Portal
    double ray_weight; //!< Weight associated with the Portal hitting the detector
    double decay_weight; //!< Weight associated with the Portal decaying

    double decay_length; //!< Mean decay length  of particle
    caf::SRVector3D enter; //!< Entry position of particle into Active Volume
    caf::SRVector3D exit; //!< Exit position of particle into Active Volume

    // Constants! For random model parameters
    double C1;
    double C2;
    double C3;
    double C4;
    double C5;
  };

} // end namespace

#endif // SRMEVPRTL_H
//////////////////////////////////////////////////////////////////////////////
