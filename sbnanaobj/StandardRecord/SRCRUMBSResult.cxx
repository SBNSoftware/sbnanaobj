////////////////////////////////////////////////////////////////////////
// \file    SRCRUMBSResult.cxx
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRCRUMBSResult.h"
#include <limits>

namespace caf {

  SRCRUMBSTPCVars::SRCRUMBSTPCVars()
    : crlongtrackhitfrac(std::numeric_limits<float>::signaling_NaN())
    , crlongtrackdefl(std::numeric_limits<float>::signaling_NaN())
    , crlongtrackdiry(std::numeric_limits<float>::signaling_NaN())
    , crnhitsmax(std::numeric_limits<int>::max())
    , nusphereeigenratio(std::numeric_limits<float>::signaling_NaN())
    , nufinalstatepfos(std::numeric_limits<int>::max())
    , nutotalhits(std::numeric_limits<int>::max())
    , nuspherespacepoints(std::numeric_limits<int>::max())
    , nuvertexy(std::numeric_limits<float>::signaling_NaN())
    , nuwgtdirz(std::numeric_limits<float>::signaling_NaN())
    , stoppingchi2ratio(std::numeric_limits<float>::signaling_NaN())
  {
  }

  SRCRUMBSPDSVars::SRCRUMBSPDSVars()
    : fmtotalscore(std::numeric_limits<float>::signaling_NaN())
    , fmpe(std::numeric_limits<float>::signaling_NaN())
    , fmtime(std::numeric_limits<float>::signaling_NaN())
  {
  }

  SRCRUMBSCRTVars::SRCRUMBSCRTVars()
    : trackscore(std::numeric_limits<float>::signaling_NaN())
    , hitscore(std::numeric_limits<float>::signaling_NaN())
    , tracktime(std::numeric_limits<float>::signaling_NaN())
    , hittime(std::numeric_limits<float>::signaling_NaN())
  {
  }

  SRCRUMBSResult::SRCRUMBSResult()
    : score(std::numeric_limits<float>::signaling_NaN())
    , tpc()
    , pds()
    , crt()
  {
  }

} // end namespace
//////////////////////////////////////////////////////////////////////////////
