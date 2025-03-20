#include <iostream>
#include "variable/variable.hpp" //相对路径
using namespace std;

namespace ui
{
   class ui_c
   {
      public:
         ui_c()
         {
            cout<<"hellow ui_c"<<endl;
         }
   };
};

namespace ui
{
   class ui_cc
   {
      public:
      ui_cc()
      {
         cout<<"hellow ui_cc"<<endl;
      }
   }; 
};

int main()
{
   person_n::person_c person;
   person.age_set(15);
   ui::ui_c ui_v;
   ui::ui_cc ui_vv;
}