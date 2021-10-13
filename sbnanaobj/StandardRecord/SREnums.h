#ifndef SRENUMS_H
#define SRENUMS_H

namespace caf
{
  /// Which SBN detector?
  enum Det_t
  {
    kUNKNOWN,     ///< Unknown detector
    kSBND,        ///< Near Detector
    kICARUS      ///< Far Detector
  };

  enum Plane_t 
  {
    kUnknown=-1,
    k1stInduction=0,
    k2ndInduction=1,
    kCollection=2
  };

  enum Wall_t 
  {
    kWallNone=0,
    kWallTop=1,
    kWallBottom=2,
    kWallLeft=3,
    kWallRight=4,
    kWallFront=5,
    kWallBack=6
  };

  /// Which type of MC?
  enum MCType_t
  {
    kMCUnknown=0,
    kMCParticleGun=1,
    kMCNeutrino=2,
    kMCCosmic=3,
    kMCOverlay=4
  };

  /// Which generator?
  enum generator_
  {
    kUnknownGenerator = 0,
    kGENIE            = 1,
    kMeVPrtl          = 2
  };

  // For MeVPrtl -- which physics channel
  enum mevprtlchannel_ {
    kUnknownMeVPrtlChannel = 0,
    kMeVPrtlHiggs          = 1,
    kMeVPrtlHNL            = 2
  };

  /// Enum of possible types of truth-matching a TPC slice
  enum interaction_mode_ 
  {
    kCC = 0,           //!< CC neutrino interaction
    kNC = 1,           //!< NC neutrino interaction
    kCosmic = 2,       //!< Cosmic activity
    kIntimeCosmic = 3, //!< Cosmic activity in event triggered by intime-cosmic
    kOther = 4 //!< Release valve value -- if nothing else really fits
  };

  /// These values are taken from nusimdata/SimulationBase/MCNeutrino.h (where
  /// they are probably copied from some genie header). Duplicating that
  /// information here is sub-optimal, but less sub-optimal than adding a
  /// dependency on larsoft to interpret the CAF files.
  enum genie_interaction_mode_
  {
    // Low part of the enum, used to encode mode
    kUnknownInteractionMode    =   -1,
    kQE                        =    0,
    kRes                       =    1,
    kDIS                       =    2,
    kCoh                       =    3,
    kCohElastic                =    4,
    kElectronScattering        =    5,
    kIMDAnnihilation           =    6,
    kInverseBetaDecay          =    7,
    kGlashowResonance          =    8,
    kAMNuGamma                 =    9,
    kMEC                       =   10,
    kDiffractive               =   11,
    kEM                        =   12,
    kWeakMix                   =   13
  };

  enum genie_interaction_type_
  {
    kUnknownInteractionType    = -1,
    kNuanceOffset              = 1000,                ///< offset to account for adding in Nuance codes to this enum
    kCCQE                      = kNuanceOffset +  1,  ///< charged current quasi-elastic
    kNCQE                      = kNuanceOffset +  2,  ///< neutral current quasi-elastic
    kResCCNuProtonPiPlus       = kNuanceOffset +  3,  ///< resonant charged current, nu p -> l- p pi+
    kResCCNuNeutronPi0         = kNuanceOffset +  4,  ///< resonant charged current, nu n -> l- p pi0
    kResCCNuNeutronPiPlus      = kNuanceOffset +  5,  ///< resonant charged current, nu n -> l- n pi+
    kResNCNuProtonPi0          = kNuanceOffset +  6,  ///< resonant neutral current, nu p -> nu p pi0
    kResNCNuProtonPiPlus       = kNuanceOffset +  7,  ///< resonant neutral current, nu p -> nu p pi+
    kResNCNuNeutronPi0         = kNuanceOffset +  8,  ///< resonant neutral current, nu n -> nu n pi0
    kResNCNuNeutronPiMinus     = kNuanceOffset +  9,  ///< resonant neutral current, nu n -> nu p pi-
    kResCCNuBarNeutronPiMinus  = kNuanceOffset + 10,  ///< resonant charged current, nubar n -> l+ n pi-
    kResCCNuBarProtonPi0       = kNuanceOffset + 11,  ///< resonant charged current, nubar p -> l+ n pi0
    kResCCNuBarProtonPiMinus   = kNuanceOffset + 12,  ///< resonant charged current, nubar p -> l+ p pi-
    kResNCNuBarProtonPi0       = kNuanceOffset + 13,  ///< resonant charged current, nubar p -> nubar p pi0
    kResNCNuBarProtonPiPlus    = kNuanceOffset + 14,  ///< resonant charged current, nubar p -> nubar n pi+
    kResNCNuBarNeutronPi0      = kNuanceOffset + 15,  ///< resonant charged current, nubar n -> nubar n pi0
    kResNCNuBarNeutronPiMinus  = kNuanceOffset + 16,  ///< resonant charged current, nubar n -> nubar p pi-
    kResCCNuDeltaPlusPiPlus    = kNuanceOffset + 17,
    kResCCNuDelta2PlusPiMinus  = kNuanceOffset + 21,
    kResCCNuBarDelta0PiMinus   = kNuanceOffset + 28,
    kResCCNuBarDeltaMinusPiPlus= kNuanceOffset + 32,
    kResCCNuProtonRhoPlus      = kNuanceOffset + 39,
    kResCCNuNeutronRhoPlus     = kNuanceOffset + 41,
    kResCCNuBarNeutronRhoMinus = kNuanceOffset + 46,
    kResCCNuBarNeutronRho0     = kNuanceOffset + 48,
    kResCCNuSigmaPlusKaonPlus  = kNuanceOffset + 53,
    kResCCNuSigmaPlusKaon0     = kNuanceOffset + 55,
    kResCCNuBarSigmaMinusKaon0 = kNuanceOffset + 60,
    kResCCNuBarSigma0Kaon0     = kNuanceOffset + 62,
    kResCCNuProtonEta          = kNuanceOffset + 67,
    kResCCNuBarNeutronEta      = kNuanceOffset + 70,
    kResCCNuKaonPlusLambda0    = kNuanceOffset + 73,
    kResCCNuBarKaon0Lambda0    = kNuanceOffset + 76,
    kResCCNuProtonPiPlusPiMinus= kNuanceOffset + 79,
    kResCCNuProtonPi0Pi0       = kNuanceOffset + 80,
    kResCCNuBarNeutronPiPlusPiMinus = kNuanceOffset + 85,
    kResCCNuBarNeutronPi0Pi0   = kNuanceOffset + 86,
    kResCCNuBarProtonPi0Pi0    = kNuanceOffset + 90,
    kCCDIS                     = kNuanceOffset + 91,  ///< charged current deep inelastic scatter
    kNCDIS                     = kNuanceOffset + 92,  ///< charged current deep inelastic scatter
    kUnUsed1                   = kNuanceOffset + 93,
    kUnUsed2                   = kNuanceOffset + 94,
    kCCQEHyperon               = kNuanceOffset + 95,
    kNCCOH                     = kNuanceOffset + 96,
    kCCCOH                     = kNuanceOffset + 97,  ///< charged current coherent pion
    kNuElectronElastic         = kNuanceOffset + 98,  ///< neutrino electron elastic scatter
    kInverseMuDecay            = kNuanceOffset + 99,  ///< inverse muon decay
    kMEC2p2h                   = kNuanceOffset + 100  ///< extension of nuance encoding for MEC / 2p2h

  };

