#ifndef _PEOPLE_HPP_
#define _PEOPLE_HPP_

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class People {

protected:
  string first_name;
  string last_name;

public:
  People(string _first_name, string _last_name);
  void display();
  ~People(){cout << first_name << " was killed" << endl;};
};

#endif
