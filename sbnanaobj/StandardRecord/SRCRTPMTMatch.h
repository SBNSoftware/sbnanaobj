////////////////////////////////////////////////////////////////////////
// \file    SRCRTPMTMatch.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRTPMTMATCH_H
#define SRCRTPMTMATCH_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  /*  /// Type of match between a TPC object (e.g. PMT flash) and CRT system.
  enum class MatchType {
    noMatch           = 0, ///< No CRT match.
      enTop             = 1, ///< Matched with Top CRT hit before optical flash.
      enSide            = 2, ///< Matched with Side CRT hit before optical flash.
      enTop_exSide      = 3, ///< Matched with one Top CRT hit before the optical flash and matched with one Side CRT hit after the optical flash.
      exTop             = 4, ///< Matched with a Top CRT after the optical flash.
      exSide            = 5, ///< Matched with a Side CRT after the optical flash.
      enTop_mult        = 6, ///< Matched with multiple Top CRT hits before the optical flash.
      enTop_exSide_mult = 7, ///< Matched with multiple Top CRT hits before the optical flash and more then 1 side CRT hits after the optical flash.
      enBottom          = 8, ///< Matched with bottom CRT hit before the optical flash.
      exBottom          = 10, ///< Matched with Bottom CRT hit after the optical flash.
      enTop_exBottom    = 11, ///< Matched with one Top CRT hit before the optical flash and
      enSide_exBottom   = 12, ///< Matched with one Side CRT hit before the optical flash and matched with one Bottom CRT hit after the optical flash.
      exTop_enBottom    = 13, ///< Matched with one Bottom CRT hit before the optical flash and matched with one Top CRT hit after the optical flash.
      exSide_enBottom   = 14, ///< Matched with one Bottom CRT hit before the optical flash and matched with one Side CRT hit after the optical flash.
      others            = 9  ///< All the other cases.

      };*/



  class SRMatchedCRT 
  {
    public: 
      SRMatchedCRT();
      ~SRMatchedCRT() {}
      //struct MatchedCRT {
      /// Special value to indicate no information on the hit location.
      //static constexpr int NoLocation = -1;
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
      virtual ~SRCRTPMTMatch() {}
      int flashID; ///< ID of the optical flash. 
      double flashTime_us; ///< Time of the optical flash w.r.t. the global trigger in us.
      
      double flashGateTime; ///< Time of the optical flash w.r.t. the beam gate opening in ns.
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
      
      //enum matchType ......;
      //int flashClassification;///< Classication of the optical flash.*/
      // std vector of matched CRT Hits 
      //void setDefault();
    };
} // end namespace 
#endif // SRCRTPMTMATCH_H
//////////////////////////////////////////////////////////////////////////////
