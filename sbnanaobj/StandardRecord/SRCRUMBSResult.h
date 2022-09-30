////////////////////////////////////////////////////////////////////////
// \file    SRCRUMBSResult.h
////////////////////////////////////////////////////////////////////////
#ifndef SRCRUMBSRESULT_H
#define SRCRUMBSRESULT_H

namespace caf {
  
  //!< TPC input variables for CRUMBS
  class SRCRUMBSTPCVars {
  public: 
    SRCRUMBSTPCVars();
    ~SRCRUMBSTPCVars() {}

    float crlongtrackhitfrac;        //!< fraction of slice’s space points in longest track (cosmic reco)
    float crlongtrackdefl;           //!< 1 - the cosine of the angle between the starting and finishing directions of the longest track (cosmic reco)
    float crlongtrackdiry;           //!< relative direction of the longest track in Y (cosmic reco)
    int   crnhitsmax;                //!< the number of space points in the largest pfp
    float nusphereeigenratio;        //!< the ratio between the first and second eigenvalues from a PCA of spacepoints within 10cm of the vertex (nu reco)
    int   nufinalstatepfos;          //!< the number of final state pfos (nu reco)
    int   nutotalhits;               //!< the total number of space points (nu reco)
    int   nuspherespacepoints;       //!< the total number of space points within 10cm of the vertex (nu reco)
    float nuvertexy;                 //!< the vertex position in Y (nu reco) [cm]
    float nuwgtdirz;                 //!< the Z component of the space-point weighted direction of the final state pfos (nu reco)
    float stoppingchi2ratio;         //!< a ratio of chi2 values intended to find Bragg peaks in stopping muon tracks  
  };

  //!< PDS input variables for CRUMBS
  class SRCRUMBSPDSVars {
  public:
    SRCRUMBSPDSVars();
    ~SRCRUMBSPDSVars() {}

    float fmtotalscore;              //!< the total flash match score
    float fmpe;                      //!< the total number of photoelectrons in the associated flash
    float fmtime;                    //!< the time associated with the flash [us]
  };

  //!< CRT input variables for CRUMBS
  class SRCRUMBSCRTVars {
  public:
    SRCRUMBSCRTVars();
    ~SRCRUMBSCRTVars() {}

    float trackscore;                //!< a combination of the DCA and angle between the best matched TPC & CRT tracks
    float hitscore;                  //!< the best distance from an extrapolated TPC track to a CRT hit [cm]
    float tracktime;                 //!< the time associated with the matched CRT track [us]
    float hittime;                   //!< the time associated with the matched CRT hit [us]
  };

  //!< Result of the CRUMBS slice ID MVA
  class SRCRUMBSResult {
  public:
    SRCRUMBSResult();
    ~SRCRUMBSResult() {}

    float score;                         //!< CRUMBS result, for inclusive neutrino signal
    float ccnumuscore;                   //!< CRUMBS result, for CCNuMu signal
    float ccnuescore;                    //!< CRUMBS result, for CCNuE signal
    float ncscore;                       //!< CRUMBS result, for NC signal
    float bestscore;                     //!< Best score from the three signal-specific versions
    int   bestid;                        //!< ID corresponding to the bestscore, 14 for CCNuMu, 12 for CCNuE, 1 for NC

    SRCRUMBSTPCVars tpc;                 //!< TPC input variables
    SRCRUMBSPDSVars pds;                 //!< PDS input variables
    SRCRUMBSCRTVars crt;                 //!< CRT input variables
  };

} // end namespace

#endif // SRCRUMBSRESULT_H
//////////////////////////////////////////////////////////////////////////////

