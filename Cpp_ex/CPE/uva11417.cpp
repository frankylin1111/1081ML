/*
    ------------ 2020/03/14 ---------------
    uva11417
    ³q¹L!! 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int a,int b)
{
	int s;
	if (b == 0)
	    return a;
	else
	    return gcd(b , a%b);
}
int main()
{
	int n=0;
	while(cin >> n)
	{
		int G1=0;
		if (n == 0)
		    break;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
			    G1+=gcd(i,j);
			}
		}
		cout << G1 <<endl;	
	}
}
