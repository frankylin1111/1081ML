/*
    ----------- 2020/03/14 --------------
    1. 記憶區段錯誤 (陣列數值太小)
	2. 利用天數計算!! 
*/
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int number,days=0,m=0;
		cin >> days;
		cin >> number;
		int player[number];
		int day[3650] = {0};
		for (int i = 0;i<number;i++)
		{
			cin >> player[i];
		}
		
		for (int j=1;j<=days;j++)
		{
			if ((j%7) == 6)
			{
				j++;
				continue;
			}
			for (int k = 0;k<number;k++)
			{
				if ((j%player[k]) == 0)
				{
					day[j-1]++;
				}
			}
		}
		
		for (int i=0;i<3650;i++)
		{
			if (day[i] > 0)
			    m++;
		}
		printf("%d\n",m);
	}
	return 0;
}
