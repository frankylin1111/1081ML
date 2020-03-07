#include <stdio.h>
#include <cstdlib>
#include <cmath>
// ----- 與 printf("x=%d\n",x); 功能相似 
#define PRINT printf("x=%d\n",x);
/*
        2018/08/04 ------------心得 
		ch14 前端處理程式 ---------- example 3
		
		第 5 行若不加分號 , 第 19 21 23 行必須加分號!! 
*/


int main()
{
	int x;
	
	x = 1+2+3;
	PRINT
	x = 1*2*3;
	PRINT
	x = 1-2-3;
	PRINT
}
