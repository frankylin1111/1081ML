/*
    2019/9/14  
    CPE 一顆星
	UVA 100
	1.測資未過 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	unsigned int a=0,b=0,c=0,d=0,e=0,f=0,cycle=0,max_cycle =0;
	while(cin >> a && cin >> b)
	{
		e=0;
		f=0;
		if (a>b)
		{
			e =b;
			f =a;
			c =e;
		}
		else
		{
			e =a;
			f =b;
			c =e;
		}
		cycle =0;
		max_cycle=0;
		d = c;
		while(c <= f) // 此地方要注意 是 c<=f  而不是 c < f 
		{
			if (d == 1)
			{
				cycle++;
				if (cycle >= max_cycle)
				{
					max_cycle = cycle;
					cycle =0;
				}
				else
				{
					cycle =0;
				}
				c++;
				d =c;
			}
			else if ((d%2) == 1)
			{
				cycle++;
				d = (3*d) + 1;
			}
			else
			{
				cycle++;
				d = d/2;
			}
		}
		cout << a << " " << b << " " << max_cycle << endl;
	}
}
