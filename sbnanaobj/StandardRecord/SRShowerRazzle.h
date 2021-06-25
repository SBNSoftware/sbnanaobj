////////////////////////////////////////////////////////////////////////
// \file    SRShowerRazzle.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSHOWERRazzle_H
#define SRSHOWERRazzle_H

#include <vector>

namespace caf {
/// Representation of Shower MVA PID outputs
class SRShowerRazzle {
  public:
  SRShowerRazzle();
  ~SRShowerRazzle() {}

  int pdg;

  float electronScore;
  float photonScore;
  float otherScore;

  float bestScore;
};

} // end namespace

#endif // SRShowerRazzle_H
//////////////////////////////////////////////////////////////////////////////
