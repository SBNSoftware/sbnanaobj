#ifndef SRNuMIINFO_h
#define SRNuMIINFO_h

#include <vector>

namespace caf
{
  class SRNuMIInfo
  {
  public:
    SRNuMIInfo();

    std::vector< double > HP121;
    std::vector< double > VP121;
    std::vector< double > HPTGT;
    std::vector< double > VPTGT;
    std::vector< double > HITGT;
    std::vector< double > VITGT;
    std::vector< double > MTGTDS; //MULTIWIRES
    float HRNDIR; // horn polarity (based on sign)
    float NSLINA; // horn current /4 
    float NSLINB; // horn current /4  
    float NSLINC; // horn current /4 
    float NSLIND; // horn current /4 
    float TRTGTD;
    float TR101D;
    float TORTGT;
    float TOR101;
    float time; //!< Time of device used to lookup spill

    unsigned long int spill_time_s; //!< The IFDB Beam Spill Time, unit sec
    unsigned long int spill_time_ns; //!< The IFDB Beam Spill Time, unit nsec

    unsigned int event;
    unsigned int daq_gates;

  };
}
#endif
