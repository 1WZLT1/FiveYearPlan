#include <iostream>
using namespace std;

namespace pp_n
{
   class person
   {
      public:
        person();
        person(int i);
        person(const person &person);
      public:
        int age = 0;
  };
}

pp_n::person::person()
{
  cout << "normal struction" <<endl;
}

pp_n::person::person(int i)
{
  cout << "variable strction" <<endl;
}

pp_n::person::person(const person &person)
{
  cout << "copying strction" <<endl;
}

int main()
{
    //匿名构造
    pp_n::person(10);

    pp_n::person p_1;
    pp_n::person p_2(10);
    pp_n::person p_3(p_2);

    pp_n::person p_4 = pp_n::person(10);
    pp_n::person p_5 = pp_n::person(p_4);

    pp_n::person p_6 = 10;
    pp_n::person p_7 = p_6;
}