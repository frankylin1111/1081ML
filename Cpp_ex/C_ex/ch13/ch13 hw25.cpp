#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 25
		函數的使用 
*/
// 呼叫的次數 
void sub(int *x)
{
	*x = *x +1;
	printf("呼叫了%d次\n",*x);
}
int main()
{
	int op =0;
	sub(&op);
	sub(&op);
	sub(&op);
}
