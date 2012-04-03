#ifndef _AIRPORT_HPP_
#define _AIRPORT_HPP_

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Airport {

private:
  string airport_name;
  string airport_id;
  string country;
  string city;
  string adress;
  int zipcode;

public:
  // --- Ici seront stockés tous les aéroports => remplissage dans le Main
  static vector<Airport> airport_list;

  Airport(string airport_name, string airport_id, string country, string city, string adress, int zipcode);
  void display();
  ~Airport(){ };
};

#endif
