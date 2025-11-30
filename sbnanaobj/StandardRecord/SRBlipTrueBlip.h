/**
 * @file    SRBlipTrueBlip.h
 * @brief   SRBlipTrueBlip struct for localized energy deposits in bulk LAr. MC Truth information
 * @author  Jacob McLaughlin - jmclaughlin2@illinoistech.edu
 */

#ifndef SBNANAOBJ_STANDARDRECORD_SRBLIPTRUEBLIP_H
#define SBNANAOBJ_STANDARDRECORD_SRBLIPTRUEBLIP_H
#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  /** True energy depositions 
   * std::vector<art::Ptr<simb::MCParticle> > makes a particle list
   * std::vector<sim::SimChannel> makes a IDE list
   * Together those make a blip::ParticleInfo object used to fill in this TrueBlip information
   * For a reconstructed MC blip we will record the true blip info associated with it
   * That blip reconstruction applies cuts to overall blip size/spread
   * A single TrueBlip will be constructed for energy depositions within TrueBlipMergeDist (fcl set 0.3 cm by default)
  */
    struct SRBlipTrueBlip {
    int       ID            = -5;     ///<  Index of this trueBlip object
    int       Cryostat      = -5;     ///<  Cryostat ID the blip reconstructed to
    int       TPC           = -5;     ///<  TPC ID the blip reconstructed to
    float     Time          = -5;     ///<  Charge weighted peak time of TrueBlip energy depositions [tick]
    float     DriftTime     = -5;     ///<  Charge weighted drift time of TrueBlip energy depositions [tick]
    float     Energy        = -5;     ///<  Total energy dep [GeV]
    int       DepElectrons  = -5;     ///<  Total deposited electrons [e-]
    int       NumElectrons  = -5;     ///<  electrons reaching wires [e-]
    int       LeadG4ID      = -5;     ///<  G4 track ID depositing the most charge in this deposition 
    int       LeadG4Index   = -5;     ///<  G4 track Index depositing the most charge in this deposition 
    int       LeadG4PDG     = -5;     ///<  G4 PDG associated with the track depositing the most charge
    float     LeadCharge    = -5;     ///<  Largest charge deposition associated with this True Blip
    SRVector3D  Position;             ///<  Charge weighted true-XYZ position [cm]
  };
}
#endif
