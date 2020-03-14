/*
    2019/9/14 
    UVA 10929
    CPE 聋琍
	1. т碝 11 计よ猭
	   (计㎝) - (案计㎝) ゲ斗琌11计 
	2. セ肈惠ㄏノ string 篈 
*/ 
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	string a;
	int b=0,c=0,d=0,i=0;
	while(getline(cin,a))
	{
		if (a == "0")    break;
		b=0,c=0,d=0,i=0;
		while(a[i] != '\0')
		{
			if ((i%2) ==0)
			{
				b = b + ((int) a[i]) -48;
			}
			else
			{
				c = c + ((int) a[i]) -48;
			}
			i++;
		}
		d = abs(b-c);
		if ((d%11) != 0)
		{
			cout << a << " is not a multiple of 11." << endl;
		}
		else
		{
			cout << a << " is a multiple of 11." << endl;
		}
		a.clear();
	}
}
