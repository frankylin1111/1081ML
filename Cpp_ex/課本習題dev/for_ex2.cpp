#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	for (int i=1;i<8;i++)
	{
		for (int j=1;j<4-abs(4-i);j++)
		{
			cout <<' ';
		}
		for (int k=0;k<2*(abs(4-i)+1);k++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
} 
