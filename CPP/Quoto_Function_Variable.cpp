#include <iostream>
using namespace std;

class Quoto
{
  public:
    void function(int &i);
};

void Quoto::function(int &i)
{
   i = 10;
}

int main()
{
  Quoto Y;
  int j = 0;
  Y.function(j);
  cout << j <<endl;
}