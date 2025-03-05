#include <iostream>
using namespace std;

class YingYon
{
  public:
    void function(int &i);
};

void YingYon::function(int &i)
{
   i = 10;
}

int main()
{
  YingYon Y;
  int j = 0;
  Y.function(j);
  cout << j <<endl;
}