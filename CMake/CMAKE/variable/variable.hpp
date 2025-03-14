#ifndef __variable_h
#define __variable_h

#include <iostream>
using namespace std;

namespace person_n
{
  class person_c
  {
    public:
      void age_set(int age)
      {
        this->age = age;
        std::cout<< age <<endl;
      }
    private:
      int age;
  };
};

#endif 