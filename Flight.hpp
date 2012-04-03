#ifndef _FLIGHT_HPP_
#define _FLIGHT_HPP_

#include <string>
#include <iostream>

//#include "AirCrew.hpp"
#include "Airport.hpp"
#include "Consumer.hpp"

class AirCrew;

class Flight {

protected:
  AirCrew* aircrew_list;
  Airport* airport_list;
  Consumer* consumer_list;
  double prime;

public:
  Flight(AirCrew* _aircrew_list, Airport* _airport_list, Consumer* _consumer_list, double _prime);
  double get_prime();
};

#endif
