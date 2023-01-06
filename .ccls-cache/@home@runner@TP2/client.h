#pragma once
#include <iostream>
#include <string>

#ifndef CLIENT_H
#define CLIENT_H

class Client {
public:
  Client(std::string nom = "", std::string prenom = "", std::string id = "");
  std::string nom();
  std::string prenom();
  std::string id();
  std::string toString();

private:
  std::string _nom;
  std::string _prenom;
  std::string _id;
};

#endif