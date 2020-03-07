#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/21 心得
		ch11 陣列 ------------------ Hw 47
		陣列與指標
		字元指標陣列
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
	printf("字元數:%d,單詞數:%d,行數:%d",c,nc,nt);
}
