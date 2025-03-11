#include <iostream>
using namespace std;

class Quoto
{
  public:
    Quoto();
    ~Quoto();
  public:
    int& test(); 
    int varibal;
};

Quoto::Quoto()
{

}

Quoto::~Quoto()
{

}

int& Quoto::test()
{
  this->varibal = 10;
  return this->varibal;
}

int main()
{
  Quoto Y;
  int &i = Y.test();

  cout << i <<endl;

  i = 111;

  cout << Y.varibal <<endl;
}

