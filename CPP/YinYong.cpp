/*
	  ##ע��##
      1.�������ó�ʼ��һ��Ҫ��ֵ
	  2.��ֵ֮���ܸ���
*/
#include <iostream>
using namespace std;

class YinYong
{
    public:
      YinYong();
      ~YinYong();
    public:
      int *n = new int(10);
      int *&B_n = n ;
};

YinYong::YinYong()
{
    cout << *B_n <<endl;
}

YinYong::~YinYong()
{
  delete n;
}

int main()
{
  YinYong YY;
  cout << *YY.n <<endl;

  *YY.B_n = 100; 

  cout<< *YY.n <<endl;
}