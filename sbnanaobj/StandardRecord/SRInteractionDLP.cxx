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
        flash_ids(std::vector<int64_t>()),
        flash_scores(std::vector<float>()),
        flash_times(std::vector<float>()),
        flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_volume_ids(std::vector<int64_t>()),
        id(caf::kUninitializedInt),
        is_cathode_crosser(false),
        is_contained(true),
        is_fiducial(true),
        is_flash_matched(false),
        is_matched(false),
        is_time_contained(true),
        is_truth(false),
        match_ids(std::vector<int64_t>()),
        match_overlaps(std::vector<float>()),
        module_ids(std::vector<int64_t>()),
        num_particles(caf::kUninitializedInt),
        num_primary_particles(caf::kUninitializedInt),
        particle_counts{caf::kUninitializedInt, caf::kUninitializedInt, caf::kUninitializedInt},
        particle_ids(std::vector<int64_t>()),
        primary_particle_counts{caf::kUninitializedInt, caf::kUninitializedInt, caf::kUninitializedInt},
        primary_particle_ids(std::vector<int64_t>()),
        size(caf::kUninitializedInt),
        topology(),
        units(),
        vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        particles(std::vector<SRParticleDLP>()) { }

    SRInteractionDLP::~SRInteractionDLP() { }
} // namespace caf
