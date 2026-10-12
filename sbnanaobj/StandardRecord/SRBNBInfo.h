#ifndef SRBNBINFO_h
#define SRBNBINFO_h

#include <vector>

namespace caf
{
/**
 * @brief Readings of the BNB beam monitors.
 * 
 * This information is typically fetched from the beam database (IFBeam) 
 * and matched in time with the acquired event. 
 * Offsets are applied through subtraction:   RealPositionValue = IFBeamValue - Offset
 */
  class SRBNBInfo
  {
  public:
    SRBNBInfo();
    
    unsigned long int spill_time_sec;
    unsigned long int spill_time_nsec;
    unsigned int event;

    float TOR860;  
    float TOR875; //!< Value used for POT accounting

    float FOM; //!< Figure of Merit for BNB ([SBN DocDB 41901](https://sbn-docdb.fnal.gov/cgi-bin/sso/ShowDocument?docid=41901))

    // Beam-quality result for this spill (see sbnobj BNBSpillInfo and the BNB
    // beam-quality technote); NaN when not available.
    float FOM_best; //!< best FOM of the spill, in [0, 1]; NaN if none can be formed. Cut on this, not on `FOM`
    int fom_source; //!< width used for FOM_best: 1/2 fitted M876/M875 profile, 3/4 M876/M875 database width, 5 nominal; -1 no FOM
    unsigned int fom_status; //!< bit mask: why the FOM is missing (1, 2, 4), substitutions, recoveries (sbncode getFOM.h, `sbn::fomstatus`)
    float tor_used; //!< intensity used for the FOM, units Protons: TOR860, or TOR875 after a TOR860 drop-out
    float hpos_tgt; //!< horizontal beam position at the target centre, units mm
    float hang_tgt; //!< horizontal beam angle at the target, units mrad
    float vpos_tgt; //!< vertical beam position at the target centre, units mm
    float vang_tgt; //!< vertical beam angle at the target, units mrad
    float tgt_sigx; //!< horizontal beam width at the target used for the FOM, units mm; NaN: nominal width
    float tgt_sigy; //!< vertical beam width at the target used for the FOM, units mm; NaN: nominal width
    unsigned int fom_version; //!< version of the beam-quality algorithm; 0: not computed (older input)

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

    // Booster bunch-rotation settings in force at the spill (logged every 15 min);
    // NaN when not available
    float BRRMPS8; //!< B_BRRMPS[8]: scale factor of the bunch-rotation signal (0: bunch rotation off)
    float BRRMPQ1; //!< B_BRRMPQ[1]: bunch-rotation frequency, units kHz
    float BRRMPL9; //!< B_BRRMPL[9]: start time of the bunch-rotation curve, units microseconds

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
