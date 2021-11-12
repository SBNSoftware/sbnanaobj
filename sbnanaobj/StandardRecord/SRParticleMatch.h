////////////////////////////////////////////////////////////////////////
// \file    SRParticleMatch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRPARTICLEMATCH_H
#define SRPARTICLEMATCH_H

namespace caf
{
  /// Match from a reconstructed track to a true particle  */
  class SRParticleMatch {
  public:
    SRParticleMatch();            //!< Constructor
    int G4ID;                     //!< ID of the particle match, taken from G4 */
    float energy;                 //!< Total energy matching between reco track and true particle across all three planes [GeV]. NOTE: this energy is a sum of the depoisted energy as seen individually by each plane */

    float hit_completeness;       //!< The fraction of the best true particle's hits contained by the reconstructed object
    float hit_purity;             //!< The fraction of the reconstructed object's hits that originate from the best true particle
    float energy_completeness;    //!< The fraction of the best true particle's energy contained by the reconstructed object
    float energy_purity;          //!< The fraction of the reconstructed object's energy that originates from the best true particle
  };
} // end namespace

#endif // SRPARTICLEMATCH_H
//////////////////////////////////////////////////////////////////////////////
