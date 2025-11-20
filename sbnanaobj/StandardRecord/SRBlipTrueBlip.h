////////////////////////////////////////////////////////////////////////
// \file    SRBlipTrueBlip.h
// \brief   SRBlipTrueBlip struct for localized energy deposits in bulk LAr. MC Truth information
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////
#ifndef SBNANAOBJ_STANDARDRECORD_SRBLIPTRUEBLIP_H
#define SBNANAOBJ_STANDARDRECORD_SRBLIPTRUEBLIP_H
#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{

    struct SRBlipTrueBlip {
    int       ID            = -5;     // unique blip ID
    int       Cryostat      = -5;     // Cryostat ID
    int       TPC           = -5;     // TPC ID
    float     Time          = -5;     // time of particle interaction
    int       TimeTick      = -5;     // time tick
    float     DriftTime     = -5;     // drift time [us]
    float     Energy        = -5;      // energy dep [GeV]
    int       DepElectrons  = -5;      // deposited electrons
    int       NumElectrons  = -5;      // electrons reaching wires
    int       LeadG4ID      = -5;     // lead G4 track ID
    int       LeadG4Index   = -5;     // lead G4 track index
    int       LeadG4PDG     = -5;     // lead G4 PDG
    float     LeadCharge    = -5;     // lead G4 charge dep
    SRVector3D  Position;               // XYZ position
      //std::map<int,float>     G4ChargeMap;  //intermediate processing step not needed for CAF        
      //std::map<int,float>     G4PDGMap;     
  };
}
#endif
