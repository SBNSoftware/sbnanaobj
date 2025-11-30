/**
 * @file    SRBlipTrueBlip.h
 * @brief   SRBlipTrueBlip struct for localized energy deposits in bulk LAr. MC Truth information
 * @author  Jacob McLaughlin - jmclaughlin2@illinoistech.edu
 */

#ifndef SBNANAOBJ_STANDARDRECORD_SRBLIPTRUEBLIP_H
#define SBNANAOBJ_STANDARDRECORD_SRBLIPTRUEBLIP_H
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRConstants.h"


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
    int       ID            = caf::kUninitializedInt;     ///<  Index of this trueBlip object
    int       cryostat      = caf::kUninitializedInt;     ///<  Cryostat ID the blip reconstructed to
    int       TPC           = caf::kUninitializedInt;     ///<  TPC ID the blip reconstructed to
    float     time          = caf::kSignalingNaN;         ///<  Charge weighted peak time of TrueBlip energy depositions [tick]
    float     driftTime     = caf::kSignalingNaN;         ///<  Charge weighted drift time of TrueBlip energy depositions [tick]
    float     energy        = caf::kSignalingNaN;         ///<  Total energy dep [GeV]
    int       depElectrons  = caf::kUninitializedInt;     ///<  Total deposited electrons [e-]
    int       numElectrons  = caf::kUninitializedInt;     ///<  electrons reaching wires [e-]
    int       leadG4ID      = caf::kUninitializedInt;     ///<  G4 track ID depositing the most charge in this deposition 
    int       leadG4Index   = caf::kUninitializedInt;     ///<  G4 track Index depositing the most charge in this deposition 
    int       leadG4PDG     = caf::kUninitializedInt;     ///<  G4 PDG associated with the track depositing the most charge
    float     leadCharge    = caf::kSignalingNaN;         ///<  Largest charge deposition associated with this True Blip
    SRVector3D  position;                                 ///<  Charge weighted true-XYZ position [cm]
  };
}
#endif
