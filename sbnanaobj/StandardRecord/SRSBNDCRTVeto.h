////////////////////////////////////////////////////////////////////////
/**
 * @file   sbnanaobj/StandardRecord/SRSBNDCRTVeto.h
 * @brief  Definition of event veto from CRT information.
 * @author Alexander Antonakis (aantonakis@ucsb.edu)
 * @see    sbnanaobj/StandardRecord/SRSBNDCRTVeto.cxx
 */
////////////////////////////////////////////////////////////////////////
#ifndef SRSBNDCRTVETO_H
#define SRSBNDCRTVETO_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SREnums.h"
#include "sbnanaobj/StandardRecord/SRCRTSpacePoint.h"

#include <vector>

namespace caf
{
  /**
   * @brief Veto flags from CRT information.
   * 
   * CRT activity that is used to veto lies within a FHiCL-configurable time window.
   * This window is chosen to be a narrow window around the 1.6 &micro;s beam window
   * in the nominal configuration.
   *
   * A list of select space points associated with the veto is included:
   * three "parallel" arrays report for each point its hit location, time
   * and photoelectrons.
   */
  class SRSBNDCRTVeto
    {
    public:
      SRSBNDCRTVeto();

      /// Veto on any CRT activity minus the CRT bottom tagger
      bool V0;
    
      /// Same as `V0` but require that both Top Taggers were hit to veto 
      /// on the CRT Top    
      bool V1;
   
      /// Same as `V0` but do not veto on the downstream CRT Wall   
      bool V2;
    
      /// Same as `V2` but require that both Top Taggers were hit to veto 
      /// on the CRT Top
      bool V3;
    
      /// Only veto on the upstream CRT Wall
      bool V4; 

      /// Add Select SpacePoint Info Associated with the Veto
      std::vector<SRVector3D>   sp_position; /// x, y, z in detector coordinates [cm]
      std::vector<float>        sp_time; ///< Ts0 time [ns]
      std::vector<float>        sp_pe; /// Number of Photoelectrons

    };
} // end namespace

#endif // SRSBNDCRTVETO_H
//////////////////////////////////////////////////////////////////////////////
