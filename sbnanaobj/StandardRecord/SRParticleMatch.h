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
    SRParticleMatch();   //!< Constructor
    int G4ID;          //!< ID of the particle match, taken from G4 */
    float energy;      //!< Total energy matching between reco track and true particle across all three planes [GeV]. NOTE: this energy is a sum of the depoisted energy as seen individually by each plane */
  };
} // end namespace

#endif // SRPARTICLEMATCH_H
//////////////////////////////////////////////////////////////////////////////
