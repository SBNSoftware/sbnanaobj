////////////////////////////////////////////////////////////////////////
// \file    SRTrackLGCFit.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKLGCFIT_H
#define SRTRACKLGCFIT_H

#include <vector>

namespace caf {
/// Representation of a Landau-Guassian convolution fit
class SRTrackLGCFit {
  public:
  SRTrackLGCFit();
  ~SRTrackLGCFit() {}

  float landauWidth; // Width (sigma) of the Landau
  float mpv;         // Most probable location of the Landau
  float amplitude;   // Amplitude of the Landau
  float gaussWidth;  // Wifth (sigma) of the Guassian
  float chi2;        // Chi^2 from the fit
};

} // end namespace

#endif // SRTrackLGCFit_H
//////////////////////////////////////////////////////////////////////////////

