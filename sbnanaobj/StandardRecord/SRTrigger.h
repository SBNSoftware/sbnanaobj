#ifndef SRTRIGGER_h
#define SRTRIGGER_h

#include <cstdlib>
#include <cstdint>
#include <vector>

namespace caf
{
  class SRTrigger
  {
  public:
    SRTrigger();
    u_int64_t global_trigger_time;  ///< Time of trigger in UTC [ns]
    u_int64_t beam_gate_time_abs;   ///< Time of beam gate opening in UTC [ns]
    double trigger_within_gate;     ///< Time from  beam gate to the trigger [us]
    double beam_gate_det_time;      ///< Beam gate time on detector time scale [us]
    double global_trigger_det_time; ///< Trigger time on detector time scale [us]

    std::uint64_t prev_global_trigger_time; ///< Time of the last trigger in this stream in UTC [ns]
    unsigned int source_type;               ///< Gate source type
    unsigned int trigger_type;              ///< Trigger type

    unsigned trigger_id;  ///< Global ID of the trigger 
    unsigned gate_id;     ///< Global ID of the gate

    unsigned trigger_count; ///< Count of trigger in this stream
    unsigned gate_count;    ///< Count of gate in this stream
    int gate_delta;         ///< Number of gates since previous trigger in this stream (gate of this event included)
    
    /// Logic of the trigger(s) that fired.
    /// ICARUS: from adder logic (`1`), PMT-majority logic (`2`) or both (`3`),
    /// straight from the trigger hardware. Provided for the first cryostat in time.    
    unsigned int trigger_logic_bits;   

    /// Time from the beam gate opening to the first trigger [us].
    /// ICARUS: straight from the trigger hardware.
    /// Provided for the first cryostat in time.    
    float gate_to_trigger_time; 
    
    unsigned int trigger_cryo_source;  ///< ICARUS: first cryostat that had the trigger in the trigger hardware.
    bool passed_trigger; ///< if the event passed the trigger
    int num_pairs_over_threshold; ///< number of pmt pairs over trigger threshold
    std::vector<int> monpulses_flat; ///< trigger responses (number of PMT pairs above threshold for all channels) for all flashes (flattened to include all flashes in a single vector)
    std::vector<int> monpulse_sizes; ///< length of each trigger responses to un-flatten the trigger responses (to a vector of trigger responses)
    
    /// PTB (Penn Trigger Board) trigger information for SBND
    /// SBND: straight from the trigger hardware.
    /// HLT (High Level Trigger) information - decoded: each set bit in the trigger word becomes a separate entry
    std::vector<double> ptb_hlt_timestamp;         ///< Current timestamp for each HLT trigger bit [s]
    std::vector<std::uint64_t> ptb_hlt_bit;       ///< Individual trigger bit number for each HLT trigger (decoded from trigger word)
    /// LLT (Low Level Trigger) information - decoded: each set bit in the trigger word becomes a separate entry
    std::vector<double> ptb_llt_timestamp;         ///< Current timestamp for each LLT trigger bit [s]
    std::vector<std::uint64_t> ptb_llt_bit;       ///< Individual trigger bit number for each LLT trigger (decoded from trigger word)
  };
}

#endif
