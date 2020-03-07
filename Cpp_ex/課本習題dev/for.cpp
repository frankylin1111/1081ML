#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
	for (int i=1;i<6;i++)
	{
		for (int j=1;j<=3-abs(3-i);j++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
} 
