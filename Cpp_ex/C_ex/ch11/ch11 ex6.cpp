#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ example 6
		�}�C�P����
		�r�����а}�C
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
