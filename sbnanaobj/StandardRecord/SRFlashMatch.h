////////////////////////////////////////////////////////////////////////
// \file    SRFlashMatch.h
// \brief   SRFlashMatch object for flashmatch summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRFLASHMATCH_H
#define SRFLASHMATCH_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"


namespace caf
{
  /// A matching of TPC flashmatch charge to Optical flash light
  class SRFlashMatch
    {
    public:
      SRFlashMatch();
      virtual ~SRFlashMatch();

      bool  present;             //!< whether there's a match
      float time;                //!< time of flash
      float chargeQ;             //!< charge in slc
      SRVector3D chargeCenter;   //!< Weighted center position [cm]
      SRVector3D chargeWidth;    //!< Weighted width [cm]
      float lightPE;             //!< photo-electrons on simple flash
      SRVector3D lightCenter;    //!< Weighted center position [cm]
      SRVector3D lightWidth;     //!< Weighted width [cm]
      float score;               //!< total score, sum of terms
      float scoreY;              //!< score for y metric
      float scoreZ;              //!< score for z metric
      float scoreRR;             //!< score for rr metric
      float scoreRatio;          //!< score for ratio metric
      float scoreSlope;          //!< score for z/y slope metric
      float scorePEToQ;          //!< score for light/charge quotient metric

      void setDefault();
    };
} // end namespace

#endif // SRFLASHMATCH_H
//////////////////////////////////////////////////////////////////////////////
