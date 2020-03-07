#include <iostream>
#include <cstdlib>

int dpp(int *x1)
{
	int small = *x1;
	for (int i = 0;i<3;i++,x1++)
	{
		if (small > *x1)
		    small = *x1;
	}
	return small;
}

float ar(int x1,int y1)
{
	int z1;
	z1 = (x1 *y1);
	return float (z1/2);
}

