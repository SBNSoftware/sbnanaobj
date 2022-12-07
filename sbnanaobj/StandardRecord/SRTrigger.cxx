#include "sbnanaobj/StandardRecord/SRTrigger.h"
 
#include <limits>
#include <climits>

namespace caf
{
  SRTrigger::SRTrigger():
    global_trigger_time(UINT_MAX),
    beam_gate_time_abs(UINT_MAX),
    trigger_within_gate(0.),
    beam_gate_det_time(std::numeric_limits<double>::signaling_NaN()),
    global_trigger_det_time(std::numeric_limits<double>::signaling_NaN())
  {}
    

}
