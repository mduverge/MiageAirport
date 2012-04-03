#include <iostream>
#include <string> 

#include "Airport.hpp"

using namespace std;

Airport::Airport(string _airport_name, string _airport_id, string _country, string _city, string _adress, int _zipcode)
{
  airport_name = _airport_name;
  airport_id = _airport_id;
  country = _country;
  city = _city;
  adress = _adress;
  zipcode = _zipcode;
}

void Airport::display()
{
  cout << airport_name << endl;
  cout << airport_id << endl;
  cout << country << endl;
  cout << city << endl;
  cout << adress << endl;
  cout << zipcode << endl;
}
