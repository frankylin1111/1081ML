#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 1 
		結構的使用方法 
*/



int main()
{
	struct bs{
		int i;
		char arr[20];
	}psrec;
	printf("pw size:%d",sizeof(psrec));
}
