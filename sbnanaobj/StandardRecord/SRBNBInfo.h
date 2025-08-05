#ifndef SRBNBINFO_h
#define SRBNBINFO_h

#include <vector>

namespace caf
{
  class SRBNBInfo
  {
  public:
    SRBNBInfo();
    
    unsigned long int spill_time_sec;
    unsigned long int spill_time_nsec;
    unsigned int event;

    float TOR860;  
    float TOR875; //!< Value used for POT accounting

    float FOM; //Figure of Merit for BNB

    float LM875A; //!< Loss Monitor before the RWM, unit R/s
    float LM875B; //!< Loss Monitor after the RWM, unit R/s
    float LM875C; //!< Loss Monitor after the RWM, unit R/s

    float HP873; //!< Horizontal Position Monitor after Mag 873, units mm
    float VP873; //!< Vertical Position Monitor after Mag 873, units mm
    float HP875; //!< Horizontal Position Monitor after Mag 875, units mm
    float VP875; //!< Vertical Position Monitor after Mag 875, units mm

    float HPTG1; //!< Horizontal Position Monitor at Target Station 1, units mm 
    float VPTG1; //!< Horizontal Position Monitor at Target Station 1, units mm

    float HPTG2; //!< Horizontal Position Monitor at Target Station 2, closest to target, units mm
    float VPTG2; //!< Horizontal Position Monitor at Target Station 2, closest to target, units mm

    float HP875Offset;//units mm
    float VP875Offset;//units mm
    float VP873Offset;//units mm
    float HPTG1Offset;//units mm
    float HPTG2Offset;//units mm
    float VPTG1Offset;//units mm
    float VPTG2Offset;//units mm
    
    float BTJT2; //!< Temperature of air exiting target, units Deg C

    float THCURR; //!< Current applied to Horn, units kiloAmperes 

    float M875HS; //!< Multiwire station before Mag 875 fit horizontal sigma...?
    float M875VS; //!< Multiwire station before Mag 875 fit vertical sigma...?
    float M875HM; //!< Multiwire station before Mag 875 fit horizontal mean...?
    float M875VM; //!< Multiwire station before Mag 875 fit vertical mean...?
    float M876HS; //!< Multiwire station before Mag 876 fit horizontal sigma...?
    float M876VS; //!< Multiwire station before Mag 876 fit vertical sigma...?
    float M876HM; //!< Multiwire station before Mag 876 fit horizontal mean...?
    float M876VM; //!< Multiwire station before Mag 876 fit vertical mean...?

    // https://cdcvs.fnal.gov/redmine/projects/ubraw/repository/revisions/master/entry/ubraw/BeamDAQ/MWRData.cpp
    std::vector< int > M875BB; //!< Multiwire station before Mag 875...?
    std::vector< int > M876BB; //!< Multiwire station after Mag 875...?
    std::vector< int > MMBTBB; //!< Multiwire station at the target station, 
    
    float M875BB_spill_time_diff; //!< the time difference between M875BB and the matched spill
    float M876BB_spill_time_diff; //!< the time difference between M876BB and the matched spill
    float MMBTBB_spill_time_diff; //!< the time difference between MMBTBB and the matched spill

    void setDefault();

    
  };
} //end namespace caf

#endif
