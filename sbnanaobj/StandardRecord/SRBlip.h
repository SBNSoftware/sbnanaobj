/**
 * @file    SRBlip.h
 * @brief   SRBlip object for localized energy deposits in bulk LAr
 * @author  Jacob McLaughlin - jmclaughlin2@illinoistech.edu
 */
#ifndef SRBLIP_H
#define SRBLIP_H
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRBlipHitClust.h"
#include "sbnanaobj/StandardRecord/SRBlipTrueBlip.h"
#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  const int kNplanes    = 3;
    /** Blips are small, plane-matched, energy deposition in liquid argon with sizes similar to wire separation.
     *  Blips are composed of hit-clusters, which are (time and space) adjacent hits on a single wire plane. 
     *  A single plane, usually the collection, is given a privledged position as the calorimetry plane. 
     *  Every hit-cluster on the calorimetry plane is checked for matches on the other two planes, and when multiple possible pairs are found 
     *  the highest scoring one is selected. 
     *  Score components include cluster charge, cluster time duration, cluster peak time, and wire intersections. 
     */
    class SRBlip
    {
    public:
        SRBlip();
        static constexpr int kNplanes = 3;
        int       ID=caf::kUninitializedInt;          ///< Internal index for blip labelling
        bool      isValid=false;                      ///< Blip passes basic checks in reco. All blips saved to artRoot file should be valid.
        int       cryostat=caf::kUninitializedInt;    ///< Which cryostat the blip was reconstructed to. For SBND this should always be 0.
        int       TPC=caf::kUninitializedInt;         ///< Which tpc the blip was reconstructed to. For SBND this may be 0 or 1. 
        int       nPlanes=caf::kUninitializedInt;     ///< Number of planes matched to build the blip. Blips must be plane matched so this should be 2+ planes.
        int       maxWireSpan=caf::kUninitializedInt; ///< Maximum span of wires on any plane hit-cluster
        float     timeTick=-999;                      ///< Average time of hitclusters making up blips. [tpc tick]
        /*!
        Hit cluster time is the charge-weighted average of the hit-peak times for hits in the cluster 
        */
        float     time=-999;                          ///< Average time of hitclusters making up blips. [us] 
        /*!
          Hit cluster time is the charge-weighted average of the hit-peak times for hits in the cluster 
        */
        float     charge=caf::kSignalingNaN;          ///< Charge on calorimetry plane [e-]
        float     energy=caf::kSignalingNaN;          ///< Reconstructed energy in the calorimetry plane (const dE/dx, fcl-configurable) [GeV]
        float     energyESTAR=caf::kSignalingNaN;     ///< Reconstructed energy in the calorimetry plane (ESTAR method from ArgoNeuT)    [GeV]
        float     energyPSTAR=caf::kSignalingNaN;     ///< Reconstructed energy in the calorimetry plane (PSTAR method similar with ESTAR method from ArgoNeuT) [GeV]
        float     proxTrkDist=caf::kSignalingNaN;     ///< 3-D distance to closest track, assuming the blip was concident with event trigger [cm]
        /*!
          for properly flash matched out-of-time tracks this distance will be wrong! The blips have no such flash matching ability as of yet
        */
        int       proxTrkID=caf::kUninitializedInt;   ///< index of the of closest track, assuming the blip was concident with event trigger
        bool      inCylinder=false;                   ///< Bool for whether this blip falls in a 45 degree cone relative to any track closer than fcl-set CylinderRadius (15 cm)
        /*!
          please note the blip X position is unreliable, so these distance and 3-d position derived variables may be incorrect
        */
        SRVector3D  position;                         ///< 3D position vector. Reconstructed with wrong t0! [cm]
        float     sigmaYZ=caf::kSignalingNaN;         ///< Uncertainty in YZ intersect [cm]
        float     dX=caf::kSignalingNaN;              ///< Equivalent length along drift direction [cm] 
        float     dYZ=caf::kSignalingNaN;             ///< Approximate length scale in YZ space [cm]
        SRBlipHitClust clusters[kNplanes];            ///< Plane/cluster-specific information. Just contains hit clusters making up this blip!
        SRBlipTrueBlip truthBlip;                     ///< Truth-matched energy deposition. Just contains the relevant MC truth info to this blip!
    };
}
#endif
