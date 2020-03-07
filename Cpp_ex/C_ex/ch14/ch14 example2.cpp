#include <stdio.h>
#include <cstdlib>
#include <cmath>
// --- 加不加括號效果都一樣 , 不過在某些情況下會不一樣(下面會說明) .
#define S(r) (3.14159 * r * r) 
/*
        2018/08/04 ------------心得 
		ch14 前端處理程式 ---------- example 1
		
		S(r) = (r * r) 加括號跟乘除會有關係
		a(r) = r * r
		s1=72/S(6) 跟 s2 = 72 / a(6) 
		s1 = 2,s2 = 72 答案會不一樣 . 
*/


int main()
{
	float s;
	s= S(6);

	printf("S = %f\n",s);
}
