//  SRInteractionDLP.h
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRPARTICLEDLP_H
#define SRPARTICLEDLP_H

#include <vector>
#include <stdint.h>
#include <string>

namespace caf
{
  /// The SRParticleDLP is a representation of an particle as
  /// defined/reconstructed by the Deep Learn Physics Machine Learning
  /// reconstruction.
  class SRParticleDLP
  {
  public:
    SRParticleDLP();
    ~SRParticleDLP() {  }

    double calo_ke;                      //!< 
    double coffset;                      //!<
    double csda_ke;                      //!<
    double depositions_sum;              //!<
    float end_dir[3];                    //!<
    float end_point[3];                  //!<
    std::vector<int64_t> fragment_ids;   //!<
    int64_t id;                          //!<
    int64_t image_id;                    //!<
    std::vector<int64_t> index;          //!<
    int64_t interaction_id;              //!<
    bool is_ccrosser;                    //!<
    bool is_contained;                   //!<
    bool is_primary;                     //!<
    bool is_principal_match;             //!<
    bool is_valid;                       //!<
    double ke;                           //!<
    double length;                       //!<
    std::vector<int64_t> match;          //!<
    std::vector<float> match_overlap;    //!<
    uint8_t matched;                     //!<
    double mcs_ke;                       //!<
    float momentum[3];                   //!<
    int64_t nu_id;                       //!<
    int64_t num_fragments;               //!<
    int64_t pdg_code;                    //!<
    int64_t pid;                         //!<
    float pid_scores[5];                 //!<
    float primary_scores[2];             //!<
    int64_t semantic_type;               //!<
    int64_t size;                        //!<
    float start_dir[3];                  //!<
    float start_point[3];                //!<
    std::string units;                   //!<
    int64_t volume_id;                   //!<
  };

} // end namespace

#endif // SRPARTICLEDLP_H
////////////////////////////////////////////////////////////////////////
