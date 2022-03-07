////////////////////////////////////////////////////////////////////////
// \file    SRShowerRazzle.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSHOWERRAZZLE_H
#define SRSHOWERRAZZLE_H

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
