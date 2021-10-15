////////////////////////////////////////////////////////////////////////
// \file    SRTrueParticle.cxx
// \brief   An SRTrueParticle is a high level true track object. It
//          knows true id, direction, length, but  no hit information.
////////////////////////////////////////////////////////////////////////
#include "sbnanaobj/StandardRecord/SRTrueParticle.h"
#include <climits>

namespace caf
{
  SRTrueParticlePlaneInfo::SRTrueParticlePlaneInfo() :
    visE(std::numeric_limits<float>::signaling_NaN()),
    nhit(0)
  {
  }

  SRTrueParticle::SRTrueParticle():
    genE(std::numeric_limits<float>::signaling_NaN()),
    startE(std::numeric_limits<float>::signaling_NaN()),
    endE(std::numeric_limits<float>::signaling_NaN()),
    genT(std::numeric_limits<float>::signaling_NaN()),
    startT(std::numeric_limits<float>::signaling_NaN()),
    endT(std::numeric_limits<float>::signaling_NaN()),
    length(std::numeric_limits<float>::signaling_NaN()),
    wallin(kWallNone),
    wallout(kWallNone),
    cont_tpc(false),
    crosses_tpc(false),
    contained(false),
    pdg(INT_MIN),
    G4ID(INT_MIN),
    interaction_id(INT_MIN),
    cryostat(-1),
    generator(kUnknownGenerator),
    start_process(g4_process_(caf::kG4UNKNOWN)), 
    end_process(g4_process_(caf::kG4UNKNOWN)),
    gstatus(kIStUndefined)
  {
  }

  bool SRTrueParticle::IsPrimary() const {
    return start_process == kG4primary;
  }

  bool SRTrueParticle::HasBraggPeak() const {
    return \
      // check contained, id, & end process (stopping-only)
      contained &&
      ( abs(pdg) == 13 || abs(pdg) == 2212 ||
  abs(pdg) == 211 || abs(pdg) == 321 ) &&
      ( end_process ==  kG4CoupledTransportation ||
  end_process ==  kG4FastScintillation ||
  end_process ==  kG4Decay ||
  end_process ==  kG4muMinusCaptureAtRest );
  }

  bool SRTrueParticle::IsGenie() const {
    return gstatus !=  kNotGenie;
  }

  bool SRTrueParticle::IsStable() const {
    return \
       gstatus ==  kNotGenie // non-genie particles are stable
    || gstatus ==  kIStStableFinalState; // stable genie particle

  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////
