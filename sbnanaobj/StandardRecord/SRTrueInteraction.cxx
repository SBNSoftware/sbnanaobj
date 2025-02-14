////////////////////////////////////////////////////////////////////////
// \file    SRTrueInteraction.cxx
// \brief   SRTrueInteraction holds true interaction info.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRTrueInteraction.h"


namespace caf
{
  SRTrueInteractionPlaneInfo::SRTrueInteractionPlaneInfo() :
    visE(std::numeric_limits<float>::signaling_NaN()),
    nhitprim(0),
    nhit(0)
  {
  }

  SRTrueInteraction::SRTrueInteraction():
    initpdg(-1),
    pdg(-1),
    index(-1),
    targetPDG(-999),
    hitnuc(-999),
    genie_mode(kUnknownInteractionMode),
    genie_inttype(kUnknownInteractionType),
    genie_evtrec_idx(0),
    isnc(false),
    iscc(false),
    isvtxcont(false),
    is_numucc_primary(false),

    E(std::numeric_limits<float>::signaling_NaN()),
    time(std::numeric_limits<float>::signaling_NaN()),
    bjorkenX(std::numeric_limits<float>::signaling_NaN()),
    inelasticityY(std::numeric_limits<float>::signaling_NaN()),
    Q2(std::numeric_limits<float>::signaling_NaN()),
    q0(std::numeric_limits<float>::signaling_NaN()),
    modq(std::numeric_limits<float>::signaling_NaN()),
    q0_lab(std::numeric_limits<float>::signaling_NaN()),
    modq_lab(std::numeric_limits<float>::signaling_NaN()),
    w(std::numeric_limits<float>::signaling_NaN()),
    t(std::numeric_limits<float>::signaling_NaN()),
    eccqe(std::numeric_limits<float>::signaling_NaN()),
    baseline(std::numeric_limits<float>::signaling_NaN()),

    npiplus(0),
    npiminus(0),
    npizero(0),
    nproton(0),
    nneutron(0),

    ischarm(false),
    isseaquark(false),
    resnum(-999),
    xsec(std::numeric_limits<float>::signaling_NaN()),
    genweight(std::numeric_limits<float>::signaling_NaN()),

    parent_dcy_mode(-1),
    parent_pdg(-1),
    parent_dcy_E(std::numeric_limits<float>::signaling_NaN()),
    imp_weight(std::numeric_limits<float>::signaling_NaN()),
    cryostat(-1),
    det(kUNKNOWN),
    generator(kUnknownGenerator),
    genVersion(),
    nprim(0),
    prim()
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
