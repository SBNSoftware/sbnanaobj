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
        flash_id(std::numeric_limits<int64_t>::signaling_NaN()),
        flash_time(std::numeric_limits<double>::signaling_NaN()),
        flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
        id(std::numeric_limits<int64_t>::signaling_NaN()),
	index(std::vector<int64_t>()),
        is_cathode_crosser(false),
        is_contained(true),
        is_fiducial(true),
        is_flash_matched(false),
        is_matched(false),
        is_truth(false),
        match_ids(std::vector<int64_t>()),
        match_overlaps(std::vector<float>()),
        module_ids(std::vector<int64_t>()),
        num_particles(std::numeric_limits<int64_t>::signaling_NaN()),
        nu_id(std::numeric_limits<int64_t>::signaling_NaN()),
        particle_counts{std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN()},
        particle_ids(std::vector<int64_t>()),
        primary_particle_counts{std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN(), std::numeric_limits<int64_t>::signaling_NaN()},
        size(std::numeric_limits<int64_t>::signaling_NaN()),
        topology(),
        units(),
        vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        particles(std::vector<SRParticleDLP>()) { }

    SRInteractionDLP::~SRInteractionDLP() { }
} // namespace caf
