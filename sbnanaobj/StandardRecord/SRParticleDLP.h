/**
 * @file SRParticleDLP.h
 * @brief Definition of the SRParticleDLP class.
 * @author mueller@fnal.gov
*/
#ifndef SRPARTICLEDLP_H
#define SRPARTICLEDLP_H

#include <vector>
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
        std::array<float, 3> end_dir;                       //!< Unit direction vector calculated at the particle end point.
        std::array<float, 3> end_point;                     //!< End point (vector) of the particle.
        std::vector<int32_t> fragment_ids;                  //!< Fragment IDs comprising the particle.
        int64_t id;                                         //!< Particle ID.
        //std::vector<int64_t> index;                         //!< List of coordinate indices that comprise the particle.
        int64_t interaction_id;                             //!< Parent interaction ID.
        bool is_cathode_crosser;                            //!< Whether the particle is a cathode-crosser.
        bool is_contained;                                  //!< Whether the particle is contained.
        bool is_matched;                                    //!< Whether the particle is matched.
        bool is_primary;                                    //!< Whether the particle is a primary particle.
        bool is_truth;                                      //!< Whether the particle is a truth particle.
        bool is_valid;                                      //!< Whether the particle passes thresholds and counts towards the topology.
        double ke;                                          //!< Kinetic energy according to the assumed best energy estimator (CSDA, calorimetric, or MCS).
        double length;                                      //!< Length of the particle.
        std::vector<int64_t> match_ids;                     //!< Match ID.
        std::vector<float> match_overlaps;                  //!< Match overlap.
        double mcs_ke;                                      //!< Multiple Coulomb scattering kinetic energy.
        std::vector<float> module_ids;                      //!< Module IDs of the particle.
        std::array<float, 3> momentum;                      //!< Momentum (vector) of the particle.
        float p;                                            //!< Momentum magnitude.
        int64_t pdg_code;                                   //!< PDG code of the particle.
        Pid_t pid;                                          //!< Particle ID (see Pid_t enumeration).
        std::array<float, 5> pid_scores;                    //!< PID softmax scores.
        std::vector<int32_t> ppn_ids;                       //!< PPN IDs of the particle.
        std::array<float, 2> primary_scores;                //!< Primary softmax scores.
        Shape_t shape;                                      //!< Semantic type of the particle (see Shape_t enumeration).
        std::array<float, 3> start_dir;                     //!< Unit direction vector calculated at the particle start point.
        std::array<float, 3> start_point;                   //!< Start point (vector) of the particle.
        //std::string units;                                  //!< Units in which the position coordinates are expressed.
  };
} // namespace caf
#endif // SRPARTICLEDLP_H