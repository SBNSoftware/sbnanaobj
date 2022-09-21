////////////////////////////////////////////////////////////////////////
// \file    SRPfoChar.h
// \brief   SRPfoChar object for Pfo Characterisation (track vs shower) features (MVA inputs).
// \author  howard@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SBNANAOBJ_STANDARDRECORD_SRPFOCHAR_H
#define SBNANAOBJ_STANDARDRECORD_SRPFOCHAR_H

#include "sbnanaobj/StandardRecord/SRConstants.h"

namespace caf
{
  /// Pfo Characterisation (track vs shower) features (MVA inputs)
  class SRPFOChar
  {
  public:
    SRPFOChar();

    float chgendfrac    { kSignalingNaN }; // LArThreeDChargeFeatureTool_EndFraction feature
    float chgfracspread { kSignalingNaN }; // LArThreeDChargeFeatureTool_FractionalSpread feature
    float linfitdiff    { kSignalingNaN }; // LArThreeDLinearFitFeatureTool_DiffStraightLineMean feature
    float linfitlen     { kSignalingNaN }; // LArThreeDLinearFitFeatureTool_Length feature
    float linfitgaplen  { kSignalingNaN }; // LArThreeDLinearFitFeatureTool_MaxFitGapLength feature
    float linfitrms     { kSignalingNaN }; // LArThreeDLinearFitFeatureTool_SlidingLinearFitRMS feature
    float openanglediff { kSignalingNaN }; // LArThreeDOpeningAngleFeatureTool_AngleDiff feature
    float pca2ratio     { kSignalingNaN }; // LArThreeDPCAFeatureTool_SecondaryPCARatio feature
    float pca3ratio     { kSignalingNaN }; // LArThreeDPCAFeatureTool_TertiaryPCARatio feature
    float vtxdist       { kSignalingNaN }; // LArThreeDVertexDistanceFeatureTool_VertexDistance feature

    void setDefault();
  };
} // end namespace

#endif // SBNANAOBJ_STANDARDRECORD_SRPFOCHAR_H
//////////////////////////////////////////////////////////////////////////////
