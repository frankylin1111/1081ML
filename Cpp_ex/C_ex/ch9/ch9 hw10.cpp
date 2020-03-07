#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- HW 10 
*/
int main()
{
	int k,sum;
	srand(time(NULL));
	for (int i=0;i<10;i++)
	{
	    k=rand();
		printf(" + %d" ,k);
		sum+=k;
	}
	printf(" = %d",sum);
}
