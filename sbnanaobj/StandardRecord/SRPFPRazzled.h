////////////////////////////////////////////////////////////////////////
// \file    SRPFPRazzled.h
////////////////////////////////////////////////////////////////////////
#ifndef SRPFPRAZZLED_H
#define SRPFPRAZZLED_H

namespace caf {
  /// Representation of PFP MVA PID outputs
  class SRPFPRazzled {
  public:
    SRPFPRazzled();
    ~SRPFPRazzled() {}

    int pdg;

    float electronScore;
    float muonScore;
    float photonScore;
    float pionScore;
    float protonScore;

    float bestScore;
  };

} // end namespace

#endif // SRPFPRazzled_H
//////////////////////////////////////////////////////////////////////////////
