////////////////////////////////////////////////////////////////////////
// \file    SROpFlash.cxx
// \brief   Adaptation of recob::OpFlash (https://nusoft.fnal.gov/larsoft/doxsvn/html/classrecob_1_1OpFlash.html). This SR code copied/based on other SR objects.
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SROpFlash.h"

#include <climits>

namespace caf
{
//Temporary***

      double Time; //Time on trigger time scale [us].
      double Timewidth; //Width of the flash in time [us].
      double AbsTime; //Time by PMT readout clock.
      
      double PE; //Number of PE on a give PMT.
      std::vector<double> PEs; //Number of PE on each PMT.
      double TotalPE; //Total number of PE across all PMTs.
      double FastToTotal; //Fast to total light ratio.

      int OnBeamTime; //Is this in time with beam?
      
      bool hasXCenter; //Is the estimated center on x direction is available?
      double XCenter; //Geometric center in x [cm].
      double XWidth; //Geometric width in x [cm].
      double YCenter; //Geometric center in y [cm].
      double YWidth; //Geometric width in y [cm].
      double ZCenter; //Geometric center in z [cm].
      double ZWidth; //Geometric width in z [cm].

      std::vector<double> PEs_per_wall;
      int cryo;

//***
  SROpFlash::SROpFlash():

    time(std::numeric_limits<double>::signaling_NaN()),
    t0(std::numeric_limits<double>::signaling_NaN()),
    t1(std::numeric_limits<double>::signaling_NaN()),
    pe(std::numeric_limits<double>::signaling_NaN()),
    plane(INT_MIN)
  {}
} // end namespace caf
////////////////////////////////////////////////////////////////////////
