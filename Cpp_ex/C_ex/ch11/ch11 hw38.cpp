#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 38
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	char b[] ="Fortran";
	char *p;
	p = b;
	printf("%c%c",*(p+5),*(p+6));
}
