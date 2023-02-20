////////////////////////////////////////////////////////////////////////
// \file    SRTrueCaloPoint.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRUECALOPOINT_H
#define SRTRUECALOPOINT_H

namespace caf
{

  // True calo information on a point
  class SRTrueCaloPoint {

    public:

      SRTrueCaloPoint();
      virtual ~SRTrueCaloPoint() {}

      float h_nelec; //!< Charge / number of electrons by hit
      float h_e; //!< Energy by hit [MeV]
      float p_nelec; //!< Charge / number of electrons by particle
      float p_e; //!< Energy by particle [MeV]
      float x; //!< X-Position of deposition by particle [cm]
      float y; //!< Y-Position of deposition by particle [cm]
      float z; //!< Z-Position of deposition by particle [cm]
      float rr; //!< Residual Range by particle [cm]
      float pitch; //!< Pitch by particle [cm]
  };
} // end namespace

#endif // SRTRUECALOPOINT_H
//////////////////////////////////////////////////////////////////////////////
