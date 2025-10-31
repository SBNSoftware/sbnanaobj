////////////////////////////////////////////////////////////////////////
// \file    SRBlipHitClust.h
// \brief   SRBlipHitClust struct contains information on hit clusters on each plane used to form a SRBlip
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////
#ifndef SRBLIPHITCLUST_H
#define SRBLIPHITCLUST_H

#include <vector>
#include <map>
#include <set>
#include "TVector3.h"

namespace caf
{
     struct HitClust {
    int     ID              = -9;
    bool    isValid         = false;
    int     CenterChan      = -999;
    int     CenterWire      = -999;
    bool    isTruthMatched  = false;
    bool    isMerged        = false;
    bool    isMatched       = false;
    int     DeadWireSep     = 99;
    int     Cryostat        = -9;
    int     TPC             = -9;
    int     Plane           = -9;
    int     NHits           = -9;
    int     NWires          = -9;
    float   ADCs            = -999;
    float   Amplitude       = -999;
    float   Charge          = -999;
    float   SigmaCharge     = -999;
    float   TimeTick        = -999;
    float   Time            = -999;
    float   StartHitTime    = -999;
    float   EndHitTime      = -999;
    float   StartTime       = -999;
    float   EndTime         = -999;
    float   Timespan        = -999;
    float   RMS             = -999;
    int     StartWire       = -999;
    int     EndWire         = -999;
    int     NPulseTrainHits = -9;
    float   GoodnessOfFit   = -999;
    int     BlipID          = -9;
    int     EdepID          = -9;
    std::set<int>    HitIDs;
    std::set<int>    Wires;
    std::set<int>    Chans;
    std::set<int>    G4IDs;
    
    std::map<int,TVector3> IntersectLocations;
  };
}

#endif