////////////////////////////////////////////////////////////////////////
// \file    SRBlip.cxx
// \brief   SRBlip object for localized energy deposits in bulk LAr
// \author  $Author: jmclaughlin2@illinoistech.edu
////////////////////////////////////////////////////////////////////////

#include "sbnanaobj/StandardRecord/SRBlip.h"


namespace caf
{
    
    SRBlip::SRBlip()
    {
        position.SetX(-999);          //3d X Position [cm]
        position.SetY(-999);          //3d Y Position [cm]
        position.SetZ(-999);          //3d Z Position [cm]
    }

}
