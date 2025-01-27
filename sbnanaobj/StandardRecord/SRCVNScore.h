////////////////////////////////////////////////////////////////////////
// \file    SRCVNScore.h
////////////////////////////////////////////////////////////////////////
#ifndef SBNANAOBJ_STANDARDRECORD_SRCVNSCORE_H
#define SBNANAOBJ_STANDARDRECORD_SRCVNSCORE_H

namespace caf {

  struct SRCVNScore {
    
    static constexpr float NoScore = std::numeric_limits<float>::signaling_NaN();
    float cosmicscore = NoScore; 
    float ncscore = NoScore; 
    float numuscore = NoScore; 
    float nuescore = NoScore;

  };
}

#endif
