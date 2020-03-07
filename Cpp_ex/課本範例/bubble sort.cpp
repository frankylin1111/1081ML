/*
    bubble sort
*/
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int a[5]={12,6,26,1,58},maximum;
	cout << "排序前的資料:";
	for (int k=0;k<5;k++)
	{
		cout << a[k] << "  ";
	}
	cout << endl;
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (a[j] > a[i])
			{
				maximum = a[j];
				a[j] = a[i];
				a[i] =maximum;
			}
		}
	}
	cout << "排序後的資料:";
	for (int o=0;o<5;o++)
	{
		cout << a[o] << "  ";
	}
} 
