////////////////////////////////////////////////////////////////////////
// \file    SRCaloPoint.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCALOPOINT_H
#define SRCALOPOINT_H

#include "sbnanaobj/StandardRecord/SRTrueCaloPoint.h"

namespace caf
{

  // Calo information on a point
  class SRCaloPoint {
    public:

      SRCaloPoint();

      float rr; //!< Residual Range [cm]
      float dqdx; //!< dE/dx [MeV/cm]
      float dedx; //!< dQ/dx [ADC/cm] -- pre calibration and electron lifetime correction
      float pitch; //!< Track pitch [cm]
      float t; //!< Time of deposition [ticks]
      float efield; //!< |E| [kV/cm]
      float phi; //!< angle (degree) between the E-field and track dir for the hit, used in the GnocchiCalorimetry module
      // NOTE: flatten-caf seems to have trouble with nesting the point
      // inside a SRVector3D -- so just expose x/y/z out here
      float x; //!< X-Position of deposition [cm]
      float y; //!< Y-Position of deposition [cm]
      float z; //!< Z-Position of deposition [cm]
      float integral; //!< Hit Charge Integral [ADC]
      float sumadc; //!< Hit Charge SummedADC [ADC]
      float width; //!< Hit width [ticks]
      short mult; //!< Hit multiplicity
      short wire; //!< Wire of Calo-Point
      short tpc; //!< TPC of Calo-Point
      short start; //!< start tick of hit
      short end; //!< end tick of hit
      unsigned channel; //!< Channel of Calo-Point

      SRTrueCaloPoint truth; //!< Truth information
  };
} // end namespace

#endif // SRTRACKCALO_H
//////////////////////////////////////////////////////////////////////////////
