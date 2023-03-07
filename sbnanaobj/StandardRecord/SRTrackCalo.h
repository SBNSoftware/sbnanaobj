////////////////////////////////////////////////////////////////////////
// \file    SRTrackCalo.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKCALO_H
#define SRTRACKCALO_H

#include <vector>
#include "sbnanaobj/StandardRecord/SRVector3D.h"

#include "sbnanaobj/StandardRecord/SRCaloPoint.h"

namespace caf
{
  /// Calorimetry information
  class SRTrackCalo
    {
    public:

      SRTrackCalo();
      virtual ~SRTrackCalo();

      int            nhit;             //!< Number of hits on this plane counted in the calorimetry
      float          ke;               //!< Kinetic energy deposited on this plane [GeV]
      float          charge;           //!< Deposited charge as seen by wireplane (pre recombination and electric lifetime corrections) [ADC]
      std::vector<SRCaloPoint> points; //!< Information saved per-point
      void setDefault();
    };

} // end namespace

#endif // SRTRACKCALO_H
//////////////////////////////////////////////////////////////////////////////
