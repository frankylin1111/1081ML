#include <iostream>
#include <cstdlib>
using namespace std;
#define ma1(x,y) if ((x)>=(y))\
                    cout << x;\
                 else\
                    cout << y;   // �̫�@�椣���[ '\' 
int main()
{
	ma1(10,3);
}
