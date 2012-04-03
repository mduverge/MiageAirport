#include "People.hpp"

using namespace std;

People::People(string _first_name,string _last_name)
{
  first_name = _first_name;
  last_name = _last_name;
}

void People::display()
{
  cout << first_name << " " << last_name << endl;
}

