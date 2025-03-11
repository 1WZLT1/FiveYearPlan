/*
	  ##注意##
      1.就是引用初始化一定要赋值
	  2.赋值之后不能更改
*/
#include <iostream>
using namespace std;

class Quoto
{
    public:
       Quoto();
      ~Quoto();
    public:
      int *n = new int(10);
      int *&B_n = n ;
};

Quoto::Quoto()
{
    cout << *B_n <<endl;
}

Quoto::~Quoto()
{
  delete n;
}

int main()
{
  Quoto YY;
  cout << *YY.n <<endl;

  *YY.B_n = 100; 

  cout<< *YY.n <<endl;
}