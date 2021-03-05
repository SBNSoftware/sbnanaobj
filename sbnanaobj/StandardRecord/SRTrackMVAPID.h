////////////////////////////////////////////////////////////////////////
// \file    SRTrackMVAPID.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKMVAPID_H
#define SRTRACKMVAPID_H

#include <vector>

namespace caf {
/// Representation of Track MVA PID outputs
class SRTrackMVAPID {
  public:
  SRTrackMVAPID();
  ~SRTrackMVAPID() {}

  int pdg;

  float muonScore;
  float pionScore;
  float protonScore;
  float otherScore;

  float bestScore;

};

} // end namespace

#endif // SRTrackMVAPID_H
//////////////////////////////////////////////////////////////////////////////

