//#pragma once
#include "reservation.h"
/**#include "hotel.h"
#include "chambre.h"
#include "client.h"
#include "date.h"*/
#include <assert.h>

Reservation::Reservation(Date datedebut, Hotel idHotel, Chambre idChambre,
                         Client idClient, std::string nbrnuit,
                         std::string prixTT) {
  _datedebut = datedebut;
  _nbrnuit = nbrnuit;
  _idHotel = idHotel;
  _idChambre = idChambre;
  _idClient = idClient;
  _prixTT = prixTT;
}

std::string Reservation::nbrnuit() { return _nbrnuit; }
std::string Reservation::prixTT() { return _prixTT; }

std::string Reservation::toString() {
  return _datedebut.toString() + "/" + _idHotel.toString() + "/" +
         _idChambre.toString() + "/" + _idClient.toString() + "/" + _nbrnuit +
         "/" + _prixTT;
}