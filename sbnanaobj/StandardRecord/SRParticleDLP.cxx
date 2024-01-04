////////////////////////////////////////////////////////////////////////
// \file    SRParticleDLP.cxx
// \brief   SRParticleDLP holds ML particle information.
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////

#include <limits>
#include <vector>
#include "SRParticleDLP.h"

namespace caf
{
  SRParticleDLP::SRParticleDLP():
    calo_ke(-1.0),
    coffset(-1.0),
    csda_ke(-1.0),
    depositions_sum(-1.0),
    end_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    end_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    fragment_ids(std::vector<int64_t>()),
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
    length(-1),
    match(std::vector<int64_t>()),
    match_overlap(std::vector<float>()),
    matched(std::numeric_limits<uint8_t>::signaling_NaN()),
    mcs_ke(-1),
    momentum{},
    nu_id(-1),
    num_fragments(-1),
    pdg_code(0),
    pid(-1),
    pid_scores{},
    primary_scores{},
    semantic_type(-1),
    size(0),
    start_dir{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    start_point{std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()},
    units(),
    volume_id(-1)
  {  }

} // end namespace caf
////////////////////////////////////////////////////////////////////////

