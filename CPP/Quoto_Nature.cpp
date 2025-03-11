#include <iostream>
using namespace std;

class Quote_nature
{
  public:
    /*nature  1*/
    const int & i = 19; // 常量引用，这种操作会分配内存
    /*nature  2*/
    Quote_nature();
    Quote_nature(const int &j)
    {
        
    }
};

int main()
{
    Quote_nature qn;

    /*
     * nature 1 
     * 证明是存在内存的
     */
    int *q = (int *)&qn.i;
    *q = 10;
    cout << *q;
}