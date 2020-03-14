/* 
    --------------- 2020/03/14 ----------------
    1.  溢位或者除以0的錯誤!! 
        Floating point exception (core dumped)
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned long long n=0,m=0;
	while(cin >> n >> m)
	{
		unsigned long long s = 0,flag=0,count=0,
		c[100000]={0};
		if (m == 0 && n == 0)
		{
			cout << "Boring!";
			flag = 1;
		}
		while(n !=0)
		{
			c[count] = n;
			if (m == 0)
			{
				cout << "Boring!";
				flag = 1;
				break;
			}
			if ((n%m)!=0 && n !=1)
			{
				cout << "Boring!";
				flag = 1;
				break;
			}
			n = n/m;
			count++;
		}
		if (flag == 1)
		{
			cout << endl;
		}
		else
		{
			for (int i=0;i<count;i++)
			{
				cout << c[i] << " ";
			}
			cout << endl;
		}
	}
} 
