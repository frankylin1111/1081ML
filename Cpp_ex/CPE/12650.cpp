/* 
    2018/10/10 
    CPE �@���P
	compile error:
	(cin>>a>>b) >= 1  ����ϥ� 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a,b,c;
	while(cin>>a>>b)
	{
		int d[a];
		for (int i=0;i<a;i++)
		{
			d[i] = i+1;
		}
		for (int j=0;j<b;j++)
		{
			cin >>c;
			d[c-1]=0;
		}
		for (int k=0;k<a;k++)
		{
			if (a == b)
			{
				cout << '*';
				break;
			}
			else if (d[k] != 0)
			    cout << d[k] << ' ';
		}
		cout << endl;
	}
} 
