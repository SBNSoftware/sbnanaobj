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
#include <string>
#include <limits> // std::numeric_limits

namespace caf
{
  /// Header representing overview information for the current event/slice
  class SRHeader
    {
    public:
      static constexpr unsigned int NoSourceIndex
        = std::numeric_limits<unsigned int>::max();
      
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
      caf::SRBNBInfo              spillbnbinfo; ///< storing beam information for given event's spill
      double noffbeambnb; ///< Number of offbeam BNB gates
      size_t                       nnumiinfo; ///< Number of NuMIInfo objects
      std::vector<caf::SRNuMIInfo> numiinfo; ///< storing beam information per subrun
      caf::SRNuMIInfo              spillnumiinfo; ///< storing beam information for given event's spill
      double noffbeamnumi; ///< Number of offbeam NuMI gates
      caf::SRTrigger triggerinfo; ///< storing trigger information per event

      std::string    sourceName; ///< Name of the file or source this event comes from.
      unsigned int   sourceIndex = NoSourceIndex; ///< Index of this event within the source (zero-based).
      std::uint32_t  sourceNameHash; ///< hash of sourceName, std::hash<std::string>(sourceName), then truncated to std::uint32_t. Should be 32-bit integer to be used as TTreeIndex (https://root.cern/doc/master/classTTreeIndex.html#a08aac749ab22fd5c8ab792a0061a4b0f)

      /// If true, this record has been filterd out, and only remains as a
      /// receptacle for exposure information. It should be skipped in any
      /// analysis, apart from for including its POT.
      bool           husk;
    };

} // end namespace

#endif // SRHEADER_H
//////////////////////////////////////////////////////////////////////////////
