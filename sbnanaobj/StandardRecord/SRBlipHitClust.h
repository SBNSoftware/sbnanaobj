////////////////////////////////////////////////////////////////////////
// \file    SRBlipHitClust.h
// \brief   SRBlipHitClust struct contains information on hit clusters on each plane used to form a SRBlip
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////
#ifndef SBNANAOBJ_STANDARDRECORD_SRBLIPHITCLUST_H
#define SBNANAOBJ_STANDARDRECORD_SRBLIPHITCLUST_H
#include <map>
#include <set>
#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
    struct SRBlipHitClust {
    int     ID              = -5;
    bool    isValid         = false;
    int     CenterChan      = -5;
    int     CenterWire      = -5;
    bool    isTruthMatched  = false;
    bool    isMerged        = false;
    bool    isMatched       = false;
    int     DeadWireSep     = -5;
    int     Cryostat        = -5;
    int     TPC             = -5;
    int     Plane           = -5;
    int     NHits           = -5;
    int     NWires          = -5;
    float   ADCs            = -5;
    float   Amplitude       = -5;
    float   Charge          = -5;
    float   SigmaCharge     = -5;
    float   TimeTick        = -5;
    float   Time            = -5;
    float   StartHitTime    = -5;
    float   EndHitTime      = -5;
    float   StartTime       = -999;
    float   EndTime         = -999;
    float   Timespan        = -5;
    float   RMS             = -5;
    int     StartWire       = -5;
    int     EndWire         = -5;
    int     NPulseTrainHits = -5;
    float   GoodnessOfFit   = -5;
    int     BlipID          = -5;
    int     EdepID          = -5;
    std::vector<int>    HitIDs;
    std::vector<int>    Wires;
    std::vector<int>    Chans;
    std::vector<int>    G4IDs;
      //std::map<int,SRVector3D> IntersectLocations; //intermediate step used for matching
  };
}
#endif
