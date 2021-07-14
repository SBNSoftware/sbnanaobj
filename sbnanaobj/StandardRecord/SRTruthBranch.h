////////////////////////////////////////////////////////////////////////
// \file    SRTruthBranch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRUTHBRANCH_H
#define SRTRUTHBRANCH_H

#include "sbnanaobj/StandardRecord/SRTrueInteraction.h"
#include "sbnanaobj/StandardRecord/SRMeVPrtl.h"

#include <vector>

namespace caf
{
  /// Vectors of reconstructed vertices found by various algorithms
  class SRTruthBranch
  {
  public:
    SRTruthBranch();
    ~SRTruthBranch();
            
    std::vector<SRTrueInteraction> nu;   ///< Vector of true nu or cosmic
    size_t                        nnu;   ///< Number of true nu or cosmic

    std::vector<SRMeVPrtl>       prtl;   ///< If present -- information on decay of MeV "Portal" particle
    size_t                      nprtl;   ///< Number of portals

    void fillSizes();
      
  };
  
} // end namespace

#endif // SRTRUTHBRANCH_H
////////////////////////////////////////////////////////////////////////////
