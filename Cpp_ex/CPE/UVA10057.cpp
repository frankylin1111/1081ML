/*
    ------------- 2020/03/17 --------------------------
    uva10057
    1. тい计
	2. 璸衡Τ碭㎝い计妓计戈(cases)琌案计い计Τ2戈琌计い计Τ1
	3. тΤ碭贺程(ぃ┮块戈柑)戈计氮1戈案计氮2い计搭1
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
using namespace std;

int main() 
{
	int n=0;
	while(cin >> n)
	{
		int m[n],k=0,A1=0,flag = 0;
		for (int i =0;i<n;i++)
		{
			cin >> m[i];
		}
		sort(&m[0],&m[n]);
		if ((n%2) == 0)
		{
			k = (n-1)/2;
			A1 = abs(m[k+1]-m[k])+1;
			for (int i=0;i<n;i++)
			{
				if ((m[i] == m[k]) || (m[i] == m[k+1]))
				    flag++;
			}
			cout << m[k] << " " << flag << " " << A1 <<endl;
		}
		else
		{
			k = (n-1)/2;
			for (int i=0;i<n;i++)
			{
				if ((m[i] == m[k]))
				    flag++;
			}
			cout << m[k] << " " << flag << " " << 1 << endl;
		}
	}
	return 0;
}
