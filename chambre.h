//#pragma once
#include <iostream>
#include <string>

#ifndef CHAMBRE_H
#define CHAMBRE_H

class Chambre {
public:
  Chambre(std::string id = "", std::string type = "", std::string prix = "");
  std::string id();
  std::string type();
  std::string prix();
  std::string toString();

private:
  std::string _id;
  std::string _type;
  std::string _prix;

};

#endif