/**
 * @file SRParticleDLP.h
 * @brief Definition of the SRParticleDLP class.
 * @author mueller@fnal.gov
*/
#ifndef SRPARTICLEDLP_H
#define SRPARTICLEDLP_H

#include <vector>
#include <array>
#include <stdint.h>
#include <string>

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

        double calo_ke;                                     //!< Calorimetric kinetic energy.
        double cathode_offset;                              //!< Distance from the cathode.
        double csda_ke;                                     //!< Continuous-slowing-down-approximation kinetic energy.
	float depositions_sum;                              //!< TO DO.
	float end_dir[3];                                   //!< Unit direction vector calculated at the particle end point.
	float end_point[3];                                 //!< End point (vector) of the particle.
        std::vector<int32_t> fragment_ids;                  //!< Fragment IDs comprising the particle.
        int64_t id;                                         //!< Particle ID.
        std::vector<int64_t> index;                         //!< List of coordinate indices that comprise the particle.
        int64_t interaction_id;                             //!< Parent interaction ID.
        bool is_cathode_crosser;                            //!< Whether the particle is a cathode-crosser.
        bool is_contained;                                  //!< Whether the particle is contained.
        bool is_matched;                                    //!< Whether the particle is matched.
        bool is_primary;                                    //!< Whether the particle is a primary particle.
        bool is_truth;                                      //!< Whether the particle is a truth particle.
        bool is_valid;                                      //!< Whether the particle passes thresholds and counts towards the topology.
        double ke;                                          //!< Kinetic energy from best energy estimator (CSDA, calorimetric, or MCS).
        double length;                                      //!< Length of the particle.
	double mass;                                        //!< TO DO.
        std::vector<int64_t> match_ids;                     //!< Match ID.
        std::vector<float> match_overlaps;                  //!< Match overlap.
        double mcs_ke;                                      //!< Multiple Coulomb scattering kinetic energy.
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
	float start_dir[3];                                 //!< Unit direction vector calculated at the particle start point.
	float start_point[3];                               //!< Start point (vector) of the particle.
        std::string units;                                  //!< Units in which the position coordinates are expressed.
  };
} // namespace caf
#endif // SRPARTICLEDLP_H
