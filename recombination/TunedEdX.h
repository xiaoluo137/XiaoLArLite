/**
 * \file TunedEdX.h
 *
 * \ingroup recombination
 * 
 * \brief Class def header for a class TunedEdX
 *
 * @author xl444
 */

/** \addtogroup recombination

    @{*/

#ifndef LARLITE_TUNEDEDX_H
#define LARLITE_TUNEDEDX_H

#include "Analysis/ana_base.h"
#include "TH1D.h"

namespace larlite {
  /**
     \class TunedEdX
     User custom analysis class made by SHELL_USER_NAME
   */
  class TunedEdX : public ana_base{
  
  public:

    /// Default constructor
    TunedEdX(){ _name="TunedEdX"; _fout=0;}

    /// Default destructor
    virtual ~TunedEdX(){}

    virtual bool initialize();

    virtual bool analyze(storage_manager* storage);

    virtual bool finalize();

  protected:

    TH1D* _h_dqdx;
    
  };
}
#endif

//**************************************************************************
// 
// For Analysis framework documentation, read Manual.pdf here:
//
// http://microboone-docdb.fnal.gov:8080/cgi-bin/ShowDocument?docid=3183
//
//**************************************************************************

/** @} */ // end of doxygen group 
