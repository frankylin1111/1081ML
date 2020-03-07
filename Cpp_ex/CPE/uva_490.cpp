/*
    ----------  2020/03/07 -----------
    1. compile error
    2. 題目理解不清楚
	3. 多一個 =  
*/
#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int k=0,maxlen=0;
	string a[100]={""};
	int b[100]={0};
	while(getline(cin,a[k]))
	{
		if (a[k]== "e")
		{
			break;
		}
		b[k] = a[k].size();
		if (a[k].size()>maxlen)
		{
			maxlen = a[k].size();
		}
		
		k = k+1;
	}
	for(int i=0;i<maxlen;i++)
	{
		for (int j=k-1;j>=0;j--)
		{
			if (i < b[j])
			{
				cout << a[j][i];
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
}
