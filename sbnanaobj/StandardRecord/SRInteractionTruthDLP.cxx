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
        bjorken_x(caf::kSignalingNaN),
        cathode_offset(caf::kSignalingNaN),
        creation_process(),
        current_type(caf::kUninitializedInt),
        depositions_adapt_q_sum(caf::kSignalingNaN),
        depositions_adapt_sum(caf::kSignalingNaN),
        depositions_g4_sum(caf::kSignalingNaN),
        depositions_q_sum(caf::kSignalingNaN),
        depositions_sum(caf::kSignalingNaN),
        energy_init(caf::kSignalingNaN),
        energy_transfer(caf::kSignalingNaN),
        flash_hypo_pe(caf::kSignalingNaN),
        flash_ids(),
        flash_scores(),
        flash_times(),
        flash_total_pe(caf::kSignalingNaN),
        flash_volume_ids(),
        hadronic_invariant_mass(caf::kSignalingNaN),
        id(caf::kUninitializedInt),
        inelasticity(caf::kSignalingNaN),
        interaction_mode(caf::kUninitializedInt),
        interaction_type(caf::kUninitializedInt),
        is_cathode_crosser(false),
        is_contained(false),
        is_fiducial(false),
        is_flash_matched(false),
        is_matched(false),
        is_time_contained(true),
        is_truth(false),
        lepton_p(caf::kSignalingNaN),
        lepton_pdg_code(caf::kUninitializedInt),
        lepton_track_id(caf::kUninitializedInt),
        mct_index(caf::kUninitializedInt),
        module_ids(),
        momentum{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        momentum_transfer(caf::kSignalingNaN),
        momentum_transfer_mag(caf::kSignalingNaN),
        nu_id(caf::kUninitializedInt),
        nucleon(caf::kUninitializedInt),
        num_particles(caf::kUninitializedInt),
        num_primary_particles(caf::kUninitializedInt),
        orig_id(caf::kUninitializedInt),
        particle_counts{6, caf::kUninitializedInt},
        particle_ids(),
        pdg_code(caf::kUninitializedInt),
        position{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        primary_particle_counts{6, caf::kUninitializedInt},
        primary_particle_ids(),
        quark(caf::kUninitializedInt),
        reco_vertex{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        size(caf::kUninitializedInt),
        size_adapt(caf::kUninitializedInt),
        size_g4(caf::kUninitializedInt),
        target(caf::kUninitializedInt),
        theta(caf::kSignalingNaN),
        topology(),
        track_id(caf::kUninitializedInt),
        vertex{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        particles() { }
} // namespace caf
