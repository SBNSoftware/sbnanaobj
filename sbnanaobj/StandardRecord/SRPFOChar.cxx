////////////////////////////////////////////////////////////////////////
// \file    SRPFOChar.cxx
// \brief   SRPFOChar object for PFO Characterisation (track vs shower) features (MVA inputs).
// \author  howard@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRPFOChar.h"

namespace caf
{
  SRPFOChar::SRPFOChar()
  {  }

  void SRPFOChar::setDefault()
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
    halototratio = -9999.f;
    concentration = -9999.f;
    conicalness = -9999.f;
  }


} // end namespace caf
////////////////////////////////////////////////////////////////////////
