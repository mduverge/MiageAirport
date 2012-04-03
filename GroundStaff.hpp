#ifndef _GROUNDSTAFF_HPP_
#define _GROUNDSTAFF_HPP_

#include "Staff.hpp"


class GroundStaff : public Staff {

protected:
  static const double hourly_rate = 7.22;
  static const int work_time = 35;
  int time_supp;

public:
  GroundStaff(string _first_name, string _last_name, int _time_supp);
  virtual double calculate_salary();
  void display();
  ~GroundStaff(){cout << first_name << " was killed" << endl;};
};

#endif
