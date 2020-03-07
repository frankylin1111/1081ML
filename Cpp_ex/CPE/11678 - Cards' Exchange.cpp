/* 
    2019/4/5
    CPE 一顆星
	UVA 11678
	1.演算法複雜
	2.超過題目預設的時間(Time limit exceeded) 
*/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	long long a,b,number,a2,b2,k,find;
	while(cin>>a>>b)
	{
		if (a == 0 && b==0)
		{
			break;
		}
		a2=0;
		b2=0;
		k=0;
		find=0;
		int a1[a];
		int b1[b];
		for (int i=0;i<a;i++)
		{
			cin >> a1[i];
		}
		sort(&a1[0],&a1[a-1]);
		for (int j=0;j<b;j++)
		{
			cin >> b1[j];
		}
		sort(&b1[0],&b1[b-1]);
		for (int i=0;i<a;i++)
		{
			if (a1[i] == a1[i+1])
			    a1[i] =0;
		}
		for (int i=0;i<b;i++)
		{
			if (b1[i] == b1[i+1])
			    b1[i] =0;
		}
		for (int i=0;i<a;i++)
		{
			k = a1[i];
			find =0;
			for (int j=0;j<b;j++)
		    {
			    if (k == b1[j])
			    {
			    	b1[j]=0;
			    	find =1;
				}
		    }
		    if (find == 1)
		        a1[i]=0;
		}
		for (int i=0;i<a;i++)
		{
			if (a1[i] == 0)
			{
				a2++;
			}
		}
		for (int i=0;i<b;i++)
		{
			if (b1[i] == 0)
			{
				b2++;
			}
		}
		/*for (int i=0;i<a;i++)
		    cout << a1[i] << " ";
		cout << endl;
		for (int i=0;i<b;i++)
		    cout << b1[i] << " ";
		cout << endl;*/
		if ((a-a2) >= (b-b2))
		{
			cout << (b-b2) << endl;
		}
		else
		{
			cout << (a-a2) << endl;
		}
	}
}
