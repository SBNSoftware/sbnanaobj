/**
 * @file SRParticleDLP.cxx
 * @brief Implementation of the SRParticleDLP class.
 * @author mueller@fnal.gov
*/
#include <limits>
#include <vector>
#include "SRParticleDLP.h"
#include "SREnums.h"

namespace caf
{
    SRParticleDLP::SRParticleDLP():
        calo_ke(std::numeric_limits<double>::signaling_NaN()),
        cathode_offset(std::numeric_limits<double>::signaling_NaN()),
        csda_ke(std::numeric_limits<double>::signaling_NaN()),
	depositions_sum(std::numeric_limits<float>::signaling_NaN()),
        end_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        end_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        fragment_ids(),
        id(std::numeric_limits<int64_t>::signaling_NaN()),
        index(),
        interaction_id(std::numeric_limits<int64_t>::signaling_NaN()),
        is_cathode_crosser(false),
        is_contained(false),
        is_matched(false),    
        is_primary(false),
        is_truth(false),
        is_valid(false),
        ke(std::numeric_limits<double>::signaling_NaN()),
        length(std::numeric_limits<double>::signaling_NaN()),
        mass(std::numeric_limits<double>::signaling_NaN()),
        match_ids(),
        match_overlaps(),
        mcs_ke(std::numeric_limits<double>::signaling_NaN()),
        module_ids(),
        momentum{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        num_fragments(std::numeric_limits<int64_t>::signaling_NaN()),
        p(std::numeric_limits<float>::signaling_NaN()),
        pdg_code(std::numeric_limits<int64_t>::signaling_NaN()),
        pid((int64_t)-1),
        pid_scores(),
        ppn_ids(),
        primary_scores(),
        shape((int64_t)-1),
        size(std::numeric_limits<int64_t>::signaling_NaN()),
        start_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        start_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
        units() { }

    SRParticleDLP::~SRParticleDLP() { }
} // namespace caf
