#include "Staff.hpp"

using namespace std;

Staff::Staff(string _first_name, string _last_name):People(_first_name, _last_name)
{
  salary = 0;
}

double Staff::calculate_salary()
{
  return salary;
}

void Staff::display()
{
  People::display();
  cout << salary << " Dollars" << endl;
}
