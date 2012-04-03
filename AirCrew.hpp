#ifndef _AIRCREW_HPP_
#define _AIRCREW_HPP_

#include <string>
#include <iostream>

#include "Staff.hpp"
#include "Flight.hpp"

using namespace std;

class AirCrew : public Staff {

protected:
  Flight *flight_list;
  static const double hourly_rate = 15.7142857;
  double flight_time;

public:
  AirCrew(string _first_name, string _last_name, Flight *_flight_list, double _flight_time);
  double calculate_prime();
  double calculate_salary();
  void display();
  ~AirCrew(){cout << first_name << " was killed" << endl;};
};

#endif
