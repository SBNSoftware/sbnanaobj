/**
 * @file    SRBlipHitClust.h
 * @brief   SRBlipHitClust struct contains information on hit clusters on each plane used to form a SRBlip
 * @author  Jacob McLaughlin - jmclaughlin2@illinoistech.edu
 */
#ifndef SBNANAOBJ_STANDARDRECORD_SRBLIPHITCLUST_H
#define SBNANAOBJ_STANDARDRECORD_SRBLIPHITCLUST_H
#include <map>
#include <set>
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  /** Hit clusters are collections of adjacent hits on a single wire plane.
   *  They have a fcl-set maximum wire-span (fcl set. Default 10), as well as maximum tick-width (fcl set. Default 50 tick).
   *  Hit clusters have timestamp and associated wire IDs. 
   *  Within a hit cluster certain statistical summaries of the collection are saved including:
   *  Total charge, total charge uncertianty, peak hit amplitude, and charge weighted RMS hit spread
   */
    struct SRBlipHitClust {
    int     ID              = caf::kUninitializedInt; ///< Per-plane index for the hit clusters. In SBND we save every collection plane hitcluster but not the induction
    bool    isValid         = false; ///< Bool check that every hit is in the same cryostat, tpc, plane. Should always be true for saved items
    int     centerChan      = caf::kUninitializedInt; ///< Channel ID of the wire in the geometric center of the hit cluster
    int     centerWire      = caf::kUninitializedInt; ///< Wire ID of the wire in the geometric center of the hit cluster
    bool    isTruthMatched  = false; ///< is there a trueBlip with the same leadG4ID as one of the G4IDs making up this cluster
    bool    isMatched       = false; ///< Is this hit cluster plane-matched into a full 3d blip
    int     deadWireSep     = caf::kUninitializedInt; ///< Separation between the extreme ends of the hitcluster and the nearest dead wire. 
    /*!
      DeadWireSep can be between 0 and 5 and valid. Larger separations are filled in as 99.
    */
    int     cryostat        = caf::kUninitializedInt; ///< cryostat for this hit cluster
    int     TPC             = caf::kUninitializedInt; ///< TPC for this hit cluster
    int     plane           = caf::kUninitializedInt; ///< Plane index for this hit cluster
    int     nHits           = caf::kUninitializedInt; ///< Number of hits making up this hit cluster
    int     nWires          = caf::kUninitializedInt; ///< Wire span of the hit cluster
    float   ADCs            = caf::kUninitializedInt; ///< ADC integral sum of hits making up the cluster [ADC-tick]
    float   amplitude       = caf::kUninitializedInt; ///< Max amplitude of hits making up the hit cluster [ADC]
    float   charge          = caf::kUninitializedInt; ///< Total charge of hits making up the hit cluster [e-]
    /*!
      Charge is reconstructed from calo::CalorimetryAlg ( "sbnd_calorimetryalgmc" )-> ElectronsFromADCArea function
      Configuration is in sbndcode/sbndcode/LArSoftConfigurations/calorimetry_sbnd.fcl
    */
    float   sigmaCharge     = caf::kSignalingNaN; ///< charge-weighted charge uncertainties for this hit-cluster [e-]
    float   timeTick        = caf::kSignalingNaN; ///< charge-weighted average hit-peak-times for this hit-cluster [tick]
    float   time            = caf::kSignalingNaN; ///< charge-weighted average hit-peak-times for this hit-cluster [us]
    float   startTime       = caf::kSignalingNaN; ///< Minimum -1 sigma time of a hit in this cluster [us]
    float   endTime         = caf::kSignalingNaN; ///< Max +1 sigma time of a hit in this cluster [us]
    float   timespan        = caf::kSignalingNaN; ///< Hit cluster EndTime - StartTime [us]
    float   RMS             = caf::kSignalingNaN; ///< Quadrature estimate of charge waveform timespread accounting for varied hit-drift times and internal hit-RMS [us]
    int     startWire       = caf::kUninitializedInt; ///< Lowest wireID involved with the hitcluster 
    int     endWire         = caf::kUninitializedInt; ///< Highest wireID involved with the hit cluster
    int     nPulseTrainHits = caf::kUninitializedInt;  ///< Number of hits with a GoodnessOfFit<0 involved in this hit cluster
    float   goodnessOfFit   = caf::kSignalingNaN; ///< Charge weighted hit-GoodnessofFit param
    int     blipID          = caf::kUninitializedInt; ///< If this hit cluster ended up in a blip, what is its ID
    int     edepID          = caf::kUninitializedInt; ///< If this hit cluster is MC-matched what is the trueBlip ID
    std::vector<int>    hitIDs; ///< Index of the recob::hit objects making up this cluster
    std::vector<int>    wires;  ///<  Set of geo::wireIDs contributing hits to this cluster
    std::vector<int>    chans;  ///<  Set of raw::ChannelID_t contributing hits to this cluster
    std::vector<int>    G4IDs;  ///<  simb::MCParticle track ID contributing hits to this cluster
  };
}
#endif
