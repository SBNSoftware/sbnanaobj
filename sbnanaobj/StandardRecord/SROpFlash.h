////////////////////////////////////////////////////////////////////////
// \file    SROPFLASH.h
// \brief   Adaptation of recob::OpFlash (https://nusoft.fnal.gov/larsoft/doxsvn/html/classrecob_1_1OpFlash.html). This SR code copied/based on other SR objects.
// \author  jsmedley@fnal.gov
////////////////////////////////////////////////////////////////////////
#ifndef SROPFLASH_H
#define SROPFLASH_H


namespace caf
{
  /// OpFlash
  class SROpFlash
    {
    public:

      SROpFlash();

      virtual ~SROpFlash() {}
//NOTE: They all have this. Not sure what exactly this does, but it seems necessary.

      double Time; //Time on trigger time scale [us].
      double Timewidth; //Width of the flash in time [us].
      double AbsTime; //Time by PMT readout clock.

      double PE; //Number of PE on a give PMT.
//NOTE: Might not need this? Doesn't make sense to store each entry separately given that we have the vector form.
      std::vector<double> PEs; //Number of PE on each PMT.
      double TotalPE; //Total number of PE across all PMTs.
      double FastToTotal; //Fast to total light ratio.

      bool OnBeamTime; //Is this in time with beam?
//NOTE: Changed from int to bool. I have a feeling this int was 0/1.

      bool hasXCenter; //Is the estimated center on x direction is available?
//NOTE: This one's weird. Do we need this? Do some flashes not have X centers?
      double XCenter; //Geometric center in x [cm].
      double XWidth; //Geometric width in x [cm].
      double YCenter; //Geometric center in y [cm].
      double YWidth; //Geometric width in y [cm].
      double ZCenter; //Geometric center in z [cm].
      double ZWidth; //Geometric width in z [cm].

//NOTE: Dropping frame stuff (uBooNE) and wire centers/widths

      std::vector<double> PE_per_wall; //Backhouse's suggestion
      int cryo; //0 for SBND/ICARUS East, 1 for ICARUS West
//NOTE: New additions

      void setDefault();
    };

} // end namespace

#endif // SROPFLASH_H
//////////////////////////////////////////////////////////////////////////////
