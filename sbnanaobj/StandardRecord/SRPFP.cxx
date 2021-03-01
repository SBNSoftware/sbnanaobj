////////////////////////////////////////////////////////////////////////
// \file    SRPFP.cxx
// \brief   An SRPFP is a high level pfp object.  It knows its
//          direction and length, but does not own its cell hits.
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRPFP.h"

namespace caf {

SRPFP::SRPFP()
    : ID(-5)
    , ndaughters(0)
    , daughters()
    , parent(-5)
    , parent_is_primary(false)
    , trackScore(-5.f)
    , slcID(-5)
{
}

} // end namespace caf
////////////////////////////////////////////////////////////////////////
