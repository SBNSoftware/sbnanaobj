////////////////////////////////////////////////////////////////////////
// \file    SRHeader.h
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRHEADER_H
#define SRHEADER_H

#include "sbnanaobj/StandardRecord/SREnums.h"
#include "sbnanaobj/StandardRecord/SRBNBInfo.h"
#include "sbnanaobj/StandardRecord/SRNuMIInfo.h"
#include "sbnanaobj/StandardRecord/SRTrigger.h"

#include <cstdint>
#include <vector>
#if defined(__castxml_major__) && !defined(__clang__)
// This header is processed by CASTXML to extract information for the flat CAF;
// CASTXML uses Clang 7.0 to parse it, and Clang 7.0 does not understand GCC's
// <string> header. So we cheat. TO BE REMOVED on CASTXML/pygccxml update:
// https://github.com/CastXML/CastXML/issues/178
// In addition, when using CASTXML with Clang, the build seems to include
// <string> header somewhere else (via <iosfwd.h> in SRHeader.h),
// so this mock-up definition would conflict with the one in that <string>
// header: therefore, when using Clang we don't use this trick.
namespace std { class string {}; }
#else
# include <string>
#endif
#include <limits> // std::numeric_limits

namespace caf
{
  /// Header representing overview information for the current event/slice
  class SRHeader
    {
    public:
      // --- BEGIN FIXME ---------------------------------------------------
      // the commit that introduced the following change should be REVERTED,
      // together with the related commit 9712afa6 of sbncode,
      // as soon as the branch can be built with SRProxy v. 0.41 or later,
      // which supports constants in classes.
      static constexpr unsigned int NoSourceIndex()
        { return std::numeric_limits<unsigned int>::max(); }
      // --- END - FIXME ---------------------------------------------------

      SRHeader();
      ~SRHeader();

      unsigned int   run;       ///< run number
      unsigned int   subrun;    ///< subrun number
      // int            cycle;     ///< MC simulation cycle number
      // int            batch;     ///< MC simulation batch number
      unsigned int   evt;       ///< ART event number, indexes trigger windows.
      unsigned short subevt;    ///< slice number within spill
      bool           ismc;      ///< data or MC?  True if MC
      bool           isblind;   ///< is this a blinded or prescaled file? true if so
      unsigned int   fno;       ///< Index of file processed by CAFMaker
      unsigned int   ngenevt;   ///< Number of events generated in input file associated with this record (before any filters)
      float          pot;       ///< POT of the subrun associated with this record
      MCType_t       mctype;    ///< Type of Monte Carlo used to generate this record
      Det_t          det;       ///< Detector, SBND=1 ICARUS=2
      bool           first_in_subrun; ///< Whether this event is the first in the subrun
      bool           first_in_file;   ///< Whether this event is there first in the input file
      int            proc; //< Process number of job that created CAF file
      int            cluster; //< Cluster number of job that created CAF file
      // bool           blind;     ///< if true, record has been corrupted for blindness
      size_t                      nbnbinfo; ///< Number of BNBInfo objects
      std::vector<caf::SRBNBInfo> bnbinfo; ///< storing beam information per subrun
      size_t                       nnumiinfo; ///< Number of NuMIInfo objects
      std::vector<caf::SRNuMIInfo> numiinfo; ///< storing beam information per subrun
      unsigned int   noffbeambnb; ///< Number of offbeam BNB gates
      unsigned int   noffbeamnumi; ///< Number of offbeam NuMI gates
      caf::SRTrigger triggerinfo; ///< storing trigger information per event

      std::string    sourceName; ///< Name of the file or source this event comes from.
      std::uint32_t  sourceNameHash; ///< hash of sourceName, std::hash<std::string>(sourceName), then truncated to std::uint32_t. Should be 32-bit integer to be used as TTreeIndex (https://root.cern/doc/master/classTTreeIndex.html#a08aac749ab22fd5c8ab792a0061a4b0f)
      unsigned int   sourceIndex = NoSourceIndex(); ///< Index of this event within the source (zero-based).

      /// If true, this record has been filterd out, and only remains as a
      /// receptacle for exposure information. It should be skipped in any
      /// analysis, apart from for including its POT.
      bool           husk;
    };

} // end namespace

#endif // SRHEADER_H
//////////////////////////////////////////////////////////////////////////////
