/*
    ------------------- 2020/04/13 ----------------------
    1. UVA沒過 
	2. 測資時間超過 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int test = 0,case1=1;
	cin >> test;
	while(test--)
	{
		long long xy[4]={0},x=0,count=0;
		for (int i=0;i<4;i++)
		{
			cin >> xy[i];
		}
		while(xy[0] != xy[2] || xy[1] != xy[3])
		{
			/*if (xy[0] == xy[2] && xy[1] == xy[3])
			{
				break;
			}*/
			if (xy[1]!=0)
			{
				xy[0]++;
				xy[1]--;
			}
			else if (xy[1]==0)
			{
				x = xy[1];
				xy[1] = xy[0]+1;
				xy[0] = x;
			}
			count++;
		}
		cout << "Case " << case1 << ": " << count <<endl;
		case1++;
	}
} 
