////////////////////////////////////////////////////////////////////////
// \file    SROPFLASH.h
// \brief   Adaptation of recob::OpFlash (https://nusoft.fnal.gov/larsoft/doxsvn/html/classrecob_1_1OpFlash.html). This SR code copied/based on other SR objects.
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SROPFLASH_H
#define SROPFLASH_H

#include "sbnanaobj/StandardRecord/SRConstants.h"
#include <climits>
#include <vector>

namespace caf
{
  /// OpFlash
  class SROpFlash
    {
    public:
      SROpFlash();

      bool  OnBeamTime  { false             }; //!< Is this in time with beam?
      float Time        { kSignalingNaN     }; //!< Time on trigger time scale [us].
      float TimeWidth   { kSignalingNaN     }; //!< Width of the flash in time [us].
      float TotalPE     { kSignalingNaN     }; //!< Total number of PE across all PMTs.
      float FastToTotal { kSignalingNaN     }; //!< Fast to total light ratio.
      float YCenter     { kSignalingNaN     }; //!< Geometric center in y [cm].
      float YWidth      { kSignalingNaN     }; //!< Geometric width in y [cm].
      float ZCenter     { kSignalingNaN     }; //!< Geometric center in z [cm].
      float ZWidth      { kSignalingNaN     }; //!< Geometric width in z [cm].
      float XCenter     { kSignalingNaN     }; //!< Geometric center in x [cm].
      float XWidth      { kSignalingNaN     }; //!< Geometric width in x [cm].
      int   Cryo        { kUninitializedInt }; //!< 0 for SBND/ICARUS East, 1 for ICARUS West; NOT IN THE RECOB
      std::vector<float> PEs;                  //!< Number of PE on each PMT (180 entries).
      std::vector<float> PEsPerWall;           //!< Number of PE on each wall (2 entries); NOT IN THE RECOB

      void setDefault();

    };

} // end namespace

#endif // SROPFLASH_H
//////////////////////////////////////////////////////////////////////////////
