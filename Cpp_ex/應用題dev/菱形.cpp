#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;
int main()
{
	int n;
	for (int i=0;i<21;i++)
	{
		n = i;
		if (i>10)
		    n=20-n;
		for (int j=1;j<22;j++)
		{
			if (abs(j-11) == n)
			    cout << "*";
			else
			    cout << ". ";
		}
		cout << '\n';
	}
 } 
