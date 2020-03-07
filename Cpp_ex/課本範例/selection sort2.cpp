/*
    selection sort2
    two for °j°é 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int a[10]={0,5,3,1,2,4,6,7,9,8},max=0;
	for (int i=0;i<10;i++)
	{
		for (int j=i;j<10;j++)
		{
			if (a[i] > a[j])
			{
				max = a[i];
				a[i] = a[j];
				a[j] = max;
			}
		}
	}
	for (int k=0;k<10;k++)
	{
		cout << a[k] << "  ";
	}
} 
