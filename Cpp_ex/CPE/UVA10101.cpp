/*
    2019/4/16 
    UVA 10101
    CPE 一顆星
	1. 測資錯誤: presentation error(輸出格式有錯)
	2. 耗時過久 
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void f (long long int a,int b1=0)
{
	if ((a/10000000) != 0)
	{
		if ((a/10000000) > 100)
		{
			f(a/10000000,b1=1);
			cout << " kuti";
		}
		else
		{
			cout << a/10000000 << " kuti";
		}
		a = a%10000000;
		if (a != 0)
		    cout << " ";
	}
	if ((a/100000) !=0)
	{
		if ((a/100000) > 100)
		{
			f(a/100000,b1=2);
			cout << " lakh";
		}
		else
		{
			cout << a/100000 << " lakh";
		}
		a = a%100000;
		if (a != 0)
		    cout << " ";
	}
	if ((a/1000) !=0)
	{
		if ((a/1000) > 100)
		{
			f(a/1000,b1=3);
			cout << " hajar";
		}
		else
		{
			cout << a/1000 << " hajar";
		}  
		a = a%1000;
		if (a != 0)
		    cout << " ";
	}
	if ((a/100) !=0)
	{
		if ((a/100) > 100)
		{
			f(a/100,b1=4);
			cout << " shata";
		}
		else
		{
			cout << a/100 << " shata";
		}
		a = a%100;
		if (a != 0)
		    cout << " ";
	}
	if (a != 0)
	{
	    cout << a ;
    }
}
int main()
{
	long long int a,b=1;
	while(cin>>a)
	{
		if (a == 0)
		{
			printf("%4ld. 0\n",b);
			b++;
			continue;
		}
		printf("%4ld. ",b);
		f(a);
		cout << endl;
		b++;
	}
}
