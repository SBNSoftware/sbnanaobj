//  SRInteractionDLP.h
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRPARTICLETRUTHDLP_H
#define SRPARTICLETRUTHDLP_H

#include <vector>
#include <stdint.h>
#include <string>

namespace caf
{
  //class SRParticleDLP;
  /// The SRParticleTruthDLP is a representation of an particle as
  /// defined/reconstructed by the Deep Learn Physics Machine Learning
  /// reconstruction.
  class SRParticleTruthDLP
  {
  public:
    SRParticleTruthDLP();
    ~SRParticleTruthDLP() {  }

    std::string ancestor_creation_process; //!<
    int64_t ancestor_pdg_code;             //!<
    std::vector<float> ancestor_position;  //!<
    double ancestor_t;                     //!<
    int64_t ancestor_track_id;             //!<
    double calo_ke;                        //!< 
    double calo_ke_tng;                    //!<
    std::vector<int64_t> children_counts;  //!<
    double coffset;                        //!<
    std::string creation_process;          //!<
    double csda_ke;                        //!<
    double csda_ke_tng;                    //!<
    double depositions_sum;                //!<
    double distance_travel;                //!<
    float end_dir[3];                      //!<
    float end_point[3];                    //!<
    float end_position[3];                 //!<
    double energy_deposit;                 //!<
    double energy_init;                    //!<
    std::vector<float> first_step;         //!<
    std::vector<int64_t> fragment_ids;     //!<
    int64_t group_id;                      //!<
    int64_t id;                            //!<
    int64_t image_id;                      //!<
    std::vector<int64_t> index;            //!<
    int64_t interaction_id;                //!<
    bool is_ccrosser;                      //!<
    bool is_contained;                     //!<
    bool is_primary;                       //!<
    bool is_principal_match;               //!<
    bool is_valid;                         //!<
    double ke;                             //!<
    std::vector<float> last_step;          //!<
    double length;                         //!<
    double length_tng;                     //!<
    std::vector<int64_t> match;            //!<
    std::vector<float> match_overlap;      //!<
    uint64_t matched;                      //!<
    double mcs_ke;                         //!<
    double mcs_ke_tng;                     //!<
    int64_t mcst_index;                    //!<
    int64_t mct_index;                     //!<
    float momentum[3];                     //!<
    int64_t nu_id;                         //!<
    int64_t num_fragments;                 //!<
    int64_t num_voxels;                    //!<
    double p;                              //!<
    std::string parent_creation_process;   //!<
    int64_t parent_id;                     //!<
    int64_t parent_pdg_code;               //!<
    std::vector<float> parent_position;    //!<
    double parent_t;                       //!<
    double parent_track_id;                //!<
    int64_t pdg_code;                      //!<
    int64_t pid;                           //!<
    std::vector<float> position;           //!<
    float sed_depositions_MeV_sum;         //!<
    std::vector<int64_t> sed_index;        //!<
    int64_t sed_size;                      //!<
    int64_t semantic_type;                 //!<
    int64_t shape;                         //!<
    int64_t size;                          //!<
    float start_dir[3];                    //!<
    float start_point[3];                  //!<
    double t;                              //!<
    int64_t track_id;                      //!<
    double truth_depositions_MeV_sum;      //!<
    double truth_depositions_sum;          //!<
    std::vector<int64_t> truth_index;      //!<
    float truth_momentum[3];               //!<
    int64_t truth_size;                    //!<
    double truth_start_dir[3];             //!<
    std::string units;                     //!<
    int64_t volume_id;                     //!<
  };

} // end namespace

#endif // SRPARTICLETRUTHDLP_H
////////////////////////////////////////////////////////////////////////
