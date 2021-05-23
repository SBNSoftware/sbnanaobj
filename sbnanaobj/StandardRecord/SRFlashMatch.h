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

      struct Charge {
        float q;           //!< charge in slc
        SRVector3D center; //!< Weighted center position [cm]
        Charge(float q_, SRVector3D center_) : q(q_), center(center_) {}
      };
      struct Flash {
        float pe;          //!< photo-electrons on simple flash
        SRVector3D center; //!< Weighted center position [cm]
        Flash(float pe_, SRVector3D center_) : pe(pe_), center(center_) {}
      };
      struct Score {
        float total; //!< total score, sum of terms
        float y;     //!< score for y metric
        float z;     //!< score for z metric
        float rr;    //!< score for rr metric
        float ratio; //!< score for ratio metric
        Score(float total_, float y_, float z_,
              float rr_, float ratio_) :
          total(total_), y(y_), z(z_), rr(rr_), ratio(ratio_) {}
      };

      SRFlashMatch();
      virtual ~SRFlashMatch();

      bool  present;
      float time;
      Charge charge;
      Flash light;
      Score score;

      void setDefault();
    };
} // end namespace

#endif // SRFLASHMATCH_H
//////////////////////////////////////////////////////////////////////////////
