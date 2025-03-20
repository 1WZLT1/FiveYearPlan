#include <iostream>
using namespace std;

#include "forward_statement_son.hpp"
#include "forward_statement_main.hpp"

namespace assamble
{
  class main_c
  {
    public:
      main_c()
      {
         cout << "main_c" <<endl;
      }
  };  
};

int main()
{
  assamble::main_c main_c;
}