/*
	  ##ע��##
      1.�������ó�ʼ��һ��Ҫ��ֵ
	  2.��ֵ֮���ܸ���
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