////////////////////////////////////////////////////////////////////////
// \file    SRTrackTruth.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKTRUTH_H
#define SRTRACKTRUTH_H

#include <vector>
#include "SRTrueParticle.h"
#include "SRParticleMatch.h"

namespace caf
{
  /// Truth matching information between a SRTrack and a list of SRTrueParticle objects
  /// matching is done using the sum of energies on each plane, so energy variables use the sum of energy
  /// seen by each plane
  //
  // TODO: should this be done differently? Use the best plane?
  class SRTrackTruth {
  public:
    SRTrackTruth(); //!< Constructor
    float visEintrk; //!< True total deposited energy associated with this Track across all 3 planes [GeV]. NOTE: this energy is a sum of the depoisted energy as seen individually by each plane
    float eff; //!< Cluster efficiency for best matched particle
    float eff_cryo; //!< Clsuter efficiency for best matched particle, for the cryostat this cluster is in
    float pur; //!< Cluster purity for best matched particle
  
    int                       nmatches; //!< Number of matches
    std::vector<SRParticleMatch> matches; //!< List of particle matches, sorted by most energy matched */
    SRParticleMatch bestmatch; //!< Best match for track (most energy). Same as index-0 of matches. Useful for columnar analyses.
    SRTrueParticle p; //!< A copy of the true particle for the best match. Set to nonsense if there is no such match.
  };
} // end namespace

#endif // SRTRACKTRUTH_H
//////////////////////////////////////////////////////////////////////////////
