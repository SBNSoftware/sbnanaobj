////////////////////////////////////////////////////////////////////////
// \file    SRTrackDazzle.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKDazzle_H
#define SRTRACKDazzle_H

#include <vector>

namespace caf {
/// Representation of Track MVA PID outputs
class SRTrackDazzle {
  public:
  SRTrackDazzle();
  ~SRTrackDazzle() {}

  int pdg;

  float muonScore;
  float pionScore;
  float protonScore;
  float otherScore;

  float bestScore;

};

} // end namespace

#endif // SRTrackDazzle_H
//////////////////////////////////////////////////////////////////////////////

