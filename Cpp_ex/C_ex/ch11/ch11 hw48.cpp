#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 48
		�}�C�P����
		�r�����а}�C
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
