////////////////////////////////////////////////////////////////////////
// \file    SRCRTPMTMatch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTPMTMATCH_H
#define SRCRTPMTMATCH_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  class SRMatchedCRT 
  {
    public: 
      SRMatchedCRT();
      SRVector3D position;           ///< Hit location [cm]
      double PMTTimeDiff;/* = NoTime;*/     ///< CRT hit time minus PMT flash time [us]
      double time;/*        = NoTime;*/     ///< CRT hit time [us]
      int sys;/*            = NoLocation;*/ ///< CRT subdetector the hit fell into.
      int region;/*         = NoLocation;*/ ///< Region the matched CRT hit fell into.
  };

  class SRCRTPMTMatch
    {
    public:
      SRCRTPMTMatch();
      int flashID; ///< ID of the optical flash. 
      double flashTime; ///< Time of the optical flash w.r.t. the global trigger in us.
      
      double flashGateTime; ///< Time of the optical flash w.r.t. the beam gate opening in ns (-> us?).
      double       firstOpHitPeakTime; ///< Time of the first optical hit peak time w.r.t. the global trigger 
      double       firstOpHitStartTime;  ///< Time of the first optical hit start time w.r.t. the global trigger [us]
      bool flashInGate; ///< Flash within gate or not.
      bool flashInBeam; ///< Flash within the beam window of the gate or not.
      double flashPE; ///< Total reconstructed light in the flash [photoelectrons]
      SRVector3D flashPosition; ///< Flash barycenter coordinates evaluated using ADCs as weights.
      double       flashYWidth; ///< Flash spread along Y. 
      double       flashZWidth; ///< Flash spread along Z. 
      int flashClassification;///< Classication of the optical flash.
      std::vector<SRMatchedCRT> matchedCRTHits;     ///< Matched CRT Hits with the optical flash.
    };
} // end namespace 
#endif // SRCRTPMTMATCH_H
//////////////////////////////////////////////////////////////////////////////
