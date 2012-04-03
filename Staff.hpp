#ifndef _STAFF_HPP_
#define _STAFF_HPP_

#include "People.hpp"

using namespace std;

class Staff : public People {

protected:
  double salary;

public:
  Staff(string _first_name, string _last_name);
  virtual double calculate_salary();
  void display();
  ~Staff(){cout << first_name << " was killed" << endl;};
};

#endif
