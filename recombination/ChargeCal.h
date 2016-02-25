/**
 * \file ChargeCal.h
 *
 * \ingroup recombination
 * 
 * \brief Class def header for a class ChargeCal
 *
 * @author xl444
 */

/** \addtogroup recombination

    @{*/

#ifndef LARLITE_CHARGECAL_H
#define LARLITE_CHARGECAL_H

#include "Analysis/ana_base.h"

namespace larlite {
  /**
     \class ChargeCal
     User custom analysis class made by SHELL_USER_NAME
   */
  class ChargeCal : public ana_base{
  
  public:

    /// Default constructor
    ChargeCal(){ _name="ChargeCal"; _fout=0;}

    /// Default destructor
    virtual ~ChargeCal(){}

    /** IMPLEMENT in ChargeCal.cc!
        Initialization method to be called before the analysis event loop.
    */ 
    virtual bool initialize();

    /** IMPLEMENT in ChargeCal.cc! 
        Analyze a data event-by-event  
    */
    virtual bool analyze(storage_manager* storage);

    /** IMPLEMENT in ChargeCal.cc! 
        Finalize method to be called after all events processed.
    */
    virtual bool finalize();

  protected:
    
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
