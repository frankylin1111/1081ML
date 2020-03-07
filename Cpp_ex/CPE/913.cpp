#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	long long n;
	while(cin >> n)
	{
		long long h=0,low=0,s=0,sum=0;
		if (n == 1)
		{
			cout << 1 << endl;
			continue;
		}
		low = (n+1)/2;
		h = ((n+1)*low)/2;
		h = h-1;
		s = (2*h)+1;
		sum = s+s-2+s-4;
		cout << sum << endl; 
	}
 } 
