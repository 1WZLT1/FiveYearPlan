#include <iostream>
using namespace std;

class YinYong
{
  public:
    YinYong();
    ~YinYong();
  public:
    int& test(); 
    int varibal;
};

YinYong::YinYong()
{

}

YinYong::~YinYong()
{

}

int& YinYong::test()
{
  this->varibal = 10;
  return this->varibal;
}

int main()
{
  YinYong Y;
  int &i = Y.test();

  cout << i <<endl;

  i = 111;

  cout << Y.varibal <<endl;
}

