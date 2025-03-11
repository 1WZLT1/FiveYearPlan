#include <iostream>
using namespace std;

class person_c
{
  int age;
};

class person_c_private_set_mean
{
  public:
    void set_age(int age)
    {
        this->age = age; 
        cout << "p_c_set_mean" << this->age;
    }
  private:
    int age;
};

typedef struct  
{
  int age;
}person;

int main()
{
  person p;
  p.age = 10;
  person_c p_c;
  //p_c.age = 10;
  person_c_private_set_mean p_c_set_mean;
  p_c_set_mean.set_age(10);

  cout << "p.age" << p.age;
}