/**
 * @file   /sbnanaobj/StandardRecord/SRSoftwareTrigger.h
 * @brief  Defines CAF data structures to store sbnd::trigger::pmtSoftwareTrigger objects (header). 
 * @author Lynn Tung
 * @date   November 12, 2025 
 *
 */

#ifndef SRSOFTWARETRIGGER_H
#define SRSOFTWARETRIGGER_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf{
  
  /**
  * @brief A struct to store software trigger information for SBND Data and MC
  */
  
  struct SRSoftwareTrigger { 
    int   npmts          = caf::kUninitializedInt; ///< In data, number of pmts over threshold; In simulation, number of pmt waveforms used for the trigger sim
    float flash_peaktime = caf::kSignalingNaN; ///< Peak time of the flash [us]
    float flash_peakpe   = caf::kSignalingNaN; ///< Peak amplitude of the flash, 1 PE = 12.5 ADC
  };
}

#endif
