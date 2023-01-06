#include "chambre.h"
#include <assert.h>

Chambre::Chambre(std::string id, std::string type, std::string prix) {
  _id = id;
  _type = type;
  _prix = prix;
}

std::string Chambre::id() { return _id; }
std::string Chambre::type() { return _type; }
std::string Chambre::prix() { return _prix; }

std::string Chambre::toString(){
  return _id+ "/" + _type + "/"+ _prix;
}