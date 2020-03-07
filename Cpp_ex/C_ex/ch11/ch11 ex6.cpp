#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 心得
		ch11 陣列 ------------------ example 6
		陣列與指標
		字元指標陣列
*/

int main()
{
	static char s[] = "600";
	int i,n;
	
	n = 0;
	for (i = 0;s[i]>='0' && s[i]<='9';i++)
	    n=10*n +s[i]-'0';
	printf("digit=%d\n",n);
}
