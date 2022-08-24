#ifndef SRTRIGGER_h
#define SRTRIGGER_h

#include <cstdlib>

namespace caf
{
  class SRTrigger
  {
  public:
    SRTrigger();
    u_int64_t global_trigger_time;
    u_int64_t beam_gate_time_abs;
    int64_t trigger_within_gate;
    double beam_gate_det_time;
    double global_trigger_det_time;
    
  };
}

#endif
