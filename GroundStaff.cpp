#include "GroundStaff.hpp"

using namespace std;

GroundStaff::GroundStaff(string _first_name, string _last_name, int _time_supp = 0):Staff(_first_name, _last_name)
{
  time_supp = _time_supp;
}

double GroundStaff::calculate_salary()
{
  return (work_time + time_supp) * hourly_rate;
}

void GroundStaff::display()
{
  Staff::display();
  cout << calculate_salary() << " Dollars" << endl;
}
