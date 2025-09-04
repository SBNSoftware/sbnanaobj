/**
 * @file SRParticleDLP.h
 * @brief Definition of the SRParticleDLP class.
 * @author mueller@fnal.gov
*/
#ifndef SRPARTICLEDLP_H
#define SRPARTICLEDLP_H

#include <vector>
#include <stdint.h>

#if defined(__castxml_major__) && !defined(__clang__)
#else
# include <string>
#endif

namespace caf
{
    /**
     * @brief The SRParticleDLP class is a representation of an particle
     * as defined/reconstructed by the SPINE (Deep Learn Physics)
     * reconstruction. It encapsulates reconstructed information about a single
     * particle.
    */
    class SRParticleDLP
    {
        public:
        SRParticleDLP();
        ~SRParticleDLP();

        float axial_spread;                                 //!< Axial spread of the particle.
        double calo_ke;                                     //!< Calorimetric kinetic energy.
        double cathode_offset;                              //!< Distance from the cathode.
        double chi2_per_pid[6];                             //!< Chi2 score per PID hypothesis.
        int64_t chi2_pid;                                   //!< PID from the chi2-based PID.
        double csda_ke;                                     //!< Continuous-slowing-down-approximation kinetic energy.
        double csda_ke_per_pid[6];                          //!< CSDA kinetic energy per PID.
        float depositions_sum;                              //!< TO DO.
        float directional_spread;                           //!< Directional spread of the particle.
        float end_dir[3];                                   //!< Unit direction vector calculated at the particle end point.
        float end_point[3];                                 //!< End point (vector) of the particle.
        std::vector<int32_t> fragment_ids;                  //!< Fragment IDs comprising the particle.
        int64_t id;                                         //!< Particle ID.
        int64_t interaction_id;                             //!< Parent interaction ID.
        bool is_cathode_crosser;                            //!< Whether the particle is a cathode-crosser.
        bool is_contained;                                  //!< Whether the particle is contained.
        bool is_matched;                                    //!< Whether the particle is matched.
        bool is_primary;                                    //!< Whether the particle is a primary particle.
        bool is_time_contained;                             //!< Whether the particle is time-contained (within the "in-time" region of the drift window).
        bool is_truth;                                      //!< Whether the particle is a truth particle.
        bool is_valid;                                      //!< Whether the particle passes thresholds and counts towards the topology.
        double ke;                                          //!< Kinetic energy from best energy estimator (CSDA, calorimetric, or MCS).
        double length;                                      //!< Length of the particle.
	    double mass;                                        //!< Mass of the particle (according to assigned PID).
        std::vector<int64_t> match_ids;                     //!< Match ID.
        std::vector<float> match_overlaps;                  //!< Match overlap.
        double mcs_ke;                                      //!< Multiple Coulomb scattering kinetic energy.
        double mcs_ke_per_pid[6];                           //!< MCS kinetic energy per PID.
        std::vector<int64_t> module_ids;                    //!< Module IDs of the particle.
        float momentum[3];                                  //!< Momentum (vector) of the particle.
        int64_t num_fragments;                              //!< TO DO.
        float p;                                            //!< Momentum magnitude.
        int64_t pdg_code;                                   //!< PDG code of the particle.
        int64_t pid;                                        //!< Particle ID (see Pid_t enumeration).
	    float pid_scores[6];                                //!< PID softmax scores.
        std::vector<int32_t> ppn_ids;                       //!< PPN IDs of the particle.
	    float primary_scores[2];                            //!< Primary softmax scores
        int64_t shape;                                      //!< Semantic type of the particle (see Shape_t enumeration).
        int64_t size;                                       //!< TO DO.
        double start_dedx;                                  //!< dE/dx at the start of the particle.
        float start_dir[3];                                 //!< Unit direction vector calculated at the particle start point.
        float start_point[3];                               //!< Start point (vector) of the particle.
        float start_straightness;                           //!< Straightness at the start of the particle.
        std::string units;                                  //!< Units in which the position coordinates are expressed.
        double vertex_distance;                             //!< Distance from the vertex.
  };
} // namespace caf
#endif // SRPARTICLEDLP_H
