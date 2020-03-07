/*
    CPE 一顆星
	UVA10057
	//// 提示 : 中位數 
	1.題目理解不清楚
	2.耗時太久 
*/
#include <iostream>
#include <cstdlib> 
#include <vector>
#include <algorithm> 
using namespace std;
int main()
{
	int in;
	unsigned int a;
	while(cin >> in)
	{
		int k1=in-1,k2=in,a1=0,a2=0,a3=0;
		vector<unsigned int> my;
		for (int i=0;i<in;i++)
		{
			cin >> a;
			my.push_back(a);
		}
		sort(my.begin(),my.end());
		a1 = k1/2;
		cout << my[a1];
		for (int j=0;j<in;j++)
		{
			if (my[j] == my[a1])
			    a2++;
		}
		if (k2%2 !=0)
		{
			cout << " " << a2;
		}
		else
		{
			if(my[a1] == my[a1+1])
			    cout << " " << a2;
			else
			{
				for (int o=0;o<in;o++)
				{
					if (my[o] == my[a1+1])
					    a2++;
				}
				cout << " " << a2;
			}
		}
		
		
		
		if ((k2%2) != 0)
		{
			cout << " "<< 1;
		}
		else
		{
			a1 = k2/2;
			a3 = (my[a1]-my[a1-1]);
			cout << " " << a3+1;
		}
		cout << '\n';
	}
}
