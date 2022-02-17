#ifndef SBNANAOBJ_STANDARDRECORD_SRCONSTANTS_H
#define SBNANAOBJ_STANDARDRECORD_SRCONSTANTS_H

#include <limits>

namespace caf
{
  constexpr float kSignalingNaN     = std::numeric_limits<float>::signaling_NaN();
  constexpr int   kUninitializedInt = -1;
}

#endif //SBNANAOBJ_STANDARDRECORD_SRCONSTANTS_H
