////////////////////////////////////////////////////////////////////////
// \file    SRSlice.h
// \brief   SRSlice object for slice summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRSLICE_H
#define SRSLICE_H

#include "sbnanaobj/StandardRecord/SRCRUMBSResult.h"
#include "sbnanaobj/StandardRecord/SRFakeReco.h"
#include "sbnanaobj/StandardRecord/SRFlashMatch.h"
#include "sbnanaobj/StandardRecord/SROpT0Finder.h"
#include "sbnanaobj/StandardRecord/SRSliceRecoBranch.h"
#include "sbnanaobj/StandardRecord/SRTrueInteraction.h"
#include "sbnanaobj/StandardRecord/SRTruthMatch.h"
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRNuID.h"
#include "sbnanaobj/StandardRecord/SRConstants.h"

#include <climits>

namespace caf
{
  /// An  SRSlice contains overarching information for a slice.
  class SRSlice
    {
    public:

      SRSlice();
      virtual ~SRSlice();

      unsigned producer { UINT_MAX };     ///< Index of the producer that produced this object. 
                                          ///< In ICARUS, this is the same as the cryostat.
      float    charge { kSignalingNaN };  ///< Calorimetric energy
      SRVector3D charge_center;           ///< Weighted mean of hit positions in XYZ [cm]
      SRVector3D charge_width;            ///< Weighted standard deviation of hit positions in XYZ [cm]
      SRVector3D vertex;                  ///< Candidate neutrino vertex in local detector coordinates [cm]

      SRTrueInteraction truth; //!< Truth information on the slice
      SRTruthMatch tmatch; //!< Matching information between truth and reco objects

      SRFlashMatch fmatch;   //!< Optical flash-match for this slice of TPC charge
      SRFlashMatch fmatch_a; //!< Optical flash-match for this slice of TPC charge
      SRFlashMatch fmatch_b; //!< Optical flash-match for this slice of TPC charge

      SROpT0Finder opt0;       //!< OpT0Finder (flash-match and Q->L); filled with the **highest OpT0 score** assoc. to the slice 
      SROpT0Finder opt0_sec;   //!< Secondary OpT0Finder (flash-match and Q->L); filled with the **second highest OpT0 score**  assoc. to the slice 

      SRFakeReco fake_reco;

      bool is_clear_cosmic { false };         //!< Whether pandora marks the slice as a "clear" cosmic
      int nu_pdg           { INT_MIN };       //!< PDG assigned to the PFParticle Neutrino
      float nu_score       { kSignalingNaN }; //!< Score of how neutrino-like the slice is according to pandora
      SRCRUMBSResult crumbs_result;  //!< Score of how neutrino-like the slice is according to the CRUMBS ID

      SRNuID nuid; //!< Neutrino ID Features (BDT inputs) going into nu_score calculation

      std::vector<size_t> primary;             //!< ID's of primary tracks and showers in slice
      int                 self { INT_MIN };    //!< ID of the particle representing this slice

      SRSliceRecoBranch   reco; //!< TPC reco information for the slice

      void setDefault();

    };
} // end namespace

#endif // SRSLICE_H
//////////////////////////////////////////////////////////////////////////////
