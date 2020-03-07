#include <iostream>
#include <cstdlib>
#include <cmath> 
#include <vector>
using namespace std;
int max1(int a,int b,int c)
{
	int z;
	z = max(a,b);
	z = max(z,c);
	return z;
}
int main()
{
    int x[5][5] = {{5,-1,-2,-1,-3},
	               {-1,5,-3,-2,-4},
				   {-2,-3,5,-2,-2},
	               {-1,-2,-2,5,-1},
	               {-3,-4,-2,-1,-5}},n,q1=0,q2=0,sum=0,index_a=0,index_b=0,count=0;
    int m1,m2;
	char character;
	cin >> q1;             
	vector<int> a;
	for (int i=0;i<q1;i++)
	{
		cin >> character;
		if (character == 'A')
		{
		    a.push_back(0);
		}
		else if (character == 'C')
		{
		    a.push_back(1);
		}
		else if (character == 'G')
		{
		    a.push_back(2);
		}
		else if (character == 'T')
		{
		    a.push_back(3);
		}
	}
	cin >> q2;
	vector<int> b;
	for (int j=0;j<q2;j++)
	{
		cin >> character;
		if (character == 'A')
		{
		    b.push_back(0);
		}
		else if (character == 'C')
		{
		    b.push_back(1);
		}
		else if (character == 'G')
		{
		    b.push_back(2);
		}
		else if (character == 'T')
		{
			b.push_back(3);
		}
	}
	if (q1>=q2)
	{
		m1 = q1-q2;
		for (int i=0;i<m1;i++)
		{
			b.push_back(4);
		}
		for (int j=0;j<m2;j++)
		{
			a.push_back(4);
		}
		for (int i=0;i<q1;i++)
	    {
		    cout << a[i] << " ";
	    }
	    cout << endl;
	    for (int j=0;j<q1;j++)
	    {
		    cout << b[j] << " ";
	    }
	    cout << endl;
	}
	else
	{
		m2 = q2-q1;
		for (int j=0;j<m2;j++)
		{
		    a.push_back(4);
		}
		for (int i=0;i<q2;i++)
	    {
		    cout << a[i] << " ";
	    }
	    cout << endl;
	    for (int j=0;j<q2;j++)
	    {
		    cout << b[j] << " ";
	    }
	    cout << endl;
	}
}
