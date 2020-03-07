/*
    2019/3/19 
    UVA 10929
    CPE 一顆星
	1. 找尋 11 的倍數的方法
	2. 本題需使用到 string 型態 
*/ 
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	string a;
	int b,c,d,i;
	while(getline(cin,a))
	{
		if (a == "0")
		{
			break;
		}
		b=0;
		c=0;
		d=0;
		i=0;
		while (a[i] != '\0')
		{
			if ((i%2) == 0)
		        b = b + ((int) a[i])-48;
		    else
		        c = c+ ((int) a[i])-48;
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
