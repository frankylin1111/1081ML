/*
    2019/11/12
    UVA 11541
	1.if ... else§PÂ_¦¡¶¶§Ç¶·ª`·N 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int t,sum=0,find =0,q=0;
	string a=" ";
	char c;
	a.clear();
	scanf("%d\n",&t);
	while(t--)
	{
		q++;
		find =0;
		sum = 0;
		getline(cin,a);
		cout << "Case " << q << ": ";
		for (int i=0;i<a.length();i++)
		{
		    if ((int ) a[i] >= 65 and (int ) a[i] <=90 and find ==1)
			{
				for (int j=0;j<sum;j++)
				{
					cout << c;
				}
				c = a[i];
				sum = 0;
				find =0;
			}
			else if ((int ) a[i] >= 65 and (int ) a[i] <=90)
			{
				c = a[i];
				find = 0;
			}
			else if ((int ) a[i] >=48 and (int ) a[i] <= 57)
			{
				sum = (sum*10) + ((int ) a[i]-48);
				find =1;
			}
		}
		for (int j=0;j<sum;j++)
		{
			cout << c;
		}
		cout << endl;
		a.clear();
	}
}
