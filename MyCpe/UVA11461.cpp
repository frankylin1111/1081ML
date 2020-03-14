/* 
------------- 2019/10/22 ----------------
    1. Accepted!!
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	float a=0,b=0,count=0,q=0,p=0;
	while(cin >> a >> b)
	{
		count =0;
		if (a==0 && b==0)
		{
			break;
		}
		for (int i=a;i<=b;i++)
		{
			q = sqrt(i);
			p = floor(q+1);
			// cout << q << " " << p << endl;
			if ((p-q) == 1)
			{
				count = count + 1;
			}
		}
		cout << count << endl;
	}
}
