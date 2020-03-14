/*
    ---------- 2020/03/11 ---------------
    1. ¿é¥X®æ¦¡¿ù»~!! 
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	unsigned long long a=0;
	while(cin >> a)
	{
		unsigned long long a2[32]={0},i=0,k=0;
		if (a == 0)
		{
			break;
		}
		cout << "The parity of ";
		while(a!=0)
		{
			a2[i]= a%2;
		    i = i+1;
		    a = a/2;
		}
		for (int j =(i-1);j>=0;j--)
		{
			cout << a2[j];
			if (a2[j] == 1)
			{
				k = k+1;
			}
		}
		cout << " is " << k << " (mod 2)."<<endl;
	}
}
