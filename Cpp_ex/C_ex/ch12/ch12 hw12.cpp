#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 �߱o
		ch12 ���c ------------------ HW 12 
		���c���ϥΤ�k 
*/

int main()
{
	static struct s
    {
	    int n;
	    int m;
	    char a[10];
    }message[]={
    	102,847,"ABCDE",103,784,"FGHIJ",104,468,"KLMNO",209,732,"PQRST",
		304,500,"UVWXYZ" 
	};
    for (int i=0;i<5;i++)
    {
    	printf("|__| |__| %d |__| |__| |__| %d |__| |__| |__| %s\n"
		,message[i].n,message[i].m,message[i].a);
	}
}
