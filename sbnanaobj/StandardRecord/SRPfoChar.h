////////////////////////////////////////////////////////////////////////
// \file    SRPfoChar.h
// \brief   SRPfoChar object for Pfo Characterisation (track vs shower) features (MVA inputs).
// \author  $Author: howard@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRPFOCHAR_H
#define SRPFOCHAR_H

namespace caf
{
  /// Pfo Characterisation (track vs shower) features (MVA inputs)
  class SRPfoChar
  {
  public:
    SRPfoChar();
    virtual ~SRPfoChar();

    float chgendfrac;    // LArThreeDChargeFeatureTool_EndFraction feature
    float chgfracspread; // LArThreeDChargeFeatureTool_FractionalSpread feature
    float linfitdiff;    // LArThreeDLinearFitFeatureTool_DiffStraightLineMean feature
    float linfitlen;     // LArThreeDLinearFitFeatureTool_Length feature
    float linfitgaplen;  // LArThreeDLinearFitFeatureTool_MaxFitGapLength feature
    float linfitrms;     // LArThreeDLinearFitFeatureTool_SlidingLinearFitRMS feature
    float openanglediff; // LArThreeDOpeningAngleFeatureTool_AngleDiff feature
    float pca2ratio;     // LArThreeDPCAFeatureTool_SecondaryPCARatio feature
    float pca3ratio;     // LArThreeDPCAFeatureTool_TertiaryPCARatio feature
    float vtxdist;       // LArThreeDVertexDistanceFeatureTool_VertexDistance feature

    void setDefault();
  };
} // end namespace

#endif // SRPFOCHAR_H
//////////////////////////////////////////////////////////////////////////////
