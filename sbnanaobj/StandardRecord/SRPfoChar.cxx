////////////////////////////////////////////////////////////////////////
// \file    SRPfoChar.cxx
// \brief   SRPfoChar object for Pfo Characterisation (track vs shower) features (MVA inputs).
// \author  $Author: howard@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRPfoChar.h"

#include <limits>
#include <climits>

namespace caf
{
  SRPfoChar::SRPfoChar():
    chgendfrac(std::numeric_limits<float>::signaling_NaN()),
    chgfracspread(std::numeric_limits<float>::signaling_NaN()),
    linfitdiff(std::numeric_limits<float>::signaling_NaN()),
    linfitlen(std::numeric_limits<float>::signaling_NaN()),
    linfitgaplen(std::numeric_limits<float>::signaling_NaN()),
    linfitrms(std::numeric_limits<float>::signaling_NaN()),
    openanglediff(std::numeric_limits<float>::signaling_NaN()),
    pca2ratio(std::numeric_limits<float>::signaling_NaN()),
    pca3ratio(std::numeric_limits<float>::signaling_NaN()),
    vtxdist(std::numeric_limits<float>::signaling_NaN())
  {  }


  SRPfoChar::~SRPfoChar(){  }


  void SRPfoChar::setDefault()
  {
    chgendfrac = -9999.f;
    chgfracspread = -9999.f;
    linfitdiff = -9999.f;
    linfitlen = -9999.f;
    linfitgaplen = -9999.f;
    linfitrms = -9999.f;
    openanglediff = -9999.f;
    pca2ratio = -9999.f;
    pca3ratio = -9999.f;
    vtxdist = -9999.f;
  }


} // end namespace caf
////////////////////////////////////////////////////////////////////////
