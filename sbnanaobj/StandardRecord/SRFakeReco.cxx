////////////////////////////////////////////////////////////////////////
// \file    SRFakeReco.cxx
// \brief   SRFakeReco holds true interaction info.
// \author  $Author: grayputnam@uchicago.edu
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRFakeReco.h"


namespace caf
{

  SRFakeReco::SRFakeReco():
    nuE(std::numeric_limits<float>::signaling_NaN()),
    nhad(0),
    npion(0),
    npi0(0),
    nkaon(0),
    nproton(0),
    wgt(std::numeric_limits<float>::signaling_NaN()),
    filled(false)
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
