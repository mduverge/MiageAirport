#include "AirCrew.hpp"

using namespace std;

AirCrew::AirCrew(string _first_name, string _last_name, Flight *_flight_list, double _flight_time):Staff(_first_name, _last_name)
{
  flight_list = _flight_list;
  flight_time = _flight_time;
}

double AirCrew::calculate_prime()
{
  double _prime = 0;
  for(int i = 0; i < 2; i++)
    _prime += flight_list[0].get_prime();
  return _prime;
}

double AirCrew::calculate_salary()
{
  return flight_time * hourly_rate + calculate_prime();
}

void AirCrew::display()
{
  People::display();
  cout << flight_time << " Hours" << endl;
  cout << calculate_salary() << " Dollars" << endl;
}
