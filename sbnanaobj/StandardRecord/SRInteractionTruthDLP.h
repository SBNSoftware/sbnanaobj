/**
 * @file SRInteractionTruthDLP.h
 * @brief Definition of the SRInteractionTruthDLP class.
 * @author mueller@fnal.gov
*/
#ifndef SRINTERACTIONTRUTHDLP_H
#define SRINTERACTIONTRUTHDLP_H

#include <vector>
#include <array>
#include <stdint.h>
#include <string>
#include "SRParticleTruthDLP.h"

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
        ~SRInteractionTruthDLP();

        double bjorken_x;                                   //!< Bjorken x of the neutrino interaction.
        double cathode_offset;                              //!< Distance from the cathode.
        std::string creation_process;                       //!< Creation process of the neutrino.
        int64_t current_type;                               //!< Current type of the neutrino.
	double depositions_adapt_sum;                       //!< TO DO.
	double depositions_adapt_q_sum;                     //!< TO DO.
	int64_t depositions_g4_sum;                         //!< TO DO.
	double depositions_sum;                             //!< TO DO.
	double depositions_q_sum;                           //!< TO DO.
        double energy_init;                                 //!< Initial energy of the neutrino.
        double energy_transfer;                             //!< Energy transfer (Q0) of the neutrino interaction.
        double flash_hypo_pe;                               //!< Total PE of the hypothesized flash.
        int64_t flash_id;                                   //!< Flash ID for the matched flash.
        double flash_time;                                  //!< Time of the matched flash.
        double flash_total_pe;                              //!< Total PE of the matched flash.
        double hadronic_invariant_mass;                     //!< Hadronic invariant mass of the neutrino.
        int64_t id;                                         //!< Interaction ID.
	std::vector<int64_t> index;                         //!< List of coordinate indices that comprise the interaction.
	std::vector<int64_t> index_adapt;                   //!< Index corresponding to the true interaction in the adapted cluster label points.
	std::vector<int64_t> index_g4;                      //!< Index corresponding to the true interaction in the G4 points (effectively SED).
        double inelasticity;                                //!< Inelasticity of the neutrino interaction.
        int64_t interaction_id;                             //!< Deprecated.
        int64_t interaction_mode;                           //!< Interaction mode of the neutrino.
        int64_t interaction_type;                           //!< Interaction type of the neutrino.
        bool is_cathode_crosser;                            //!< Whether the interaction is a cathode-crosser.
        bool is_contained;                                  //!< Whether the interaction is contained.
        bool is_fiducial;                                   //!< Whether the interaction has an interaction in the fiducial volume.
        bool is_flash_matched;                              //!< Whether the flash is matched to the interaction.
        bool is_matched;                                    //!< Whether the interaction is matched to a true interaction.
        bool is_truth;                                      //!< Whether the interaction is a truth interaction.
        double lepton_p;                                    //!< Momentum of the lepton in the interaction.
        int64_t lepton_pdg_code;                            //!< PDG code of the lepton in the interaction.
        int64_t lepton_track_id;                            //!< Track ID of the lepton in the neutrino interaction.
        std::vector<int64_t> match_ids;                     //!< Interaction IDs of the considered matches (correspond to true interactions).
        std::vector<float> match_overlaps;                  //!< Intersection over union (IoU) of the considered matches.
        int64_t mct_index;                                  //!< Index of the neutrino in the original MCTruth array.
        std::vector<int64_t> module_ids;                    //!< Module IDs of the interaction.
        //std::array<float, 3> momentum;                      //!< Momentum (vector) of the neutrino.
	float momentum[3];
        double momentum_transfer;                           //!< Momentum transfer (Q^2) of the neutrino interaction.
        double momentum_transfer_mag;                       //!< Momentum transfer (Q3) of the neutrino interaction.
        int64_t nu_id;                                      //!< Neutrino ID (-1 = not a neutrino, 0 = first neutrino, 1 = second neutrino, etc.).
        int64_t nucleon;                                    //!< Nucleon in the neutrino interaction.
	int64_t num_particles;                              //!< TO DO.
        int64_t orig_id;                                    //!< Original ID of the interaction.
	//std::array<int64_t, 6> particle_counts;             //!< TO DO.
	int64_t particle_counts[6];
        std::vector<int64_t> particle_ids;                  //!< Particle IDs in the interaction.
        int64_t pdg_code;                                   //!< PDG code of the neutrino.
        //std::array<float, 3> position;                      //!< Position of the neutrino interaction.
	float position[3];
	//std::array<int64_t, 6> primary_particle_counts;     //!< TO DO.
	int64_t primary_particle_counts[6];
        int64_t quark;                                      //!< Quark in the neutrino interaction.
        //std::array<float, 3> reco_vertex;                   //!< Vertex of the interaction in detector coordinates (reco).
	float reco_vertex[3];
	int64_t size;                                       //!< TO DO.
	int64_t size_adapt;                                 //!< TO DO.
	int64_t size_g4;                                    //!< TO DO.
        int64_t target;                                     //!< Target in the neutrino interaction.
        double theta;                                       //!< Angle of the neutrino interaction.
        std::string topology;                               //!< Topology of the interaction (e.g. "0g0e1mu0pi2p") considering only primaries.
        int64_t track_id;                                   //!< Track ID of the neutrino interaction.
	std::string units;                                  //!< Units in which the position coordinates are expressed.
        //std::array<float, 3> vertex;                        //!< Vertex of the interaction in detector coordinates (truth).
	float vertex[3];

        std::vector<SRParticleTruthDLP> particles;          //!< Particles in the interaction.
  };
} // namespace caf
#endif // SRINTERACTIONTRUTHDLP_H
