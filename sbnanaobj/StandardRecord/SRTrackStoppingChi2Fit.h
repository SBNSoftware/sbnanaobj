////////////////////////////////////////////////////////////////////////
// \file    SRTrackStoppingChi2Fit.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKSTOPPINGCHI2FIT_H
#define SRTRACKSTOPPINGCHI2FIT_H

#include <vector>

namespace caf {
/// Representation of a Pol0 and Exp fit to dEdx vs res. range
class SRTrackStoppingChi2Fit {
  public:
  SRTrackStoppingChi2Fit();
  ~SRTrackStoppingChi2Fit() {}

  float pol0Chi2; // Chi^2 of fitting a 0 degree polynomial
  float expChi2;  // Chi^2 of fitting an exponential
  float pol0Fit;  // Best fit value of a 0 degree polynomial [MeV/cm]
};

} // end namespace

#endif // SRTrackStoppingChi2Fit_H
//////////////////////////////////////////////////////////////////////////////

