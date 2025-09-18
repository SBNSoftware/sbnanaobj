////////////////////////////////////////////////////////////////////////
// \file    SRSBNDCRTVeto.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSBNDCRTVETO_H
#define SRSBNDCRTVETO_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SREnums.h"
#include "sbnanaobj/StandardRecord/SRCRTSpacePoint.h"

#include <vector>

namespace caf
{
  class SRSBNDCRTVeto
    {
    public:
      SRSBNDCRTVeto();
      virtual ~SRSBNDCRTVeto() {}
/* 
    * Brief Description of Veto Variables:
    **
    ** V0 --> veto on any CRT activity minus the CRT bottom tagger
    **
    ** V1 --> Same as V0 but require that both Top Taggers were hit to veto 
    ** on the CRT Top 
    **
    ** V2 --> Same as V0 but do not veto on the North CRT Wall
    **
    ** V3 --> Same as V2 but require that both Top Taggers were hit to veto 
    ** on the CRT Top
    **
    ** V4 --> Only Veto on the South CRT Wall 
    **
    ** CRT activity that is used to veto lies within a fcl configureable time
    ** window. This Window is chosen to be a narrow window around the 1.6 us beam 
    ** window in the nominal configuration
    *                                                                     
*/

      bool V0;    
      bool V1;   
      bool V2;    
      bool V3;    
      bool V4; 

      // Add Select SpacePoint Info Associated with the Veto
      std::vector<SRVector3D>   sp_position; // x, y, z in detector coordinates
      std::vector<double>       sp_time; // Ts0 time
      std::vector<double>       sp_pe; // Number of Photoelectrons


    };
} // end namespace

#endif // SRSBNDCRTVETO_H
//////////////////////////////////////////////////////////////////////////////
