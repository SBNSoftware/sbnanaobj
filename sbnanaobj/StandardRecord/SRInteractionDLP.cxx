/**
 * @file SRInteractionDLP.cxx
 * @brief Implementation of the SRInteractionDLP class.
 * @author mueller@fnal.gov
*/
#include <limits>
#include <vector>
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
        id(std::numeric_limits<int64_t>::signaling_NaN()),
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
        num_particles(std::numeric_limits<int64_t>::signaling_NaN()),
        num_primary_particles(std::numeric_limits<int64_t>::signaling_NaN()),
        particle_counts{std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN()},
        particle_ids(std::vector<int64_t>()),
        primary_particle_counts{std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN()},
        primary_particle_ids(std::vector<int64_t>()),
        size(std::numeric_limits<int64_t>::signaling_NaN()),
        topology(),
        units(),
        vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        particles(std::vector<SRParticleDLP>()) { }

    SRInteractionDLP::~SRInteractionDLP() { }
} // namespace caf
