////////////////////////////////////////////////////////////////////////
// \file    SRInteractionDLP.cxx
// \brief   SRInteractionDLP holds ML interaction information.
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////

#include <limits>
#include <vector>
#include "sbnanaobj/StandardRecord/SRInteractionDLP.h"

namespace caf
{
  SRInteractionDLP::SRInteractionDLP():
    coffset(-1.0),
    crthit_id(-1),
    crthit_matched(-1),
    crthit_matched_particle_id(-1),
    flash_hypothesis(std::numeric_limits<double>::signaling_NaN()),
    flash_id(-1),
    flash_time(std::numeric_limits<double>::signaling_NaN()),
    flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
    fmatched(-1),
    id(-1),
    image_id(-1),
    is_ccrosser(false),
    is_contained(true),
    is_fiducial(true),
    is_neutrino(false),
    is_principal_match(false),
    match(std::vector<int64_t>()),
    match_overlap(std::vector<float>()),
    matched(-1),
    nu_id(-1),
    num_particles(0),
    num_primaries(0),
    particles(std::vector<SRParticleDLP>()),
    particle_counts{},
    particle_ids(std::vector<int64_t>()),
    primary_counts{},
    size(0),
    topology(),
    units(),
    vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    vertex_mode(),
    volume_id(-1)
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////

