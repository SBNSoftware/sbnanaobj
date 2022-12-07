////////////////////////////////////////////////////////////////////////
// \file    SRPFP.h
////////////////////////////////////////////////////////////////////////
#ifndef SRPFP_H
#define SRPFP_H

#include "sbnanaobj/StandardRecord/SRPFOChar.h"
#include "sbnanaobj/StandardRecord/SRTrack.h"
#include "sbnanaobj/StandardRecord/SRShower.h"

#include <vector>

namespace caf {
/// Representation of a rb::PFParticle, with hierarchy and Pandora metadata
class SRPFP {
  public:
  SRPFP();
  ~SRPFP() {}

  int id;                     ///< ID of this pfp (taken from the pandora particle "ID" of this PFP)
  unsigned int ndaughters;    ///< Number of daughters
  std::vector<int> daughters; ///< ID's of daughters of this pfp

  int parent;             ///< ID of parent particle of this pfp
  bool parent_is_primary; ///< If this is a primary daughter of a neutrino/cosmic

  float trackScore;  ///< The MVA score that determines how track/shower like a PFP is
  SRPFOChar pfochar; ///< The MVA inputs (features) in determination of the track score (PFO Characterisation)

  int slcID; // ID of the slice that this PFP belongs to
  float t0; // T0 assigned by TPC reco, if any

  SRTrack trk; // Track reconstructed from this PFP
  SRShower shw; // Shower reconstructed from this PFP
};

} // end namespace

#endif // SRPFP_H
//////////////////////////////////////////////////////////////////////////////
