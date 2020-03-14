/*
    2019/9/14 
    CPE ¤@Áû¬P
	UVA 10035
	Correct!! 
*/
#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
	unsigned long long a =0,b =0,carry=0,total=0,c=0,d=0;
	while(cin >> a && cin >> b)
	{
		if (a == 0 && b == 0)
		{
			break;
		}
		carry = 0;
		total = 0;
		c=0;
		d =0;
		for (int i =0;i<9;i++)
		{
			c = a%10;
			d = b%10;
			a = a/10;
			b = b/10;
			carry = carry + c +d;
			if (carry >=10)
			{
				total++;
				carry = carry/10;
			}
			else
			{
				carry =0;
			}
		}
		if (total > 0)
		{
			if (total == 1)
			{
				cout << "1 carry operation."<<endl;
			}
			else
			{
				cout << total << " carry operations." << endl;
			}
		}
		else
		{
			cout << "No carry operation." << endl;
		}
	}
}
