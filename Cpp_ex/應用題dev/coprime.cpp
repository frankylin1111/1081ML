#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int x,int y)
{
	int z;
	while(y !=0)
	{
		z = x%y;
	    x = y;
	    y = z;
	}
	return x;
}
int main()
{
	int q,count;
	for (int i =1;i<4800;i++)
	{
		if (gcd(4800,i) == 1)
		{
			count++;
			cout << i << endl;
		}
	}
	cout << count;
}
