#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 �߱o
		ch13 ��� ------------------ HW 24
		��ƪ��ϥ� 
*/
// �j�M 
int find(int *x,int y)
{
	int i=0;
	while(i<10)
	{
		if (*(x+i) == y)
		{
			i++;
			break;
		}
		i++;
	}
	if (i == 10) return 0;
	
	return i;
}
int main()
{
	int a[10]={10,12,23,34,45,56,67,78,89,90},f=45;
	if (find(a,f) == 0) printf("%d���b�}�C��",f);
	else
	    printf("%d����m�b%d\n",f,find(a,f));
}
