/*
    2018/11/14
    一顆星題目 
    1.未設定陣列的初始值
	2.未搞清楚題目
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	unsigned int n,o=1,number,prenumber;
	cin >> n;
	cin >> number;
	prenumber = number;
	while ((n+1)!=o)
	{
		unsigned int k[9]={0},a=0;
		/*if ((number/1000000000)!=0)
		{
			k[9] = number/1000000000;
			number = number % 1000000000;
		}*/
		if ((number/100000000)!=0)
		{
			k[8] = number/100000000;
			number = number % 100000000;
		}
		if ((number/10000000)!=0)
		{
			k[7] = number/10000000;
			number = number % 10000000;
		}
		if ((number/1000000)!=0)
		{
			k[6] = number/1000000;
			number = number % 1000000;
		}
		if ((number/100000)!=0)
		{
			k[5] = number/100000;
			number = number % 100000;
		}
		if ((number/10000)!=0)
		{
			k[4] = number/10000;
			number = number % 10000;
		}
		if ((number/1000)!=0)
		{
			k[3] = number/1000;
			number = number % 1000;
		}
		if ((number/100)!=0)
		{
			k[2] = number/100;
			number = number % 100;
		}
		if ((number/10)!=0)
		{
			k[1] = number/10;
			number = number % 10;
		}
		if ((number/1)!=0)
		{
			k[0] = number/1;
			number = number % 1;
		}
		for (int i=0;i<9;i++)
		{
			a = a+(k[i]*k[i]);
		}
		if ((a/10)==0)
		{
			if (a == 1)
			{
				cout <<"Case #"<<o<<": " << prenumber <<" is a Happy number."<<endl;
				o++;
			}
			else
			{
				cout <<"Case #"<<o<<": " << prenumber <<" is an Unhappy number."<<endl;
				o++;
			}
			if ((n+1)!=o)
			{
				cin >> number;
				prenumber = number;
			}
		}
		else
		{
			number = a;
		}
	}
}
