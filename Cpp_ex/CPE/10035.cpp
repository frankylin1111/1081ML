/*
    2019/3/19 
    CPE 一顆星
	UVA 10035
	1. CPE 輸出輸入格式有誤!! 需多加練習 
*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	long long a,b,c,d=10,e=0,ac,bc,total=0;
	
	while (cin >> a && cin >> b)
	{
		if (a == 0 && b ==0)
		    break;
		for (int i=0;i<11;i++)
		{
		    ac = a%d;
			a = a/d;
			bc = b%d;
			b = b/d;
			total = total+ac +bc;
			if (total >=10)
			{
				total = total/10;
				e++;
			}
			else
			{
				total =0;
			}
			// cout << ac << "  "<<bc <<"  "<< total << endl;
		}
		if (e >=2)
		{
			cout << e << " carry operations.";
		}
		else if (e ==1)
		{
			cout << e << " carry operation.";
		}
		else
		{
			cout << "No carry operation.";
		}
		cout << endl;
		e = 0;
	}
} 
