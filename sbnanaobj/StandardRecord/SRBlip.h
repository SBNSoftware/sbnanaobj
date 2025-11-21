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
#include "sbnanaobj/StandardRecord/SRCVNScore.h"

namespace caf
{
  const int kNplanes    = 3;
    class SRBlip
    {
    public:
        SRBlip();
        virtual ~SRBlip();
        int       ID;         // Blip ID / index
        bool      isValid;      // Blip passes basic checks
        int       Cryostat;         // Cryostat
        int       TPC;         // TPC
        int       NPlanes;         // Num. matched planes
        int       MaxWireSpan;         // Maximum span of wires on any plane cluster
        float     TimeTick;       // Readout time [ticks]
        float     Time;       // Drift time [us]
        float     Charge;         // Charge on calorimetry plane
        float     Energy;       // Energy (const dE/dx, fcl-configurable) [GeV]
        float     EnergyESTAR;       // Energy (ESTAR method from ArgoNeuT) [GeV]
        float     EnergyPSTAR;       // Energy (PSTAR method similar with ESTAR method from ArgoNeuT) [GeV]
        float     ProxTrkDist;         // Distance to cloest track
        int       ProxTrkID;         // ID of closest track
        bool      inCylinder;      // Is it in a cone/cylinder region? 
        SRVector3D  Position;                     // 3D position TVector3
        float     SigmaYZ;        // Uncertainty in YZ intersect [cm]
        float     dX;         // Equivalent length along drift direction [cm] 
        float     dYZ;         // Approximate length scale in YZ space [cm]
        SRBlipHitClust clusters[kNplanes]; // Plane/cluster-specific information
        SRBlipTrueBlip truthBlip; // Truth-matched energy deposition
    };
}
#endif
