/**
 * @file SRInteractionTruthDLP.cxx
 * @brief Implementation of the SRInteractionTruthDLP class.
 * @author mueller@fnal.gov
*/
#include <limits>
#include <vector>
#include "sbnanaobj/StandardRecord/SRInteractionTruthDLP.h"

namespace caf
{
    SRInteractionTruthDLP::SRInteractionTruthDLP():
        bjorken_x(std::numeric_limits<double>::signaling_NaN()),
        cathode_offset(std::numeric_limits<double>::signaling_NaN()),
        creation_process(),
        current_type(std::numeric_limits<int64_t>::signaling_NaN()),
        energy_init(std::numeric_limits<double>::signaling_NaN()),
        energy_transfer(std::numeric_limits<double>::signaling_NaN()),
        flash_hypo_pe(std::numeric_limits<double>::signaling_NaN()),
        flash_id(std::numeric_limits<int64_t>::signaling_NaN()),
        flash_time(std::numeric_limits<double>::signaling_NaN()),
        flash_total_pe(std::numeric_limits<double>::signaling_NaN()),
        hadronic_invariant_mass(std::numeric_limits<double>::signaling_NaN()),
        id(std::numeric_limits<int64_t>::signaling_NaN()),
        inelasticity(std::numeric_limits<double>::signaling_NaN()),
        interaction_id(std::numeric_limits<int64_t>::signaling_NaN()),
        interaction_mode(std::numeric_limits<int64_t>::signaling_NaN()),
        interaction_type(std::numeric_limits<int64_t>::signaling_NaN()),
        is_cathode_crosser(false),
        is_contained(false),
        is_fiducial(false),
        is_flash_matched(false),
        is_matched(false),
        is_truth(false),
        lepton_p(std::numeric_limits<double>::signaling_NaN()),
        lepton_pdg_code(std::numeric_limits<int64_t>::signaling_NaN()),
        lepton_track_id(std::numeric_limits<int64_t>::signaling_NaN()),
        mct_index(std::numeric_limits<int64_t>::signaling_NaN()) { }
        module_ids(),
        momentum({std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()}),
        momentum_transfer(std::numeric_limits<double>::signaling_NaN()),
        momentum_transfer_mag(std::numeric_limits<double>::signaling_NaN()),
        nu_id(std::numeric_limits<int64_t>::signaling_NaN()),
        nucleon(std::numeric_limits<int64_t>::signaling_NaN()),
        orig_id(std::numeric_limits<int64_t>::signaling_NaN()),
        particle_ids(),
        pdg_code(std::numeric_limits<int64_t>::signaling_NaN()),
        position({std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()}),
        quark(std::numeric_limits<int64_t>::signaling_NaN()),
        reco_vertex({std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()}),
        target(std::numeric_limits<int64_t>::signaling_NaN()),
        theta(std::numeric_limits<double>::signaling_NaN()),
        topology(),
        track_id(std::numeric_limits<int64_t>::signaling_NaN()),
        vertex({std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN(), std::numeric_limits<float>::signaling_NaN()}),
        particles(std::vector<SRParticleTruthDLP) { }
} // namespace caf