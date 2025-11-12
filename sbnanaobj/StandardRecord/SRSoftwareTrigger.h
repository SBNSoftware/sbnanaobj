/**
 * @file   /sbnanaobj/StandardRecord/SRSoftwareTrigger.h
 * @brief  Defines CAF data structures to store sbnd::trigger::pmtSoftwareTrigger objects (header). 
 * @author Lynn Tung
 * @date   November 12, 2025 
 *
 */

#ifndef SRSOFTWARETRIGGER_H
#define SRSOFTWARETRIGGER_H

namespace caf{
  
  /**
  * @brief A struct to store software trigger information for SBND Data and MC
  */
  
  struct SRSoftwareTrigger { 
    int npmts            = std::numeric_limits<int>::signaling_NaN();
    float flash_peaktime = std::numeric_limits<float>::signaling_NaN(); 
    float flash_peakpe   = std::numeric_limits<float>::signaling_NaN();
  };
}

#endif