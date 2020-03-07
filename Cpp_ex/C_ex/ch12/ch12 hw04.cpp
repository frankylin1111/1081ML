#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
/*
        2018/07/29 心得
		ch12 結構 ------------------ HW 4 
		結構的使用方法 
*/

int main()
{
	struct student{
		int mid;
		int final;
	}student1;
	scanf("%d",&student1.mid);
	scanf("%d",&student1.final);
	float total = student1.mid+student1.final; // 不先除完的原因是因為不要除成整數再轉成浮點數,以便四捨五入 
	printf("平均成績:%f",ceil(total/2)); // ceil 無條件進位 
}
