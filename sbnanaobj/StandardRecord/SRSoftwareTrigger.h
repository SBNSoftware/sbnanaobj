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
    int   npmts          = caf::kUninitializedInt; 
    float flash_peaktime = caf::kSignalingNaN;
    float flash_peakpe   = caf::kSignalingNaN;
  };
}

#endif
