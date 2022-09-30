////////////////////////////////////////////////////////////////////////
// \file    SRHeader.cxx
// \brief   SRHeader object for slice id information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRHeader.h"

#include <limits>


namespace caf
{
  SRHeader::SRHeader():
  run(0),
  subrun(0),
  // cycle(0),
  // batch(0),
  evt(0),
  subevt(0),
  ismc(false),
  fno(0),
  ngenevt(0),
  pot(0.),
  mctype(caf::kMCUnknown),
  det(caf::kUNKNOWN),
  proc(-1),
  cluster(-1),
  // blind(false),
  nbnbinfo(0),
  nnumiinfo(0),
  nextinfo(0),
  ntriggerinfo(0),
  husk(false)
  {  }

  SRHeader::~SRHeader(){  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
