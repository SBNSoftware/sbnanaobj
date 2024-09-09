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
        flash_hypo_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_id(-1),
        flash_time(std::numeric_limits<double>::signaling_NaN()),
        flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
        id(-1),
        is_cathode_crosser(false),
        is_contained(true),
        is_fiducial(true),
        is_flash_matched(false),
        is_matched(false),
        is_truth(false),
        match_ids(std::vector<int64_t>()),
        match_overlaps(std::vector<float>()),
        module_ids(std::vector<float>()),
        particle_ids(std::vector<int64_t>()),
        topology(),
        units(),
        vertex{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        particles(std::vector<SRParticleDLP>()) { }

    SRInteractionDLP::~SRInteractionDLP() { }
} // namespace caf