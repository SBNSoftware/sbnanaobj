/**
 * @file SRInteractionTruthDLP.cxx
 * @brief Implementation of the SRInteractionTruthDLP class.
 * @author mueller@fnal.gov
*/
#include <limits>
#include <vector>
#include "sbnanaobj/StandardRecord/SRConstants.h"
#include "sbnanaobj/StandardRecord/SRInteractionTruthDLP.h"

namespace caf
{
    SRInteractionTruthDLP::SRInteractionTruthDLP():
        bjorken_x(std::numeric_limits<double>::signaling_NaN()),
        cathode_offset(std::numeric_limits<double>::signaling_NaN()),
        creation_process(),
        current_type(caf::kUninitializedInt),
        depositions_adapt_q_sum(std::numeric_limits<double>::signaling_NaN()),
        depositions_adapt_sum(std::numeric_limits<double>::signaling_NaN()),
        depositions_g4_sum(caf::kUninitializedInt),
        depositions_q_sum(std::numeric_limits<double>::signaling_NaN()),
        depositions_sum(std::numeric_limits<double>::signaling_NaN()),
        energy_init(std::numeric_limits<double>::signaling_NaN()),
        energy_transfer(std::numeric_limits<double>::signaling_NaN()),
        flash_hypo_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_ids(),
        flash_scores(),
        flash_times(),
        flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_volume_ids(),
        hadronic_invariant_mass(std::numeric_limits<double>::signaling_NaN()),
        id(caf::kUninitializedInt),
        inelasticity(std::numeric_limits<double>::signaling_NaN()),
        interaction_id(caf::kUninitializedInt),
        interaction_mode(caf::kUninitializedInt),
        interaction_type(caf::kUninitializedInt),
        is_cathode_crosser(false),
        is_contained(false),
        is_fiducial(false),
        is_flash_matched(false),
        is_matched(false),
        is_time_contained(true),
        is_truth(false),
        lepton_p(std::numeric_limits<double>::signaling_NaN()),
        lepton_pdg_code(caf::kUninitializedInt),
        lepton_track_id(caf::kUninitializedInt),
        mct_index(caf::kUninitializedInt),
        module_ids(),
        momentum{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        momentum_transfer(std::numeric_limits<double>::signaling_NaN()),
        momentum_transfer_mag(std::numeric_limits<double>::signaling_NaN()),
        nu_id(caf::kUninitializedInt),
        nucleon(caf::kUninitializedInt),
        num_particles(caf::kUninitializedInt),
        num_primary_particles(caf::kUninitializedInt),
        orig_id(caf::kUninitializedInt),
        particle_counts{caf::kUninitializedInt, caf::kUninitializedInt, caf::kUninitializedInt},
        particle_ids(),
        pdg_code(caf::kUninitializedInt),
        position{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        primary_particle_counts{caf::kUninitializedInt, caf::kUninitializedInt, caf::kUninitializedInt},
        primary_particle_ids(),
        quark(caf::kUninitializedInt),
        reco_vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        size(caf::kUninitializedInt),
        size_adapt(caf::kUninitializedInt),
        size_g4(caf::kUninitializedInt),
        target(caf::kUninitializedInt),
        theta(std::numeric_limits<double>::signaling_NaN()),
        topology(),
        track_id(caf::kUninitializedInt),
        units(),
        vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        particles() { }

    SRInteractionTruthDLP::~SRInteractionTruthDLP() { }
} // namespace caf
