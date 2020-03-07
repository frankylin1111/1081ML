#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i;
	cin >> a;
	while(a--)
	{
		cin >> b;
		cin >> c;
		if (b>=c)
		{
			d = b+c;
			e = b-c;
			f = d%2;
			g = e%2;
			if (f==0 && g==0)
			{
				h = d/2;
				i = e/2;
				cout << h << " " << i << endl;
			}
			else
			{
				cout << "impossible" << endl;
			}
		}
		else
		{
			cout << "impossible" << endl;
		}
	}
}
