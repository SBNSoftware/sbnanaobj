////////////////////////////////////////////////////////////////////////
// \file    SRBlip.h
// \brief   SRBlip object for localized energy deposits in bulk LAr
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////
#ifndef SRBLIP_H
#define SRBLIP_H

#include <vector>

typedef std::vector<int>        vint_t;
typedef std::vector<bool>       vbool_t;
typedef std::vector<float>      vfloat_t;
typedef std::set<int>           si_t;
typedef std::map<int,float>     mif_t;

const int kNplanes    = 3; 

namespace caf
{

    struct TrueBlip {
    int       ID            = -9;     // unique blip ID
    int       Cryostat      = -9;     // Cryostat ID
    int       TPC           = -9;     // TPC ID
    float     Time          = -9;     // time of particle interaction
    int       TimeTick      = -9;     // time tick
    float     DriftTime     = -9;     // drift time [us]
    float     Energy        = 0;      // energy dep [MeV]
    int       DepElectrons  = 0;      // deposited electrons
    int       NumElectrons  = 0;      // electrons reaching wires
    int       LeadG4ID      = -9;     // lead G4 track ID
    int       LeadG4Index   = -9;     // lead G4 track index
    int       LeadG4PDG     = -9;     // lead G4 PDG
    float     LeadCharge    = -9;     // lead G4 charge dep
    TVector3  Position;               // XYZ position
    mif_t     G4ChargeMap;          
    mif_t     G4PDGMap;
  };
 
   struct HitClust {
    int     ID              = -9;
    bool    isValid         = false;
    int     CenterChan      = -999;
    int     CenterWire      = -999;
    bool    isTruthMatched  = false;
    bool    isMerged        = false;
    bool    isMatched       = false;
    int     DeadWireSep     = 99;
    int     Cryostat        = -9;
    int     TPC             = -9;
    int     Plane           = -9;
    int     NHits           = -9;
    int     NWires          = -9;
    float   ADCs            = -999;
    float   Amplitude       = -999;
    float   Charge          = -999;
    float   SigmaCharge     = -999;
    float   TimeTick        = -999;
    float   Time            = -999;
    float   StartHitTime    = -999;
    float   EndHitTime      = -999;
    float   StartTime       = -999;
    float   EndTime         = -999;
    float   Timespan        = -999;
    float   RMS             = -999;
    int     StartWire       = -999;
    int     EndWire         = -999;
    int     NPulseTrainHits = -9;
    float   GoodnessOfFit   = -999;
    int     BlipID          = -9;
    int     EdepID          = -9;
    si_t    HitIDs;
    si_t    Wires;
    si_t    Chans;
    si_t    G4IDs;
    
    std::map<int,TVector3> IntersectLocations;
  };
 
    class SRBlip
    {
    public:
        SRBlip();
        virtual ~SRBlip();
        int       ID              = -9;         // Blip ID / index
        bool      isValid         = false;      // Blip passes basic checks
        int       Cryostat        = -9;         // Cryostat
        int       TPC             = -9;         // TPC
        int       NPlanes         = -9;         // Num. matched planes
        int       MaxWireSpan     = -9;         // Maximum span of wires on any plane cluster
        float     TimeTick        = -999;       // Readout time [ticks]
        float     Time            = -999;       // Drift time [us]
        float     Charge          = -9;         // Charge on calorimetry plane
        float     Energy          = -999;       // Energy (const dE/dx, fcl-configurable)
        float     EnergyESTAR     = -999;       // Energy (ESTAR method from ArgoNeuT)
        float     EnergyPSTAR     = -999;       // Energy (PSTAR method similar with ESTAR method from ArgoNeuT)
        float     ProxTrkDist     = -9;         // Distance to cloest track
        int       ProxTrkID       = -9;         // ID of closest track
        bool      inCylinder      = false;      // Is it in a cone/cylinder region? 
        TVector3  Position;                     // 3D position TVector3
        float     SigmaYZ         = -9.;        // Uncertainty in YZ intersect [cm]
        float     dX              = -9;         // Equivalent length along drift direction [cm] 
        float     dYZ             = -9;         // Approximate length scale in YZ space [cm]
        blip::HitClust clusters[kNplanes]; // Plane/cluster-specific information
        blip::TrueBlip truthBlip; // Truth-matched energy deposition

    }
}