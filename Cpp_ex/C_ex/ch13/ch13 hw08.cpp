#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/30 み眔
		ch13 ㄧ计 ------------------ HW 8
		ㄧ计㊣ 
*/

int er(int x1,int y1)
{
// 耕タ絋芠├琌肚跋办跑计(return z1),ㄧ计琌肚ㄧ计 
	int z1;
	if (x1 > y1)
	    return z1 = x1;
	else if (x1 == y1)
	    return z1 = x1;
	else 
	    return z1 = y1;
}
int main()
{
	int x =5,y=10;
	printf("竒パゑ耕,程:%d",er(x,y));
}
