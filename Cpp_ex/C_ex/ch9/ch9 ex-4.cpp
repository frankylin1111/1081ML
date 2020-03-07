#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h> 
/*
    心得 2018/06/09
	chapter 9 算術運算函數 ------- example 4
	
	srand 亂數的test
	srand(time(NULL)) and srand(3) different!
	有使用time的話 每次執行的亂數都不同
	而 srand(3) 表示可以指定亂數給 至多 3 的變數 
*/
int main()
{
	// rand() 只能使用 int 
	int a,b,c;
//--------- srand() 的 seed 使用time  每次執行cmd的亂數值都不一樣 
    srand(time(NULL));
//--------- 取 30~50 之間的值 
    a = 30+(rand()%21);
    b = 30+(rand()%21);
    c = 30+(rand()%21);
	printf("%d %d %d\n" ,a,b,c); 
}
