////////////////////////////////////////////////////////////////////////
// \file    SRNuGraphScore.h
////////////////////////////////////////////////////////////////////////
#ifndef SRNuGraphSCORE_H
#define SRNuGraphSCORE_H

namespace caf {

  class SRNuGraphScore {
  public:
    SRNuGraphScore();
    ~SRNuGraphScore() {}

    enum NuGraphCategory {
      Unset = -1,
      Mip = 0,
      Hip = 1,
      Shower = 2,
      Michel = 3,
      Diffuse = 4
    };

    int sem_cat;
    float mip_frac;
    float hip_frac;
    float shr_frac;
    float mhl_frac;
    float dif_frac;
    float bkg_frac;
  };
}

#endif
