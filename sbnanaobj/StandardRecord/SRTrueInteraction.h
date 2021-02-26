//  SRTrueInteraction.h
// \author  psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRTRUEINTERACTION_H
#define SRTRUEINTERACTION_H

#include "sbnanaobj/StandardRecord/SRTruthMatch.h"
#include "sbnanaobj/StandardRecord/SRTrueParticle.h"

namespace caf
{
  /// The SRTrueInteraction is a representation of neutrino interaction information
  class SRTrueInteraction
  {
  public:
    SRTrueInteraction();
    ~SRTrueInteraction() {  }

    int   initpdg;         //!< Initial PDG code of probe neutrino
    int   pdg;             //!< PDG code of probe neutrino
    int   inttype;         //!< Interaction type enum int_type::[...]
    int   index;           //!< Index of the matched true neutrino interaction (-1 if not matched to neutrino)
    int   targetPDG;       //!< PDG code of struck target
    int   genie_intcode;   //!< Interaction mode (as for LArSoft MCNeutrino::Mode() )

    bool    isnc;              //!< same as LArSoft "ccnc" - 0=CC, 1=NC
    bool    iscc;              //!< CC (true) or NC/interference (false)
    bool    isvtxcont;         //!< If true vertex is within TPC
    bool    is_numucc_primary; //!< Whether this is the "primary" reco neutrino slice as defined by the numu CC analysis

    float      E;             ///< True energy [GeV]
    float      plane0VisE;    ///< True interaction deposited energy on plane 0 (1st Ind.)
    float      plane1VisE;    ///< True interaction deposited energy on plane 1 (2nd Ind.)
    float      plane2VisE;    ///< True interaction deposited energy on plane 2 (Col.)
    float      time;           ///< Time
    float      bjorkenX;          //!< Bjorken x = (k-k')^2/(2*p.q) [Dimensionless]
    float      inelasticityY;     //!< Inelasticity y
    float      Q2;                //!< Q squared
    float      q0;                //!< q0, struck nucleon rest frame
    float      modq;              //!< |q|, struck nucleon rest frame
    float      q0_lab;            //!< q0, lab frame
    float      modq_lab;          //!< |q|, lab frame
    float      w;                 //!< Hadronic invariant mass W
    float      t;                 //!< Kinematic t
    float      eccqe;             //!< CCQE energy
    float      baseline;          //!< Distance from decay to interaction

    unsigned   plane0nhitprim;    //!< Number of hits from primary particles on plane 0 (1st Ind.)
    unsigned   plane1nhitprim;    //!< Number of hits from primary particles on plane 1 (2nd Ind.)
    unsigned   plane2nhitprim;    //!< Number of hits from primary particles on plane 2 (Col.)
    unsigned   plane0nhit;    //!< Number of hits from particles on plane 0 (1st Ind.)
    unsigned   plane1nhit;    //!< Number of hits from particles on plane 1 (2nd Ind.)
    unsigned   plane2nhit;    //!< Number of hits from particles on plane 2 (Col.)

    int        parent_dcy_mode;   //!< Parent hadron/muon decay mode
    int        parent_pdg;        //!< PDG Code of parent particle ID
    SRVector3D prod_vtx;          //!< Neutrino production vertex [cm; beam coordinates]
    SRVector3D parent_dcy_mom;    //!< Neutrino parent momentum at decay [GeV; beam coordinates]
    float      parent_dcy_E;      //!< Neutrino parent energy at decay [GeV]
    float      imp_weight;        //!< Importance weight from flux file

    SRVector3D        vtx;             //!< Vertex position in detector coord. [cm]
    SRVector3D        momentum;        //!< Neutrino three-momentum
    SRVector3D        position;        //!< Neutrino interaction position

    Det_t             det;

    interaction_mode_ mode;       ///< True mode of from enum

    generator_        generator;  ///< The generator that created this neutrino interaction
    std::vector<unsigned int>   genVersion; ///< Version of the generator that created this neutrino interaction

    int                        nprim;       ///< Number of primary daughters
    std::vector<SRTrueParticle> prim;       ///< Primary daughters, lepton comes first in vector.

  };

} // end namespace

#endif // SRTRUEINTERACTION_H
//////////////////////////////////////////////////////////////////////////////
