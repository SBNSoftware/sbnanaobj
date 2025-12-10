/**
 * @file   sbnanaobj/StandardRecord/SrTrueDeposit.h
 * @brief  Defines data structures to store summed SimEnergyDeposits (header only).
 * @author Lynn Tung
 * @date   November 18, 2025
 */

#ifndef SBNANAOBJ_STANDARDRECORD_SRTRUEDEPOSIT_H
#define SBNANAOBJ_STANDARDRECORD_SRTRUEDEPOSIT_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf {

  /**
   * @brief A struct to store true deposited energy, charge, and photons for each MCTruth interaction.
   * 
   */
  struct SRTrueDeposit {
    float electrons = caf::kSignalingNaN; ///< # of electrons at the site of energy deposition (after recombination, before drift)
    float photons   = caf::kSignalingNaN; ///< # of photons at the site of energy deposition   (after recombination, before propagation) 
    float energy    = caf::kSignalingNaN; ///< total **deposited energy** [GeV]
  };
}

#endif
