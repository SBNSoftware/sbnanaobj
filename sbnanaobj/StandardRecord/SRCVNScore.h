////////////////////////////////////////////////////////////////////////
// \file    SRCVNScore.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCVNSCORE_H
#define SRCVNSCORE_H

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
