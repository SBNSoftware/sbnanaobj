////////////////////////////////////////////////////////////////////////
// \file    SRBlip.cxx
// \brief   SRBlip object for localized energy deposits in bulk LAr
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRBlip.h"


namespace caf
{
    SRBlip::SRBlip()
    {
        ID              = -9;         // Blip ID / index
        isValid         = false;      // Blip passes basic checks
        Cryostat        = -9;         // Cryostat
        TPC             = -9;         // TPC
        NPlanes         = -9;         // Num. matched planes
        MaxWireSpan     = -9;         // Maximum span of wires on any plane cluster
        TimeTick        = -999;       // Readout time [ticks]
        Time            = -999;       // Drift time [us]
        Charge          = -9;         // Charge on calorimetry plane (electrons)
        Energy          = -999;       // Energy (const dE/dx, fcl-configurable)
        EnergyESTAR     = -999;       // Energy (ESTAR method from ArgoNeuT)
        EnergyPSTAR     = -999;       // Energy (PSTAR method similar with ESTAR method from ArgoNeuT)
        ProxTrkDist     = -9;         // Distance to cloest track
        ProxTrkID       = -9;         // ID of closest track
        inCylinder      = false;      // Is it in a cone/cylinder region? 
        Position.SetX(-999);          //3d X Position [cm]
        Position.SetY(-999);          //3d Y Position [cm]
        Position.SetZ(-999);          //3d Z Position [cm]
        SigmaYZ         = -9.;        // Uncertainty in YZ intersect [cm]
        dX              = -9;         // Equivalent length along drift direction [cm] 
        dYZ             = -9;         // Approximate length scale in YZ space [cm]
        const int kNplanes    = 3; 
        for(int i=0; i<kNplanes; i++){ 
            SRBlipHitClust TempClust;
            clusters.push_back(TempClust);
        }
    }
    SRBlip::~SRBlip()
    {
    }

}