////////////////////////////////////////////////////////////////////////
// \file    SRShower.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSHOWER_H
#define SRSHOWER_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SRShowerSelection.h"
#include "sbnanaobj/StandardRecord/SRTrackTruth.h"
#include "sbnanaobj/StandardRecord/SRPFP.h"
#include "sbnanaobj/StandardRecord/SRShowerRazzle.h"

namespace caf
{
  /// Representation of a rb::Shower, knows energy and direction, but not a list
  /// of hits.
  class SRShower
    {
    public:
      SRShower();
      ~SRShower(){  }
      int bestplane;                ///< shower best reconstructed plane
      float bestplane_dEdx;         ///< shower dEdx at best plane [MeV/cm]
      float bestplane_energy;       ///< shower energy at best plane [GeV]
      float conversion_gap;         ///< shower start and vertex position difference [cm]
      float density;                ///< shower density [MeV/cm]
      float len;                    ///< shower length [cm]
      float open_angle;             ///< shower opening angle [rad]
      std::vector<float> dEdx;      ///< shower calculated dEdx at each plane [MeV/cm]
      std::vector<float> energy;    ///< shower calculated energy at each plane [GeV]
      std::vector<unsigned int> nHits; ///< Number of hits associated to the shower in each plane
      std::vector<float> wirePitch; ///< Wire pitch corrected for the angle of the shower in each plane [cm]
      SRVector3D dir;               ///< direction cosines at the start of the shower
      SRVector3D start;             ///< shower start point in detector coordinates [cm]
      SRVector3D end;               ///< shower end point (start+len*dir) in detector coordinates [cm]
      float cosmicDist;             ///< Distance of closest approach to cosmic ray [cm]

      SRPFP pfp;          ///< Contains the hierarchy and metadata from Pandora

      SRShowerRazzle razzle; ///< Results from the shower PID MVA
      SRShowerSelection selVars;
      SRTrackTruth   truth;        ///< truth information TODO: make seperate showe info class

      unsigned producer;    ///< Index of the producer that produced this object. In ICARUS, this is the same as the cryostat.

    };

} // end namespace

#endif // SRSHOWER_H
//////////////////////////////////////////////////////////////////////////////
