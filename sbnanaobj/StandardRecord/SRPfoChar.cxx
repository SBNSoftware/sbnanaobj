////////////////////////////////////////////////////////////////////////
// \file    SRPfoChar.cxx
// \brief   SRPfoChar object for Pfo Characterisation (track vs shower) features (MVA inputs).
// \author  howard@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRPfoChar.h"

namespace caf
{
  SRPfoChar::SRPfoChar()
  {  }

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
