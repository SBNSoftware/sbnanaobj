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
   * legacy: [SBN DocDB 43090](https://sbn-docdb.fnal.gov/cgi-bin/sso/ShowDocument?docid=43090).
   * new: ???
   */

  struct SRSBNDFrameShiftInfo { 
    
    static constexpr uint16_t InvalidType = std::numeric_limits<uint16_t>::max();
    static constexpr uint16_t InvalidChannel = std::numeric_limits<uint16_t>::max();
    static constexpr uint64_t InvalidTimestamp = std::numeric_limits<uint64_t>::max();

    uint64_t frameCrtt1         = InvalidTimestamp; ///< Frame for CRT T1 signal [ns]
    uint16_t timingTypeCrtt1    = InvalidType; ///< Types of CRT T1 frame
    uint16_t timingChannelCrtt1 = InvalidChannel; ///< Channel of CRT T1 frame

    uint64_t frameBeamGate         = InvalidTimestamp; ///< Frame for Beam Gate [ns]
    uint16_t timingTypeBeamGate    = InvalidType; ///< Types of Beam Gate frame
    uint16_t timingChannelBeamGate = InvalidChannel; ///< Channel of Beam Gate frame

    uint64_t frameEtrig         = InvalidTimestamp; ///< Frame for ETRIG [ns]
    uint16_t timingTypeEtrig    = InvalidType; ///< Types of ETRIG frame
    uint16_t timingChannelEtrig = InvalidChannel; ///< Channel of ETRIG frame

    uint64_t frameDefault         = InvalidTimestamp; ///< Default frame depending on the stream type [ns]
    uint16_t timingTypeDefault    = InvalidType; ///< Types of default frame
    uint16_t timingChannelDefault = InvalidChannel; ///< Channel of default frame
  };
} // end namespace
#endif // SRSBNDFRAMESHIFTINFO_H
//////////////////////////////////////////////////////////////////////////////
