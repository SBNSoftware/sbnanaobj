/**
 * @file   /sbnanaobj/StandardRecord/SRSBNDFrameShiftInfo.h
 * @brief  Defines CAF data structures to store sbnd::timing::FrameShiftInfo (docdb#43090).
 * @author Vu Chi Lan Nguyen
 * @date   August 29, 2025
 *
 */

#ifndef SRSBNDFRAMESHIFTINFO_H
#define SRSBNDFRAMESHIFTINFO_H

#include <cstdint>
#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  /**
   * @brief A struct to store shifts across different reference frames from sbnd::timing::FrameShiftInfo for SBND Data
   *
   * Each shift is in [ns]
   *
   * For more information, see
   * [SBN DocDB 43090](https://sbn-docdb.fnal.gov/cgi-bin/sso/ShowDocument?docid=43090).
   */

  struct SRSBNDFrameShiftInfo {
    static constexpr uint16_t NoType = std::numeric_limits<uint16_t>::max();
    uint16_t timingType = NoType; ///< Types of decoded frames: 0 - SPEC TDC ETRIG, 1 - HLT ETRIG, 2 - Do Nothing
    double frameTdcCrtt1 = kSignalingNaN; ///< Shift from decoded frame to SPEC-TDC CRT T1 [ns]
    double frameTdcBes = kSignalingNaN; ///< Shift from decoded frame to SPEC-TDC BES [ns]
    double frameTdcRwm = kSignalingNaN; ///< Shift from decoded frame to SPEC-TDC RWM [ns]
    double frameHltCrtt1 = kSignalingNaN; ///< Shift from decoded frame to HLT CRT T1 [ns]
    double frameHltBeamGate = kSignalingNaN; ///< Shift from decoded frame to HLT Beam Gate [ns]
    double frameApplyAtCaf = kSignalingNaN; ///< Frame to shift to when running at CAF stage
  };
} // end namespace
#endif // SRSBNDFRAMESHIFTINFO_H
//////////////////////////////////////////////////////////////////////////////
