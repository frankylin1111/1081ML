#include <stdio.h>
#include <cstdlib>
#define X int 
#define H 12
/*
        2018/08/04 ------------心得 
		ch14 前端處理程式 ---------- HW 9
		
*/



int main()
{
	X sum,a[H]={100,101,102,103,104,105,106,107,108,109,110,111};
	for (int i = 0;i<H;i++)
	    sum+=a[i];
	    
	printf("sum = %d\n",sum);
}
