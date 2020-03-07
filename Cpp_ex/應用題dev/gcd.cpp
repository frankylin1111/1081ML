
#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int gcd(int a,int b)
{
	int s;
	while(b!=0)
	{
		s =a%b;
		a=b;
		b=s;
	}
	return a;
}

int main()
{
	int q,k=0;
	cin >> q;
    if (q!=0)
    {
	    for(int i=1;i<q;i++)
        for(int j=i+1;j<=q;j++)
        {
            k+=gcd(i,j);
        }
        cout << k << endl;
	}
	k=0;
}
