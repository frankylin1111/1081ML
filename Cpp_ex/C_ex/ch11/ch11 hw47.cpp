#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 �߱o
		ch11 �}�C ------------------ Hw 47
		�}�C�P����
		�r�����а}�C
*/

int main()
{
	int c,nc,nt=1,i=0;
	char x;
	while ((x=getchar())!=64)
	{
		c++;
		if (x == '\n')
		{
		    nt++;
		    nc++;
		}
		else if(x == '\t' || x == ' ')
		{
			nc++;
		} 
	}
	printf("�r����:%d,�����:%d,���:%d",c,nc,nt);
}
