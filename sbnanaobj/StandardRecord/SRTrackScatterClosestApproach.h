////////////////////////////////////////////////////////////////////////
// \file    SRTrackScatterClosestApproach.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKSCATTERClosestApproach_H
#define SRTRACKSCATTERClosestApproach_H

#include <vector>

namespace caf {
/// Representation of track scattering variables compare to interpolated start and end points
class SRTrackScatterClosestApproach {
  public:
  SRTrackScatterClosestApproach();
  ~SRTrackScatterClosestApproach() {}

  float mean;   // Average Closest Approach [cm]
  float stdDev; // Standard Deviation Closest Approach [cm]
  float max;    // Maximum Closest Approach [cm]
};

} // end namespace

#endif // SRTrackScatterClosestApproach_H
//////////////////////////////////////////////////////////////////////////////
