/*
    ----------------- 2020/03/16 ----------------
    1. 沒看清楚題目
	2. 負整數不算 B2-Sequence 
*/
#include <iostream>
#include <cstdlib>
using namespace std;

int num(int a)
{
	int sum1=0;
	for (int i = a;i>0;i--)
	{
		sum1 = sum1 + i;
	}
	return sum1;
}
int main()
{
	int n=0,count2=1;
	while(cin >> n)
	{
		int count[n]={0},s=0;
		s = num(n);
		int sum2[s]={0},k=0,flag=0;
		for (int i=0;i<n;i++)
		{
			cin >> count[i];
			if (count[i] < 1)
			    flag = 1;
		}
		for (int i=0;i<n;i++)
		{
			for (int j =i;j<n;j++)
			{
				sum2[k] = count[i]+count[j];
				k++;
			}
		}
		/*for (int i=0;i<k;i++)
		{
			cout << sum2[i] << " ";
		}
		cout << endl;*/
		for (int i=0;i<k;i++)
		{
			for (int j=(i+1);j<k;j++)
			{
				if (sum2[i]==sum2[j])
				{
					flag = 1;
					break;
				}
			}
		}
		if (flag == 0)
		    cout << "Case #" << count2 << ": It is a B2-Sequence."<<endl<<endl;
	    else
	        cout << "Case #" << count2 << ": It is not a B2-Sequence."<<endl<<endl;
        count2++;
	}
}
