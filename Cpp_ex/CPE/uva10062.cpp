/*
    ----------------- 2020/03/17-----------------------
    1. correct!!
*/ 
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;

int main()
{
	string a;
	while(getline(cin,a))
	{
		int count1[96]={0};
		sort(&a[0],&a[a.length()]);
		for (int i=32;i<128;i++)
		{
			for (int j=0;j<a.length();j++)
			{
				if (((int ) a[j]) == i)
				    count1[i-32]++;
			}
		}
		/*for (int i=0;i<95;i++)
		{
			cout << count1[i] << "  ";
		}*/
		for (int i=1;i<1001;i++)
		{
			for (int j=95;j>=0;j--)
			{
				if (count1[j] == i)
				    cout << j+32 << " " << count1[j] << endl;
			}
		}
	}
}
