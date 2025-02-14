/**
 * @file   sbnanaobj/StandardRecord/SRCVNScore.h
 * @brief  Defines data structures for CVN score (header only).
 * @author Tingjun Yang
 * @date   January 28, 2025
 */

#ifndef SBNANAOBJ_STANDARDRECORD_SRCVNSCORE_H
#define SBNANAOBJ_STANDARDRECORD_SRCVNSCORE_H

namespace caf {

  /**
   * @brief A struct to store the four CVN scores for a single Pandora slice.
   * 
   * Each score represents a probability between 0 and 1. The sum of the four scores is always 1.
   */
  struct SRCVNScore {
    
    static constexpr float NoScore = std::numeric_limits<float>::signaling_NaN();
    float cosmicscore = NoScore; ///< Probability of being a cosmic interaction.
    float ncscore     = NoScore; ///< Probability of being a neutral current interaction.
    float numuscore   = NoScore; ///< Probability of being a numu charged current interaction.
    float nuescore    = NoScore; ///< Probability of being a nue charged current interaction.

  };
}

#endif
