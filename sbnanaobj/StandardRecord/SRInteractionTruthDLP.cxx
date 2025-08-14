/**
 * @file SRInteractionTruthDLP.cxx
 * @brief Implementation of the SRInteractionTruthDLP class.
 * @author mueller@fnal.gov
*/
#include <limits>
#include <vector>
#include "sbnanaobj/StandardRecord/SRInteractionTruthDLP.h"

namespace caf
{
    SRInteractionTruthDLP::SRInteractionTruthDLP():
        bjorken_x(std::numeric_limits<double>::signaling_NaN()),
        cathode_offset(std::numeric_limits<double>::signaling_NaN()),
        creation_process(),
        current_type(std::numeric_limits<int64_t>::signaling_NaN()),
        depositions_adapt_q_sum(std::numeric_limits<double>::signaling_NaN()),
        depositions_adapt_sum(std::numeric_limits<double>::signaling_NaN()),
        depositions_g4_sum(std::numeric_limits<int64_t>::signaling_NaN()),
        depositions_q_sum(std::numeric_limits<double>::signaling_NaN()),
        depositions_sum(std::numeric_limits<double>::signaling_NaN()),
        energy_init(std::numeric_limits<double>::signaling_NaN()),
        energy_transfer(std::numeric_limits<double>::signaling_NaN()),
        flash_hypo_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_ids(std::vector<int64_t>()),
        flash_scores(std::vector<float>()),
        flash_times(std::vector<float>()),
        flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_volume_ids(std::vector<int64_t>()),
        hadronic_invariant_mass(std::numeric_limits<double>::signaling_NaN()),
        id(std::numeric_limits<int64_t>::signaling_NaN()),
        inelasticity(std::numeric_limits<double>::signaling_NaN()),
        interaction_id(std::numeric_limits<int64_t>::signaling_NaN()),
        interaction_mode(std::numeric_limits<int64_t>::signaling_NaN()),
        interaction_type(std::numeric_limits<int64_t>::signaling_NaN()),
        is_cathode_crosser(false),
        is_contained(false),
        is_fiducial(false),
        is_flash_matched(false),
        is_matched(false),
        is_truth(false),
        lepton_p(std::numeric_limits<double>::signaling_NaN()),
        lepton_pdg_code(std::numeric_limits<int64_t>::signaling_NaN()),
        lepton_track_id(std::numeric_limits<int64_t>::signaling_NaN()),
        mct_index(std::numeric_limits<int64_t>::signaling_NaN()),
        module_ids(std::vector<int64_t>()),
        momentum{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        momentum_transfer(std::numeric_limits<double>::signaling_NaN()),
        momentum_transfer_mag(std::numeric_limits<double>::signaling_NaN()),
        nu_id(std::numeric_limits<int64_t>::signaling_NaN()),
        nucleon(std::numeric_limits<int64_t>::signaling_NaN()),
        num_particles(std::numeric_limits<int64_t>::signaling_NaN()),
        num_primary_particles(std::numeric_limits<int64_t>::signaling_NaN()),
        orig_id(std::numeric_limits<int64_t>::signaling_NaN()),
        particle_counts{std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN()},
        particle_ids(),
        pdg_code(std::numeric_limits<int64_t>::signaling_NaN()),
        position{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        primary_particle_counts{std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN()},
        primary_particle_ids(),
        quark(std::numeric_limits<int64_t>::signaling_NaN()),
        reco_vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        size(std::numeric_limits<int64_t>::signaling_NaN()),
        size_adapt(std::numeric_limits<int64_t>::signaling_NaN()),
        size_g4(std::numeric_limits<int64_t>::signaling_NaN()),
        target(std::numeric_limits<int64_t>::signaling_NaN()),
        theta(std::numeric_limits<double>::signaling_NaN()),
        topology(),
        track_id(std::numeric_limits<int64_t>::signaling_NaN()),
        units(),
        vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        particles(std::vector<SRParticleTruthDLP>()) { }

    SRInteractionTruthDLP::~SRInteractionTruthDLP() { }
} // namespace caf
