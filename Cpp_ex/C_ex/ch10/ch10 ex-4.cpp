#include <stdio.h>
#include <stdlib.h>
#include <cstring>
/*
    �߱o 2018/06/30
	chapter 10 �r��ާ@��� ------- example 4 
	
*/
int main()
{
	int k;
	char p1[20],p2[20];
	gets(p1);
	gets(p2);
// ------- ����r��O�_�ۦP ---------
	k = strcmp(p1,p2);
// ------- if....else..���Ϊk ---------- 
	(k == 0)?(printf("%s\n",p1)):(printf("%s    %s\n",p1,p2));
	
}
