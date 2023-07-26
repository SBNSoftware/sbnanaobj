////////////////////////////////////////////////////////////////////////
// \file    SROpT0Finder.h
////////////////////////////////////////////////////////////////////////
#ifndef SROPT0FINDER_H
#define SROPT0FINDER_H

namespace caf
{
  class SROpT0Finder {
  public:
    SROpT0Finder();            //!< Constructor
    ~SROpT0Finder() {}
    
    int   tpc;    // tpc that the matching was performed in
    float time;    // flash-matched t0  
    float score;   // OpT0 score of the match; is the reciprocal of the LLH score or chi-squared score 
    float measPE;  // total PE of the measured flash 
    float hypoPE;  // total PE of the shypothetical flash   
    };
} // end namespace

#endif 
//////////////////////////////////////////////////////////////////////////////
