////////////////////////////////////////////////////////////////////////
// \file    SRInteractionTruthDLP.cxx
// \brief   SRInteractionTruthDLP holds ML interaction information.
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////

#include <limits>
#include <vector>
#include "sbnanaobj/StandardRecord/SRInteractionTruthDLP.h"

namespace caf
{
  SRInteractionTruthDLP::SRInteractionTruthDLP():
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
    nu_bjorken_x(std::numeric_limits<double>::signaling_NaN()),
    nu_creation_process(),
    nu_current_type(-1),
    nu_distance_travel(std::numeric_limits<double>::signaling_NaN()),
    nu_energy_deposit(std::numeric_limits<double>::signaling_NaN()),
    nu_energy_init(std::numeric_limits<double>::signaling_NaN()),
    nu_hadronic_invariant_mass(std::numeric_limits<float>::signaling_NaN()),
    nu_id(-1),
    nu_inelasticity(std::numeric_limits<double>::signaling_NaN()),
    nu_interaction_mode(-1),
    nu_interaction_type(-1),
    nu_lepton_track_id(-1),
    nu_mcst_index(-1),
    nu_mct_index(-1),
    nu_momentum_transfer(std::numeric_limits<double>::signaling_NaN()),
    nu_nucleon(-1),
    nu_num_voxels(-1),
    nu_p(std::numeric_limits<float>::signaling_NaN()),
    nu_pdg_code(0),
    nu_position(std::vector<double>()),
    nu_quark(-1),
    nu_t(std::numeric_limits<double>::signaling_NaN()),
    nu_target(-1),
    nu_theta(std::numeric_limits<double>::signaling_NaN()),
    nu_track_id(-1),
    nu_truth_id(-1),
    num_particles(0),
    num_primaries(0),
    particles(std::vector<SRParticleTruthDLP>()),
    particle_counts{},
    particle_ids(std::vector<int64_t>()),
    primary_counts{},
    size(0),
    topology(),
    truth_id(-1),
    truth_particle_counts(std::vector<int64_t>()),
    truth_primary_counts(std::vector<int64_t>()),
    truth_topology(),
    truth_vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    units(),
    vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    vertex_mode(),
    volume_id(-1)
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////

