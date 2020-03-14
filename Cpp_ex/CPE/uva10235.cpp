/*
    -------------- 2020/03/14 ------------------
    1.  題目理解不清楚 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int s(unsigned long long a)
{
	unsigned long long b=2,num=0;
	if (a == 2)
	    return 0;
	while(a>b)
	{
		if ((a%b) == 0)
		{
			num++;
		}
		
		
		if (b == 2)
		    b = b+1;
		else
		    b = b +2;
	}
	return num;
}
int main()
{
	unsigned long long a=0;
	while(cin >> a)
	{
		unsigned long long b=a,c=0,total=0,s1=0,s2=0;
		s1 = s(a);
		while(b!=0)
		{   
		    c = b%10;
			b = b/10;
			total = total + c;
		    total = total*10;
		}
		s2 = s(total/10);
		if (s1 == 0 && s2 == 0 && a!= (total/10))
		{
			cout << a << " is emirp."<<endl;
		}
		else if (s1 == 0 && s2 != 0 )
		{
			cout << a << " is prime."<<endl;
		}
		else if (s1 == 0 && s2 == 0)
		{
			cout << a << " is prime."<<endl;
		}
		else
		{
			cout << a << " is not prime."<<endl;
		}
	}
}
