#include <iostream>
#include <cstdlib>
using namespace std;
#define ma1(x,y) if ((x)>=(y))\
                    cout << x;\
                 else\
                    cout << y;   // 最後一行不須加 '\' 
int main()
{
	ma1(10,3);
}
