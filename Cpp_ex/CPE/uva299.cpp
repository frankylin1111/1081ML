/*
    ------------ 2020/04/28 -----------------
    uva299
    1. ³q¹L(Access!!) 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    int n=0;
	scanf("%d\n",&n);
	while(n--)
	{
		int g=0;
		cin >> g;
		int l[g]={0},s=0,d=0;
		for (int i=0;i<g;i++)
		{
			cin >> l[i];
		}
		for (int i=0;i<g;i++)
		{
			for (int j=i;j<g;j++)
			{
				if (l[i] > l[j])
				{
					d++;
					s = l[i];
					l[i] = l[j];
					l[j] = s;
				}
			}
		}
		cout << "Optimal train swapping takes " << d <<" swaps."
		     <<endl;
	}
}
