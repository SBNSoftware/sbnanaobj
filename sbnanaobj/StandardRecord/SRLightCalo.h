/**
 * @file   sbnanaobj/StandardRecord/SRLightCalo.h
 * @brief  Defines data structures to store light calorimetry info (header only).
 * @author Lynn Tung
 * @date   November 19, 2025
 */

#ifndef SBNANAOBJ_STANDARDRECORD_SRLIGHTCALO_H
#define SBNANAOBJ_STANDARDRECORD_SRLIGHTCALO_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf {

  /**
   * @brief A struct to store the reconstructed visible energy, light, and charge in a recob::Slice.
   * 
   */
  struct SRLightCalo {
    float charge  = caf::kSignalingNaN;      ///< the total charge in the slice (on bestplane) [# electrons]
    float light   = caf::kSignalingNaN;      ///< the reconstructed total number of photons  [# photons]
    float energy  = caf::kSignalingNaN;      ///< (charge+light)*scaling, [GeV]
    int bestplane = caf::kUninitializedInt;  ///< plane with most number of hits 
};
}

#endif
