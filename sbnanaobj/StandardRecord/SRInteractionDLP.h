//  SRInteractionDLP.h
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRINTERACTIONDLP_H
#define SRINTERACTIONDLP_H

#include <vector>
#include <string>
#include <stdint.h>
#include "SRParticleDLP.h"

namespace caf
{
  /// The SRInteractionDLP is a representation of an interaction as
  /// defined/reconstructed by the Deep Learn Physics Machine Learning
  /// reconstruction.
  class SRInteractionDLP
  {
  public:
    SRInteractionDLP();
    ~SRInteractionDLP() {  }

    double coffset;                         //!< 
    int64_t crthit_id;                      //!<
    uint8_t crthit_matched;                 //!<
    int64_t crthit_matched_particle_id;     //!<
    double flash_hypothesis;                //!<
    int64_t flash_id;                       //!<
    double flash_time;                      //!<
    double flash_total_pe;                  //!<
    uint8_t fmatched;                       //!<
    int64_t id;                             //!<
    int64_t image_id;                       //!<
    bool is_ccrosser;                       //!<
    bool is_contained;                      //!<
    bool is_fiducial;                       //!<
    bool is_neutrino;                       //!<
    bool is_principal_match;                //!<
    std::vector<int64_t> match;             //!<
    std::vector<float> match_overlap;       //!<
    uint8_t matched;                        //!<
    int64_t nu_id;                          //!<
    int64_t num_particles;                  //!<
    int64_t num_primaries;                  //!<
    std::vector<SRParticleDLP> particles;   //!<
    int64_t particle_counts[7];             //!<
    std::vector<int64_t> particle_ids;      //!<
    int64_t primary_counts[7];              //!<
    int64_t size;                           //!<
    std::string topology;                   //!<
    std::string units;                      //!<
    float vertex[3];                        //!<
    std::string vertex_mode;                //!<
    int64_t volume_id;                      //!<
  };

} // end namespace

#endif // SRINTERACTIONDLP_H
////////////////////////////////////////////////////////////////////////
