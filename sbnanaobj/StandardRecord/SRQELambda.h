/**
 * @file    SRQELambda.h
 * @brief   Reconstructed information for QE Lambda events using FRANS algorithms.
 * @see     SRQELambda.cxx
 */

#ifndef SRQELAMBDA_H
#define SRQELAMBDA_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  struct SRQELambda
    {
      int   SliceId = caf::kUninitializedInt;

      // FRANS
      int   FransNUnassocOrigins       = caf::kUninitializedInt;
      int   FransNMaxDirtUnassocHits   = caf::kUninitializedInt;
      int   FransNAngles               = caf::kUninitializedInt;
      float FransContainedPhi          = -999;
      int   FransPzsign                = 0;

      float FransScore                 = -999;
      float FransIota                  = -999;
      float FransDelta                 = -999;
      float FransEta                   = -999;
      float FransFitScore              = -999;

      // FRANS pfp id 
      int FransTrack1ID = -1;
      int FransTrack2ID = -1;
      int FransMainTrackID = -1;

      // Reco Geometry
      float HyperonVtxX      = -999;
      float HyperonVtxY      = -999;
      float HyperonVtxZ      = -999;
      float PrimLeptonVtxX   = -999;
      float PrimLeptonVtxY   = -999;
      float PrimLeptonVtxZ   = -999;

      // Michel tagging
      int   MichelNMuonTracks  = caf::kUninitializedInt;
      float MichelRssRatio     = -999;
      float MichelAngleQ80     = -999;
      float MichelDropRadius   = -999;
      int   MichelNBlips       = caf::kUninitializedInt;
      float MichelScore        = -999;

      // Second Pandora
      float SecondPandoraVtxX          = -999;
      float SecondPandoraVtxY          = -999;
      float SecondPandoraVtxZ          = -999;
      float SecondPandoraProtonKE       = -999;
      float SecondPandoraPionKE         = -999;
      float SecondPandoraProtonPX    = -999;
      float SecondPandoraProtonPY    = -999;
      float SecondPandoraProtonPZ    = -999;
      float SecondPandoraPionPX      = -999;
      float SecondPandoraPionPY      = -999;
      float SecondPandoraPionPZ      = -999;

      void setDefault();
    };

} // end namespace

#endif // SRQELAMBDA_H
