#include "Flight.hpp"
#include "AirCrew.hpp"

using namespace std;

Flight::Flight(AirCrew* _aircrew_list, Airport* _airport_list, Consumer* _consumer_list, double _prime)
{
  aircrew_list = _aircrew_list;
  airport_list = _airport_list;
  consumer_list = _consumer_list;
  prime = _prime;
}

double Flight::get_prime()
{
  return prime;
}
