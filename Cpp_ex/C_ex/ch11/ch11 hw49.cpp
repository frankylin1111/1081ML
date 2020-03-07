#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 49
		陣列與指標
		字元指標陣列
*/

int main()
{
	char a[20]="ABCDEFG" ,b[20];
	strcpy(b,a);
	printf("%s",b);
}
