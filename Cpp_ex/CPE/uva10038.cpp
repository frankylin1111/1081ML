/*
    --------- 2020/03/09 -------------
    1. 編譯錯誤
	2. 題目沒看清楚
	3. Time Limit!! 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	long long a=0;
	while(cin >> a)
	{
		long long b[a]={0},flag = 0,c[a-1]={0};
		for (int i =0;i<a;i++)
		{
			cin >> b[i];
		}
		for (int j=1;j<a;j++)
		{
			c[j-1] = abs(b[j]-b[j-1]);
		}
		sort(&c[0],&c[a-1]);
		for (int k=0;k<(a-1);k++)
		{
			// cout << c[k] << " ";
			if (c[k] != k+1)
			    flag = 1;
		}
		if (flag == 1)
		    cout << "Not jolly" << endl;
		else
		    cout << "Jolly" << endl; 
	}
}
