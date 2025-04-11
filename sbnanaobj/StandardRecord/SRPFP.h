////////////////////////////////////////////////////////////////////////
// \file    SRPFP.h
////////////////////////////////////////////////////////////////////////
#ifndef SRPFP_H
#define SRPFP_H

#include "sbnanaobj/StandardRecord/SRPFOChar.h"
#include "sbnanaobj/StandardRecord/SRTrack.h"
#include "sbnanaobj/StandardRecord/SRShower.h"
#include "sbnanaobj/StandardRecord/SRPFPRazzled.h"
#include "sbnanaobj/StandardRecord/SRCNNScore.h"

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

  SRCNNScore cnnscore; // CNN scores for this PFP

  int   ng_sem_cat;    ///< NuGraph semantic category with largest hit fraction
  float ng_mip_frac; ///< Fraction of PFP hits labeled by NuGraph as MIP
  float ng_hip_frac; ///< Fraction of PFP hits labeled by NuGraph as HIP
  float ng_shr_frac; ///< Fraction of PFP hits labeled by NuGraph as shower
  float ng_mhl_frac; ///< Fraction of PFP hits labeled by NuGraph as Michel
  float ng_dif_frac; ///< Fraction of PFP hits labeled by NuGraph as diffuse
  float ng_bkg_frac; ///< Fraction of PFP hits labeled by NuGraph as background

  int slcID; // ID of the slice that this PFP belongs to
  float t0; // T0 assigned by TPC reco, if any

  SRTrack trk; // Track reconstructed from this PFP
  SRShower shw; // Shower reconstructed from this PFP

  SRPFPRazzled razzled; // Results from the PFP MVA
};

} // end namespace

#endif // SRPFP_H
//////////////////////////////////////////////////////////////////////////////
