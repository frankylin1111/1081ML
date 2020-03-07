#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch13 函數 ------------------ example 4
		函數的使用 
*/
// 指標函數 
int add(int *p)
{
	int a;
	for (int i=0;i<4;i++,p++)
	{
		a+=*p;
	}
	*p =  a;
}
int main()
{
	static int s[5]={8,6,7,4,0};
	add(s);
	printf("SUM = %d\n",s[4]);
}
