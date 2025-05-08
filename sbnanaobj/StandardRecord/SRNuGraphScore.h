////////////////////////////////////////////////////////////////////////
// \file    SRNuGraphScore.h
////////////////////////////////////////////////////////////////////////
#ifndef SRNuGraphSCORE_H
#define SRNuGraphSCORE_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf {

  /**
  * @brief Categorization of the object/PFP by NuGraph.
  *
  * This object summarizes the results from running NuGraph over hits in a slice
  * (see e.g. [https://sbn-docdb.fnal.gov/cgi-bin/sso/ShowDocument?docid=40585](SBN DocDB 40585).
  *
  * The semantic category is the one that most hits belong to.
  * The fractions describe the categorization of the hits in the object/PFP.
  */
  class SRNuGraphScore {
  public:

    enum NuGraphCategory {
      Unset = -1, ///< Unset/unknown/undecided/ category.
      MIP = 0,    ///< Minimum-ionizing particle.
      HIP = 1,    ///< Highly-ionizing particle.
      Shower = 2, ///< EM Shower (photon or primary electron).
      Michel = 3, ///< Michel electron (from muon decay).
      Diffuse = 4 ///< Diffuse activity.
    };

    int sem_cat = NuGraphCategory::Unset;
    float mip_frac = caf::kSignalingNaN; ///< Fraction of hits that are labeled as `MIP`.
    float hip_frac = caf::kSignalingNaN; ///< Fraction of hits that are labeled as `HIP`.
    float shr_frac = caf::kSignalingNaN; ///< Fraction of hits that are labeled as `Shower`.
    float mhl_frac = caf::kSignalingNaN; ///< Fraction of hits that are labeled as `Michel`.
    float dif_frac = caf::kSignalingNaN; ///< Fraction of hits that are labeled as `Diffuse`.
    float bkg_frac = caf::kSignalingNaN; ///< Fraction of hits that are labeled as `Background`.
  };
}

#endif
