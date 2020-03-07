#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int find_max(int *d)
{
	int big = *d;
	for (int i=0;i<6;i++)
	{
		if (*(d+i)>big)
		    big = *(d+i);
	}
	return big;
}

int main()
{
	int a1[]={1,7,3,9,10,5};
	cout << find_max(a1);
}
