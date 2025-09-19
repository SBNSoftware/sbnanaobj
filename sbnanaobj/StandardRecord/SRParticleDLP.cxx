/**
 * @file SRParticleDLP.cxx
 * @brief Implementation of the SRParticleDLP class.
 * @author mueller@fnal.gov
*/
#include <limits>
#include <vector>
#include "sbnanaobj/StandardRecord/SRConstants.h"
#include "sbnanaobj/StandardRecord/SREnums.h"
#include "sbnanaobj/StandardRecord/SRParticleDLP.h"

namespace caf
{
    SRParticleDLP::SRParticleDLP():
        axial_spread(caf::kSignalingNaN),
        calo_ke(caf::kSignalingNaN),
        cathode_offset(caf::kSignalingNaN),
        chi2_per_pid{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        chi2_pid(caf::kUninitializedInt),
        csda_ke(caf::kSignalingNaN),
        csda_ke_per_pid{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        depositions_sum(caf::kSignalingNaN),
        directional_spread(caf::kSignalingNaN),
        end_dir{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        end_point{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        fragment_ids(),
        id(caf::kUninitializedInt),
        interaction_id(caf::kUninitializedInt),
        is_cathode_crosser(false),
        is_contained(false),
        is_matched(false),    
        is_primary(false),
        is_time_contained(true),
        is_truth(false),
        is_valid(false),
        ke(caf::kSignalingNaN),
        length(caf::kSignalingNaN),
        mass(caf::kSignalingNaN),
        match_ids(),
        match_overlaps(),
        mcs_ke(caf::kSignalingNaN),
        mcs_ke_per_pid{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        module_ids(),
        momentum{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        num_fragments(caf::kUninitializedInt),
        p(caf::kSignalingNaN),
        pdg_code(caf::kUninitializedInt),
        pid(caf::kUninitializedInt),
        pid_scores(),
        ppn_ids(),
        primary_scores(),
        shape(caf::kUninitializedInt),
        size(caf::kUninitializedInt),
        start_dedx(caf::kSignalingNaN),
        start_dir{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        start_point{caf::kSignalingNaN, caf::kSignalingNaN, caf::kSignalingNaN},
        start_straightness(caf::kSignalingNaN),
        vertex_distance(caf::kSignalingNaN) { }
} // namespace caf
