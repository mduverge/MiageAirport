#include "Consumer.hpp"

using namespace std;

Consumer::Consumer(string _first_name, string _last_name, string _birthdate, string _num_pass):People(_first_name, _last_name)
{
  birthdate = _birthdate;
  num_pass = _num_pass;
}

void Consumer::display()
{
  People::display();
  cout << "Numéro de passeport : " << num_pass << endl;
  cout << "Date de naissance : " << birthdate << endl;
}
