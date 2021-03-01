////////////////////////////////////////////////////////////////////////
// \file    SRPFP.h
////////////////////////////////////////////////////////////////////////
#ifndef SRPFP_H
#define SRPFP_H

#include <vector>

namespace caf {
/// Representation of a rb::PFParticle, with hierarchy and Pandora metadata
class SRPFP {
  public:
  SRPFP();
  ~SRPFP() {}

  int ID;                     ///< ID of this pfp (taken from the pandora particle "ID" of this PFP)
  unsigned int ndaughters;    //< Number of daughters
  std::vector<int> daughters; ///< ID's of daughters of this pfp

  int parent;             ///< ID of parent particle of this pfp
  bool parent_is_primary; ///< If this is a primary daughter of a neutrino/cosmic

  float trackScore; ///< The MVA score that determines how track/shower like a PFP is

  int slcID; // ID of the slice that this PFP belongs to
};

} // end namespace

#endif // SRPFP_H
//////////////////////////////////////////////////////////////////////////////
