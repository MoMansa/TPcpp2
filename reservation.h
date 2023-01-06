//#pragma once
#include "chambre.h"
#include "client.h"
#include "date.h"
#include "hotel.h"
#include <iostream>
#include <string>
#include <vector>

#ifndef RESERVATION_H
#define RESERVATION_H

class Reservation {
public:
  Reservation(Date datedebut, Hotel idHotel, Chambre idChambre, Client idClient,
              std::string nbrnuit = "", std::string prixTT = "");
  std::string nbrnuit();
  std::string prixTT();
  std::string toString();

private:
  Date _datedebut;
  Hotel _idHotel;
  Chambre _idChambre;
  Client _idClient;
  std::string _nbrnuit;
  std::string _prixTT;
};

#endif