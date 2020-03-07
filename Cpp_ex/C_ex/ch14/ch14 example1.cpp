#include <stdio.h>
#include <cstdlib>
#include <cmath>
// --- #define 為前端處理程式,表示要進行某種定義 
#define P  3.14159   // P 為巨集替換名稱, 3.14159 為巨集替換主體,結尾不需要加分號 
#define R  5
#define S  P * R * R // S 被 P 和 R定義,在這之前,P 和 R 都必須是已定義. 
#define L  2 * P * R 
/*
        2018/08/04 ------------心得 
		ch14 前端處理程式 ---------- example 1
		
		整個程式是給圓的半徑,算圓面積及周長, 
		在main()函數之前用 5 替換 R , 換句話說 , 整個程式 R 都等於 5,
		若要求半徑為其他值的圓面積和周長,只需要改變第 6 行#define 敘述中巨集替換主體
		的值即可,這是前端處理程式的優點.
		 
*/


int main()
{
	float ss,ll;
	int rr;
	
	rr =R; // 已被定義 R 指定給 rr 
	ss =S; // 已被定義 S 指定給 ss 
	ll =L; // 已被定義 L 指定給 ll 
	
	printf("R=%d S=%f L=%f\n",rr,ss,ll);
}