  /// Which genie status?
  enum genie_status_ 
  { 
      kIStUndefined                = -1,
      kIStInitialState             =  0,
      kIStStableFinalState         =  1,
      kIStIntermediateState        =  2,
      kIStDecayedState             =  3,
      kIStCorrelatedNucleon        = 10,
      kIStNucleonTarget            = 11,
      kIStDISPreFragmHadronicState = 12,
      kIStPreDecayResonantState    = 13,
      kIStHadronInTheNucleus       = 14,
      kIStFinalStateNuclearRemnant = 15,
      kIStNucleonClusterTarget     = 16,
      kNotGenie                    = 17 //!< Not a genie particle
  };//genie_status

  /// Which G4 process ?
  enum g4_process_ 
  {
    kG4primary=0,
    kG4CoupledTransportation=1,
    kG4FastScintillation=2,
    kG4Decay=3,
    kG4anti_neutronInelastic=4,
    kG4neutronInelastic=5,
    kG4anti_protonInelastic=6,
    kG4protonInelastic=7,
    kG4hadInelastic=8,
    kG4pipInelastic=9,
    kG4pimInelastic=10,
    kG4xipInelastic=11,
    kG4ximInelastic=12,
    kG4kaonpInelastic=13,
    kG4kaonmInelastic=14,
    kG4sigmapInelastic=15,
    kG4sigmamInelastic=16,
    kG4kaon0LInelastic=17,
    kG4kaon0SInelastic=18,
    kG4lambdaInelastic=19,
    kG4anti_lambdaInelastic=20,
    kG4He3Inelastic=21,
    kG4ionInelastic=22,
    kG4xi0Inelastic=23,
    kG4alphaInelastic=24,
    kG4tInelastic=25,
    kG4dInelastic=26,
    kG4anti_neutronElastic=27,
    kG4neutronElastic=28,
    kG4anti_protonElastic=29,
    kG4protonElastic=30,
    kG4hadElastic=31,
    kG4pipElastic=32,
    kG4pimElastic=33,
    kG4kaonpElastic=34,
    kG4kaonmElastic=35,
    kG4conv=36,
    kG4phot=37,
    kG4annihil=38,
    kG4nCapture=39,
    kG4nKiller=40,
    kG4muMinusCaptureAtRest=41,
    kG4muIoni=42,
    kG4eBrem=43,
    kG4CoulombScat=44,
    kG4hBertiniCaptureAtRest=45,
    kG4hFritiofCaptureAtRest=46,
    kG4photonNuclear=47,
    kG4muonNuclear=48,
    kG4electronNuclear=49,
    kG4positronNuclear=50,
    kG4compt=51,
    kG4eIoni=52,
    kG4muBrems=53,
    kG4hIoni=54,
    kG4muPairProd=55,
    kG4hPairProd=56,
    kG4LArVoxelReadoutScoringProcess=57,
    kG4ionIoni=58,
    kG4hBrems=59,
    kG4Transportation=60,
    kG4UNKNOWN=61
  };// g4_process_

  enum ReweightType_t{
    kMultiSim, kPMNSigma, kFixed, kDefault
  };
}

#endif
