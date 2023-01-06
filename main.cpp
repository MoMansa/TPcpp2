#include <iostream>
#include "client.h"
#include "date.h"
#include "chambre.h"
#include "hotel.h"

int main(int argc, char const *argv[]) {
  /**Date publication(12, 12, 2012);
  Date empruntdate(12, 12, 2022);
  Date retourdate(1, 1, 2023);*/

  Client Cl1("Terieur ", "Alain ", "152536");
  Client Cl2("Terieur ", "Alex ", "748596");

  Chambre C1("001 ", "single ", "100€ ");
  Chambre C2("002 ", "single ", "100€ ");
  Chambre C3("003 ", "single ", "100€ ");
  Chambre C4("101 ", "double ", "125€ ");
  Chambre C5("102 ", "double ", "125€ ");
  Chambre C6("103 ", "double ", "125€ ");
  Chambre C7("104 ", "double ", "125€ ");
  Chambre C8("105 ", "double ", "125€ ");
  Chambre C9("201 ", "suite ", "210€ ");
  Chambre C10("202 ", "suite ", "210€ ");

  Hotel H1(C1, "OCEAN007", " Le Palm Resort de Las Vegas ", "Etats-Unis");
  H1.addchambre(C2);
  H1.addchambre(C3);
  H1.addchambre(C4);
  H1.addchambre(C5);
  H1.addchambre(C6);
  H1.addchambre(C7);
  H1.addchambre(C8);
  H1.addchambre(C9);
  H1.addchambre(C10);

  std::cout << "l'Hotel Palm Resort de Las Vegas " << std::endl;
  std::cout << "chambres disponibles: " << std::endl;

   for (int i = 0; i < H1.getchambre().size(); i++) {
    std::cout << H1.getchambre().at(i).toString() << std::endl;
  }
  
  }