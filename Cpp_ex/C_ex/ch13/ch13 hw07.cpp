#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch13 函數 ------------------ HW 7
		函數的呼叫 
*/

// 使用迴圈呼叫 A ... Z 
void call()
{
	for (int i=65;i<91;i++)
	{
		printf("%c\n",char (i));
	}
}
int main()
{
	call();
}
