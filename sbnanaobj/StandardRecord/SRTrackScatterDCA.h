////////////////////////////////////////////////////////////////////////
// \file    SRTrackScatterDCA.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKSCATTERDCA_H
#define SRTRACKSCATTERDCA_H

#include <vector>

namespace caf {
/// Representation of track scattering variables compare to interpolated start and end points
class SRTrackScatterDCA {
  public:
  SRTrackScatterDCA();
  ~SRTrackScatterDCA() {}

  float mean;   // Average DCA [cm]
  float stdDev; // Standard Deviation DCA [cm]
  float max;    // Maximum DCA [cm]
};

} // end namespace

#endif // SRTrackScatterDCA_H
//////////////////////////////////////////////////////////////////////////////
