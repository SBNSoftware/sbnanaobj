/**
 * @file   /sbnanaobj/StandardRecord/SRSBNDTimingInfo.h
 * @brief  Defines CAF data structures to store sbnd::timing::TimingInfo (docdb#43090).
 * @author Vu Chi Lan Nguyen
 * @date   August 29, 2025
 *
 */
    
#ifndef SRSBNDTIMINGINFO_H
#define SRSBNDTIMINGINFO_H

#include <stdint.h>

namespace caf
{
  /**
   * @brief A struct to store important timestamps from sbnd::timing::TimingInfo for SBND data
   *
   * Each timestamp is in UNIX Timestamp Format [ns]
   *
   * For more information, see
   * [SBN DocDB 43090](https://sbn-docdb.fnal.gov/cgi-bin/sso/ShowDocument?docid=43090).
   */

  struct SRSBNDTimingInfo
    {
      static constexpr uint64_t InvalidTimestamp = std::numeric_limits<uint64_t>::max();

      uint64_t rawDAQHeaderTimestamp = InvalidTimestamp; ///< Timestamp when the event is built by the event builder at DAQ-level
      uint64_t tdcCrtt1 = InvalidTimestamp; ///< Timestamp of BNB stream CRT T1 Reset recorded by the SPEC-TDC
      uint64_t tdcBes = InvalidTimestamp; ///< Timestamp of BES signal sent by MFTU recorded by the SPEC-TDC
      uint64_t tdcRwm = InvalidTimestamp; ///< Timestamp of RWM signal recorded by the SPEC-TDC
      uint64_t tdcEtrig = InvalidTimestamp; ///< Timestamp of Event Trigger (ETRIG) sent by the PTB recorded by the SPEC-TDC 
      uint64_t hltCrtt1 = InvalidTimestamp; ///< Timestamp of BNB and Offbeam stream CRT T1 Reset High Level Trigger (HLT) created by the PTB
      uint64_t hltEtrig = InvalidTimestamp; ///< Timestamp of ETRIG HLT created by the PTB
      uint64_t hltBeamGate = InvalidTimestamp; ///< Timestamp of Beam Gate Acceptance HLT created by the PTB
    };
} // end namespace
#endif // SRSBNDTIMINGINFO_H
//////////////////////////////////////////////////////////////////////////////
