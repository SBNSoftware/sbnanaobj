/**
 * @file SRInteractionDLP.h
 * @brief Definition of the SRInteractionDLP class.
 * @author mueller@fnal.gov 
*/
#ifndef SRINTERACTIONDLP_H
#define SRINTERACTIONDLP_H

#include <vector>
#include <stdint.h>
#include "SRParticleDLP.h"

#if defined(__castxml_major__) && !defined(__clang__)
#else
# include <string>
#endif

namespace caf
{
    /**
     * @brief The SRInteractionDLP class is a representation of an interaction
     * as defined/reconstructed by the SPINE (Deep Learn Physics)
     * reconstruction. It encapsulates reconstructed information about the
     * interaction itself and some high-level information about the particles
     * in the interaction.
    */
    class SRInteractionDLP
    {
        public:
        SRInteractionDLP();
        ~SRInteractionDLP();

        double cathode_offset;                              //!< Distance from the cathode.
	    float depositions_sum;                              //!< TO DO.
        double flash_hypo_pe;                               //!< Total PE of the hypothesized flash.
        std::vector<int64_t> flash_ids;                     //!< Flash IDs for the matched flashes.
        std::vector<float> flash_times;                     //!< Time of the matched flashes.
        double flash_total_pe;                              //!< Total PE of the matched flash.
        std::vector<int64_t> flash_volume_ids;              //!< Volume IDs of the matched flashes.
        int64_t id;                                         //!< Interaction ID.
        bool is_cathode_crosser;                            //!< Whether the interaction is a cathode-crosser.
        bool is_contained;                                  //!< Whether the interaction is contained.
        bool is_fiducial;                                   //!< Whether the interaction has an interaction in the fiducial volume.
        bool is_flash_matched;                              //!< Whether the flash is matched to the interaction.
        bool is_matched;                                    //!< Whether the interaction is matched to a true interaction.
        bool is_truth;                                      //!< Whether the interaction is a truth interaction.
        std::vector<int64_t> match_ids;                     //!< Interaction IDs of the considered matches (correspond to true interactions).
        std::vector<float> match_overlaps;                  //!< Intersection over union (IoU) of the considered matches.
        std::vector<int64_t> module_ids;                    //!< Module IDs of the interaction.
	    int64_t num_particles;                              //!< TO DO.
	    int64_t particle_counts[6];                         //!< TO DO.
        std::vector<int64_t> particle_ids;                  //!< Particle IDs in the interaction.
        int64_t primary_particle_counts[6];                 //!< TO DO.
        int64_t size;                                       //!< TO DO.
        std::string topology;                               //!< Topology of the interaction (e.g. "0g0e1mu0pi2p") considering only primaries.
        std::string units;                                  //!< Units in which the position coordinates are expressed.
	    float vertex[3];                                    //!< Vertex of the interaction in detector coordinates.
        std::vector<SRParticleDLP> particles;               //!< Particles in the interaction.
  };
} // namespace caf
#endif // SRINTERACTIONDLP_H
