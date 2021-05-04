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

      bool  present;
      float score;
      float scr_y;
      float scr_z;
      float scr_rr;
      float scr_ratio;
      float time;
      float pe;
      SRVector3D chargeXYZ;
      SRVector3D lightXYZ;

      void setDefault();


    };
} // end namespace

#endif // SRFLASHMATCH_H
//////////////////////////////////////////////////////////////////////////////
