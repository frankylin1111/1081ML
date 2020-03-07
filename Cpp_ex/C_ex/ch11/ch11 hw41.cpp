#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 41
		陣列與指標
		字元指標陣列
*/

int main()
{
	char x[] = "COBOL";
	for (int i=0;i<5;i++)
	{
		int c = tolower(*(x+i));
		    putchar (c);
	}
}
