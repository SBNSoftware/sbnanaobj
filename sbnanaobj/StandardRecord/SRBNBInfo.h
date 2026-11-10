#ifndef SRBNBINFO_h
#define SRBNBINFO_h

#include <vector>

namespace caf
{
  /**
   * @brief Values of `SRBNBInfo::fom_source`: the beam width used for `FOM_best`.
   *
   * Same values as `sbn::BNBFOMResult::WidthSource_t` (sbncode `getFOM.h`).
   */
  namespace FOMSource {
    constexpr int kNone         = -1; ///< No FOM could be formed.
    constexpr int kFitM876      =  1; ///< Fitted M876 profile.
    constexpr int kFitM875      =  2; ///< Fitted M875 profile.
    constexpr int kDatabaseM876 =  3; ///< M876 width from the database.
    constexpr int kDatabaseM875 =  4; ///< M875 width from the database.
    constexpr int kNominal      =  5; ///< Nominal width.
  } // namespace FOMSource

  /**
   * @brief Bits of `SRBNBInfo::fom_status`.
   *
   * Same values as `sbn::fomstatus` (sbncode `getFOM.h`). `kNoTOR`, `kNoHBPM` and
   * `kNoVBPM` say why there is no FOM; the other bits record substitutions and
   * recoveries. The bits marked "analysis level" are set only by the flat-CAF
   * update (sbncode `BeamSpillInfoRetriever/python/update_flatcafs.py`).
   */
  namespace FOMStatus {
    constexpr unsigned int kNoTOR              = 1;     ///< No valid, positive TOR860 or TOR875 (no beam).
    constexpr unsigned int kNoHBPM             = 2;     ///< Horizontal position/angle cannot be formed.
    constexpr unsigned int kNoVBPM             = 4;     ///< Vertical position/angle cannot be formed.
    constexpr unsigned int kOffsetFilled       = 8;     ///< A BPM offset was taken from the cache of valid offsets.
    constexpr unsigned int kLowTOR             = 16;    ///< Intensity below 1e11 protons.
    constexpr unsigned int kMWTimeCut          = 32;    ///< A profile was rejected by the time cut (analysis level).
    constexpr unsigned int kNoMWWidth          = 64;    ///< No usable multiwire width: nominal width.
    constexpr unsigned int kNeighborFilled     = 128;   ///< Position/angle from the adjacent spills.
    constexpr unsigned int kTOR875Used         = 256;   ///< Intensity from TOR875: TOR860 dropped out, <= 0 or missing.
    constexpr unsigned int kMWEmpty            = 512;   ///< Database multiwire width is an empty chamber.
    constexpr unsigned int kWidthFromNeighbors = 1024;  ///< Width from the adjacent spills.
    constexpr unsigned int kFallbackRemoved    = 2048;  ///< Only the non-primary BPM read: not used.
    constexpr unsigned int kMMBTBBDropped      = 4096;  ///< The only width was an MMBTBB fit (analysis level).
    constexpr unsigned int kLoggerFill         = 8192;  ///< Filled from the ACNet logger (analysis level).
    constexpr unsigned int kBurstFill          = 16384; ///< 875-station drop-out filled from both sides.
    constexpr unsigned int kHPTG2Primary       = 32768; ///< Horizontal projection through HPTG2.

    /// Bits for which no FOM can be formed.
    constexpr unsigned int kNoFOM = kNoTOR | kNoHBPM | kNoVBPM;
  } // namespace FOMStatus

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

    /**
     * @name Beam-quality result for this spill
     *
     * Filled from `sbn::BNBSpillInfo` (sbnobj; see sbncode
     * `BeamSpillInfoRetriever/getFOM.h` and the BNB beam-quality technote).
     * A value that is missing is -999 (`fom_source`: -1).
     */
    /// @{
    float FOM_best; //!< Best FOM of the spill, in [0, 1]; -999 if none can be formed. Cut on this, not on `FOM`.
    int fom_source; //!< Width used for `FOM_best`, one of `caf::FOMSource`; -1 (`FOMSource::kNone`) if there is no FOM.
    unsigned int fom_status; //!< Bit mask of `caf::FOMStatus` bits: why the FOM is missing, substitutions, recoveries.
    float tor_used; //!< Intensity used for the FOM, units protons: TOR860, or TOR875 after a TOR860 drop-out.
    float hpos_tgt; //!< Horizontal beam position at the target centre, units mm.
    float hang_tgt; //!< Horizontal beam angle at the target, units mrad.
    float vpos_tgt; //!< Vertical beam position at the target centre, units mm.
    float vang_tgt; //!< Vertical beam angle at the target, units mrad.
    float tgt_sigx; //!< Horizontal beam width at the target used for the FOM, units mm; -999: nominal width.
    float tgt_sigy; //!< Vertical beam width at the target used for the FOM, units mm; -999: nominal width.
    unsigned int fom_version; //!< Version of the beam-quality algorithm; 0: not computed (input made before it existed).
    /// @}

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

    /**
     * @name Booster bunch-rotation settings in force at the spill
     *
     * The settings are logged every 15 minutes; -999 when not available.
     */
    /// @{
    float BRRMPS8; //!< `B_BRRMPS[8]`: scale factor of the bunch-rotation signal (0: bunch rotation off).
    float BRRMPQ1; //!< `B_BRRMPQ[1]`: bunch-rotation frequency, units kHz.
    float BRRMPL9; //!< `B_BRRMPL[9]`: start time of the bunch-rotation curve, units microseconds.
    /// @}

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
