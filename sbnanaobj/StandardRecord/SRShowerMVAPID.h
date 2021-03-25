////////////////////////////////////////////////////////////////////////
// \file    SRShowerMVAPID.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSHOWERMVAPID_H
#define SRSHOWERMVAPID_H

#include <vector>

namespace caf {
/// Representation of Shower MVA PID outputs
class SRShowerMVAPID {
  public:
  SRShowerMVAPID();
  ~SRShowerMVAPID() {}

  int pdg;

  float electronScore;
  float photonScore;
  float otherScore;

  float bestScore;
};

} // end namespace

#endif // SRShowerMVAPID_H
//////////////////////////////////////////////////////////////////////////////
