#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned long long n=0,k=0;
	while(cin >> n)
	{
		if (n == 0)
		{
			break;
		}
		k = 0;
		for (int i = 0;i<3;i++)
		{
			k = 0;
			while(n != 0)
			{
				k = k+(n%10);
				n = n/10;
			}
			n = k;
		}
		cout << n << endl;
	}
 } 
