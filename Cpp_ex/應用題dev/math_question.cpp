/*
    math question
    abc = a!+b!+c!
*/ 
#include <iostream>
#include <cstdlib>
using namespace std;

int fl(int x)
{
	int count=1;
	for (int i=x;i>0;i--)
	{
		count  = i*count;
	}
	return count;
}

int main()
{
	int q1,q2,q3,k;
	for (int j=100;j<1000;j++)
	{
		k=j;
		q1 = k/100;
		k=k%100;
		q2 = k/10;
		k=k%10;
		q3=k;
		if ((fl(q1)+fl(q2)+fl(q3)) == j) 
		{
			cout << j <<endl;
		}
	}
}
