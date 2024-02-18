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
    global_trigger_det_time(std::numeric_limits<double>::signaling_NaN()),
    prev_global_trigger_time(0),
    source_type(-1),
    trigger_type(-1),
    trigger_id(0),
    gate_id(0),
    trigger_count(0),
    gate_count(0),
    gate_delta(-1)
  {}
    

}
