/*
 * @file   /sbnanaobj/StandardRecord/SRSBNDFrameShiftInfo.h
 * @brief  Defines CAF data structures to store sbnd::timing::FrameShiftInfo (docdb#43090).
 * @author Vu Chi Lan Nguyen
 * @date   August 29, 2025
 *
 */

#ifndef SRSBNDFRAMESHIFTINFO_H
#define SRSBNDFRAMESHIFTINFO_H

#include <cstdint>
namespace caf
{
  /*
   * @brief A struct to store shifts across different reference frames from sbnd::timing::FrameShiftInfo for SBND Data
   *
   * Each shift is in [ns]
   *
   */

  class SRSBNDFrameShiftInfo
    {
    public:
      SRSBNDFrameShiftInfo();
      virtual ~SRSBNDFrameShiftInfo() {}

      uint16_t timingType; ///< Types of decoded frames: 0 - SPEC TDC ETRIG, 1 - HLT ETRIG, 2 - Do Nothing
      double frameTdcCrtt1; ///< Shift from decoded frame to SPEC-TDC CRT T1 [ns]
      double frameTdcBes; ///< Shift from decoded frame to SPEC-TDC BES [ns]
      double frameTdcRwm; ///< Shift from decoded frame to SPEC-TDC RWM [ns]
      double frameHltCrtt1; ///< Shift from decoded frame to HLT CRT T1 [ns]
      double frameHltBeamGate; ///< Shift from decoded frame to HLT Beam Gate [ns]
      double frameApplyAtCaf; ///< Frame to shift to when running at CAF stage
    };
} // end namespace
#endif // SRSBNDFRAMESHIFTINFO_H
//////////////////////////////////////////////////////////////////////////////
