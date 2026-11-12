/**
 * @file    SRQELambda.cxx
 * @brief   Reconstructed information for QE Lambda events using FRANS algorithms.
 * @see     SRQELambda.h
 */

#include "sbnanaobj/StandardRecord/SRQELambda.h"

void caf::SRQELambda::setDefault()
{
  // IsValid = false;
  SliceId = caf::kUninitializedInt;

  FransNUnassocOrigins       = caf::kUninitializedInt;
  FransNMaxDirtUnassocHits   = caf::kUninitializedInt;
  FransNAngles               = caf::kUninitializedInt;
  FransContainedPhi          = -999;
  FransPzsign                = 0;

  FransScore                 = -999;
  FransIota                  = -999;
  FransDelta                 = -999;
  FransEta                   = -999;
  FransFitScore              = -999;

  HyperonVtxX      = -999;
  HyperonVtxY      = -999;
  HyperonVtxZ      = -999;
  PrimLeptonVtxX   = -999;
  PrimLeptonVtxY   = -999;
  PrimLeptonVtxZ   = -999;

  FransTrack1ID = -1;
  FransTrack2ID = -1;
  FransMainTrackID = -1;

  MichelNMuonTracks  = caf::kUninitializedInt;
  MichelRssRatio     = -999;
  MichelAngleQ80     = -999;
  MichelDropRadius   = -999;
  MichelNBlips       = caf::kUninitializedInt;
  MichelScore        = -999;

  // Second Pandora
  SecondPandoraVtxX            = -999;
  SecondPandoraVtxY            = -999;
  SecondPandoraVtxZ            = -999;
  SecondPandoraProtonKE        = -999;
  SecondPandoraPionKE          = -999;
  SecondPandoraProtonPX      = -999;
  SecondPandoraProtonPY      = -999;
  SecondPandoraProtonPZ      = -999;
  SecondPandoraPionPX        = -999;
  SecondPandoraPionPY        = -999;
  SecondPandoraPionPZ        = -999;
}

