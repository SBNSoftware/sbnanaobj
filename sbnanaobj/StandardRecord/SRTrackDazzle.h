////////////////////////////////////////////////////////////////////////
// \file    SRTrackDazzle.h
////////////////////////////////////////////////////////////////////////
#ifndef SRTRACKDAZZLE_H
#define SRTRACKDAZZLE_H

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

#endif // SRTrackDAZZLE_H
//////////////////////////////////////////////////////////////////////////////

