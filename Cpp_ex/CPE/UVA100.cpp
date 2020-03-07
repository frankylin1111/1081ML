/*
    2019/3/19  
    CPE 一顆星
	UVA 100
	1.測資未過 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	long long a,a1,b,c,c1,n,maxi,in;
	while(cin >> a >> c)
	{
		b=1;
		maxi =1;
		if (a>c)
		{
			a1 = c;
			c1 = a;
		}
		else
		{
			a1 = a;
			c1 = c;
		}
		for (int i=a1;i<=c1;i++)
		{
		    b=1;
			n = i;
			while(n != 1)
		    {
			    b++;
			    if ((n%2) == 1)
			        n = (3*n)+1;
			    else
			        n = n/2; 
		    }
		    if (b >= maxi)
		        maxi = b;
		}
		cout << a << " " << c << " "<< maxi << endl;
	}
 } 
