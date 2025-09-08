/**
 * @file SRInteractionDLP.h
 * @brief Definition of the SRInteractionDLP class.
 * @author mueller@fnal.gov 
*/
#ifndef SRINTERACTIONDLP_H
#define SRINTERACTIONDLP_H

#include <vector>
#include <stdint.h>
#include "sbnanaobj/StandardRecord/SRParticleDLP.h"

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

        double cathode_offset;                              //!< Distance from the cathode [cm].
        float depositions_sum;                              //!< Sum of deposited (de-ghosted) energy [MeV].
        double flash_hypo_pe;                               //!< Total PE of the hypothesized flash from OpT0Finder.
        std::vector<int64_t> flash_ids;                     //!< Flash IDs for the matched flashes (uses OpT0Finder).
        std::vector<float> flash_scores;                    //!< Score of the matched flashes (uses OpT0Finder).
        std::vector<float> flash_times;                     //!< Time of the matched flashes (uses OpT0Finder).
        double flash_total_pe;                              //!< Total PE of the matched flash (uses OpT0Finder).
        std::vector<int64_t> flash_volume_ids;              //!< Volume IDs of the matched flashes (uses OpT0Finder).
        int64_t id;                                         //!< Interaction ID (dense enumeration starting from 0 within the event).
        bool is_cathode_crosser;                            //!< Whether the interaction is a cathode-crosser (some particle crosses the cathode).
        bool is_contained;                                  //!< Whether the interaction is contained within some margin from the detector walls (see SPINE configuration)
        bool is_fiducial;                                   //!< Whether the interaction is in the fiducial volume (see SPINE configuration).
        bool is_flash_matched;                              //!< Whether the flash is matched to the interaction (uses OpT0Finder).
        bool is_matched;                                    //!< Whether the interaction is matched to a true interaction.
        bool is_time_contained;                             //!< Whether the particle is time-contained (within the "in-time" region of the drift window).
        bool is_truth;                                      //!< Whether the interaction is a truth interaction.
        std::vector<int64_t> match_ids;                     //!< Interaction IDs of the considered matches (correspond to true interaction IDs).
        std::vector<float> match_overlaps;                  //!< Intersection over union (IoU) of space points of the considered matches.
        std::vector<int64_t> module_ids;                    //!< Module IDs (cryostat) of the interaction.
        int64_t num_particles;                              //!< The number of particles in the interaction.
        int64_t num_primary_particles;                      //!< The number of primary particles in the interaction.
        int64_t particle_counts[6];                         //!< The number of particles of each type in the interaction (photon, electron, muon, pion, proton, kaon).
        std::vector<int64_t> particle_ids;                  //!< Particle IDs in the interaction (see 'id' attribute of SRParticleDLP).
        int64_t primary_particle_counts[6];                 //!< The number of primary particles of each type in the interaction (photon, electron, muon, pion, proton, kaon).
        std::vector<int64_t> primary_particle_ids;          //!< Primary particle IDs in the interaction (see 'id' attribute of SRParticleDLP).
        int64_t size;                                       //!< The size of the interaction (number of voxels).
        std::string topology;                               //!< Topology of the interaction (e.g. "0g0e1mu0pi2p") considering only primaries.
        float vertex[3];                                    //!< Vertex of the interaction in detector coordinates.
        std::vector<SRParticleDLP> particles;               //!< Particles in the interaction.
  };
} // namespace caf
#endif // SRINTERACTIONDLP_H
