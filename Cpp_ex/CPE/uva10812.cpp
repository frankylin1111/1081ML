/*
    ------------ 2020/03/10 --------------
    1. wrong answer
    2. 第 19 行是 < 而非 <= 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	long long a=0,b=0;
	cin >> a;
	while(a--)
	{
		long long c=0,d=0,e=0,f=0,flag=0;
		cin >> c >> d;
		if (c < d)
		{
			cout << "impossible" << endl;
			continue;
		}
		for (int i=0;i<=c;i++)
		{
			f = i;
			e = abs(c-f);
			if (abs(f-e)== d)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			if (f>=e)
			    cout << f << " " << e << endl;
			else
			    cout << e << " " << f << endl;
		}
		else
		{
			cout << "impossible" << endl;
		}
	}
}
