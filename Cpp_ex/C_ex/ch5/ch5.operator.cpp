#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int x=10;
//	d=++a&&--b;
//	e=++c&&b--;
/*   ~ �줸���ϹB��
	�]a =2 ,~a����k�N�O:
	 
	1.�G�i�쬰0010�୼1�ɼ�1101
	2.�q���P�w1101���t��(�̰�������1) �A�ন2�ɼ�0010�b�[1�ܦ�0011
	3.�ѩ�O�t��,3��-3
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
