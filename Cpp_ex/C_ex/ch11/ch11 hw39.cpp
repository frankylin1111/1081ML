#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 39
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	char b[] ="BASIC PROGRAM";
	char *p;
	p = b;
	printf("%c%c",*p,*(p+12));
}
