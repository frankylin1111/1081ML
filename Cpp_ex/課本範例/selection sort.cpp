/*
    selection sort
*/
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int a[10]={0,5,3,1,2,4,6,7,9,8},minimum,j=0;
	for (int i=0;i<10;i++)
	{
		    
			if (a[j] < a[i])
			{
				minimum=a[i];
				a[i] = a[j];
				a[j]= minimum;
			}
			
		    if (j!=10)
			{
			    j++;
				i--;	
			}
			else
			{
				j = i+1;
			}
	}
	for (int k=0;k<10;k++)
	{
		cout << a[k] << "  ";
	}
}
