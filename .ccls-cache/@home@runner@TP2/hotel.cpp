#include "hotel.h"
#include <assert.h>

Hotel::Hotel(Chambre chambre, std::string id, std::string nom, std::string ville){
  _id = id;
  _nom = nom;
  _ville = ville;
  _chambre.push_back(chambre);
  
}

void Hotel::addchambre(Chambre chambre) { _chambre.push_back(chambre); }

std::vector<Chambre> Hotel::getchambre() { return _chambre; }

