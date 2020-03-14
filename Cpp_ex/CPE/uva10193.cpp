/*
    ----------- 2020/03/14 ----------------
    1. wrong answer
    2. 此題不能用 atol()強制轉換 
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int gcd(int a,int b)
{
	int s;
	while(b!=0)
	{
		s =a%b;
		a=b;
		b=s;
	}
	return a;
}


int main()
{
	int a=0,b=0;
	scanf("%d\n",&a);
	for (int i=1;i<=a;i++)
	{
		string c="",d="";
		unsigned long long f=0,e=0,g=1,h=1,Dec1=0,Dec2=0,n=0,m=0;
		getline(cin,c);
		getline(cin,d);
		// f = atol(c.c_str());
		// e = atol(d.c_str());
		for (int j =(c.length()-1) ;j>=0;j--)
        {
        	if (c[j] == '1')
        	{
        		Dec1 +=g;
			}
            g= g*2;
        }
        for (int k =(d.length()-1) ;k>=0;k--)
        {
            if (d[k] == '1')
        	{
        		Dec2 +=h;
			}
            h= h*2;
        }
        // cout << Dec1 << "  " << Dec2 <<endl;
        if (Dec2>Dec1)
        {
        	m = Dec2;
        	Dec2 = Dec1;
        	Dec1 = m;
		}
        n = gcd(Dec1,Dec2);
        //cout << n << endl;
        if (n!=1)
            cout << "Pair #" << i << ": All you need is love!" <<endl;
        else
            cout << "Pair #" << i << ": Love is not all you need!" <<endl;
	}
 } 
