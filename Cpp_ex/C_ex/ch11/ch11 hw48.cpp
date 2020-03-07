#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 48
		陣列與指標
		字元指標陣列
*/

int main()
{
	int c=0,i=0;
	char x[50];
	scanf("%s",x);
	while (x[i]!='\0')
	{
		i++;
		c++;
	}
	printf("%d",c);
}
