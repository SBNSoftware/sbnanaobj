/**
 * @file SRInteractionDLP.cxx
 * @brief Implementation of the SRInteractionDLP class.
 * @author mueller@fnal.gov
*/
#include <limits>
#include <vector>
#include "sbnanaobj/StandardRecord/SRConstants.h"
#include "sbnanaobj/StandardRecord/SRInteractionDLP.h"

namespace caf
{
    SRInteractionDLP::SRInteractionDLP():
        best_match_id(caf::kUninitializedInt),
        best_match_overlap(caf::kSignalingNaN),
        cathode_offset(caf::kSignalingNaN),
        crt_ids(),
        crt_scores(),
        crt_times(),
        depositions_q_sum(caf::kSignalingNaN),
        depositions_sum(caf::kSignalingNaN),
        dir{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        flash_hypo_pe(caf::kSignalingNaN),
        flash_hypothesis_ids(),
        flash_ids(),
        flash_scores(),
        flash_times(),
        flash_total_pe(caf::kSignalingNaN),
        flash_volume_ids(),
        id(caf::kUninitializedInt),
        is_cathode_crosser(false),
        is_contained(true),
        is_crt_matched(false),
        is_fiducial(true),
        is_flash_matched(false),
        is_matched(false),
        is_time_contained(true),
        is_truth(false),
        match_ids(),
        match_overlaps(),
        module_ids(),
        num_particles(caf::kUninitializedInt),
        num_primary_particles(caf::kUninitializedInt),
        particle_counts{6, caf::kUninitializedInt},
        particle_ids(),
        primary_particle_counts{6, caf::kUninitializedInt},
        primary_particle_ids(),
        size(caf::kUninitializedInt),
        topology(),
        units(),
        vertex{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        particles() { }
} // namespace caf
