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
   * @brief A struct to store total true deposited energy, charge, and photons for each MCTruth interaction.
   * 
   */
  struct SRTrueDeposit {
    float electrons = caf::kSignalingNaN; ///< total # of electrons from the sites of energy deposition, summed per nu interaction (after recombination, before drift)
    float photons   = caf::kSignalingNaN; ///< total # of photons from the sites of energy deposition, summed per nu interaction   (after recombination, before propagation) 
    float energy    = caf::kSignalingNaN; ///< total **deposited energy**, summed per nu interaction [GeV]
  };
}

#endif
