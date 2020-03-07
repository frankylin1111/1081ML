#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 42
		陣列與指標
		字元指標陣列
*/

int main()
{
	char p[] = "C Language";
	char q[] = "Program";
	char *x = p;
	char *y = q;
	printf("%s\n%s",x,y);
}
