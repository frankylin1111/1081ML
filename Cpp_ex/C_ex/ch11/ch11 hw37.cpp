#include <stdio.h>
#include <cstdlib>
#include <cstring> 
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 37
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	char a[] = "Program",b[] ="Fortran";
	char *p,*q;
	p = a;
	q = b;
	for (q=b;q<b+7;q++)
	{
		if (*q == *p)
		    printf("%c",*q);
		p++;
	}
	
}
