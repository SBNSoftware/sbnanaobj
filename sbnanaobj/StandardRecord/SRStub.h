////////////////////////////////////////////////////////////////////////
// \file    SRStub.h
////////////////////////////////////////////////////////////////////////
#ifndef SRSTUB_H
#define SRSTUB_H

#include "sbnanaobj/StandardRecord/SRVector3D.h"
#include "sbnanaobj/StandardRecord/SREnums.h"

#include <vector>

namespace caf
{

  class SRStubHit {
    public:
      SRStubHit();
      ~SRStubHit() {}
      
      float charge; //!< Calibrated and electron-lifetime-corrected charge [#elec]
      short wire; //!< Wire number of the hit
      bool ontrack; //!< Whether this hit is also on an overlaid track
  };

  class SRStubPlane {
    public:
      SRStubPlane();
      ~SRStubPlane() {}
      
      caf::Plane_t p; //!< Plane number
      float pitch; //!< Pitch of the stub on each wire [cm].
      float trkpitch; //!< Pitch of the overlaid track on each wire [cm].
      float vtx_w; //!< Wire coordinate of vertex on this plane (not space charge corrected).
      short hit_w; //!< Wire of the end-point-hit.
      std::vector<SRStubHit> hits; //!< List of all the hits on this plane.
  };

  class SRStub {
    public:
      SRStub();
      ~SRStub() {}

      SRVector3D vtx; //!< Vertex/start position of stub [cm]
      SRVector3D end; //!< End position of stub [cm]

      std::vector<SRStubPlane> planes;
      float efield_vtx; //!< Electric field at the vertex position of the stub [kV/cm]
      float efield_end; //!< Electric field at the end position of the stub [kV/cm]

      int pfpid; //!< PFP ID of an object that "overlays" the stub. -1 if there is no such object.

  };
} // end namespace

#endif // SRSTUB_H
//////////////////////////////////////////////////////////////////////////////
