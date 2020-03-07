#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int x=10;
//	d=++a&&--b;
//	e=++c&&b--;
/*   ~ 位元取反運算
	設a =2 ,~a的算法就是:
	 
	1.二進位為0010轉乘1補數1101
	2.電腦判定1101為負數(最高次項為1) 再轉成2補數0010在加1變成0011
	3.由於是負數,3變-3
	~a = -3
*/
	
	//d=++a;
	//e=--b;
	int a=x++;
	int b=x++;
	int c=x++; 
	printf ("%d,%d,%d,%d \n",a,b,c,x);
	
	return 0;
}
