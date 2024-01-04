////////////////////////////////////////////////////////////////////////
// \file    SRParticleTruthDLP.cxx
// \brief   SRParticleTruthDLP holds ML particle information.
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////

#include <limits>
#include <vector>
#include "SRParticleTruthDLP.h"

namespace caf
{
  SRParticleTruthDLP::SRParticleTruthDLP():
    ancestor_creation_process(),
    ancestor_pdg_code(-1),
    ancestor_position(std::vector<float>()),
    ancestor_t(std::numeric_limits<double>::signaling_NaN()),
    ancestor_track_id(-1),
    calo_ke(-1.0),
    calo_ke_tng(-1.0),
    children_counts(std::vector<int64_t>()),
    coffset(-1.0),
    csda_ke(-1.0),
    csda_ke_tng(-1.0),
    depositions_sum(-1.0),
    distance_travel(-1.0),
    end_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    end_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    end_position{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    energy_deposit(std::numeric_limits<double>::signaling_NaN()),
    energy_init(std::numeric_limits<double>::signaling_NaN()),
    first_step(std::vector<float>()),
    fragment_ids(std::vector<int64_t>()),
    group_id(-1),
    id(-1),
    image_id(-1),
    index(std::vector<int64_t>()),
    interaction_id(-1),
    is_ccrosser(false),
    is_contained(true),
    is_primary(true),
    is_principal_match(true),
    is_valid(true),
    ke(-1),
    last_step(std::vector<float>()),
    length(-1),
    length_tng(-1),
    match(std::vector<int64_t>()),
    match_overlap(std::vector<float>()),
    matched(std::numeric_limits<uint8_t>::signaling_NaN()),
    mcs_ke(-1),
    mcs_ke_tng(-1),
    mcst_index(-1),
    mct_index(-1),
    momentum{0,0,0},
    nu_id(-1),
    num_fragments(-1),
    num_voxels(-1),
    p(std::numeric_limits<double>::signaling_NaN()),
    parent_creation_process(),
    parent_id(-1),
    parent_pdg_code(0),
    parent_position(std::vector<float>()),
    parent_t(std::numeric_limits<double>::signaling_NaN()),
    parent_track_id(-1),
    pdg_code(0),
    pid(-1),
    position(std::vector<float>()),
    sed_depositions_MeV_sum(std::numeric_limits<float>::signaling_NaN()),
    sed_index(std::vector<int64_t>()),
    sed_size(0),
    semantic_type(-1),
    shape(0),
    size(0),
    start_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    start_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    t(std::numeric_limits<double>::signaling_NaN()),
    track_id(-1),
    truth_depositions_MeV_sum(std::numeric_limits<double>::signaling_NaN()),
    truth_depositions_sum(std::numeric_limits<double>::signaling_NaN()),
    truth_index(std::vector<int64_t>()),
    truth_momentum{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    truth_size(0),
    truth_start_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    units(),
    volume_id(-1)
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////

