////////////////////////////////////////////////////////////////////////
// \file    SRSlice.h
// \brief   SRSlice object for slice summary information.
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRSLICE_H
#define SRSLICE_H

#include "sbnanaobj/StandardRecord/SRFakeReco.h"
#include "sbnanaobj/StandardRecord/SRFlashMatch.h"
#include "sbnanaobj/StandardRecord/SRSliceRecoBranch.h"
#include "sbnanaobj/StandardRecord/SRTrueInteraction.h"
#include "sbnanaobj/StandardRecord/SRTruthMatch.h"
#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{
  /// An  SRSlice contains overarching information for a slice.
  class SRSlice
    {
    public:

      SRSlice();
      virtual ~SRSlice();

      unsigned producer;    ///< Index of the producer that produced this object. 
                            ///< In ICARUS, this is the same as the cryostat.
      float    charge;      ///< Calorimetric energy
      SRVector3D vertex;    ///< Candidate neutrino vertex in local detector coordinates [cm]

      SRTrueInteraction truth; //!< Truth information on the slice
      SRTruthMatch tmatch; //!< Matching information between truth and reco objects

      SRFlashMatch fmatch;   //!< Optical flash-match for this slice of TPC charge
      SRFlashMatch fmatch_a; //!< Optical flash-match for this slice of TPC charge
      SRFlashMatch fmatch_b; //!< Optical flash-match for this slice of TPC charge

      SRFakeReco fake_reco;

      bool is_clear_cosmic; //!< Whether pandora marks the slice as a "clear" cosmic
      int nu_pdg; //!< PDG assigned to the PFParticle Neutrino
      float nu_score; //!< Score of how neutrino-like the slice is
      // SliceID Features going into nu_score calculation
      float        nuid_nuNFinalStatePfos;        //!< NuNFinalStatePfos feature in NeutrinoID
      unsigned int nuid_nuNHitsTotal;             //!< NuNHitsTotal feature in NeutrinoID
      float        nuid_nuVertexY;                //!< NuVertexY feature in NeutrinoID
      float        nuid_nuWeightedDirZ;           //!< NuWeightedDirZ feature in NeutrinoID
      float        nuid_nuNSpacePointsInSphere;   //!< NuNSpacePointsInSphere feature in NeutrinoID
      float        nuid_nuEigenRatioInSphere;     //!< NuEigenRatioInSphere feature in NeutrinoID
      float        nuid_crLongestTrackDirY;       //!< CRLongestTrackDirY feature in NeutrinoID
      float        nuid_crLongestTrackDeflection; //!< CRLongestTrackDeflection feature in NeutrinoID
      float        nuid_crFracHitsInLongestTrack; //!< CRFracHitsInLongestTrack feature in NeutrinoID
      unsigned int nuid_crNHitsMax;               //!< CRNHitsMax feature in NeutrinoID

      std::vector<size_t> primary; //!< ID's of primary tracks and showers in slice
      int                 self;    //!< ID of the particle representing this slice

      SRSliceRecoBranch   reco; //!< TPC reco information for the slice

      void setDefault();

    };
} // end namespace

#endif // SRSLICE_H
//////////////////////////////////////////////////////////////////////////////
