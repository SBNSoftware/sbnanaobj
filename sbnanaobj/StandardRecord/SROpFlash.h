////////////////////////////////////////////////////////////////////////
// \file    SROPFLASH.h
// \brief   Adaptation of recob::OpFlash (https://nusoft.fnal.gov/larsoft/doxsvn/html/classrecob_1_1OpFlash.html).
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SROPFLASH_H
#define SROPFLASH_H

#include "sbnanaobj/StandardRecord/SRConstants.h"
#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include <vector>

namespace caf
{
  /// Optical Flash -- a summary of multiple optical hits that have been determined to be associated
  class SROpFlash
  {
  public:
    SROpFlash();

    bool  onbeamtime       { false                        }; //!< Is this in time with beam?
    int   cryo             { kUninitializedInt            }; //!< 0 for SBND/ICARUS East, 1 for ICARUS West.
    int   firstpmt         { kUninitializedInt            }; //!< Channel number of first hit
    int   tpc              { kUninitializedInt            }; //!< 0 for ICARUS, 0/1 for SBND
    float time             { kSignalingNaN                }; //!< Time on trigger time scale [us].
    float timewidth        { kSignalingNaN                }; //!< Width of the flash in time [us].
    float timemean         { kSignalingNaN                }; //!< Mean time of hits [us].
    float timesd           { kSignalingNaN                }; //!< Standard deviation of hit times [us].
    float firsttime        { kSignalingNaN                }; //!< Time of first hit [us].
    float rwmtime          { kSignalingNaN                }; //!< Time of flash wrt RWM Time. 
    float totalpe          { kSignalingNaN                }; //!< Total number of PE across all PMTs.
    float fasttototal      { kSignalingNaN                }; //!< Fast to total light ratio.
    float peperwall[2] { kSignalingNaN, kSignalingNaN };

    SRVector3D center;                                       //!< Geometric center in <x,y,z> [cm].
    SRVector3D width;                                        //!< Geometric width in <x,y,z> [cm].

    void setDefault();

  };

} // end namespace

#endif // SROPFLASH_H
//////////////////////////////////////////////////////////////////////////////
