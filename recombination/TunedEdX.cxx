#ifndef LARLITE_TUNEDEDX_CXX
#define LARLITE_TUNEDEDX_CXX

#include "TunedEdX.h"
#include "DataFormat/track.h"
#include "DataFormat/hit.h"
#include "DataFormat/calorimetry.h"

namespace larlite {

  bool TunedEdX::initialize() {

    _h_dqdx = new TH1D("h_dqdx","dQdx from Calorimetry",100,0,1000);

    return true;
  }
  
  bool TunedEdX::analyze(storage_manager* storage) {

    // load calorimetry from event
    auto ev_calo = storage->get_data<event_calorimetry>("trackkalmanhitcalo");

    // check that there are any calorimetry objects
    if ( (!ev_calo) || (ev_calo->size() == 0) ){
      std::cout << "No calorimetry in the event -> continue to next event." << std::endl;
      return false;
    }

    // now grab the associated track and hits information for these tracks

    // 0) get associated tracks
    event_track* ev_track = nullptr;
    auto const& ass_track_v = storage->find_one_ass(ev_calo->id(), ev_track, ev_calo->name());
    
    // 1) get associated hits
    event_hit* ev_hit = nullptr;
    auto const& ass_hit_v = storage->find_one_ass(ev_track->id(), ev_hit, ev_track->name());

    // check that there are any tracks                                                                                                                                            
    if ( (!ev_track) || (ev_track->size() == 0) ){
      std::cout << "No tracks in the event -> continue to next event." << std::endl;
      return false;
    }

    // lets make sure there are hits and calorimetry objects for this file
    if ( (!ev_hit) || (ev_hit->size() == 0) ){
      std::cout << "No hits associated to the tracks in the event -> continue to next event." << std::endl;
      return false;
    }

    std::cout << "there are " << ev_track->size() << " tracks in the event, with :" << std::endl;
    std::cout << ev_hit->size() << " hits associated and " << ev_calo->size() << " calo objects associated" << std::endl << std::endl;

    for(int i=0; i< ev_calo->size();i++){
      
      auto const& calo = ev_calo->at(i);

      // ignore any calorimetry from induction planes
      if (calo.PlaneID().Plane != 2)
	continue;

      auto const& dQdx_v = calo.dQdx();

      auto const& ass_trk = ass_track_v[i];

      std::cout << "calorimetry object " << i << " has " << ass_trk.size() << " tracks associated" << std::endl;
      std::cout << "calorimetry object " << i << " has " << dQdx_v.size() << " dQdx points" << std::endl;
   
      for (auto const& dQdx : dQdx_v){
	std::cout << "dqdx is " << dQdx << std::endl;
	_h_dqdx->Fill(dQdx);
      }
    }
  
    return true;
  }

  bool TunedEdX::finalize() {

    _fout->cd();
    
    _h_dqdx->Write();

    return true;
  }

}
#endif
