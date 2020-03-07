#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
/*
        2018/07/22 心得
		ch12 結構 ------------------ example 1
		結構的使用方法 
*/

int main()
{
/*----------- 說明三個結構型態 ------------------
        name[20]    sex   age 
        就好像 int 是整數 float 是浮點數  char 是字元 
		並不需要配置儲存區
*/ 
	struct human
	{
		char name[20];
		int sex;
		int age;
	};
	struct human man;  // 定義一個結構變數名稱man  這時才需要配置記憶體 
	scanf("%s",man.name);
	scanf("%d",&man.sex);
	scanf("%d",&man.age);
	
	printf("%s  ",man.name);
	printf("%d  ",man.sex);
	printf("%d  ",man.age);
	
}
