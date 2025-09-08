/**
 * @file SRParticleTruthDLP.h
 * @brief Definition of the SRParticleTruthDLP class.
 * @author mueller@fnal.gov
*/
#ifndef SRPARTICLETRUTHDLP_H
#define SRPARTICLETRUTHDLP_H

#include <vector>
#include <stdint.h>

#if defined(__castxml_major__) && !defined(__clang__)
#else
# include <string>
#endif

namespace caf
{
    /**
    * @brief The SRParticleTruthDLP class is a representation of the truth 
    * information associated with a particle as defined by the SPINE (Deep
    * Learn Physics) reconstruction. It encapsulates truth information about
    * the particle itself and some high-level information about the particle's
    * ancestry and children.
    */
    class SRParticleTruthDLP
    {
        public:
        SRParticleTruthDLP();
        
        std::string ancestor_creation_process;         //!< Geant4 creation process of the ancestor particle.
        int64_t ancestor_pdg_code;                     //!< PDG code of the ancestor particle.
        float ancestor_position[3];                    //!< Position of the ancestor particle.
        double ancestor_t;                             //!< Time of the ancestor particle.
        int64_t ancestor_track_id;                     //!< Track ID of the ancestor particle.
        double calo_ke;                                //!< Calorimetric kinetic energy.
        double cathode_offset;                         //!< Distance from the cathode [cm].
        std::vector<int64_t> children_counts;          //!< Number of children of the particle.
        std::vector<int64_t> children_id;              //!< List of particle ID of children particles.
        std::string creation_process;                  //!< Geant4 creation process of the particle.
        double csda_ke;                                //!< Continuous-slowing-down-approximation kinetic energy.
        double csda_ke_per_pid[6];                     //!< CSDA kinetic energy per PID.
        float depositions_adapt_q_sum;                 //!< Total tagged (reco non-ghost) charge deposited [ADC].
        float depositions_adapt_sum;                   //!< Total tagged (reco non-ghost) energy deposited [MeV].
        int64_t depositions_g4_sum;                    //!< Total energy deposited energy at the G4 level [MeV].
        float depositions_q_sum;                       //!< Total tagged (true non-ghost) charge deposited [ADC].
        float depositions_sum;                         //!< Total tagged (true non-ghost) energy deposited [MeV].
        double distance_travel;                        //!< Distance traveled by the neutrino from production to the interaction.
        float end_dir[3];                              //!< Unit direction vector calculated at the particle end point.
        float end_momentum[3];                         //!< Momentum (vector) of the particle at the end.
        float end_p;                                   //!< Momentum magnitude of the particle at the end.
        float end_point[3];                            //!< End point (vector) of the particle.
        float end_position[3];                         //!< End position (vector) of the particle.
        double end_t;                                  //!< Time of the particle at the end.
        double energy_deposit;                         //!< Energy deposited by the particle.
        double energy_init;                            //!< Initial energy of the particle. 
        float first_step[3];                           //!< Coordinates of the first step of the particle.
        std::vector<int32_t> fragment_ids;             //!< Fragment IDs comprising the particle.
        int64_t group_id;                              //!< Group ID of the particle.
        int64_t group_primary;                         //!< Whether the particle is a primary within its group.
        int64_t id;                                    //!< Particle ID.
        int64_t interaction_id;                        //!< Parent interaction ID.
        int64_t interaction_primary;                   //!< Whether the particle is a primary within its interaction (equivalent to is_primary).
        bool is_cathode_crosser;                       //!< Whether the particle is a cathode-crosser.
        bool is_contained;                             //!< Whether the particle is contained.
        bool is_matched;                               //!< Whether the particle is matched.
        bool is_primary;                               //!< Whether the particle is a primary particle.
        bool is_time_contained;                        //!< Whether the particle is time-contained (within the "in-time" region of the drift window).
        bool is_truth;                                 //!< Whether the particle is a truth particle.
        bool is_valid;                                 //!< Whether the particle passes thresholds and counts towards topology.
        double ke;                                     //!< Kinetic energy from best energy estimator (CSDA, calorimetric, or MCS). 
        float last_step[3];                            //!< Coordinates of the last step of the particle.
        double length;                                 //!< Length of the particle.
        double mass;                                   //!< Mass of the particle.
        std::vector<int64_t> match_ids;                //!< Particle match IDs.
        std::vector<float> match_overlaps;             //!< Particle match overlaps.
        double mcs_ke;                                 //!< Multiple Coulomb scattering kinetic energy.
        double mcs_ke_per_pid[6];                      //!< MCS kinetic energy per PID.
        int64_t mcst_index;                            //!< MCST index.
        int64_t mct_index;                             //!< Index of the particle in the original MCTruth array.
        std::vector<int64_t> module_ids;               //!< Module IDs of the particle. 
        float momentum[3];                             //!< Momentum (vector) of the particle.
        int64_t nu_id;                                 //!< Neutrino ID (-1 = not a neutrino, 0 = first neutrino, 1 = second neutrino, etc.).
        int64_t num_fragments;                         //!< Number of particle fragments.
        int64_t num_voxels;                            //!< Number of voxels comprising the particle.
        std::vector<int64_t> orig_children_id;         //!< Original ID of the children particles.
        int64_t orig_group_id;                         //!< Original group ID of the particle.
        int64_t orig_id;                               //!< Original ID of the particle.
        int64_t orig_interaction_id;                   //!< Interaction ID as it was stored in the parent LArCV file under the interaction_id attribute.
        int64_t orig_parent_id;                        //!< Parent ID as it was stored in the parent LArCV file under the parent_id attribute.
        double p;                                      //!< Momentum magnitude.
        std::string parent_creation_process;           //!< Geant4 creation process of the parent particle.
        int64_t parent_id;                             //!< Parent particle ID.
        int64_t parent_pdg_code;                       //!< PDG code of the parent particle. 
        float parent_position[3];                      //!< Position of the parent particle.
        double parent_t;                               //!< Time of the parent particle.
        double parent_track_id;                        //!< Track ID of the parent particle.
        int64_t pdg_code;                              //!< PDG code of the particle.
        int64_t pid;                                   //!< Particle ID (see Pid enumeration).
        float position[3];                             //!< Position of the particle.
        float reco_end_dir[3];                         //!< Direction vector at the reconstructed end point of the particle.
        double reco_ke;                                //!< Kinetic energy estimator using reconstructed information.
        double reco_length;                            //!< Reconstructed length of the particle.
        double reco_momentum[3];                       //!< Reconstructed momentum (vector) of the particle.
        float reco_start_dir[3];                       //!< Direction vector at the reconstructed start point of the particle.
        int64_t shape;                                 //!< Semantic type of the particle (see SemanticType enumeration).
        int64_t size;                                  //!< Size of the particle (number of voxels).
        int64_t size_adapt;                            //!< Size of the particle using adaptive thresholds (number of voxels).
        int64_t size_g4;                               //!< Size of the particle at the G4 level (number of voxels).
        float start_dir[3];                            //!< Unit direction vector calculated at the particle start point.
        float start_point[3];                          //!< Start point (vector) of the particle.
        double t;                                      //!< Time of the particle.
        int64_t track_id;                              //!< Track ID of the particle.
        std::string units;                             //!< Units in which the position coordinates are expressed (default: "cm").
    };
} // namespace caf
#endif // SRPARTICLETRUTHDLP_H