#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/01 �߱o
		ch11 �}�C ------------------ HW 3 
*/

int main()
{
	int a[12][2],sum;
	for (int i=0;i<12;i++)
	{
		a[i][0] = i+1;
		if (a[i][0] == 2)
		{
			a[i][1]=28;
		}
		else if(a[i][0]%2 ==1)
		{
			if (a[i][0] <=7)
			{
				a[i][1]=31;
			}
			else
			{
				a[i][1]=30;
			}
		}
		else
		{
			if (a[i][0] <=7)
			{
				a[i][1]=30;
			}
			else
			{
				a[i][1]=31;
			}
		}
	}
	for (int i=0;i<12;i++)
	{
		printf("%3d%4d\n",a[i][0],a[i][1]);  // �a�k�T���X �a�k�|���X 
	}
}
