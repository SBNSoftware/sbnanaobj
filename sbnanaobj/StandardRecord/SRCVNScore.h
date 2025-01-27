////////////////////////////////////////////////////////////////////////
// \file    SRCVNScore.h
////////////////////////////////////////////////////////////////////////
#ifndef SBNANAOBJ_STANDARDRECORD_SRCVNSCORE_H
#define SBNANAOBJ_STANDARDRECORD_SRCVNSCORE_H

namespace caf {

  class SRCVNScore {
  public:
    SRCVNScore();
    ~SRCVNScore() {}

    float cosmicscore; 
    float ncscore; 
    float numuscore; 
    float nuescore;

  };
}

#endif
