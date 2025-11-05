////////////////////////////////////////////////////////////////////////
// \file    SRBlipTrueBlip.h
// \brief   SRBlipTrueBlip struct for localized energy deposits in bulk LAr. MC Truth information
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////
#ifndef SRBLIPTRUEBLIP_H
#define SRBLIPTRUEBLIP_H
#include <map>
#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{

    struct SRBlipTrueBlip {
    int       ID            = -9;     // unique blip ID
    int       Cryostat      = -9;     // Cryostat ID
    int       TPC           = -9;     // TPC ID
    float     Time          = -9;     // time of particle interaction
    int       TimeTick      = -9;     // time tick
    float     DriftTime     = -9;     // drift time [us]
    float     Energy        = 0;      // energy dep [GeV]
    int       DepElectrons  = 0;      // deposited electrons
    int       NumElectrons  = 0;      // electrons reaching wires
    int       LeadG4ID      = -9;     // lead G4 track ID
    int       LeadG4Index   = -9;     // lead G4 track index
    int       LeadG4PDG     = -9;     // lead G4 PDG
    float     LeadCharge    = -9;     // lead G4 charge dep
    SRVector3D  Position;               // XYZ position
    std::map<int,float>     G4ChargeMap;          
    std::map<int,float>     G4PDGMap;
  };
}

#endif