#include "client.h"
#include <assert.h>



Client::Client(std::string nom, std::string prenom,  std::string id) {
  _nom = nom;
  _prenom = prenom;
  _id = id;
}
std::string Client::id() { return _id; }
std::string Client::nom() { return _nom; }
std::string Client::prenom() { return _prenom; }

std::string Client::toString(){
  return _id+ "/" + _nom + "/"+ _prenom;
}