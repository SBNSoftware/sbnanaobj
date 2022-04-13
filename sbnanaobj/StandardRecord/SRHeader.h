////////////////////////////////////////////////////////////////////////
// \file    SRHeader.h
// \author  $Author: psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRHEADER_H
#define SRHEADER_H

#include "sbnanaobj/StandardRecord/SREnums.h"
#include "sbnanaobj/StandardRecord/SRBNBInfo.h"
#include "sbnanaobj/StandardRecord/SRNuMIInfo.h"

#include <vector>

namespace caf
{
  /// Header representing overview information for the current event/slice
  class SRHeader
    {
    public:
      SRHeader();
      ~SRHeader();

      unsigned int   run;       ///< run number
      unsigned int   subrun;    ///< subrun number
      // int            cycle;     ///< MC simulation cycle number
      // int            batch;     ///< MC simulation batch number
      unsigned int   evt;       ///< ART event number, indexes trigger windows.
      unsigned short subevt;    ///< slice number within spill
      bool           ismc;      ///< data or MC?  True if MC
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


      /// If true, this record has been filterd out, and only remains as a
      /// receptacle for exposure information. It should be skipped in any
      /// analysis, apart from for including its POT.
      bool           husk;
    };

} // end namespace

#endif // SRHEADER_H
//////////////////////////////////////////////////////////////////////////////
