#ifndef _CONSUMER_HPP_
#define _CONSUMER_HPP_

#include <string>
#include <iostream>

#include "People.hpp"

using namespace std;

class Consumer : public People {

private:
  string birthdate;
  string num_pass;
  //Booking* reservations;

public:
  Consumer(string _first_name, string _last_mane, string _birthdate, string _num_pass);
  void display();
  ~Consumer(){cout << first_name << " was killed" << endl;};
};

#endif
