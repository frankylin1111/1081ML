/*
    2019/5/7
    UVA11332
	簡單的函數計算 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	long long i=0,n;
	while(cin >> n)
	{
		if (n == 0)
		    break;
		long long k =n,f=3,sum =0;
		while(f!=0)
		{
			if ((k/10) == 0)
			{
				k =sum+(k%10);
				f--;
				sum=0;
			}
			else
			{
				sum = sum+(k%10);
				k=k/10;
			}
		}
		cout << k << endl;
	}
} 
