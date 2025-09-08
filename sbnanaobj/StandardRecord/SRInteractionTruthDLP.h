/**
 * @file SRInteractionTruthDLP.h
 * @brief Definition of the SRInteractionTruthDLP class.
 * @author mueller@fnal.gov
*/
#ifndef SRINTERACTIONTRUTHDLP_H
#define SRINTERACTIONTRUTHDLP_H

#include <vector>
#include <stdint.h>
#include "sbnanaobj/StandardRecord/SRParticleTruthDLP.h"

#if defined(__castxml_major__) && !defined(__clang__)
#else
# include <string>
#endif

namespace caf
{
    /**
     * @brief The SRInteractionTruthDLP is a representation of the truth
     * information associated with an interaction as defined by the SPINE
     * (Deep Learn Physics) reconstruction. It encapsulates truth information
     * about the interaction itself and some high-level information about the
     * particles in the interaction.
    */
    class SRInteractionTruthDLP
    {
        public:
        SRInteractionTruthDLP();

        double bjorken_x;                                   //!< Bjorken x of the neutrino interaction.
        double cathode_offset;                              //!< Distance from the cathode [cm].
        std::string creation_process;                       //!< Creation process associated with the neutrino (see MCParticle).
        int64_t current_type;                               //!< Current type of the neutrino (see MCNeutrino; 0=CC, 1=NC).
        float depositions_adapt_q_sum;                      //!< Total tagged (reco non-ghost) charge deposited [ADC].
        float depositions_adapt_sum;                        //!< Total tagged (reco non-ghost) energy deposited [MeV].
        int64_t depositions_g4_sum;                         //!< Total energy deposited energy at the G4 level [MeV].
        float depositions_q_sum;                            //!< Total tagged (true non-ghost) charge deposited [ADC].
        float depositions_sum;                              //!< Total tagged (true non-ghost) energy deposited [MeV].
        double distance_travel;                             //!< Distance traveled by the neutrino from production to the interaction.
        double energy_init;                                 //!< Initial energy of the neutrino.
        double energy_transfer;                             //!< Energy transfer (Q0) of the neutrino interaction.
        double flash_hypo_pe;                               //!< Total PE of the hypothesized flash.
        std::vector<int64_t> flash_ids;                     //!< Flash IDs for the matched flashes (uses OpT0Finder, lowest score first).
        std::vector<float> flash_scores;                    //!< Flash score for the matched flashes (uses OpT0Finder, same order as flash_ids).
        std::vector<float> flash_times;                     //!< Time of the matched flashes (uses OpT0Finder, same order as flash_ids).
        double flash_total_pe;                              //!< Total PE of the matched flash.
        std::vector<int64_t> flash_volume_ids;              //!< Volume IDs of the matched flashes (uses OpT0Finder, same order as flash_ids).
        double hadronic_invariant_mass;                     //!< Hadronic invariant mass of the neutrino.
        int64_t id;                                         //!< Interaction ID (dense enumeration starting from 0 within the event).
        double inelasticity;                                //!< Inelasticity of the neutrino interaction.
        int64_t interaction_mode;                           //!< Interaction mode of the neutrino (see MCNeutrino).
        int64_t interaction_type;                           //!< Interaction type of the neutrino (see MCNeutrino).
        bool is_cathode_crosser;                            //!< Whether the interaction is a cathode-crosser (some particle crosses the cathode).
        bool is_contained;                                  //!< Whether the interaction is contained within some margin from the detector walls.
        bool is_fiducial;                                   //!< Whether the interaction is in the fiducial volume (see SPINE configuration).
        bool is_flash_matched;                              //!< Whether the flash is matched to the interaction.
        bool is_matched;                                    //!< Whether the interaction is matched to a true interaction.
        bool is_time_contained;                             //!< Whether the particle is time-contained (within the "in-time" region of the drift window).
        bool is_truth;                                      //!< Whether the interaction is a truth interaction.
        double lepton_p;                                    //!< Momentum of the lepton in the interaction.
        int64_t lepton_pdg_code;                            //!< PDG code of the lepton in the interaction.
        int64_t lepton_track_id;                            //!< Track ID of the lepton in the neutrino interaction.
        std::vector<int64_t> match_ids;                     //!< Interaction IDs of the considered matches (correspond to reco interaction IDs).
        std::vector<float> match_overlaps;                  //!< Intersection over union (IoU) of space points of the considered matches.
        int64_t mct_index;                                  //!< Index of the neutrino in the original MCTruth array.
        std::vector<int64_t> module_ids;                    //!< Module IDs (cryostat) of the interaction.
        float momentum[3];                                  //!< Momentum (vector) of the neutrino.
        double momentum_transfer;                           //!< Momentum transfer (Q^2) of the neutrino interaction.
        double momentum_transfer_mag;                       //!< Momentum transfer (Q3) of the neutrino interaction.
        int64_t nu_id;                                      //!< Neutrino ID (-1 = not a neutrino, 0 = first neutrino, 1 = second neutrino, etc.).
        int64_t nucleon;                                    //!< Hit nucleon in the neutrino interaction (see MCNeutrino).
        int64_t num_particles;                              //!< Number of particles in the interaction.
        int64_t num_primary_particles;                      //!< Number of primary particles in the interaction.
        int64_t orig_id;                                    //!< Original ID of the interaction.
        int64_t particle_counts[6];                         //!< Number of particles of each type in the interaction (photon, electron, muon, pion, proton, kaon).
        std::vector<int64_t> particle_ids;                  //!< Particle IDs in the interaction (see 'id' attribute of SRParticleTruthDLP).
        int64_t pdg_code;                                   //!< PDG code of the neutrino.
        float position[3];                                  //!< Position of the neutrino interaction.
        int64_t primary_particle_counts[6];                 //!< Number of primary particles of each type in the interaction (photon, electron, muon, pion, proton, kaon).
        std::vector<int64_t> primary_particle_ids;          //!< Primary particle IDs in the interaction (see 'id' attribute of SRParticleTruthDLP).
        int64_t quark;                                      //!< Hit quark in the neutrino interaction (see MCNeutrino).
        float reco_vertex[3];                               //!< Vertex of the interaction in detector coordinates (reco).
        int64_t size;                                       //!< Number of true non-ghost true-tagged space points.
        int64_t size_adapt;                                 //!< Number of reco non-ghost true-tagged space points.
        int64_t size_g4;                                    //!< Number of (rasterized) g4 energy depositions (no detector effects).
        int64_t target;                                     //!< Target in the neutrino interaction.
        double theta;                                       //!< Angle between the neutrino and the outgoing lepton [radians].
        std::string topology;                               //!< Topology of the interaction (e.g. "0g0e1mu0pi2p") considering only primaries.
        int64_t track_id;                                   //!< Track ID of the neutrino interaction.
        float vertex[3];                                    //!< Vertex of the interaction in detector coordinates (truth).
        std::vector<SRParticleTruthDLP> particles;          //!< Particles in the interaction.
  };
} // namespace caf
#endif // SRINTERACTIONTRUTHDLP_H
