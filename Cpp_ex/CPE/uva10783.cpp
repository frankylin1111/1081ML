/*
    ------------ 2020/03/10 --------------
    1. ²Ä¤@¦¸wrong answer
*/ 
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	long long a=0,b=0,c=0;
	cin >> c;
	a = c;
	while(c--)
	{
		long long d=0,e=0,total=0;
		cin >> d >> e;
		for (int i=d;i<=e;i++)
		{
			if ((i%2) == 1)
			{
				total = total + i;
			}
		}
		cout <<"Case "<<(a-c)<<": "<< total << endl;
	}
	
}
