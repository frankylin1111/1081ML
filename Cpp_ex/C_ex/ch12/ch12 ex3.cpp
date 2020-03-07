#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/29 心得
		ch12 結構 ------------------ example 3
		結構的使用方法 
		輸出十二個月及各月天數的程式 
*/

/* 1.在主程式外宣告的結構 與 main()內宣告的結構差別在於
     程式外的結構可以在所有程式的main()內使用,而程式內的結構只能在該結構內使用
   2.使用靜態結構的用意在於可以在宣告結構變數的時候設定初始值 
*/ 
static struct month
{
	char monthn[10];
	int days;
}month_tab[] = {
// 直接宣告十二個月份及天數            
"January",31,"Febuary",28,
"March",31,"April",30,
"May",31,"June",30,
"July",31,"August",31,
"September",30,"October",31,
"November",30,"December",31};

int main()
{
	int i;
// 用for迴圈輸出 
	for (i=0;i<12;i++) 
	    printf("%-10s: %2d\n",month_tab[i].monthn,month_tab[i].days);
}
