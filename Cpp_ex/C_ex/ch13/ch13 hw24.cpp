#include <stdio.h>
#include <cstdlib>
#include <cmath>
/*
        2018/07/30 心得
		ch13 函數 ------------------ HW 24
		函數的使用 
*/
// 搜尋 
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
	if (find(a,f) == 0) printf("%d不在陣列中",f);
	else
	    printf("%d的位置在%d\n",f,find(a,f));
}
