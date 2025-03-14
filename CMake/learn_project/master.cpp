#include <iostream>
using namespace std;

namespace master
{
   class person
   {
      public:
        void Person_Age_Set()
        {
            this->age = 10;
        }

        void Person_Age_print()
        {
            cout<<this->age<<endl;
        }
      public:
        int age;
   };

   class Father 
   {
     public:
      Father()
      {
          std::cout << "Father Out" << endl;
      }
   };

   class Son:Father
   {
      public:
      Son()
      {
          std::cout << "Son Out" <<endl;
      }
   };
};

int main()
{
  // master::person p;
  // p.Person_Age_Set();
  // p.Person_Age_print();

  master::Son son;
}