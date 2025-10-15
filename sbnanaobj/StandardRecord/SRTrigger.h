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
    
    unsigned int trigger_logic_bits;   ///< Whether the trigger was from adder logic, PMT-majority logic or both, straight from the trigger hardware. Provided for the first cryostat in time.
    unsigned int beam_to_trigger_time; ///< Nanoseconds from the beam gate opening to the first trigger in the cryostat, straight from the trigger hardware. Provided for the first cryostat in time.
    unsigned int trigger_cryo_source;  ///< First cryostat that had the trigger in the trigger hardware.

    bool passed_trigger;              ///< If the event passed the trigger
    int num_pairs_over_threshold;     ///< Number of PMT pairs over trigger threshold
    std::vector<int> monpulses_flat;  ///< Trigger responses (number of PMT pairs above threshold for all channels) for all flashes (flattened to include all flashes in a single vector)
    std::vector<int> monpulse_sizes;  ///< Length of each trigger responses to un-flatten the trigger responses (to a vector of trigger responses)
  };
}

#endif
