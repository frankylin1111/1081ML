/*
    2019/4/9
    CPE 一顆星
	uva 10550
	1. wrong answer
	2. 先順時針找第一個號碼,再逆時針找第二個號碼,最後順時針找第三個號碼 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c,d,g;
	while(cin>>a>>b>>c>>d)
	{
		if (a== 0 && b==0 && c==0 && d==0)
		{
			break;
		}
		g = -2;
		int e=720,f[40]={0,1,2,3,4,5,6,7,8,9,10,
		11,12,13,14,15,16,17,18,19,20,
		21,22,23,24,25,26,27,28,29,30,
		31,32,33,34,35,36,37,38,39};
		/*if (abs(b-a)>=(40-abs(b-a)))
		{
			e=e+((40-abs(b-a))*9);
		}
		else
		{
			e=e+(abs(b-a)*9);
		}*/
		g = a;
		while(g!=b)
		{
			g--;
			if (g == -1)
			{
				g=39;
			}
			e = e+9;
		}
		e = e+360;
		g = b;
		while(g!=c)
		{
			g++;
			if (g == 40)
			{
				g=0;
			}
			e = e+9;
		}
		g = c;
		while(g!=d)
		{
			g--;
			if (g == -1)
			{
				g=39;
			}
			e = e+9;
		}
		cout << e <<endl;
	}
 } 
