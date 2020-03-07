#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch13 函數 ------------------ example 1
		函數的使用 
*/
// 先呼叫不定義 
void sub1();
void sub2();
int main()
{
	sub1();
	sub2();
	
}

// 後定義
 
void sub1()
{
	printf("C");
}
void sub2()
{
	printf(" Language\n");
} 
