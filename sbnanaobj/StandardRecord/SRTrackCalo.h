////////////////////////////////////////////////////////////////////////
// \file    SRTrackCalo.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKCALO_H
#define SRTRACKCALO_H

#include <vector>
#include "sbnanaobj/StandardRecord/SRVector3D.h"

namespace caf
{

  class SRCaloPoint {
    public:

      SRCaloPoint();
      virtual ~SRCaloPoint() {}

      float rr; //!< Residual Range [cm]
      float dqdx; //!< dE/dx [MeV/cm]
      float dedx; //!< dQ/dx [ADC/cm] -- pre calibration and electron lifetime correction
      float pitch; //!< Track pitch [cm]
      float t; //!< Time of deposition [ticks]
      // NOTE: flatten-caf seems to have trouble with nesting the point
      // inside a SRVector3D -- so just expose x/y/z out here
      float x; //!< X-Position of deposition [cm]
      float y; //!< Y-Position of deposition [cm]
      float z; //!< Z-Position of deposition [cm]
      float integral; //!< Hit Charge Integral [ADC]
      float sumadc; //!< Hit Charge SummedADC [ADC]
      short wire; //!< Wire of Calo-Point
      short tpc; //!< TPC of Calo-Point
  };


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
