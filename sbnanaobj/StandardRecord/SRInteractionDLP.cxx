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
        cathode_offset(std::numeric_limits<double>::signaling_NaN()),
        depositions_sum(std::numeric_limits<float>::signaling_NaN()),
        flash_hypo_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_ids(),
        flash_scores(),
        flash_times(),
        flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_volume_ids(),
        id(caf::kUninitializedInt),
        is_cathode_crosser(false),
        is_contained(true),
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
        particle_counts{caf::kUninitializedInt, caf::kUninitializedInt, caf::kUninitializedInt},
        particle_ids(),
        primary_particle_counts{caf::kUninitializedInt, caf::kUninitializedInt, caf::kUninitializedInt},
        primary_particle_ids(),
        size(caf::kUninitializedInt),
        topology(),
        units(),
        vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        particles() { }

    SRInteractionDLP::~SRInteractionDLP() { }
} // namespace caf
