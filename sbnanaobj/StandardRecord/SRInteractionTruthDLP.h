//  SRInteractionTruthDLP.h
// \author  mueller@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRINTERACTIONTRUTHDLP_H
#define SRINTERACTIONTRUTHDLP_H

#include <vector>
#include <stdint.h>
#include <string>
#include "SRParticleTruthDLP.h"

namespace caf
{
  /// The SRInteractionTruthDLP is a representation of an interaction as
  /// defined/reconstructed by the Deep Learn Physics Machine Learning
  /// reconstruction.

  class SRInteractionTruthDLP
  {
  public:
    SRInteractionTruthDLP();
    ~SRInteractionTruthDLP() {  }

    double coffset;                             //!< 
    int64_t crthit_id;                          //!<
    uint8_t crthit_matched;                     //!<
    int64_t crthit_matched_particle_id;         //!<
    double flash_hypothesis;                    //!<
    int64_t flash_id;                           //!<
    double flash_time;                          //!<
    double flash_total_pe;                      //!<
    uint8_t fmatched;                           //!<
    int64_t id;                                 //!<
    int64_t image_id;                           //!<
    bool is_ccrosser;                           //!<
    bool is_contained;                          //!<
    bool is_fiducial;                           //!<
    bool is_neutrino;                           //!<
    bool is_principal_match;                    //!<
    std::vector<int64_t> match;                 //!<
    std::vector<float> match_overlap;           //!<
    uint8_t matched;                            //!<
    double nu_bjorken_x;                        //!<
    std::string nu_creation_process;            //!<
    int64_t nu_current_type;                    //!<
    double nu_distance_travel;                  //!<
    double nu_energy_deposit;                   //!<
    double nu_energy_init;                      //!<
    double nu_hadronic_invariant_mass;          //!<
    int64_t nu_id;                              //!<
    double nu_inelasticity;                     //!<
    int64_t nu_interaction_mode;                //!<
    int64_t nu_interaction_type;                //!<
    int64_t nu_lepton_track_id;                 //!<
    int64_t nu_mcst_index;                      //!<
    int64_t nu_mct_index;                       //!<
    double nu_momentum_transfer;                //!<
    int64_t nu_nucleon;                         //!<
    int64_t nu_num_voxels;                      //!<
    double nu_p;                                //!<
    int64_t nu_pdg_code;                        //!<
    std::vector<double> nu_position;            //!<
    int64_t nu_quark;                           //!<
    double nu_t;                                //!<
    int64_t nu_target;                          //!<
    double nu_theta;                            //!<
    int64_t nu_track_id;                        //!<
    int64_t nu_truth_id;                        //!<
    int64_t num_particles;                      //!<
    int64_t num_primaries;                      //!<
    std::vector<SRParticleTruthDLP> particles;  //!<
    int64_t particle_counts[7];                 //!<
    std::vector<int64_t> particle_ids;          //!<
    int64_t primary_counts[7];                  //!<
    int64_t size;                               //!<
    std::string topology;                       //!<
    int64_t truth_id;                           //!<
    std::vector<int64_t> truth_particle_counts; //!<
    std::vector<int64_t> truth_primary_counts;  //!<
    std::string truth_topology;                 //!<
    float truth_vertex[3];                      //!<
    std::string units;                          //!<
    float vertex[3];                            //!<
    std::string vertex_mode;                    //!<
    int64_t volume_id;                          //!<
  };

} // end namespace

#endif // SRINTERACTIONTRUTHDLP_H
////////////////////////////////////////////////////////////////////////
