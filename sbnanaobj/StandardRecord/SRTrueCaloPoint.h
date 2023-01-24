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

      float nelec; //!< Charge / number of electrons
      float e; //!< Energy [MeV]
      float x; //!< X-Position of deposition [cm]
      float y; //!< Y-Position of deposition [cm]
      float z; //!< Z-Position of deposition [cm]
      float rr; //!< Residual Range [cm]
      float pitch; //!< Pitch [cm]
  };
} // end namespace

#endif // SRTRUECALOPOINT_H
//////////////////////////////////////////////////////////////////////////////
