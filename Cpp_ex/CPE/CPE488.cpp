/* 
    2018/10/23
    CPE488 
    --Presentation error--
    ¿é¥X®æ¦¡¿ù»~ 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int n,a,f;
	cin >> n;
	while(n!=0)
	{
		cin >> a >>f;
		int b = a*2;
		for (int k=0;k<f;k++)
		{
			for (int i=1;i<=b-1;i++)
		    {
			    for (int j=0;j<a-abs(a-i);j++)
			    {
				    cout << a-abs(a-i);
			    }
			    cout << '\n';
		    }
			if (n==1 && k == (f-1))
			    break;
			else
			    cout << '\n';
		}
		n--;
	}
}
