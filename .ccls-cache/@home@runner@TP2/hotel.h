#pragma once
#include "chambre.h"
#include <iostream>
#include <string>
#include <vector>

#ifndef HOTEL_H
#define HOTEL_H

class Hotel {
public:
  Hotel(Chambre chambre, std::string id = "", std::string nom = "", std::string ville = "" );
  std::string id();
  std::string nom();
  std::string ville();
  void addchambre(Chambre);
  std::vector<Chambre> getchambre();
  std::string toString();

private:
  std::string _id;
  std::string _nom;
  std::string _ville;
  std::vector<Chambre> _chambre;
};

#endif