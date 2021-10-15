//  SRTrueInteraction.h
// \author  psihas@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SRTRUEINTERACTION_H
#define SRTRUEINTERACTION_H

#include "sbnanaobj/StandardRecord/SRTruthMatch.h"
#include "sbnanaobj/StandardRecord/SRTrueParticle.h"

namespace caf
{
  // NB - 'wgt' below cannot be just vector<vector<float>> due to bugs in
  // SRProxy/FlatMaker.
  class SRMultiverse
  {
  public:
    std::vector<float> univ;
  };

  class SRTrueInteractionPlaneInfo
  {
  public:
    SRTrueInteractionPlaneInfo();

    float visE;        //!< Sum of energy deposited on plane [GeV]
    unsigned int nhitprim; //!< Number of hits from primary particles on plane
    unsigned int nhit;     //!< Number of hits on plane
  };

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
    /// PDG code of struck nucleon (or, in the case of MEC, struck nucleon-nucleon pair).
    /// For MEC, the codes are: 2000000200 --> nn,  2000000201 --> np,  2000000202 --> "pp
    int   hitnuc;
    int   genie_intcode;   //!< Interaction mode (as for LArSoft MCNeutrino::Mode() )

    bool    isnc;              //!< same as LArSoft "ccnc" - 0=CC, 1=NC
    bool    iscc;              //!< CC (true) or NC/interference (false)
    bool    isvtxcont;         //!< If true vertex is within TPC
    bool    is_numucc_primary; //!< Whether this is the "primary" reco neutrino slice as defined by the numu CC analysis

    float      E;             ///< True energy [GeV]
    SRTrueInteractionPlaneInfo plane[3];
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
    float      baseline;          //!< Distance from decay to interaction [m]

    unsigned int npiplus;  ///< Number of \f$\pi^+\f$'s after neutrino reaction, before FSI
    unsigned int npiminus; ///< Number of \f$\pi^1\f$'s after neutrino reaction, before FSI
    unsigned int npizero;  ///< Number of \f$\pi^0\f$'s after neutrino reaction, before FSI
    unsigned int nproton;  ///< Number of protons after neutrino reaction, before FSI
    unsigned int nneutron; ///< Number of neutrons after neutrino reaction, before FSI

    // GTruth stuff
    bool ischarm;    ///< Is a charmed quark in interaction
    bool isseaquark; ///< Did neutrino scatter off a sea quark
    int resnum;      ///< Resonance number, straight from GENIE
    float xsec;      ///< xsec for thrown interaction, in 1/GeV^2, as stored by the GENIE spline

    float genweight; ///< Weight, if any, assigned by the generator

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

    /// \brief Systematic weights
    ///
    /// The first index is the parameter set, the second the universe. The
    /// parameter sets are those defined in the globalTree, with matching
    /// indices.
    std::vector<SRMultiverse> wgt;
  };

} // end namespace

#endif // SRTRUEINTERACTION_H
//////////////////////////////////////////////////////////////////////////////
