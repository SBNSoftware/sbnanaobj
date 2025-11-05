////////////////////////////////////////////////////////////////////////
// \file    SRBlip.h
// \brief   SRBlip object for localized energy deposits in bulk LAr
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////
#ifndef SRBLIP_H
#define SRBLIP_H
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRBlipHitClust.h"
#include "sbnanaobj/StandardRecord/SRBlipTrueBlip.h"

namespace caf
{
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
        float     Energy          = -999;       // Energy (const dE/dx, fcl-configurable) [GeV]
        float     EnergyESTAR     = -999;       // Energy (ESTAR method from ArgoNeuT) [GeV]
        float     EnergyPSTAR     = -999;       // Energy (PSTAR method similar with ESTAR method from ArgoNeuT) [GeV]
        float     ProxTrkDist     = -9;         // Distance to cloest track
        int       ProxTrkID       = -9;         // ID of closest track
        bool      inCylinder      = false;      // Is it in a cone/cylinder region? 
        SRVector3D  Position;                     // 3D position TVector3
        float     SigmaYZ         = -9.;        // Uncertainty in YZ intersect [cm]
        float     dX              = -9;         // Equivalent length along drift direction [cm] 
        float     dYZ             = -9;         // Approximate length scale in YZ space [cm]
        std::vector<SRBlipHitClust> clusters; // Plane/cluster-specific information
        SRBlipTrueBlip truthBlip; // Truth-matched energy deposition
    };
}
#endif
