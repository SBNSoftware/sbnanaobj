////////////////////////////////////////////////////////////////////////
// \file    SRCNNScore.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCNNSCORE_H
#define SRCNNSCORE_H

namespace caf {

  class SRCNNScore {
  public:
    SRCNNScore();
    ~SRCNNScore() {}

    float track; 
    float shower; 
    float noise; 
    float endmichel;
    int nclusters; 
  };
}

#endif