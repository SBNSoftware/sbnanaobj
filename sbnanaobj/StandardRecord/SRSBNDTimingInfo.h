/*
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
  /*
   * @brief A struct to store important timestamps from sbnd::timing::TimingInfo for SBND data
   *
   * Each timestamp is in UNIX Timestamp Format [ns]
   *
   */

  class SRSBNDTimingInfo
    {
    public:
      SRSBNDTimingInfo();
      virtual ~SRSBNDTimingInfo() {}
      
      uint64_t rawDAQHeaderTimestamp; ///< Timestamp when the event is built by the event builder at DAQ-level
      uint64_t tdcCrtt1; ///< Timestamp of BNB stream CRT T1 Reset recorded by the SPEC-TDC
      uint64_t tdcBes; ///< Timestamp of BES signal sent by MFTU recorded by the SPEC-TDC
      uint64_t tdcRwm; ///< Timestamp of RWM signal recorded by the SPEC-TDC
      uint64_t tdcEtrig; ///< Timestamp of Event Trigger (ETRIG) sent by the PTB recorded by the SPEC-TDC 
      uint64_t hltCrtt1; ///< Timestamp of BNB and Offbeam stream CRT T1 Reset High Level Trigger (HLT) created by the PTB
      uint64_t hltEtrig; ///< Timestamp of ETRIG HLT created by the PTB
      uint64_t hltBeamGate; ///< Timestamp of Beam Gate Acceptance HLT created by the PTB
    };
} // end namespace
#endif // SRSBNDTIMINGINFO_H
//////////////////////////////////////////////////////////////////////////////
