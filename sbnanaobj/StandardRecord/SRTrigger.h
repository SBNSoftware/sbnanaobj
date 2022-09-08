#ifndef SRTRIGGER_h
#define SRTRIGGER_h

#include <cstdlib>

namespace caf
{
  class SRTrigger
  {
  public:
    SRTrigger();
    u_int64_t global_trigger_time; ///< Time of trigger in UTC [ns]
    u_int64_t beam_gate_time_abs; ///< Time of beam gate opening in UTC [ns]
    int64_t trigger_within_gate; ///< Time from  beam gate to the trigger [ns]
    double beam_gate_det_time; ///< Beam gate time on detector time scale [us]
    double global_trigger_det_time; ///< Trigger time on detector time scale [us]
    
  };
}

#endif
