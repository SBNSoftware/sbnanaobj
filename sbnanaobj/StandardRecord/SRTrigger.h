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
    u_int64_t global_trigger_time; ///< Time of trigger in UTC [ns]
    u_int64_t beam_gate_time_abs; ///< Time of beam gate opening in UTC [ns]
    double trigger_within_gate; ///< Time from  beam gate to the trigger [us]
    double beam_gate_det_time; ///< Beam gate time on detector time scale [us]
    double global_trigger_det_time; ///< Trigger time on detector time scale [us]

    std::uint64_t prev_global_trigger_time; ///< Time of the last trigger in this stream in UTC [ns]
    unsigned int source_type; ///< gate source type
    unsigned int trigger_type; ///< trigger type

    unsigned trigger_id; ///< global ID of the trigger 
    unsigned gate_id; ///< global ID of the gate

    unsigned trigger_count; ///< count of trigger in this stream
    unsigned gate_count; ///< count of gate in this stream
    int gate_delta; ///< Number of gates since previous trigger in this stream (gate of this event included)
    
    bool passed_trigger; ///< if the event passed the trigger
    int num_pairs_over_threshold; ///< number of pmt pairs over trigger threshold
    std::vector<int> monpulses_flat; ///< trigger responses for all of the waveforms in the event (flattened from a vector of vectors of ints)
    std::vector<int> monpulse_sizes; ///< length of each triggered waveform to un-flatten the trigger responses
  };
}

#endif
